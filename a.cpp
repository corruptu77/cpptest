#include <iostream>
#include <string>
using namespace std;

class Human {
    private:
        friend void DisplayAge(const Human& person);
        string name;
        int age;
    public:
        Human (string getName, int getAge) {
            name = getName;
            age = getAge;
        };
};

void DisplayAge(const Human& person) {
    cout<<person.age<<endl;
}

int main() {
    Human person1("John",25);
    cout<<"Getting name of person: ";
    DisplayAge(person1);

    return 0;
}