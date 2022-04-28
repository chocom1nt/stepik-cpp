#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int inputSeconds;
  cin >> inputSeconds;
  int secondsInDay = 86400;
  int secondsInHour = 3600;
  int secondsInMinute = 60;

  inputSeconds %= secondsInDay;

  int hours = inputSeconds % secondsInDay / secondsInHour;
  int minutes = inputSeconds % secondsInHour / secondsInMinute;
  int seconds = inputSeconds % secondsInHour % secondsInMinute;

  cout << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2)
       << setfill('0') << seconds;
}