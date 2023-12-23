#include <iostream>
#include <algorithm>
using namespace std;
void print(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
int n;
cout<<"enter the size: ";
cin>>n;
int arr[n];
cout<<"enter the elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
int m;
cout<<"enter the element you want to search: ";
cin>>m;
if(binary_search(arr,arr+n,m))
    cout<<"element found!";
else
    cout<<"element not found!";
}
