class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> newArr; 
        int count = 1; 

            if(nums.size()==0){
                return newArr;
            }

        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){

            if(i+1 >= nums.size()) break;

            if(nums[i] == nums[i+1]){

                count++; 
                if(count == 2){
                    newArr.push_back(nums[i]);
                    count = 1;
                }

            }else{
                count = 1;
            }



        }
        sort(newArr.begin(), newArr.end());
        return newArr;

        

        
    }
};
