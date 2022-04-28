#include <iostream>

using namespace std;

int main() {
  int num, lastDigit;
  int sum = 0;
  cin >> num;
  while (num > 0) {
    lastDigit = num % 10;
    sum += lastDigit;
    num /= 10;
  }
  cout << sum << endl;
}