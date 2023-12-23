#include <bits/stdc++.h>
using namespace std;
void insertsort(int arr[],int n){
for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}
}
void printarray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
int n;
cout<<"enter the size of the array: ";
cin>>n;
int arr[n];
cout<<"enter the elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
printarray(arr,n);

cout<<endl;
insertsort(arr,n);
cout<<"the sorted array is : ";
printarray(arr,n);
}
