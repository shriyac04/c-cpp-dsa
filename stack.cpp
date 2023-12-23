#include <iostream>
#include <stack>
using namespace std;
int main(){
    //declaration of stack
stack<string>s;
// inserting element
s.push("shrek");
s.push("shriya");
s.push("kittu");
//to print the top most element in stack
cout<<"top element: "<<s.top()<<endl;  //kittu
//to pop the element
s.pop();
cout<<"top element: "<<s.top()<<endl; //shriya
cout<<"size: "<<s.size()<<endl;
cout<<"empty or not? "<<s.empty()<<endl;
}
