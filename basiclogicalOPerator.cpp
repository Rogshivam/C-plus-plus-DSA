#include<iostream>
using namespace std;

int main(){
    bool isfbuser = false;
    bool isgoogleuser = true;
    bool isadmin = true;

    if (( isgoogleuser || isfbuser ) && isadmin) {
        puts("welcome admin");
    }else {
        puts("No admin access!");
    }
    if (isfbuser || isgoogleuser) {
        puts("welcome user");
    }
    return 0;
}