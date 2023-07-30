
const merge = (arr, l, r, m) => {

    // Creating the length of the two arrays
    let len1 = m - l + 1;
    let len2 = r - m;

    // Creating two new array
    let arr1 = new Array(len1);
    let arr2 = new Array(len2);

    // Copying element to the array
    let k = l;
    for (let i = 0; i < len1; i++) {
        arr1[i] = arr[k++]
    }

    // 2nd array
    let o = m + 1;

    for (let i = 0; i < len2; i++) {
        arr2[i] = arr[o++]
    }



    // Merging two arrays

    let idx1 = 0;
    let idx2 = 0;
    let t = l;

    while (idx1 < len1 && idx2 < len2) {

        if (arr1[idx1] <= arr2[idx2]) {
            arr[t] = arr1[idx1];
            idx1++;
        } else {
            arr[t] = arr2[idx2];
            idx2++
        }
        t++;
    }

    // Adding remaining element from array 1
    while (idx1 < len1) {
        arr[t] = arr1[idx1];
        t++;
        idx1++;
    }

    // Adding remaining element from array 2
    while (idx2 < len2) {
        arr[t] = arr2[idx2];
        t++;
        idx2++
    }



}

const mergeSort = (arr, l, r) => {


    // Base case

    if (l >= r) {
        return;
    }

    let mid = Math.floor((l + r) / 2);

    mergeSort(arr, l, mid);

    mergeSort(arr, mid + 1, r);

    merge(arr, l, r, mid)

    return arr;

}

console.log(mergeSort([12, 11, 13, 5, 6, 7], 0, 5));
