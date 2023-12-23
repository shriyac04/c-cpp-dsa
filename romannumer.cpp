#include <bits/stdc++.h>
using namespace std;
int roman(string s){
int result=0;
for(int i=0;i<s.length();i++){
    char first=s[i];
    char second=(i<s.length()-1)?s[i+1]:'\0';
    switch(first){
case 'I':
    result+=(second=='V'||second=='X')?-1:1;
    break;
case 'V':
    result+=5;
    break;
case 'X':
    result+=(second=='L'||second=='C')?-10:10;
    break;
case 'L':
    result+=50;
    break;
case 'C':
    result+=(second=='D'||second=='M')?-100:100;
    break;
case 'D':
    result+=500;
    break;
case 'M':
    result+=1000;
    break;
default:
   return -1;
    }
}
return result;
}
int main(){
string num;
cout<<"enter the roman numeral: ";
getline(cin,num);
int result=roman(num);
if(result==-1)
    cout<<"invalid!";
else
    cout<<"the number: "<<result<<endl;



}


