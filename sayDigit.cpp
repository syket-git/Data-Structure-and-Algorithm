#include <iostream>
using namespace std;

void countStairs(int n, string arr[]) {

  if (n == 0)
    return;

  int digit = n % 10;

  n = n / 10;

  countStairs(n, arr);

  cout << arr[digit] << " ";
}

int main() {

  string arr[10] = {"zero", "one", "two",   "three", "four",
                    "five", "six", "seven", "eight", "nine"};

  int n;
  cout << "Enter the staires no: ";
  cin >> n;

  countStairs(n, arr);
}
