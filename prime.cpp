#include <bits/stdc++.h>
using namespace std;
class chkPrime{
private:
    int num;
public:
    chkPrime(int n){
    num=n;
    if(num>1){
        bool isPrime=true;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime)
            cout<<num<<" is a prime number";

        else
        cout<<"it's not a prime no";
    }

    }


};
int main(){
int n;
cout<<"enter the no: ";
cin>>n;
chkPrime n1(n);
return 0;

}
