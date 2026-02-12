// References and Pointers
// Reference - giving a reference name like nick name in
// school or home or in office etc is called reference

#include <iostream>
using namespace std;

int main() {
    
    int age = 24;

    int copyAge = age;  // age = 24
    int &aliasAge = age;

    age = 25;

    cout<<"Reference "<<aliasAge<<endl;
    cout<<"copy " << copyAge<<endl;

    cout<<&age<<endl;  // ambasont operator

// Pointer - variavble that can store the address of another variable 

    int* ptr = &age; // integer pointer declare

    cout<<"ptr "<<ptr<<endl;
    cout<<"*ptr "<< *ptr << endl; // de referencing operator 

    *ptr = 56;

    cout<<age<<endl;

    return 0;
}
