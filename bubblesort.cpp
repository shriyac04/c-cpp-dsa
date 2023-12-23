#include <bits/stdc++.h>
//bubble sorting
using namespace std;
int main(){
int n;
cout<<"enter the size of the array: ";
cin>>n;
int arr[n];
cout<<"enter the elements: "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];

}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

}
cout<<endl;
int temp=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
            //ascending order
        if(arr[i]>arr[j]){
            //arr[i]<arr[j] descending order
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

}
cout<<endl;
cout<<arr[n-2];

}

