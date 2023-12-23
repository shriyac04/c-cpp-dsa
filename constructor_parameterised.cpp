#include <bits/stdc++.h>
using namespace std;
class s{
int x,y;
public:
    s(int x,int y){
    this->x=x;   //this pointer is used here
    this->y=y;   //this pointer is used here
    }
int getx(){
return x;
}
int gety(){
return y;
}
};
int main(){
s st(10,15);
cout<<st.getx()<<"\t"<<st.gety();
return 0;

}
