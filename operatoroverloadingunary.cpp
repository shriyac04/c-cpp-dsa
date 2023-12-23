#include <bits/stdc++.h>
using namespace std;
class a{
int x;
public:
    a(int val):x(val){}
a operator++(){   //prefix operator
++x;
return *this;

}
a operator++(int){  //postfix operator
a temp =*this;      // deferencing operator = it's actually the object.
//temporary variable is used to preserve the original value (rem the postfix condition)
++x;
return temp;
}
int get() const {
return x;
}
};
int main(){
a a1(4);
cout<<"original value: "<<a1.get()<<endl;
a prefix =++a1;
cout<<"prefix value: "<<prefix.get()<<endl;
a postfix=a1++;
cout<<"postfix value: "<<postfix.get()<<endl;
cout<<"original value now: "<<a1.get()<<endl;
return 0;

}
