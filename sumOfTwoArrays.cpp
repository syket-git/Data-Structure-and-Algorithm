#include <bits/stdc++.h>
vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m) {

  int i = n - 1;
  int j = m - 1;
  int carry = 0;
  vector<int> answer;

  // Nomral Case
  while (i >= 0 && j >= 0) {

    int val1 = a[i];
    int val2 = b[j];
    int sum = val1 + val2 + carry;

    carry = sum / 10;
    sum = sum % 10;

    answer.push_back(sum);
    i--;
    j--;
  }

  // If the First array is larger than second array

  while (i >= 0) {
    int sum = a[i] + carry;
    carry = sum / 10;
    sum = sum % 10;
    answer.push_back(sum);
    i--;
  }

  // If the Second array is larger than First array

  while (j >= 0) {
    int sum = b[j] + carry;
    carry = sum / 10;
    sum = sum % 10;
    answer.push_back(sum);
    j--;
  }

  // If Carray is not equal to 0

  while(carry !=0){
	  int sum = carry;
	  carry = sum/10; 
	  sum = sum % 10; 
	  answer.push_back(sum);
  }

  reverse(answer.begin(), answer.end());

  return answer;


}
