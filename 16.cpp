//Structues 
// related dat of storing it like storing data related to us 


#include <iostream>
#include<string>
using namespace std;

struct{             // Struct Definitoon and also tells custom datatype
    string name;    // structure members
    int age;        // structure members
    float cgpa;     // structure members
} goms, siva;             // Stucture variable 

int main() {
    
    goms.name="Goms";
    goms.age=24;
    goms.cgpa=9.0;

    siva.name="Siva";
    siva.age=20;
    siva.cgpa=8.5;

    cout<<goms.cgpa<<endl;
    cout<<siva.name<<endl;

    return 0;
}
