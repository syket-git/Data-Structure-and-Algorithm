#include <iostream>
using namespace std;

int main() {

  double f;
  cout << "Enter any Fahrenheit value: " << endl;
  cin >> f;

  double celsius;
  celsius = (f - 32) * 5 / 9;

  cout << "The value of celsius is: " << celsius << "C" << endl;
}
