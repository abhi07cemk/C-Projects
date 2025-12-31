#include <iostream>
using namespace std;


bool isLeapYear(int year) {
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    return (year % 4 == 0);
}


int getDaysInMonth(int month, int year) {
    if (month == 2)
        return isLeapYear(year) ? 29 : 28;

    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;

    return 31;
}


int getStartingDay(int year, int month) {
    int day = 1;
    if (month < 3) {
        month += 12;
        year--;
    }

    int k = year % 100;
    int j = year / 100;

    int h = (day + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) + 5 * j) % 7;
    return (h + 6) % 7;
}

// Display calendar
void printCalendar(int month, int year) {
    string months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    cout << "\n   " << months[month - 1] << " " << year << endl;
    cout << "Sun Mon Tue Wed Thu Fri Sat\n";

    int startDay = getStartingDay(year, month);
    int days = getDaysInMonth(month, year);

    for (int i = 0; i < startDay; i++)
        cout << "    ";

    for (int day = 1; day <= days; day++) {
        cout << day;
        if (day < 10) cout << "   ";
        else cout << "  ";

        if ((day + startDay) % 7 == 0)
            cout << endl;
    }
    cout << endl;
}

int main() {
    int month, year;

    cout << "Enter month (1-12): ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    if (month < 1 || month > 12) {
        cout << "Invalid month!" << endl;
        return 0;
    }

    printCalendar(month, year);
    return 0;
}
