#include <iostream>
#include <iomanip>
using namespace std;

// Function to check if a year is leap year
bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

// Function to get number of days in a given month
int getDaysInMonth(int month, int year) {
    switch(month) {
        case 1: return 31;
        case 2: return isLeapYear(year) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10:return 31;
        case 11:return 30;
        case 12:return 31;
        default: return 0;
    }
}

// Function to get the day of the week for 1st of the month (0 = Sunday, ..., 6 = Saturday)
int getStartDay(int month, int year) {
    int y = year;
    int m = month;

    if (m < 3) {
        m += 12;
        y--;
    }

    int k = y % 100;
    int j = y / 100;

    int day = (1 + (13 * (m + 1)) / 5 + k + k/4 + j/4 + 5 * j) % 7;
    return (day + 6) % 7; // Adjusting for Sunday = 0
}

int main() {
    int month, year;

    string months[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};

    cout << "Enter month (1-12): ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    cout << "\n  -------- " << months[month - 1] << " " << year << " --------\n";
    cout << "  Sun Mon Tue Wed Thu Fri Sat\n";

    int startDay = getStartDay(month, year);
    int daysInMonth = getDaysInMonth(month, year);

    // Print initial spaces
    for (int i = 0; i < startDay; i++) {
        cout << "    ";
    }

    for (int day = 1; day <= daysInMonth; day++) {
        cout << setw(4) << day;
        if ((day + startDay) % 7 == 0)
            cout << "\n";
    }

    cout << "\n";

    return 0;
}
