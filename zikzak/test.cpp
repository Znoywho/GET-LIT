#include "test.h" 

void testInput(string input,string expectedOutput){
  cout << "RIGHT ANSWER: " << expectedOutput << '\n';
  if (input == expectedOutput){
    cout << "CORRECT ANSWER!" << '\n';
  }
  else{
    cout << "WRONG!!!" << '\n';
  }
  cout << "OUTPUT: " << input;

}
