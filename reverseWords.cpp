#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  std::vector<char> s = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ',
                         'i', 's', ' ', 'b', 'l', 'u', 'e'};

  reverse(s.begin(), s.end());

  int j = 0;
  int n = s.size();

  for (int i = 0; i < n; i++) {

    if (s[i] == ' ') {
      reverse(s.begin() + j, s.begin() + i);
      j = i + 1;
    }
  }

  reverse(s.begin() + j, s.begin() + n);

  for (char c : s) {
    cout << c << " ";
  }
}
