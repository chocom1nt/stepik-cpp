#include <iostream>

using namespace std;

int main() {
  int rub, kop, n, sumRub, sumKop;
  cin >> rub >> kop >> n;
  sumRub = rub * n + (kop * n / 100);
  sumKop = kop * n % 100;
  cout << sumRub << " " << sumKop;
}
