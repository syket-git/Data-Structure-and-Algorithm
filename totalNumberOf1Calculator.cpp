#include<iostream> 
#include<math.h>
using namespace std; 


int binaryCalculator(int n){
  int res = 0, i=0;
    while(n !=0){
    int bit = n&1;
    if(bit){
      res = bit * pow(10, i) + res;
    }
    n = n>> 1; 
    i++;
  }
return res;
}


int findingOne(int b){
  int res = 0;
  while(b!=0){
    int bit = b % 10;
    if(bit == 1){
      res += 1;
    }
    b = b / 10;
  }
  return res;
  
}


int main(){
  int a;
  cout << "Enter the value of a: " << endl;
  cin >> a; 

  int b; 
  cout << "Enter the value of b: " << endl;
  cin >> b; 

  int b1 = (binaryCalculator(a));
  int b2 = (binaryCalculator(b));

  int res1 = findingOne(b1);
  int res2 = findingOne(b2);

  int finalSum = res1 + res2; 

  cout << b1 << ", " << b2 << endl;
  cout << "Final sum is: " << finalSum << endl;
  
}
