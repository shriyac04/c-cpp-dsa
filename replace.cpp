#include<bits/stdc++.h>
using namespace std;
//replace
//replace_if
bool isOdd(int i){
return((i%2)==1);
}
int main(){
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int old_val=20,new_value=99;
    cout<<"original array: ";
    for(int i =0;i<n;i++)
    cout<<' '<<arr[i];
    cout<<"\n";
    replace(arr,arr+n,old_val,new_value);

    for(int i:arr){
        cout<<i<<" ";

    }
    cout<<endl;
    //replace if
    replace_if(arr,arr+n,isOdd,new_value);
    for(int i:arr){
        cout<<i<<" ";
    }
}

