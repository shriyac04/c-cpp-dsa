#include <iostream>
#include <queue>
using namespace std;
int main(){
//declaration of priority queue (max-heap)
priority_queue<int> maxi;
//min-heap
priority_queue<int,vector<int>,greater<int> > mini;
//inserting elements in queue
maxi.push(1);
maxi.push(2);
maxi.push(3);
mini.push(4);
mini.push(3);
mini.push(2);
//to determine the size of queue
cout<<"size of min-heap: "<<mini.size()<<endl;
cout<<"size of max-heap: "<<maxi.size()<<endl;

int n=maxi.size(); //since, the size of queue is changing
//printing elements in a queue
for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();

}
cout<<endl;
cout<<"empty or not? "<<maxi.empty()<<endl;
//for mini queue
int m=mini.size(); //since, the size of queue is changing
//printing elements in a queue
for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();

}
cout<<endl;
cout<<"empty or not? "<<mini.empty()<<endl;
}
