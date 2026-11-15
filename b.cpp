#include <iostream>
using namespace std;

class skycat {
    public:
        skycat() {
            cout<<"Captured new skycat"<<endl;
        }
        ~skycat() {
            cout<<": Released skycat"<<endl;
        }
};

class kite: public skycat {
    public:
        kite() {
            cout<<"Captured type KITE"<<endl;
        }
        ~kite() {
            cout<<"Released skycat KITE"<<endl;
        }
};

class leviathan: public skycat {
    public:
        leviathan() {
            cout<<"Captured type LEVIATHAN"<<endl;
        }
        ~leviathan() {
            cout<<"Released skycat LEVIATHAN"<<endl;
        }
};

void releaseSkycat(skycat* subject) {
    cout<<subject;
    delete subject;
}

int main() {
    cout<<"Captured a skycat"<<endl;
    kite* subject1 = new kite;
    cout<<"Releasing skycat: ";
    releaseSkycat(subject1);

    cout<<"Captured another skycat"<<endl;
    leviathan* subject2 = new leviathan;
    cout<<"Releasing skycat: ";
    releaseSkycat(subject2);

    cout<<"Getting captured skycat"<<endl;
    kite* subject3 = new kite;
    cout<<"Automatic release because of scoping issues"<<endl;

    return 0;
}