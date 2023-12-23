#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int row;
cout<<"enter the no. of rows : ";
cin>>row;
int col;
cout<<"enter the no. of columns: ";
cin>>col;
int arr[row][col];
cout<<"enter the elements: "<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){

        cin>>arr[i][j];
    }
}
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<"\t";
    }
    cout<<"\n";
}
}
