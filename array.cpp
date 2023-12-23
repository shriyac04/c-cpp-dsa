#include <iostream>
#include <array>
#include <bits/stdc++.h>
using namespace std;
int main(){
// for static array
array<int,4> a={1,2,3,4};
//size
int size=a.size();
//using for-loop
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}
//using range-based iteration
cout<<endl;
for(int i:a){
    cout<<i<<" ";
}
cout<<endl;
//direct accessing elements
cout<<"element at 2nd index: "<<a.at(2)<<endl;
// to check if your array is empty or not
cout<<"checking the array..."<<endl;
//returns in terms of 0=false and 1=true.
cout<<a.empty()<<endl;
//to get the first element
cout<<"first element: "<<a.front()<<endl;
//to get the last element
cout<<"last element: "<<a.back()<<endl;

}
