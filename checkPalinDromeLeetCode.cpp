class Solution {
  public:

    bool valid(char c) {

      if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
      }
      return false;

    }

  char toLowerCase(char c) {

    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
      return c;
    } else {
      return c - 'A' + 'a';
    }

  }

  bool checkPalindrome(string s) {
    int len = s.length();

    int start = 0;
    int end = len - 1;
    while (start <= end) {
      if (s[start] != s[end]) {
        return false;
      } else {
        start++;
        end--;
      }
    }

    return true;

  }

  bool isPalindrome(string s) {
    int len = s.length();
    string temp = "";
    // Removing the unwanted characters
    for (int i = 0; i < len; i++) {
      if (valid(s[i])) {
        temp.push_back(s[i]);
      }
    }

    // Making the text lowercase

    for (int i = 0; i < temp.length(); i++) {
      temp[i] = toLowerCase(temp[i]);
    }

    // cout << temp << endl;

    // Checking the string is palindrome or not
    return checkPalindrome(temp);

  }
};
