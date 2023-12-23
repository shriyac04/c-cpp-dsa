#include <bits/stdc++.h>
using namespace std;
bool armstrong(int n){
    int temp=n;
int arm=0;
int rem;
while(temp!=0){
    rem=temp%10;
    arm+=rem*rem*rem;
    temp/=10;
}
return(arm==n);
}
int main(){
int n;
cout<<"enter the number: ";
cin>>n;
if(armstrong(n)){
  cout<<"it's an armstrong number";
}
else{
    cout<<"it's not an armstrong number";
}
}
