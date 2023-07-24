#include <iostream>
using namespace std;

bool isSorted(int *arr, int size) {
  // Checking base case

  if (size == 0 || size == 1) {
    return true;
  }

  if (arr[0] > arr[1]) {
    return false;
  } else {
    bool result = isSorted(arr + 1, size - 1);
    return result;
  }
}

int main() {

  int arr[5] = {1, 10, 4, 5, 6};
  int n = 5;

  bool ans = isSorted(arr, n);

  if (ans) {
    cout << "Array is sorted" << endl;
  } else {
    cout << "Array is not sorted" << endl;
  }
}
