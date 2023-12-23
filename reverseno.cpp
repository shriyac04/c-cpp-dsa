#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter the no: ";
cin>>n;
int temp=n;
int reversed=0;
int rem;
while(temp!=0){
rem=temp%10;
reversed=reversed*10+rem;
temp/=10;
}
cout<<"the reverse of the no. :"<<reversed;
}
