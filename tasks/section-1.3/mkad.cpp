#include <iostream>

using namespace std;

int main() {
  int velocity, time;
  cin >> velocity;
  cin >> time;
  cout << ((((velocity * time) + 109) % 109)) % 109;
  return 0;
}