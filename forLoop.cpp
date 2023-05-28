// FOR LOOP

#include <iostream>
using namespace std;

int main() {

  int n = 10;
  int i = 1;
  for (;;) {

    if (i <= n) {
      cout << i << endl;

    } else {
      break;
    }
    i++;
  }
}

// FIBONACCI SERIES

// #include <iostream>
// using namespace std;

// int main() {

//   int n = 10;

//   int first = 0;
//   int next = 1;

//   cout << first << endl << next << endl;
//   for (int i = 1; i <= n; i++) {

//     int sum = first + next;
//     cout << sum << endl;
//     first = next;
//     next = sum;
//   }
// }

// PRIME NUMBER

// #include <iostream>

// using namespace std;

// int main() {

//   int n;
//   cin >> n;
//   int isBoolean = 1;

//   if (n == 1) {
//     cout << "1 is not prime number";
//     isBoolean = 0;
//   }

//   for (int i = 2; i < n; i++) {

//     if (n % i == 0) {
//       cout << "This number is not prime Number";
//       isBoolean = 0;
//       break;
//     }
//   }

//   if (isBoolean == 1) {
//     cout << "The number is a prime number";
//   }
// }
