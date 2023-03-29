#include <iostream>

using namespace std;

int main() {

  int a, a1, a2, a3, a4, result;
  cin >> a;
  a1 = a % 10;
  a /= 10;
  a2 = a % 10;
  a /= 10;
  a3 = a % 10;
  a /= 10;
  a4 = a;

  result = (a4 - a1) + (a3 - a2) + 1;
  cout << result;
  return 0;
}