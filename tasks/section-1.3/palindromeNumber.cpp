#include <iostream>

using namespace std;

int main() {
  int num, numCopy, rev = 0, digit;
  cin >> num;
  numCopy = num;
  while (num != 0) {
    digit = num % 10;
    rev = (rev * 10) + digit;
    num /= 10;
  }
  if (numCopy == rev) {
    cout << "1";
  } else {
    cout << "37";
  }
}
