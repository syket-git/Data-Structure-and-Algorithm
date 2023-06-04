#include <bits/stdc++.h>
void bubbleSort(vector<int> &arr, int n) {
  bool isSwapped = false;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      if (arr[j] > arr[j + 1]) {
        isSwapped = true;
        swap(arr[j], arr[j + 1]);
      }
    }
    if (isSwapped == false) {
      break;
    }
  }
}
