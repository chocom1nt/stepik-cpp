#include <iostream>

using namespace std;

int main() {
  int x, y, x0, y0;
  cin >> x >> y >> x0 >> y0;
  if (x + y == x0 + y0 || x - y == x0 - y0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}