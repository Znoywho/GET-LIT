#include "solution.h"

int Solution :: climbStairs(int n){
  if(n==2) return 2;
  else if (n==1) return 1;
  else if (n > 2) return this->climbStairs(n-1) + this->climbStairs(n-2); 
  else return 0;
}

int Solution :: climbStairs2(int n){
  return ((2/sqrt(5))*pow((1+sqrt(5))/2,n)-(2/sqrt(5))*pow((1-sqrt(5))/2,n)); 
}

int Solution :: climbStairs3(int n){
  if(n<= 3) return n;
  int temp1 = 3;
  int temp2 = 2;
  int sum = 0;
  for(int i  = 3;i < n;i++){
    sum = temp1 + temp2;
    temp2 = temp1;
    temp1 = sum; 
  }
  return sum;
}

