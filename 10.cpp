// nested loops

#include <iostream>
using namespace std;

int main() {

    int n=5;
    int m=6;
    
    for(int i=0; i<n; i++)       //outer loop i=0
    {
        cout<<"Row:"<<i+1<<endl;
        for(int j=0; j<m; j++)   // inner loop j=0
        {
            cout<<"*";           // print * 
        }
        cout<<endl;
    }

    return 0;
}
