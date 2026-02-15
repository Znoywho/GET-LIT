#include "zikzak.h"

string convert(string s, int nr) {
  string output = "";
  char letters[100][100] = {'\0'};
  int countRow = 0;
  int count = 1;
  int DirectRow = 0;
  int DirectCol = 0;
  for(int i = 0;i < s.length();){
    if(countRow < nr){
      // Solid column
      letters[DirectRow][DirectCol] = s[i];
      countRow++;
      DirectRow++;
      i++;

    }else {
      // ZIGZAG LINE
      DirectCol++;
      if(count <= nr - 2){
        count++;
        letters[DirectRow-count][DirectCol] = s[i];
        i++;

      }else {
        DirectRow = 0;
        countRow = 0;
        count = 1;
      }
    }
  }
  
  for(int i = 0;i <10;i++){
    for(int j = 0;j <10;j++){
      cout << letters[i][j] << " ";
    }
    cout << '\n';
  }

  for(int j = 0;j < nr ;j++){
    for(int i = 0;i < DirectCol+1;i++){
      if(letters[j][i] != '\0')
      output+=letters[j][i];
    }
  }
  return output;
}
