#include <bits/stdc++.h>
using namespace std;
int main(){
string n;
int count;
cout<<"enter the string: ";
getline(cin,n);
cout<<"duplicate characters in a given string: "<<endl;
int l= n.length();
for(int i=0;i<l;i++){
    count=1;

for(int j=i+1;j<l;j++){
    if(n[i]==n[j] && n[i]!=' '){
        count++;
        n[j]='0';//visted
    }

}
if(count>1&&n[i]!='0')
    cout<<n[i];
}
}
