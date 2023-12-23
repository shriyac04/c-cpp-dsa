 #include <iostream>
 #include <queue>
 using namespace std;
 int main(){
 //declaration of queue
 queue<string>q;
 // inserting element
q.push("shrek");
q.push("shriya");
q.push("kittu");
//accessing the first element
cout<<"first element: "<<q.front()<<endl;
//to pop an element
q.pop();
cout<<"after pop : "<<q.front()<<endl;
cout<<"size: "<<q.size()<<endl;

 }
