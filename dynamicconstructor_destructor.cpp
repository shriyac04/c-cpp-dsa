#include <bits/stdc++.h>
using namespace std;
class geeks{
int *p;
public:
    geeks(){
    p= new int(0);
    //*p=0
    }
    geeks(int x){
    p= new int(x);
    //*p=x
    }
    void display(){
    cout<<*p<<endl;
    }
};

int main(){
geeks obj1;
//geeks obj1=geeks();  explicitly calling
obj1.display();
geeks obj2=geeks(7);
//geeks obj2(7);      implicitly calling
obj2.display();
return 0;

}

