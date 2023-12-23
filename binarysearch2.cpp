#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
int n;
cout<<"enter the size : ";
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
cout<<endl;
for(int i:v){
    cout<<i<<" ";
}
cout<<endl;
int binary;
cout<<"enter the no. you want to search: ";
cin>>binary;
int s=binary_search(v.begin(),v.end(),binary);
auto it=find(v.begin(),v.end(),binary);
int index= distance(v.begin(),it);
if(s)
    cout<<"element found ! at "<<index;
else
    cout<<"alas!";

}
