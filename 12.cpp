// break continue

#include <iostream>
using namespace std;

int main() {

    //for loop

    // for(int i=0; i<=50; i++)
    // {
    //     if(i==5)
    //     break;
    //     cout<<i<<endl;
    // }

    // while loop 

    int i=0;
    while(i<=50)
    {
        i++;
        if(i==5)
        continue;
        cout<<i<<endl;
    }

    return 0;
}
