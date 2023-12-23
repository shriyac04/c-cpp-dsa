#include <bits/stdc++.h>
//constructor overloading
using namespace std;
class a{
    public:
float area;

a(){
area=0;
}
a(int a,int b){
area= a*b;
}
void display(){
cout<<area<<endl;
}
};
int main(){
a a1(3,2);
a1.display();
return 0;
}
