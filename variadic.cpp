#include<iostream>
#include <string>

using namespace std;

template <typename T>
void func(T t){
    cout << "first Function :" << t << endl;
}
template<typename T , typename... Args>
void func(T t,Args... args){
    cout << "second Function :" << t << endl;
    func(args...);
}
int main()
{
    string myName = "shivam";
    func(1);
    func(1,2,3,4,5.7,6.5, myName);
    return 0;

}

