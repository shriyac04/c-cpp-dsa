#include <bits/stdc++.h>
//operator overloading of binary operators using friend function
using namespace std;
class d{
    double real;
    double image;
public:
    d(double r=0.0,double i=0.0): real(r),image(i){};
    friend d operator+(const d &a,const d &b);
void display() const{
cout<<real<<" + "<<image<<" i "<<endl;
}
};
d operator+(const d &a,const d &b){
return d(a.real+b.real,a.image+b.image);
}
int main(){
d a1(2.0,3.0);
d a2(3.0,2.0);
d result= a1+a2;
result.display();
return 0;

}
