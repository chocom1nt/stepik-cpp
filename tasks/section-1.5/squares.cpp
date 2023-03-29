#include <iostream>

using namespace std;

int main() {
  int n;
  int i = 1;
  cin >> n;
  while (n >= i * i) {
    cout << i * i << " ";
    i++;
  }
}
