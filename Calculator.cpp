#include <iostream>
using namespace std;

int main() {

  int a, b;
  char op;
  cout << "Enter the value of a: " << endl;
  cin >> a;

  cout << "Enter the value of b: " << endl;
  cin >> b;

  cout << "Enter the valid operation: " << endl;
  cin >> op;

  switch (op) {

  case '+':
    cout << (a + b) << endl;
    break;
  case '-':
    cout << (a - b) << endl;
    break;
  case '*':
    cout << (a * b) << endl;
    break;
  case '/':
    cout << (a / b) << endl;
    break;

  case '%':
    cout << (a % b) << endl;
    break;
  default:
    cout << "Pleas enter the valid operation" << endl;
  }
}
