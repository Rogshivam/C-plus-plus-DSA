#include <iostream>
// using namespace std; // where as we use scoperesolution operator

int main(){
    //factorial n*(n-1)*(n-2)*(n-3)*(n-4)*.......
    int n ;
    std::cout <<"Enter a value: ";
    std::cin >> n;

    std::cout << "Your result for factorial is: " << factorial(n) << std::endl;

    return 0;
}
int factorial(int n) {

    if (n > 1){
        return n * factorial(n-1);
    }else {
        return 1;   
    }
}