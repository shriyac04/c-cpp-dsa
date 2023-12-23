#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=sqrt(n);
    //squareroot of a num and the value is taken in integer
    //if the square of that square rooted num is equal to the original number then it has odd no of factors
    //otherwise even no of factors

    if((x*x)==n)
        cout<<"odd";
        else
            cout<<"even";





}
