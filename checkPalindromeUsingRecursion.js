const checkPaliendrome = (str, i , j) => {
	// Base Condition
  if(i > j){
  	return true;
  }
  
  // Check
  if(str[i] !== str[j]){
  	return false;
  }
  
 return checkPaliendrome(str, i+1, j-1);

}

const text = "12121";

const isPalindrome = checkPaliendrome(text, 0, text.length - 1);

if(isPalindrome){
	console.log("Its palindrome");
}else{
	console.log("Its not palindrome");
}
