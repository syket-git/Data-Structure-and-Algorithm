bool canPlaceCow(vector<int> &stalls, int size, int k, int mid) {

  int cowCount = 1;
  int cowPlace = stalls[0];

  for (int i = 1; i < size; i++) {

    if (stalls[i] - cowPlace >= mid) {
      cowCount++;
      if (cowCount == k) {
        return true;
      }
      cowPlace = stalls[i];
    }
  }

  return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
  sort(stalls.begin(), stalls.end());
  int start = 0;
  int maxi = -1; 
  for(int i =0; i <stalls.size(); i++){
      maxi = max(maxi, stalls[i]);
  }
  int end = maxi;


  int mid = start + (end - start) / 2;

  int ans = -1;

  while (start <= end) {

    if (canPlaceCow(stalls, stalls.size(), k, mid)) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = start + (end - start) / 2;
  }
  return ans;
}
