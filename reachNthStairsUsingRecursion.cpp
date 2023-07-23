#include <iostream>
using namespace std;

void forReach(int src, int dest) {

  cout << "Source" << src << endl;

  if (src == dest) {
    cout << "Hurray We reached home" << endl;
    return;
  }

  src++;
  forReach(src, dest);
}

int main() {

  int dest = 10;

  int src = 1;

  forReach(src, dest);
}
