#include <iostream>
using namespace std;
int main() {
  int x, y, x0, y0;
  cin >> x;
  cin >> y;
  cin >> x0;
  cin >> y0;
  if (x == x0 || y == y0) {
    cout << "YES" << endl;
  } else if (x + y == x0 + y0 || x - y == x0 - y0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
