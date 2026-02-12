// Dynamic memory allocation

#include <iostream>
using namespace std;

int main() {
    
    int age = 24;   // allocated on compile time

    // for running in run time allocation we are using Dynamic memory allocation

    int* ptr; 

    ptr = new int;  // runs in run time 
    *ptr = 24;

    cout<<*ptr<<endl;

    return 0;
}
