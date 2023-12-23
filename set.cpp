#include <iostream>
#include <set>
using namespace std;
int main(){
    //declaration of set
set<int>a;
//inserting values in set
a.insert(8);
a.insert(9);
a.insert(8);
a.insert(8);
a.insert(7);
//printing set
for(auto i:a){
    cout<<i<<" ";
}
cout<<endl;
//deleting elements
set<int>::iterator it=a.begin();
it++;

a.erase(it);
for(auto i:a){
    cout<<i<<" ";
}
//to check whether a particular element exists or not
cout<<endl;
cout<<"is 5 present or not? " <<a.count(5)<<endl;  //returns in bool (1/0)
set<int>::iterator itr=a.find(7);
cout<<"value present at iterator itr: "<<*itr<<endl;
//to print elements present in a set from a range using iterator [m-2]
for(auto it=itr;it!=a.end();it++){
    cout<<*it<<" ";
    }
    cout<<endl;
}
