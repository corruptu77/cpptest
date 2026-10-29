#include <iostream>
using namespace std;

union simpleUnion {
    int num;
    char alpha;
};

struct compound {
    enum class type {
        Int, Char
    } type;
    union value {
        int num;
        char alpha;

        value() {}
        ~value() {}
    }value;
};

void display(const compound& new_object) {
    switch(new_object.type) {
        case compound::type::Int:
            cout<<"Union has number: "<<new_object.value.num<<endl;
            break;
        case compound::type::Char:
            cout<<"Union has character: "<<new_object.value.alpha<<endl;
            break;
    }
}

int main() {
    simpleUnion u1, u2;
    cin>>u1.num;
    cin>>u2.alpha;
    cout<<"Size of u1 having integer: "<<sizeof(u1)<<"\nSize of u2 having character: "<<sizeof(u2)<<endl;

    compound data1, data2;
    data1.type = compound::type::Int;
    cin>>data1.value.num;

    data2.type = compound::type::Char;
    cin>>data2.value.alpha;

    display(data1);
    display(data2);

    return 0;
}