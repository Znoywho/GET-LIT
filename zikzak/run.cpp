
#include "zikzak.h"
#include "test.h"
using namespace std;


int main(){
  string input = "PAYPALISHIRING";
  string expectedOutput = "PAHNAPLSIIGYIR";
  string output = convert(input,3);
  testInput(output,expectedOutput);  
  return 0;
}

