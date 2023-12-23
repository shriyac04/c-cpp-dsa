#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
int a;
cout<<"enter the size of the array: ";
cin>>a;
int arr[a];

cout<<"enter the elements: ";
for(int i=0;i<a;i++){
    cin>>arr[i];
}
int largest=arr[0];
for(int i=1;i<a;i++){
   if(arr[i]>largest){
        largest=arr[i];

   }

}
cout<<largest;
}

