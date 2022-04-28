#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int inputSeconds;
  cin >> inputSeconds;
  int secondsInDay = 86400;
  int secondsInHour = 3600;
  int secondsInMinute = 60;

  if (inputSeconds >= 86400) {
    int days = inputSeconds / secondsInDay;
    int hours = inputSeconds % secondsInDay / secondsInHour;
    int minutes = inputSeconds % secondsInHour / secondsInMinute;
    int seconds = inputSeconds % secondsInHour % secondsInMinute;

    cout << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2)
         << setfill('0') << seconds;
  } else {
    int hours = inputSeconds % secondsInDay / secondsInHour;
    int minutes = inputSeconds % secondsInHour / secondsInMinute;
    int seconds = inputSeconds % secondsInHour % secondsInMinute;

    cout << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2)
         << setfill('0') << seconds;
  }
}