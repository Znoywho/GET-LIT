#include "testcase.h"

TestCase::TestCase(){
  this->value.resize(10000);
  auto f = []() -> int { return rand() % 10000; };
  generate(this->value.begin(),this->value.end(),f);  
}


TestCase :: TestCase(int n){
  this->value.resize(n);
  auto f = []() -> int { return rand() % 10000; };
  generate(this->value.begin(),this->value.end(),f);  

}
