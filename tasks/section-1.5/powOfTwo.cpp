#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n, i = 1;
  cin >> n;
  while (n % int(pow(2, i)) == 0) {
    i++;
  }
  if (int(pow(2, i)) % n == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}