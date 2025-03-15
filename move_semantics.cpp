#include <iostream>
#include <string>

using namespace std;
//memory management
void swap(int &a,int &b){
    int tmp = move(a);
    a = move(b);
    b = move(tmp);
}
string printMe(){
    return "I am print";
}
int main(){
    int a = 3;
    int b = 4;

    swap(a,b);

    cout <<"A :" << a << endl;
    string S = printMe();

    string&& ss = printMe();

    return 0;
}