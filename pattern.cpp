#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int row = 1;

  while (row <= n) {

    int j = 1;

    // 1st triangles
    while (j <= (n - row) + 1) {
      cout << j << " ";
      j++;
    }

    // print star

    int k = (row - 1) * 2;
    while (k > 0) {
      cout << " *";
      k--;
    }

    int l = n - row + 1;
    while (l > 0) {

      cout << " " << l;
      l--;
    }

    row++;
    cout << endl;

  }

}




// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   int i = 1;

//   while (i <= n) {\
//     int j = 1;
//     while (j <= n) {
//       cout << " " << j << "";
//       j++;
//     }
//     cout << endl;
//     cout << endl;
//     i++;
//   }
// }



// #include<iostream>
// using namespace std; 

// int main1(){

//   int n; 
//   cin >> n; 

//   int i= 1; 
//   int count = 1;

//   while(i <=n){
//     int j = 1; 
//     while(j <= n){
//       cout << " "<< count;
//       count++;
//       j++;
//     }
//     cout << endl;
//     cout << endl;
//     i++;
//   }

// }

// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   int i = 1;
//   int count = 1;  
//   while (i <= n) {

//     int j = 1;
//     while (j <= i) {
//       cout << " " << count;
//       count++;
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }

// #include<iostream>
// using namespace std;

// int main(){

//   int n; 
//   cin >> n; 

//   int i = 1; 

//   while(i <= n){

//     int j = 1; 
//     while(j <= i){
//     cout <<" "<< i + j - 1;

//       j++;

//     }

//     cout <<endl;
//     i++;

//   }

// }

// #include<iostream>
// using namespace std;

// int main(){

//   int n; 
//   cin >> n; 

//   int i = 1; 

//   while(i <= n){

//     int j = 1; 
//     while(j <= i){
//     cout <<" "<<  i - j + 1;

//       j++;

//     }

//     cout <<endl;
//     i++;

//   }

// }

// #include<iostream> 
// using namespace std;

// int main(){

//   int n; 
//   cin>>n; 

//   int row = 1; 
//   while(row <=n){
//     int j = 1; 
//   int count = row;
//       char ch = 'A' + n - row;
//     while(j <= row){

//       // int ch = count + 1;

//       cout <<" "<<ch++;
//       count++;
//     j++;

//     }
//     cout <<endl;
//     row++;
//   }

// }

// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   int row = 1;

//   while (row <= n) {

//     // print space
//     int space = n - row;
//     while (space) {
//       cout << " ";
//       space--;
//     }
//     int col = 1;
//     // print *
//     while (col <= row) {
//       cout << "*";
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   int row = n;

//   while (row >= 0) {

//      // print space
//     int space = n - row;
//     while (space) {
//       cout << " ";
//       space--;
//     }

//     int col = 1;
//     // print *
//     while (col <= row) {
//       cout << "*";
//       col++;
//     }

//     cout << endl;
//     row--;
//   }
// }

// #include<iostream> 
// using namespace std; 

// int main(){

//   int n; 
//   cin >> n; 

//   int row = n;

//   while(row >=0 ){

//     // Print space 

//     int space = n - row;
//     while(space){
//       cout << " ";
//       space--;
//     }

//     // Print number
//     int col = 1; 
//     while(col <=row){
//       cout << n - row + 1;
//       col++;
//     }
//     row--;
//     cout <<endl;

//   }

// }

// #include <iostream>
// using namespace std;

// int main() {

//   int n;

//   cin >> n;

//   int row = 1;

//   while (row <= n) {

//     int space = n - row;

//     while(space){
//       cout <<" ";
//       space--;
//     }

//     int col = 1;

//     while (col <= row) {
//       cout << row;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   int row = n;

//   while (row >= 0) {

//     int space = n - row;
//     while (space) {

//       cout << " ";
//       space--;
//     }

//     int col = 1;

//     while (col <= row) {

//       cout << "*";
//       col++;
//     }
//     cout << endl;
//     row--;
//   }
// }

// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   int row = n;

//   while (row >= 0) {

//     int space = n - row;
//     while (space) {

//       cout << " ";
//       space--;
//     }

//     int col = 1;

//     while (col <= row) {

//       cout << (n - row + 1) + col - 1;
//       col++;
//     }
//     cout << endl;
//     row--;
//   }
// }

// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   int row = 1;
//   int count = 1;
//   while (row <= n) {

//     int space = n - row;
//     while (space) {
//       cout << " ";
//       space--;
//     }

//     int col = 1;

//     while (col <= row) {
//       cout << count;
//       count++;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   int row = 1;

//   while (row <= n) {

//     // Print space

//     int space = n - row;

//     while (space) {
//       cout << " ";
//       space--;
//     }

//     int col = 1;

//     // Print the 1st trianlge
//     while (col <= row) {
//       cout << col;
//       col++;
//     }
//     int col2 = 2;

//     // Print the 3rd triangle
//     while (col2 <= row) {
//       cout << row - col2 + 1;
//       col2++;
//     }

//     cout << endl;
//     row++;
//   }
// }
