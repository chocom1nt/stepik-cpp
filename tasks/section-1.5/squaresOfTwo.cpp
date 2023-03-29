#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  int i = 0;
  cin >> n;
  while (n >= pow(2, i)) {
    cout << pow(2, i) << " ";
    i++;
  }
}
