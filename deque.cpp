#include <iostream>
#include <deque>
using namespace std;
int main(){
//declaring a deque
deque<int>d;
//inserting elements in the end of DQ (default: for vector)
d.push_back(1);
//to insert an element in front of DQ
d.push_front(5);
d.push_back(6);
d.push_front(7);
for(int i:d){
    cout<<i<<" ";
}
cout<<endl;
//to pop elements from the end of DQ
d.pop_back();
for(int i:d){
    cout<<i<<" ";
}
cout<<endl;
//to pop elements from the front of DQ
d.pop_front();
for(int i:d){
    cout<<i<<" ";
}
cout<<endl;
cout<<"the 1st element: "<<d.at(0)<<endl;
cout<<"first element: "<<d.front()<<endl;
cout<<"last element : "<<d.back()<<endl;
cout<<"is empty or not? "<<d.empty()<<endl;
cout<<"size of dq (before): "<<d.size()<<endl;
//to erase the element from a specific location
//here, we have use iterator that range from the begin to begin+1 [0,2)
d.erase(d.begin(),d.begin()+1);
cout<<"size of dq (after): "<<d.size()<<endl;

for(int i:d){
    cout<<i<<" ";
}

}
