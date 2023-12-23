#include <bits/stdc++.h>
//using binary operator overloading
using namespace std;
class add{
public:
    char str[100];
add(){}
add(char str[])
{
    strcpy(this->str,str);
}
add operator+(add &b){
add c;
strcpy(c.str,this->str);
strcat(c.str,b.str);
return c;
}
void display(){
cout<<"concatenation: "<<str;
}

};
int main(){
char str1[]="geeks";
char str2[]="forgeeks";
add a1(str1);
add a2(str2);
add a3;
a3=a1+a2;
a3.display();
return 0;
}
