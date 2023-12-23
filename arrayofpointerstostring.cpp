#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
int size;
cout<<"enter the size of the array: ";
cin>>size;
string arr[size];
cout<<"enter the elements: ";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
string *names[size];

for(int i=0;i<size;i++){
    names[i]=&arr[i];

}
cout<<endl;
for(int i=0;i<size;i++){
    cout<<*names[i]<<" ";

}
}
