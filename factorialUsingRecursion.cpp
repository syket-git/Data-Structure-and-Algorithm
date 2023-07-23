#include <iostream>
using namespace std;

#define PI 3.1416


int factorial (int n){

if(n == 0){
  return 1;
}

  int small = factorial(n - 1);
  int big = n * small;

  return big;
  
  
}


int main() {

  int n;
  cout << "Give me a number want to find factorial: ";
  cin >> n; 

  int factAns = factorial(n);

  cout << "Factorial is: " << factAns; 

  
  
 
  
}
