#include <bits/stdc++.h>
//for sort() we use #include <algorithm>
using namespace std;
int main(){
int n;
cout<<"enter the size of the array : ";
cin>>n;
int arr[n];
int len=sizeof(arr)/sizeof(arr[0]);
cout<<"enter the elements : ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
sort(arr,arr+len);// by default ascending order
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
sort(arr,arr+len,greater<int>());// descending order
//compares it's two arguments and returns true when first one is greater than the other or else false.
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
sort(arr,arr+len,less<int>());//ascending order
//opposite of greater<int>()
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
