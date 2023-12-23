#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
int a,sum=0;
cout<<"enter the size of the array: ";
cin>>a;
int arr[a];
cout<<"enter the elements: ";
for(int i=0;i<a;i++){
    cin>>arr[i];
}
for(int i=0;i<a;i++){
   sum+=arr[i];
}
cout<<sum;
}
