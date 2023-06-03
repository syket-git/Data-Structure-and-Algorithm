
bool isPossible(vector<int>&boards, int n, int m, int mid){

    int painterCount = 1;
    int paintSum = 0; 

    for(int i =0; i<n; i++){

        if(paintSum + boards[i] <= mid){
            paintSum += boards[i];
        }else {
            painterCount++;
            if(painterCount > m || boards[i] > mid ){
                return false; 
            }
            paintSum = boards[i];
        }

    }

    return true;

}


int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.

    int start = 0;
    int sum = 0;
    for(int i =0; i<boards.size(); i++){
        sum+=boards[i];
    } 
    int end = sum;

    int mid = start + (end - start )/2; 
    int ans = -1; 

    while(start<=end){
        if(isPossible(boards, boards.size(), k, mid)){
            ans = mid; 
            end = mid - 1;
        }else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;

    

}
