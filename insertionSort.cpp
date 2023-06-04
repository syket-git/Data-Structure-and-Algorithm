#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){


    // for(int i = 0; i < n; i++){
    //     int temp = arr[i];
    //     int j = i - 1;
    //     for(; j >=0; j--){

    //         if(arr[j] > temp){
    //             arr[j+1] = arr[j];
    //         }else{
    //             break;
    //         }

    //     }
    //     arr[j + 1] = temp;


    // }

    // OPTIMAL SOLUTION


    for(int i = 0; i < n; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}
