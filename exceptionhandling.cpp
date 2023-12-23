#include <bits/stdc++.h>
using namespace std;
double div(int a,int b){
if(b==0){
    throw "division by zero condition!";
}
return (a/b);
}
int main(){
    int a,b;
    double z;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    try{
    z=div(a,b);
    cout<<z<<endl;
    }
    catch(const char* msg){
    cout<<msg<<endl;
    }
    return 0;

    }


