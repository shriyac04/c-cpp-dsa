#include <bits/stdc++.h>
using namespace std;
class w{
int a,b,c;
public:
    w(int x,int y,int z):a(x),b(y),c(z){
    }
void display(){
cout<<"a: "<<a<<"\t"<<"b: "<<b<<"\t"<<"c: "<<c<<endl;
}
};
int main(){
w a1(1,2,3);
a1.display();
return 0;
}
