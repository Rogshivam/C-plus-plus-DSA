#include<iostream>
using namespace std;

int main(){
    int my_number[] ={1,3,4,5,6,7,8,};
    int i = 0;
    while(i < 7){
        if(i==3){
            break;
        }
        cout<<"the number is "<< my_number[i]<<endl;
        i++;
    }
    return 0;
}