#include <bits/stdc++.h>
//explicit call
using namespace std;
class d{
    int x;
public:
    int dis(int d){
    x=d;
    }
    d(){
    }
    d(d &r){
    x=r.x;
    }
    void display(){
    cout<<x<<endl;
    }
};
int main(){
d d1;
d1.dis(10);
d1.display();
d d2(d1);
d2.display();
return 0;
}
