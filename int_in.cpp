#include <iostream>
#include <cstdint>

using  namespace std;

int main(){
    printf("Size of this data type is %d bits\n" ,sizeof(int) * 8);

    int fun = 0b00010110;
    printf("Fun value is %d\n", fun);

    return 0;
}