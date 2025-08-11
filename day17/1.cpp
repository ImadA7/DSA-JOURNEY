#include<iostream> 
using namespace std;

class Student {
public:
    //properties
    string name;
    float cgpa;
    //methods
    void getPercentage() {
        cout<<(cgpa*10)<<"%\n";
    }

};

class user {
    int id;
    string username;
    string password;
    string bio;

    void deactivate() {
        cout<<"deleting account\n";
    }

    void editbio(string newbio) {
        bio= newbio;
    }
};

int main() {
    Student s1;  //object
    s1.name ="imad";
    s1.cgpa=9.0;
    cout<<s1.name<<endl;
    cout<<s1.cgpa<<endl;
    s1.getPercentage();

    Student s2; //object 
    return 0;
}