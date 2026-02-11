// Enums

#include <iostream>
#include <string>
using namespace std;

enum Day{
    SUNDAY,   //0
    MONDAY,   //1
    TUESDAY,  //2
    WEDNESDAY,//3
    THURSDAY  //4
};

int main() {
    
    Day today = TUESDAY;
    Day tomorrow = WEDNESDAY;

    // cout<<"Day : "<<(today+1)<<endl;

    if(today == Day::TUESDAY)
    cout<<"Holiday";

    return 0;
}
