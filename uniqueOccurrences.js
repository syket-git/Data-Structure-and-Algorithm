/**
 * @param {number[]} arr
 * @return {boolean}
 */
var uniqueOccurrences = function(arr) {
    const hasMap = new Map();
    let values = []
    for(let i = 0; i < arr.length; i++){
       if(hasMap.has(arr[i])){
           const value = hasMap.get(arr[i]);
            hasMap.set(arr[i], value + 1);
       }else{
           hasMap.set(arr[i], 1);
       }
    }

    let set = new Set()
    let count = true;
    hasMap.forEach((value)=>{
        if(set.has(value)){
            count = false
            return
        }else{
            set.add(value)
        }
    })
    return count
};
