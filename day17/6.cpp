//Create a User class with properties: id (private), username(public) & password (private). Its id should be initialized in a parameterised constructor.

//It should have a Getter & Setter for password.
#include<iostream>
#include<string>
using namespace std;

class user {
private:
    int id;
    string password;
public:
    string username;
    user(int id) {
        this->id=id;

    }
    //getter
    string getpass() {
        return password;
    }
    //setter
    void setpass(string password) {
        this->password=password;
    }
};

int main() {
    user user1(101);
    user1.username="imad";
    user1.setpass("hdj");

    cout<<"username : "<<user1.username<<endl;
    cout<<"password : "<<user1.getpass()<<endl;
    return 0;
}