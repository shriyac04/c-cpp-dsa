#include <bits/stdc++.h>
using namespace std;
class a{
static int count;
public:
    a(){
    count++;
    cout<<"constructor called - count: "<<count<<endl;
    }
~a(){
count--;
cout<<"destructor called -count: "<<count<<endl;
}
static void display(){
cout<<"current count: "<<count<<endl;
}
};
int a::count=0;
int main(){
a obj1,obj2,obj3;
a::display();
return 0;
}
