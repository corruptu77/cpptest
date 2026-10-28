#include <iostream>
using namespace std;

union group {
    int newNum;
    char newLet;
};

struct complex {

};

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

class Human {
    private: 
        int age;
        string gender;
        string name;
        friend void test(const Human& person);

    public:
        Human(string inputName, int inputAge, string inputGender) : name(inputName), age(inputAge), gender(inputGender) {}
        int getage() {
            return age;
        }
        string getGender() {
            return gender;
        }
        string getName() {
            return name;
        }
        void introduceSelf() {
            cout<<"Hello, My name is "<<name<<", and I am "<<age<<" Years old. I identify as "<<gender<<". What's your name? ";
            string yourName;
            cin>>yourName;
            cout<<endl;
            cout<<"Well hello, "<<yourName<<endl;
            yourName = "";
        }
        
};
void test(const Human& person) {
    cout<<person.age<<endl;
}

class Skycat {
    private:
        int wingspan;
        int body_length;
        string given_name;
        string have_condition;
    public:
        Skycat(string inputName, int getWingspan, int getLength, string condition): given_name(inputName), wingspan(getWingspan), body_length(getLength), have_condition(condition) {}
        void makeMeasurement() {
            if (!wingspan||!body_length) {
                cout<<"Nothing provided."<<endl;
                string confirm;
                cin>>confirm;
            } else {
                cout<<"Found sky cat with a "<<wingspan<<" metre wingspan, and a "<<body_length<<" metre length"<<endl;
                string confirm;
                cin>>confirm;
            }
            if (given_name=="") {
                cout<<"They have no name."<<endl;
            } else {
                cout<<"They were given the name of "<<given_name<<endl;
            }
            if(have_condition!="") {
                cout<<"They also have "<<have_condition<<endl;
                string confirm;
                cin>>confirm;
            } else {
                cout<<"They have no problems at this current moment"<<endl;
                string confirm;
                cin>>confirm;
            }
        }
        void assignName() {
            if (given_name=="") {
                string newName;
                cout<<"Set name to?";
                cin>>newName;
            } else {
                string newName;
                cout<<"Reassign name to?";
                cin>>newName;
            }
        }
};

int main() {
    makeBuffer buf1(8);
    makeBuffer buf2(64);

    Human person1("John",30,"Male");
    Human person2("Ava",30,"Female");

    person1.introduceSelf();
    person2.introduceSelf();

    Skycat sample1("Terrison",4,3,"");
    sample1.makeMeasurement();
    Skycat sample2("Dacilyn",3,2,"injuries");
    sample2.makeMeasurement();

    Human person3("Treßanke",24,"Asexual");
    Human person4("Vellia",25,"Pansexual");
    person3.introduceSelf();
    return 0;
}