#include <bits/stdc++.h>
using namespace std;
int main(){
int a=9,b=8;
//maximum element
cout<<"max: "<<max(a,b)<<endl;
//minimum element
cout<<"min: "<<min(a,b);
cout<<endl;
//swap elements
swap(a,b);

cout<<"a: "<<a<<" ";
cout<<"b: "<<b<<endl;

//reverse a string
string a1= "hello";
reverse(a1.begin(),a1.end());
cout<<"string: "<<a1<<endl;

vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
for(int i:v){
    cout<<i<<" ";
}
cout<<endl;

//rotate an array by 1
rotate(v.begin(),v.begin()+1,v.end());
//start,middle,end
cout<<"after rotate: ";
for(int i:v){
    cout<<i<<" ";
}

}
