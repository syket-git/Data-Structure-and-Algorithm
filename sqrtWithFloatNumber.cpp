#include <iostream>
using namespace std;
int sqrtInteger(int x) {
  int s = 0;
  int e = x;
  long long int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e) {
    long long int sqrt = mid * mid;
    if (sqrt == x) {
      return mid;
    } else if (sqrt < x) {
      ans = mid;
      s = mid + 1;
    } else {

      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

double findFloatingNumber(int n, int precession, int tempSolution) {

double factor = 1; 
double ans = tempSolution; 

  for(int i = 0; i <precession; i++){
    factor = factor / 10; 
    for(double j = ans; j*j < n; j = j + factor){
      ans = j;
    }
    
  }
  return ans;
}

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;

  int tempSolution = sqrtInteger(n);

  double answer = findFloatingNumber(n, 3, tempSolution);
  
  
  cout << "Answer is: " << answer;
}
