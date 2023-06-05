#include <iostream>
#include <vector>
using namespace std;

char toLowerCase(char c){
  if(c >= 'a' && c <= 'z'){
    return c;
  }else {
    return c - 'A' + 'a';
  }
}

int getLength(char a[]) {
  int count = 0;
  for (int i = 0; a[i] != '\0'; i++) {
    count++;
  }
  return count;
}

void reverseString(char name[], int len) {
  int start = 0;
  int end = len - 1;

  while (start <= end) {
    swap(name[start++], name[end--]);
  }
}

bool checkPalindromes(char name[], int len) {

  int start = 0;
  int end = len - 1;

  while (start <= end) {

    if ( toLowerCase(name[start]) != toLowerCase(name[end])) {
      return false;
    } else {
      start++;
      end--;
    }
  }
  return true;
}

int main() {

  char name[20];

  cout << "Enter your name: ";
  cin >> name;

  int len = getLength(name);
  reverseString(name, len);

  cout << "Your reverse name is: " << name << endl;
  cout << "Palindrome: " << checkPalindromes(name, len) << endl;
}
