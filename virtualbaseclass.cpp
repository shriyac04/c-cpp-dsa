#include <bits/stdc++.h>
//in order to prevent ambiguity we use virtual keyword
using namespace std;
class a{
    public:
    int x;

    a(){

    x=10;
    }
};
class b: public virtual a{      //we can either write virtual before public
};
class c: virtual public a{    //or after virtual
};
class d: public b,public c{
};
int main(){
d object ;
cout<<"a= "<<object.x<<endl;
return 0;
}
