#include <bits/stdc++.h>
using namespace std;
class shape{
public:
    virtual float area()=0;

};
class square:public shape{
float a;
public:
    square(float l):a(l){}
    float area(){
   return a*a;

    }
};
class circle:public shape{
float r;
public:
    circle(int b):r(b){
    }
float area(){
return 3.14*r*r;
}
};
int main(){
shape *shape;
square s(3.4);
circle c(4);
shape =&s;
float a1=shape->area();
shape=&c;
float a2=shape->area();
cout<<"the area of the square: "<<a1<<endl;
cout<<"the area of the circle: "<<a2<<endl;
return 0;
}
