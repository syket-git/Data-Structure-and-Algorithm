#include <iostream>
using namespace std;

void findDuplicateItem(int numbers[], int size) {

  int start = 0;
  for (int i = 0; i < size; i++) {

    for (int j = i + 1; j < size; j++) {
      // cout << numbers[i] << ", " << numbers[j];

      if (numbers[i] == numbers[j]) {

        cout << numbers[i] << " is dublicate item." << endl;
      }
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

  findDuplicateItem(numbers, size);
}
