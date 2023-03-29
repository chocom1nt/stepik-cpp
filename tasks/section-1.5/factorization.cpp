#include <iostream>

using namespace std;

int main() {
  int n, d = 2;
  cin >> n;
  while (n % d != 0) {
    d++;
  }
  if (n % d == 0) {
    cout << d << endl;
  }
}