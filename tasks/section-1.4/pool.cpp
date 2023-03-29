#include <iostream>

using namespace std;

int main() {
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  if (n > m) {
    n += m;
    m = n - m;
    n -= m;
  }
  if (2 * x > n) {
    x = n - x;
  }
  if (2 * y > m) {
    y = m - y;
  }
  if (x < y) {
    cout << x;
  } else {
    cout << y;
  }
  return 0;
}