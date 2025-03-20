#include <iostream>
#include <algorithm>
#include <queue>


using namespace std;

int main()
{
    queue<int> myq;
    myq.push(10);
    myq.push(1);
    myq.push(30);
    myq.push(14);
    myq.push(162);
    myq.push(160);
    myq.push(50);
    
    cout << myq.front() <<endl;
    cout << myq.back() <<endl;
    myq.pop();
    cout << myq.front() <<endl;

    while(!myq.empty()) {
        cout << " " << myq.front();
        myq.pop();
    }
    cout << "\n";
    cout << "Outside" <<endl;
    cout << myq.front() <<endl;

    priority_queue<int> mypq;

    mypq.push(50);
    mypq.push(30);
    mypq.push(40);

    while (!mypq.empty()) {
        cout<< " " << mypq.front();
        mypq.pop();

    }
    cout << "\n";



    return 0;
}
