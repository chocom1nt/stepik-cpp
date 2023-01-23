#include <iostream>

using namespace std;

int main() {
  int x0, y0, x, y;
  cin >> x0;
  cin >> y0;
  cin >> x;
  cin >> y;
  if ((-1 <= (x0 - x) and (x0 - x) <= 1) and
      (-1 <= (y0 - y) and (y0 - y) <= 1)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
