#include <iostream>
using namespace std;

class flier {
    public:
        void fly() {
            cout<<"Current subject is flying"<<endl;
        }
};
class swimmer {
    public:
        void swim() {
            cout<<"Current subject is swimming"<<endl;
        }
};
class cleaver {
    public:
        void attack() {
            cout<<"Current subject destroyed one of your walls"<<endl;
        }
};
class kite: public flier {
    public:
        kite() {}
};
class leviathan: public swimmer {
    public:
        leviathan() {}
};
class vanguard: public cleaver {
    public:
        vanguard() {}
};
class experiment: public flier, public swimmer, public cleaver {
    public:
        experiment() {}
        void escape() {
            cout<<"Current subject escaped somehow skullemoji"<<endl;
        }
};

int main() {
    kite sample1;
    leviathan sample2;
    vanguard sample3;
    experiment sample4;

    sample1.fly();
    sample2.swim();
    sample3.attack();

    sample4.fly();
    sample4.swim();
    sample4.attack();
    sample4.escape();

    cout<<"Fuck..."<<endl;
    return 0;
}