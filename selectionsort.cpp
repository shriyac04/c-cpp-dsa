#include <bits/stdc++.h>
//selection sort
using namespace std;
int main(){
int n;
cout<<"enter the size of the array: ";
cin>>n;
int arr[n];
cout<<"enter the elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];

}
cout<<"the original array is: ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

}
cout<<endl;
for(int i=0;i<n-1;i++){
        int min_index=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
            min_index=j;
            }
    }
if(min_index !=i){
                int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
            }
}

cout<<"the sorted array is : ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
