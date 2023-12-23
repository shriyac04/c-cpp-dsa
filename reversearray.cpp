#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    string arr[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<"printing elements in reverse order: ";
 for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

}
