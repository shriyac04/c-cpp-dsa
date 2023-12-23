#include <bits/stdc++.h>
using namespace std;
int search(int arr[],int l,int r,int x){
if(l<=r){
    int m=l+(r-l)/2;

    if(arr[m]==x)
        return m;
    if(arr[m]<x)
        search(arr,m+1,r,x);

return search(arr,l,m-1,x);

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
int result= search(arr,0,n-1,x);
if(result== -1){
    cout<<"element not found!";
}
else{
    cout<<"element is found at "<<result;
}

}
