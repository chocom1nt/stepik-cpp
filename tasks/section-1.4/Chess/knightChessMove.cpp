#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int x, y, x0, y0;

  cin >> x;
  cin >> y;
  cin >> x0;
  cin >> y0;
  if (abs(y0 - y) * abs(x0 - x) == 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
