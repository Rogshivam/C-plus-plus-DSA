#include <iostream>
using namespace std;

int main(){
    int rating = 4;
    if(rating = 5){
        puts("5 star rated");
    }else if(rating == 4){
        puts("4 star rated");
    }
    else {
        puts("Not a 5 star rated");
    }
    printf("Your racting feedpack is: %s\n", rating == 4 ? "True block" : "false block");
    return 0;
}