#include <iostream>
#include <map>
using namespace std;
int main(){
    //declaration of map
map<int,string>m;
//inserting elements
m[1]="kittu";
m[2]="shrek";
m[3]="shriya";
for(auto i:m){
    cout<<i.first<<" : ";  //will print keys
    cout<<i.second<<" "; //will print values
}
cout<<endl;
auto itr=m.find(2);
for(auto i=itr;i!=m.end();i++){
    cout<<(*i).first<<endl;
}
}
