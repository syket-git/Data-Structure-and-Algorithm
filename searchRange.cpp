class Solution {
  public:

    int firstOccu(vector < int > & nums, int size, int target) {

      int start = 0;
      int end = size - 1;
      int mid = start + (end - start) / 2;
      int ans = -1;

      while (start <= end) {

        if (nums[mid] == target) {
          
          ans = mid;
          end = mid - 1;
        }

        if (target > nums[mid]) {
          start = mid + 1;
        } else {
          end = mid - 1;
        }
        mid = start + (end - start) / 2;

      }

      return ans;
    }

  int lastOccu(vector < int > & nums, int size, int target) {

      if(size == 2 && target == nums[1]){
          return 1;
      }

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end) {

      if (nums[mid] == target) {
        ans = mid;
        start = mid + 1;
      }

      else if (target > nums[mid]) {
        start = mid + 1;
      } else if(target < nums[mid]) {
        end = mid - 1;
      }
      mid = start + (end - start) / 2;

    }
    return ans;
  }

  vector < int > searchRange(vector < int > & nums, int target) {

    
    vector<int>newArr;
    int first = firstOccu(nums, nums.size(), target);
    int second = lastOccu(nums, nums.size(), target);
    newArr.push_back(first);
    newArr.push_back(second);
    return newArr;
    

  }
};
