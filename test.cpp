#include <iostream>
#include <string>
using namespace std;

class skycat {
    private:
        string name;
        int wingspan;
        bool is_asleep=false;
    public:
        skycat() 
        {
            wingspan = 3;
            cout<<"Found Sky cat with a wingspan of "<<wingspan<<" metres"<<endl;
        }
        void makeName() {
            cout<<"What do you want to set the name to? ";
            cin>>name;
            cout<<"You have set the name to "<<name<<endl;
        }
        void place_sleep() {
            if (is_asleep==false) {
                cout<<"Make "<<name<<" go to sleep?";
                string confirm;
                cin>>confirm;
                if (confirm=="y") {
                    is_asleep = true;
                }
            } else {
                cout<<"Wake "<<name<<" up?";
                string confirm;
                cin>>confirm;
                if (confirm=="y") {
                    is_asleep = false;
                }
            }
        }
};

int main() {
    skycat Sample;
    Sample.makeName();
    return 0;
};