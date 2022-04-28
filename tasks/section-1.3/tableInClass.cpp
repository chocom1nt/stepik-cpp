#include <iostream>

using namespace std;

int main() {
  int room1, room2, room3, overallTable;
  cin >> room1 >> room2 >> room3;
  overallTable = (room1 / 2 + room1 % 2) + (room2 / 2 + room2 % 2) +
                 (room3 / 2 + room3 % 2);
  cout << overallTable;
}