#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b) {
    a += b;
    b = a - b;
    a += -b;
  }
  if (a > c) {
    a += c;
    c = a - c;
    a += -c;
  }
  if (b > c) {
    b += c;
    c = b - c;
    b += -c;
  }
  cout << a << " " << b << " " << c;
}