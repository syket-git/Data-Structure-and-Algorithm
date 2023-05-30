#include <iostream>
using namespace std;

void printArr(int nums[], int size) {
  for (int i = 0; i < size; i++) {
    cout << nums[i] << " ";
  }
}

void swapAlternate(int nums[], int size) {
  for (int i = 0; i < size; i += 2) {
    if (i + 1 < size) {
      swap(nums[i], nums[i + 1]);
    }
  }
}

int main() {

  int arr[5] = {10, 23, 67, 44, 2};
  int arr1[8] = {5, 3, 7, 44, 2, 32, 56, 88};

  cout << endl;

  swapAlternate(arr, 5);
  printArr(arr, 5);

  cout << endl;

  swapAlternate(arr1, 8);
  printArr(arr1, 8);
}
