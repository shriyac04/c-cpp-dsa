#include <bits/stdc++.h>
using namespace std;
void palindrome(string n){
string m=n;
reverse(m.begin(),m.end());

if(n==m)
    cout<<"it's a palindrome";
else
    cout<<"it's not a palindrome";

}
int main(){
    string n;
cout<<"enter the string: ";
getline(cin,n);
palindrome(n);


}
