#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

  int start = 0;
  int end = size - 1;
  int mid = start + (end - start)/2;

  while (start <= end) {

    if (arr[mid] == key) {
      return mid;
    }
    if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = start + (end - start)/2;
  }

  return -1;
}

int main() {
  int arr[6] = {1, 3, 4, 5, 6, 9};
  int index = binarySearch(arr, 6, 4);
  cout << "Index is: " << index << endl;
}
