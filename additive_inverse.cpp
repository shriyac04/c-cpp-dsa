#include <bits/stdc++.h>
using namespace std;
class a{
int x;
public:
    a(int x){
    this->x=x;
    }
a operator-(){
    x= -x;
}
void display(){
cout<<x;
}

};
int main(){
a a1(10);
-a1;
a1.display();
return 0;

}
