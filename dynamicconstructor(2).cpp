#include <bits/stdc++.h>
//dynamic constructor
using namespace std;
class geeks{
int *p;
public:
    geeks(){
    p= new int[3]{1,2,3}; //declaring and initializing at the same time

    for(int i=0;i<3;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    }
};
int main(){
geeks* ptr = new geeks[5];
return 0;
}
