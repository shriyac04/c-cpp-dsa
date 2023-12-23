#include <bits/stdc++.h>
using namespace std;
bool specialchar(char c){
return !isalnum(c) && !isspace(c);
}
int main(){
    string n;
    cout<<"enter string: ";
    getline(cin,n);
    for(char c:n){
        if(specialchar(c)){
            cout<<c;
        }
    }
cout<<endl;


}
