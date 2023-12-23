#include <bits/stdc++.h>
//for single element to be deleted
using namespace std;
int main(){
int n;
cout<<"enter the size of array: ";
cin>>n;
int arr[n];
cout<<"enter the elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int new1=0;
int x;
int del[n];
cout<<"enter the element to be deleted: ";
cin>>x;
// stores all values other than the ones to be deleted
for(int i=0;i<n;i++){
    if(arr[i]!=x){
        del[new1]=arr[i];
        new1++;
    }
}
cout<<"the modified array: ";
for(int i=0;i<new1;i++){
    cout<<del[i];
}
}
