#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int sum(int arr[],int n ,int i){
if(i<0||i>=n){
    return(0);
}

else{
    return(arr[i]+sum(arr,n,i+1));
}

}

int main(){
    int n,summ=0;
    cout<<"enter the size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     summ=sum(arr,n,0);
cout<<"the sum of elements of an array is: "<<summ;


}

