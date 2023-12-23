#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void swap(int *x , int *y){
int swap;
swap=*x;
*x=*y;
*y=swap;

}
int main(){
int x1=500,y1=600;
swap(&x1,&y1);
cout<<"value of x is "<<x1<<endl;
cout<<"value of y is "<<y1<<endl;


}
