string reverseWord(string str){
    
  if(str.size() == 0 || str.size() ==1){
      return str;
  }
  
  return reverseWord(str.substr(1)) + str[0];
}
