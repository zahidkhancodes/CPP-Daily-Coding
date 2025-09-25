#include <iostream>
using namespace std;

int main() {
    int vacation_ends_on_day = 5;
  
    for (int current_day = 1; current_day <= 10; ++current_day) {

        cout << "Day " << current_day << ": ";

        if (current_day > vacation_ends_on_day) {
            cout << "Vacations are over, time to code!" << endl;
        }
        else {
            cout << "Still on vacation, coding everyday." << endl;
        }
    }

    return 0;
}
