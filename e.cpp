#include <iostream>
using namespace std;
#include <memory>
#include <sstream>

class date {
    private:
        int day, month, year;
        string fullDate;
    public:
        date(int newMonth, int newDay, int newYear): month(newMonth), day(newDay), year(newYear) {};
        operator const char*() {
            ostringstream formatDate;
            formatDate<<month<<"/"<<day<<"/"<<year;
            fullDate = formatDate.str();
            return fullDate.c_str();
        };
        void displayDate() {
            cout<<month<<"/"<<day<<"/"<<year<<endl;
        };
};

int main() {
    unique_ptr<int> smartIntPtr(new int);
    *smartIntPtr = 36;

    cout<<"Integer value is: "<<*smartIntPtr<<endl;
    unique_ptr<date> veryIntelligentHoliday (new date(12,25,26));
    cout<<"This new instance of date contains: ";
    veryIntelligentHoliday->displayDate();

    date holiday(12,25,26);
    cout<<"Holiday is on: "<<holiday<<endl;

    return 0;
}