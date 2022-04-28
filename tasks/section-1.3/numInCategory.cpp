#include <iostream>

using namespace std;

int main() {
  int num, rate;
  cin >> num;
  num /= 10;
  num %= 10;
  cout << num;
}