#include <iostream>
using namespace std;

enum Msoffice: unit8_t {
    BOLD = 0,
    ITALICS = 2,
    UNDERLINE = 4,
    COSSED
};

int main (){
    int myAttributes = UNDERLINE;
    cout << myAttributes << endl;

    return 0;

}