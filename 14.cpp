// array 
// to store similar data in one variable

#include <iostream>
#include <string>
using namespace std;

int main() {
    // string name = "goms";
    // // data type identifiew [size] = {values...}
    // string names[5] = {"goms", "siva", "code io", "logic io","undefined"};

     int ages [5] = {24,21,4,1,0};

    // names[2] = "Code Io";

    //cout<<names[2]<<endl; // 0 based indexing

   // int size = sizeof(ages);
    // int size = sizeof(ages)/sizeof(ages[0]);  //size - count, length
    // cout<<size<<endl;

    // for(int i=0; i<=5; i++)
    // {
    //     cout<<names[i]<<endl;
    // }

    // for each loop

    for(int i :ages)
    {
        cout<<i<<endl;
    }


    return 0;
}

