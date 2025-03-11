#include <iostream>
#include <string>
using namespace std;

class User{
private:
    int _secret = 23;//the underscore is for private member and doubel underscore for system member  
public:
    string name = "default";
    void classMessage(){ cout <<"Class is great, "<< name <<endl;}
    void setSecert(const int & newseceret){_secret = newseceret;}
    int getSecret(){return _secret;}
    //{    if(meet){
    //         secret = newseceret
    //     } else {
    //         send  a user message
    //     }
    //     secret = newseceret;
    // }

};

int main(){

    User shivam;
    shivam.name = "Shivam kumar";
    shivam.classMessage();
    shivam.setSecert(333);
    cout <<shivam.getSecret() << endl;

    User sam;
    sam.classMessage();
    sam.name = "sam bahadur";
    sam.classMessage();

}