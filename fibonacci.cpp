#include <bits/stdc++.h>
using namespace std;
void printFibonacci(int s ,int m, int e){

for(int i=1;i<=e;i++){
    cout<<s<<" ";
    int temp=s;
    s=m;
    m=temp+s;
}

}
int main(){
    int s,e;
cout<<"enter the starting point: ";
cin>>s;
cout<<"enter the ending point: ";
cin>>e;
cout<<"the fibonacci series for the range "<<s<<" to "<<e<<" is: ";
printFibonacci(s,s+1,e);
cout<<endl;

}
