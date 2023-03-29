#include <iostream>
using namespace std;
int main() {
  int max, now;
  cin >> now;
  max = now;
  while (now != 0) {
    if (now > max) {
      max = now;
    }
    cin >> now;
  }
  cout << max;
}