#include <bits/stdc++.h>
using namespace std;
int main(){
string n;
cout<<"enter the string: ";
getline(cin,n);
//assuming ascii characters from
bool exist[128] ={0};

cout<<"unique characters in the string: ";
for(char c : n){
    if(!exist[c]){
            cout<<c;
    exist[c]=true;

    }

}
cout<<endl;
}
