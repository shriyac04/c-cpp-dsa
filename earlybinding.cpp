#include <bits/stdc++.h>
//any normal function call (without virtual) is considered to be early binded.
using namespace std;
class base{
public:
    void show(){
    cout<<"in base \n";
    }
};
class derived: public base{
public:
    void show(){
    cout<<"in derived \n";
    }
};
int main(){
base *b = new derived;
b->show();
return 0;
}
