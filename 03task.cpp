#include <iostream>
using namespace std;

int main(){

int array[3][3];
int sum=0;
cout <<"Please enter the values: ";
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++)
         cin >>array[i][j];
}
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++)
         sum = sum + array[i][j];
}
cout <<"The sum of the values is: " <<sum;

    return 0;
}