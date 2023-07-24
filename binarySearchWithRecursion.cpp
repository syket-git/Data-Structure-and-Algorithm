#include<iostream> 
using namespace std; 


bool binarySearch(int arr[], int start, int end, int target){

  // not found case and base case
  if(start > end){
    return false;
  }

  int mid = (start+ end) / 2; 

  // found case
  if(arr[mid] == target){
    return true;
  }

  if(arr[mid] > target){
   return binarySearch(arr, start, mid - 1, target);
  }else{
   return binarySearch(arr, mid + 1, end, target);
  }

  
  
}


int main(){

  int arr[5] = { 2, 5, 9, 13, 15 };
  int size = 5; 
  int target = 9; 


  bool ans = binarySearch(arr, 0, size -1, target);
  
  
  if(ans){ 
    cout << "Present" << endl;
  }else{
    cout << "Absent" << endl;
  }
  
  
}
