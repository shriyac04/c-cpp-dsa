#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
int n;
    cout<<"enter n: ";
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cout<<"enter the string: "<<endl;
    cin>>arr[i];

   }
   cout<<"the user-inputed array is: "<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i];
    cout<<"\t";
    }


}
