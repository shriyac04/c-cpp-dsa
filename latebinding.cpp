#include <bits/stdc++.h>
using namespace std;
class b{
public:
    virtual void show(){
    cout<<"in base \n";
    }
};
class d: public b{
public:
    void show(){
      cout<<"in derived \n";
              }
};
int main(){
b *bp = new d;
bp->show();
return 0;
}
