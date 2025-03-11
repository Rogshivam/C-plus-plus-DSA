#include <iostream>
using namespace std;

class One {
public:
    virtual void intro(){
        cout << "I am One\n";
    }
};
class Two: public One{
public:
    void intro(){
        cout << "I AM TWO\n";
    }
};
class Three :public Two{
public:
    void intro(){
        cout << "I am One\n";
    }
};
int main(){
    One *a;
    Two b;
    Three c;

    a = &b;
    a->intro();
    return 0;
}
