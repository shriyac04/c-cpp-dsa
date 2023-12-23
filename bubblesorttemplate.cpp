#include <bits/stdc++.h>
using namespace std;
template <class a> void bubblesort(a arr[],int n){
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
              swap(arr[i],arr[j]);
            }

    }
    }
}
int main(){
int n;
cout<<"enter the size of the array: ";
cin>>n;
char arr[n];
cout<<"enter the elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
bubblesort<char>(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";


}
}
