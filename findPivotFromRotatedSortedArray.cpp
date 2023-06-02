class Solution {
public:

    int getPivot(vector<int>&nums, int size){

        int s = 0; 
        int e = size -1; 
        int mid = s + (e - s)/2;

        while(s < e){

            if(nums[mid] >= nums[0]){
                s = mid + 1;
            }else {
                e = mid;
            }

            mid = s + (e - s)/2;

        }
            return s;
    }

    int findTarget(vector<int>&nums, int s, int e, int target,  int size){
        int mid = s + (e - s)/2;


        while(s <= e){
            if(target == nums[mid]){
                return mid; 
                
            }else if(target > nums[mid]){
                s = mid + 1;
            }else if(target < nums[mid]){
                e = mid - 1;
            }

            mid = s + (e - s) / 2; 
        }
        return -1;
    }


    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums, nums.size());
        // cout << "pivot" << pivot << endl;
        if( target >= nums[pivot] &&  target <= nums[nums.size() - 1]){
            int findInd = findTarget(nums, pivot, nums.size() - 1, target, nums.size());
            return findInd;
        }else{
            int findInd = findTarget(nums, 0, pivot - 1, target, nums.size());
            return findInd;
        }

    }
};
