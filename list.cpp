#include <iostream>
#include <list>
using namespace std;
int main(){
    //declaration of list
list<int> l;
//inserting elements in front and back
l.push_back(1);
l.push_front(2);
l.push_back(5);
for(int i:l){
    cout<<i<<" ";
}
cout<<endl;
//erase
l.erase(l.begin());
cout<<"after erase: "<<endl;
for(int i:l){
    cout<<i<<" ";
}

}
