#include "test.h"


void testCase :: testOne(int n,int expectedOutput){
  Solution* test = new Solution;
  int result = test->climbStairs2(n);
  cout << "INPUT: " << n << endl;
  cout << "EXPECTED OUTPUT: " << expectedOutput << endl;
  cout << "YOUR OUTPUT: " << result << endl;
  cout << "RESULT: ";
  if(result == expectedOutput){
    cout << "TRUE" << endl;
  }
  else {
    cout << "FALSE" << endl;
  }
  delete test;
}


void testCase :: testTwo(){
  cout << "=============CASE 1=============" << endl;
  this->testOne(0,0);
  cout << "=============CASE 2=============" << endl;
  this->testOne(2,2);
}

