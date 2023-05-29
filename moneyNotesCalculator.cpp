#include <iostream>
using namespace std;

int main() {

  int tk, notesOf100 = 0, notesOf50 = 0, notesOf20 = 0, notesOf1 = 0;
  cout << "Enter the amount of money: " << endl;
  cin >> tk;

  while (tk >= 1) {

    if (tk >= 100) {
      int notes = tk / 100;
      notesOf100 = notes;
      int currentMoney = tk - (notesOf100 * 100);
      tk = currentMoney;
    }

    else if (tk >= 50) {
      int notes = tk / 50;
      notesOf50 = notes;
      int currentMoney = tk - (notesOf50 * 50);
      tk = currentMoney;
    }

    else if (tk >= 20) {
      int notes = tk / 20;
      notesOf20 = notes;
      int currentMoney = tk - (notesOf20 * 20);
      tk = currentMoney;
    }

    else if (tk >= 1) {

      int notes = tk / 1;
      notesOf1 = notes;
      int currentMoney = tk - (notesOf1 * 1);
      tk = currentMoney;
    }
  }

  notesOf100 > 0 && cout << "Notes of 100: " << notesOf100 << endl;
  notesOf50 > 0 && cout << "Notes of 50: " << notesOf50 << endl;
  notesOf20 > 0 && cout << "Notes of 20: " << notesOf20 << endl;
  notesOf1 >> 0 && cout << "Notes of 1: " << notesOf1 << endl;
}
