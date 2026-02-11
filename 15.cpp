// Multi dimensioanl array


#include <iostream>
using namespace std;

int main() {
    
    int ages[5]= {21,22,23,24,25}; // 1D array

    int D2Array [5][5] = {        // 2D array or called as Matrix 
        {21,22,23,24,25},
        {21,22,23,24,25},
        {21,22,23,24,25},
        {21,22,23,24,25},
        {21,22,23,24,25}
    };

    // int mats [4][4][4] = {
    //     {
    //         {1,2},
    //         {3,4}
    //     },
    //     {
    //         {5,6},
    //         {7,8}
    //     },
    //     {
    //         {9,10},
    //         {11,12}
    //     }
    // }

    
    // cout<<D2Array[2][3]<<endl;
    // D2Array [2][3] =999;
    // cout<<D2Array[2][3];


    int row = sizeof(D2Array)/sizeof(D2Array[0]);
    int col = sizeof(D2Array[0])/sizeof(D2Array[0][0]);


    cout<<row<<endl;
    cout<<col<<endl;

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cout<<D2Array[i][j]<<" ";
            }
            cout<<endl;
    }

    return 0;
}
