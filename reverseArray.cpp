#include <iostream>
using namespace std;

void reverseArray(int nums[], int n) {
  int start = 0;
  int end = n - 1;

  while (start <= end) {
    swap(nums[start], nums[end]);
    start++;
    end--;
  }

  // Print the reversed array
  for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
  }
}

int main() {

  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  int numbers[100];
  for (int i = 0; i < size; i++) {
    cout << "Enter the element for" << i << "the index: ";
    cin >> numbers[i];
  }

  // Reverse the array and show to the user:
  reverseArray(numbers, size);
}
