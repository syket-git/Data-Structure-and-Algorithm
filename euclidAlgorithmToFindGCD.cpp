#include<bits/stdc++.h>
using namespace std; 


int euclidAlgorithm(int a, int b){

  if(a==0){
    return b;
  }
  if(b == 0){
    return a;
  }

  while(a !=b){
      if(a > b){
    a = a- b; 
  }
  if( b > a){
    b = b -a;
  }
  }

  return a;
  
}

int main(){

  cout << "Enter two numbers to get the GCD: "; 

  int a, b; 
  cin >> a; 
  cin >> b; 

  int res = euclidAlgorithm(a, b);
  cout << "GCD: " << res << endl;
  
}
