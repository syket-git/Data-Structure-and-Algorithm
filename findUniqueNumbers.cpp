#include <iostream>
using namespace std;

int findItem(int nums[], int size, int n) {

  int count = 0;

  for (int i = 0; i < size; i++) {

    if (nums[i] == n) {
      count++;
    }
  }

  if (count > 1) {
    return 0;
  } else {
    return 1;
  }
}

void findUniqueElement(int numbers[], int size) {

  int start = 0;

  int uniqueItem[size];

  for (int i = 0; i < size; i++) {

    bool isUnique = findItem(numbers, size, numbers[i]);

    if (isUnique) {

      cout << numbers[i] << " is a unique item." << endl;
    }
  }
}

int main() {

  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  int numbers[100];

  for (int i = 0; i < size; i++) {

    cout << "Enter the element of" << i << "th index: ";
    cin >> numbers[i];
  }

  findUniqueElement(numbers, size);
}
