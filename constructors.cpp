#include<iostream>
#include <string>
using namespace std;

class phone{
    string _name = "";
    string _os ="";
    int _price = 0;
public:
    phone();//default constructor //constructor are special method in the class which have the same name the class
    phone(const string & name, const string & os,const int & price);//parameter constructor
    phone(const phone &); //copy constructor
    string getName(){
        printf("Vlaue of object is %p\n", this);// this is a self pointing pointer and it alway pointing to the object which it had just created
        return _os;}
    int getprice();
    ~phone(); //destructor
};
int phone::getprice(){
    printf("Vlaued of object is %p\n", this);
    return _price;

}
phone::phone() : _name(), _os("Andy"), _price(){
    puts("Default constructor");
}
phone::phone(const string & name, const string & os, const int & price) : _name(name), _os(os), _price(price){
    puts("this is parameter constructor");
}
phone::phone(const phone & values){
    puts("overWrite copy constructor");
    _name = "new-" +values._name;
    _os = "skinned-"+values._os;
    _price = values._price;
}
phone::~phone(){
    printf("Destructor called for %s\n",_name.c_str());
}
int main(){
    phone samsungA1;
    cout<< samsungA1.getName() << endl;

    phone Oneplus8("OP8","Android-oxy",799);
    cout<< Oneplus8.getName() << endl;

    printf("Vlaued of object is %p\n", &Oneplus8);

    cout << Oneplus8.getprice() << endl;

    phone Oneplus8s = Oneplus8;
    cout <<Oneplus8s.getName() << endl;

    return 0;

}