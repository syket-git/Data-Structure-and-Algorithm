#include <iostream>
using namespace std;

int getMin(int nums[], int n) {

  int mini = INT8_MAX;

  for (int i = 0; i < n; i++) {

    mini = min(mini, nums[i]);
  }
  return mini;
}

int getMax(int nums[], int n) {
  int maxi = INT8_MIN;

  for (int i = 0; i < n; i++) {
    maxi = max(maxi, nums[i]);
  }
  return maxi;
}

int main() {

  int size;
  cout << "Enter the value of size: " << endl;
  cin >> size;

  int numbers[100];

  for (int i = 0; i < size; i++) {
    cin >> numbers[i];
  }

  int max = getMax(numbers, size);
  int min = getMin(numbers, size);

  cout << "Maximum value is: " << max << endl;
  cout << "Minimum value is: " << min << endl;
}
