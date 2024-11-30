#include <iostream>
using namespace std;

int main(){

int array[3][4];
cout <<"Please enter the values: ";
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++)
         cin >>array[i][j];
}
for(int i=0; i<3; i++){
    cout <<endl;
    for(int j=0; j<4; j++)
         cout <<array[i][j] <<"\t";
}

    return 0;
}