#include <iostream>
using namespace std;

bool findItem(int arr[], int size, int key) {

  // base case
  if (size == 0) {
    return false;
  }

  if (arr[0] == key) {
    return true;
  } else {

    bool remainingPart = findItem(arr + 1, size - 1, key);
    return remainingPart;
  }
}

int main() {

  int arr[5] = {1, 3, 2, 4, 9};

  int size = 5;

  int key = 10;

  bool ans = findItem(arr, size, key);

  if (ans) {
    cout << "Present" << endl;
  } else {
    cout << "Absent" << endl;
  }
}
