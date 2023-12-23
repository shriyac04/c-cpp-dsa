#include <bits/stdc++.h>
using namespace std;
class s{
int x,y;
public:
    s(int x,int y){
    this->x=x;  //this operator is used here
    this->y=y;  //this operator is used here
    }
    int disx(){
    return x;
    }
    int disy(){
    return y;
    }
};
int main(){
s st(20,30);
cout<<"x: "<<st.disx()<<endl;
cout<<"y: "<<st.disy();
return 0;
}
