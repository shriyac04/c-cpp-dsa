#include <bits/stdc++.h>
using namespace std;
int search(int arr[],int l,int r,int x){
while(l<=r){
    int m=l+(r-l)/2;
    if(arr[m]==x)
        return m;
    //if x is greater than the mid-value,it ignores the left hand side part
    if(arr[m]<x)
        l=m+1;
    else
        r=m-1;
}
return -1;
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
int x;
cout<<"enter the element to be searched: ";
cin>>x;
int result=search(arr,0,n-1,x);
if(result==-1)
    "element not found!";
else
  cout<<"the element is found at "<<result<<" position.";
  return 0;
}
