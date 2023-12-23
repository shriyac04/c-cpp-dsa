#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void fun1(){
cout<<"this is function 1";
}
void func2(void(*func)()){

func();
}
int main(){
func2(fun1);
return 0;
}
