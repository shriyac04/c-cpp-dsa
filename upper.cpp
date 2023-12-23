#include<bits/stdc++.h>
using namespace std;
int main(){
string n;
cout<<"enter the string : ";
getline(cin,n);

cout<<"the uppercase characters in string are: " ;
for(char c : n){
    if(isupper(c)){   // islower: for lowercases
        cout<<c;
    }
}
cout<<endl;
}
