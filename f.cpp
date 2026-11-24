#include <iostream>
using namespace std;
#include <string>
#include <sstream>

class date {
    private:
        int day, month, year;
        string newName;
    public:
        date (int newMonth, int newDay, int newYear): month(newMonth), day(newDay), year(newYear) {};

        date operator + (int addDays) {
            date newDate (month, day+addDays, year);
            return newDate;
        };
        date operator - (int subtractDays) {
            date newDate (month, day-subtractDays, year);
            return newDate;
        };
        operator const char*() {
            ostringstream formatDate;
            formatDate<<month<<"/"<<day<<"/"<<year;
            string outputDate = formatDate.str();
            string* outputPointer = &outputDate;
            displayDate(outputDate);
            delete outputPointer;
            return outputDate.c_str();
        };
        void displayDate(string &getDate) {
            cout<<getDate<<endl;
        };
};

int main() {
    date holiday(12,25,26);
    cout<<"Current holiday is: "<<holiday<<endl;
    date previousHoliday(holiday-19);
    cout<<"Previous holiday on: "<<previousHoliday<<endl;
    date nextHoliday(holiday+6);
    cout<<"Next holiday on: "<<nextHoliday<<endl;

    return 0;
}