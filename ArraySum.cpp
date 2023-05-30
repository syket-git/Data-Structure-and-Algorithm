#include <iostream>
using namespace std;

int printArraySum(int nums[], int n) {

  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += nums[i];
  }

  return sum;
}

int main() {

  int size;
  int numbers[100];
  cout << "Please enter the size of the array: " << endl;

  cin >> size;

  for (int i = 0; i < size; i++) {
    cout << "Enter the element of " << i + 1 << "th index: ";
    cin >> numbers[i];
  }

  int sum = printArraySum(numbers, size);

  cout << "The sum of the array is: " << sum << endl;
}
