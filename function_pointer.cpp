#include <iostream>
using namespace std;

int gettwo(){
    return 2;
}
void intersting(){
    puts("I am intersting");
}
int main() {
    int whatigot = gettwo();
    void (*pointertointeresting)()= intersting;

    cout << whatigot << endl;
    pointertointeresting();
    (*pointertointeresting)();
    return 0;
}