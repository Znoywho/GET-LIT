#include "solution.h"

string addBinary(string a, string b) {
  if(a.length() < b.length()) swap(a,b);
  int s1 = a.length();
  int s2 = b.length();
  int sum = 0;
  string result = "";
  for(int i = 0 ; i < s1 ; i++){
      sum += (a[s1 - i - 1]-'0')*pow(2,i);
      if (i < s2) sum += (b[s2 - i - 1]-'0')*pow(2,i);
      result = char(sum%2 + '0') + result;
      sum/=2;


  }
  reverse(begin(result),end(result)); 
  return result;
}
