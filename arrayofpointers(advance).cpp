#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int *ptr;
    int *ptr1;
int size;
cout<<"enter the size of the array: ";
cin>>size;
int arr[size];
cout<<"enter the elements: ";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";


}
cout<<endl;
ptr=arr+1;//arr+1 fetches the second element of the array
cout<<*ptr<<" ";
cout<<endl;
for(int i=0;i<size;i++){
ptr1=&arr[i];
cout<<*ptr1<<" ";
}
cout<<endl;
cout<<sizeof(*ptr1);
}
