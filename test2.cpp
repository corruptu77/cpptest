#include <iostream>
using namespace std;

class makeBuffer {
    private:
        int* nums;
    public:
        makeBuffer(unsigned int length) {
            cout<<"Constructor allocates "<<length<<" integers"<<endl;
            nums = new int[length];
        }

        ~makeBuffer() {
            cout<<"Destroyer releasing memory"<<endl;
            delete nums;
        }
};

int main() {
    cout<<"How much do you want to store?"<<endl;
    unsigned int store;
    cin>>store;

    makeBuffer createNew(store);
    return 0;
}