#include<iostream>
using namespace std;

int main() {
    char my_string[] = "shivam";
    char my_name[] = {'s','h','i','v','a','m',0};
    printf("my name is: %s\n", my_name );

    cout << "take a break1\n";
    for(int i=0; my_string[i] !=0;i++){
        cout <<"Character is: " << my_string[i] << endl;
    }
    cout << "take a break2\n";
    for(char * cp = my_name; *cp !=0 ; cp++) {
        cout << "Character is :" << *cp <<endl;
    }
    cout << "take a break3\n";
    for(char i:my_name) {
        cout << "Character is :" << i <<endl;
    }
    return 0;

}