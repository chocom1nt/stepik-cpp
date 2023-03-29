#include <iostream>

using namespace std;

int main() {
  int n, m, k;
  cin >> n;
  cin >> m;
  cin >> k;
  if ((k % m == 0 || k % n == 0) && (k < (m * n))) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}