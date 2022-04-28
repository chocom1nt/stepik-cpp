#include <iostream>

using namespace std;

int main() {
  int h1, m1, s1, h2, m2, s2, overallSec1, overallSec2, diffSeconds;
  cin >> h1 >> m1 >> s1;
  cin >> h2 >> m2 >> s2;
  int secondsInHour = 3600;
  int secondsInMinute = 60;
  overallSec1 = h1 * secondsInHour + m1 * secondsInMinute + s1;
  overallSec2 = h2 * secondsInHour + m2 * secondsInMinute + s2;
  diffSeconds = overallSec2 - overallSec1;
  cout << diffSeconds;
}