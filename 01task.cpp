#include <iostream>
using namespace std;

int main(){

int array[4][4]={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12},
                 {13,14,15,16}};
for(int i=0; i<4; i++){
    cout <<endl;
    for(int j=0; j<4; j++)
         cout <<array[i][j] <<"\t";
}

    return 0;
}