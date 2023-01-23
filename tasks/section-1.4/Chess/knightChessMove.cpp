#include <iostream>
using namespace std;

int main() {
  int x, y, x0, y0;

  cin >> x;
  cin >> y;
  cin >> x0;
  cin >> y0;
  if ((x - x0 == 1 || x - x0 == -1) && (y - y0 == -2 || y - y0 == 2)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
