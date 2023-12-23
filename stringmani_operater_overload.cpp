#include <bits/stdc++.h>
//using unary operator overloading
using namespace std;
class add{
public:

    char s1[30],s2[40];
    add(char str1[],char str2[]){
    strcpy(this->s1,str1);
    strcpy(this->s2,str2);

    }
    void operator+(){
    cout<<"concatenation: "<<strcat(s1,s2);

    }

};
int main(){
char str1[]= "geeks";
char str2[]= "forgeeks";
add a1(str1,str2);
+a1;
}
