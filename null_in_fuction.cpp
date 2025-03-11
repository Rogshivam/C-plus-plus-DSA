#include <iostream>
// #define NULL 0;
using namespace std;

void printval(int a){
    printf("Integer value is %d\n", a);
}
void printval(double a){
    printf("Double valye is %f\n",a);
}
void printval(int * a){
    printf("Pointer value is %p\n",a);
}
int main()
{
    // printval(NULL); 
    printval(nullptr);
    return 0;
}
 