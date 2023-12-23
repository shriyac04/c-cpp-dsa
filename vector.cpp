#include <iostream>
#include <vector>
using namespace std;
int main(){
//to create a vector
//vector = dynamic array
//initialization technique-1
vector<int>v;
//to check the capacity of vector
cout<<"size(space consumed)/capacity: "<<v.capacity()<<endl;
// how to push-in / store elements in an array
v.push_back(1);
cout<<"size(space consumed)/capacity: "<<v.capacity()<<endl;
v.push_back(2);
cout<<"size(space consumed)/capacity: "<<v.capacity()<<endl;
v.push_back(3);
cout<<"size(space consumed)/capacity: "<<v.capacity()<<endl;
v.push_back(4);
cout<<"size(space consumed)/capacity: "<<v.capacity()<<endl;
v.push_back(5);
cout<<"size(space consumed)/capacity: "<<v.capacity()<<endl;
//size
cout<<"no. of elements present in vector: "<<v.size()<<endl;
//front
cout<<"first element: "<<v.front()<<endl;
cout<<"last element : "<<v.back()<<endl;
//to pop/ remove the element
cout<<"before pop"<<endl;
for(int i:v){
    cout<<i<<" ";
}
cout<<endl;
v.pop_back();
cout<<"after pop"<<endl;
for(int i:v){
    cout<<i<<" ";
}
//clearing vector : means discarding all elements in a vector
//here, size=0 but capacity remains the same(capacity!=0).
v.clear();
cout<<"no. of elements present in vector: "<<v.size()<<endl;
cout<<"capacity: "<<v.capacity()<<endl;

//initialization technique-2
vector <char> a(5,'a'); //a vector of size 5 that has all elements as 'a'
for(char i:a){
    cout<<i<<" ";
}
cout<<endl;
//to copy a vector into an another one
vector<char> copys(a);
for(char i:copys){
    cout<<i<<" ";
}
}

