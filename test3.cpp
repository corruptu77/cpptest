#include <iostream>
using namespace std;

class fish {
    public:
        bool freshwater;
        void swim() {
            if (freshwater) {
                cout<<"This fish swims in lake"<<endl;
            } else {
                cout<<"This fish swims in sea"<<endl;
            }
        }
        void test() {

        }
};

class tuna: public fish {
    public:
        tuna() {
            freshwater = false;
        }
};

class carp: public fish {
    public:
        carp() {
            freshwater = true;
        }
};

int main() {
    carp fish1;
    tuna fish2;

    cout<<"about these fish"<<endl;
    cout<<"Also, if I used the term 'food', PETA may hold me at gunpoint"<<endl;

    fish1.swim();
    fish2.swim();
    return 0;
}

