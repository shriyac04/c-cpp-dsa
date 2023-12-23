#include <bits/stdc++.h>
using namespace std;
int main(){

string n;
  string vow="aeiouAEIOU";
  int vowels=0;
cout<<"enter the string: ";
cin.ignore();
getline(cin,n);

for(int i=0;n[i]!='\0';i++){
    for(int j=0;j<=vow.length();j++){
        if(vow[j]==n[i]){
            vowels++;
        }
    }
}
cout<<"no .of vowels: "<<vowels;
return 0;
}
