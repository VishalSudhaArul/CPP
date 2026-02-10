// nested condition statements

#include <iostream>
using namespace std;

int main() {

    int age =24;
    char gender=18;

    if(age<18) {
        if(gender =='M')
        cout<<"Boy"<<endl;
        else
        cout<<"Girl"<<endl;
    }
    else
    {
        if(gender == 'M')
        cout<<"Man"<<endl;
        else
        cout<<"Women"<<endl;
    }

    return 0;
}
