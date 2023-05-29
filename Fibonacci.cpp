// FIBONACCI SERIES

#include <iostream>
using namespace std;

int main() {

  int n = 10;

  int first = 0;
  int next = 1;

  cout << first << endl << next << endl;
  for (int i = 1; i <= n; i++) {

    int sum = first + next;
    cout << sum << endl;
    first = next;
    next = sum;
  }
}
