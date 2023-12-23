#include <bits/stdc++.h>
using namespace std;
class chkNumber{
int n;
    public:
        chkNumber(int y){
            n=y;
            if(n>0)
                cout<<"it's a positive number";
            else if(n==0)
            cout<<"It's neutral";
            else
                cout<<"it's a negative number";

}


};
int main(){
    int n;
cout<<"enter the number: ";
cin>>n;
chkNumber num1(n);
}





