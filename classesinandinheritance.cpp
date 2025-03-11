#include<iostream>
using namespace std;
// inheritance
class Money{
public:
void gotMoney(){puts("Got 5K USD in my acount");}
};
class Man{
    string _name;
    int _age;
    Man(){}
protected:
    Man(const string & name, const int & age)
    : _name(name), _age(age){}
    void run(){puts("i am run");}
public:
    void sayName() const;
};

void Man::sayName() const {
    cout <<"My name is :" << _name << "\nand age is :" << _age << endl;
};
//superman
class Superman : public Man{
    bool flight;
public:
    Superman(string name) : Man(name, 26){}
    void run(){puts("I can run at light speed");}
};

// void Man::SayName() const {
//     cout <<"My name is :" << _name << "and age is:" << _age <<endl;
// }
//spiderman
class spiderman : public Man ,public Money{
    bool webbing;
public:
    spiderman(string name) : Man(name, 16){};
    void run(){puts("I can run at normal speed");}
};
int main() {

    Superman calrk("kent");
    calrk.sayName();
    calrk.run();
    clark.gotMoney();

    spiderman peter("peter");
    peter.sayName();
    peter.run();
    peter.gotMoney();

    return 0;
}