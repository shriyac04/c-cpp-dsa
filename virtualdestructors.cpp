#include <bits/stdc++.h>
using namespace std;
class b{
    public:
b(){
    cout<<"in base class\n";
}
virtual ~b(){          // if we use virtual destructor then the derived class destructor will be called first then the base class
    cout<<"deletion of base class\n";
}
};
class d: public b{
public:
    d(){
    cout<<"in the derived class\n";
    }
~d(){
cout<<"deletion of derived class\n";
}
};
int main(){
b *ptr=new d;
delete ptr; // if we don't use virtual then the compiler will just call destructor of base class.
return 0;
}
