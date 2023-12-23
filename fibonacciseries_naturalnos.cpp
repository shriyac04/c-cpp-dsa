#include <bits/stdc++.h>
//fibonacci series of n natural nos

using namespace std;
void fib(int o){
    int m=0;
    int n=1;
    for(int i=1;i<=o;i++){
        cout<<m<<" ";
        int temp=m;
        m=n;
        n=temp+m;

    }
}
int main(){
int n;
cout<<"enter the no : ";
cin>>n;
cout<<endl;
fib(n);
return 0;
}
