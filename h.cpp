#include <iostream>
#include <string>
using namespace std; 

class skycat {
    public:
        skycat() {
            cout<<"Found new skycat with ID: "<<this<<endl;
        }
        virtual ~skycat() {
            cout<<"Released skycat with ID: "<<this<<endl;
        }
        string name;
        virtual void setName() {
            cout<<"Setting name for ID: "<<this<<endl;
            cin>>name;
        }
        virtual string getName() {
            return name;
        }
};

class commander: public skycat {
    public:
        commander() {
            cout<<"Current type is COMMANDER"<<endl;
        }
        ~commander() {
            cout<<"Released type COMMANDER"<<endl;
        }
};

class leader: public commander {
    public:
        leader() {
            cout<<"Current status is leader"<<endl;
        }
        ~leader() {
            cout<<"That is a leader"<<endl;
        }
};

void release(skycat* newSkyCat) {
    cout<<"Releasing skycat "<<&newSkyCat<<"With name "<<newSkyCat->getName()<<endl;
    delete newSkyCat;
}

int main() {
    skycat* sample1 = new skycat;
    commander* sample2 = new commander;
    leader* sample3 = new leader;

    sample1->setName();
    sample2->setName();
    sample3->setName();

    release(sample1);
    release(sample2);
    release(sample3);

    return 0;
}