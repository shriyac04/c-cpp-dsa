#include <bits/stdc++.h>
using namespace std;
class f{
int i,j;
public:
    f(int i,int j){
    this->i=i;
    this->j=j;
    }
    operator float() const{    //conversion operator
    return float(i)/float(j);
    }

};
int main(){
f a1(2,5);
float value=a1;// if don't mention this the cout statement tries to output an object of type f directly to the console without a specific defined output behavior for objects of class f. Hence, the compiler will try to convert a1 to a type compatible with the output stream (cout), and it will look for a suitable conversion operation.

In this case, the class f has a conversion operator operator float() const defined, which converts an object of type f to a float. Therefore, the compiler will implicitly invoke this conversion operator to convert the a1 object of class f into a float before outputting it.
cout<<value<<endl;
return 0;
}
