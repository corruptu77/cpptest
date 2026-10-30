#include <iostream>
using namespace std;
#include <string>

class skycat {
    private:
        string name;
        string varient;
    public:
        string conditions;
        bool can_swim;
        bool can_fly;
        bool can_cleave;

        void getInformation() {
            if (can_swim) {
                cout<<"Current skycat varient "<<varient<<" can swim."<<endl;
            } else {
                cout<<"Current skycat varient "<<varient<<" cannot swim."<<endl;
            }
            if (can_fly) {
                cout<<"Current skycat varient "<<varient<<" can fly"<<endl;
            } else {
                cout<<"Current skycat varient "<<varient<<" cannot fly"<<endl;
            }
            if (can_cleave) {
                cout<<"Current skycat varient "<<varient<<" may cleave your furniture in two."<<endl;
            } else {
                cout<<"Current skycat varient "<<varient<<" is safe to handle without restraints"<<endl;
            }
            if (conditions!="") {
                cout<<"Current skycat has "<<conditions<<endl;
            } else {
                cout<<"Current skycat has no conditions to worry about."<<endl;
            }
            if (name!="") {
                cout<<"Current skycat has the name of "<<name<<endl;
            } else {
                cout<<"They don't have a name! Assign one?";
                char confirm;
                cin>>confirm;
                if (confirm=='y') {
                    cout<<"What do you want to set the name to?";
                    string newName;
                    cin>>newName;
                    name=newName;
                    cout<<"You have set the name to "<<newName<<endl;
                } else {
                    cout<<"Remember to set name later."<<endl;
                }
            }
        }
};

