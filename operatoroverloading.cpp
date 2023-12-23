#include <bits/stdc++.h>
using namespace std;
//for adding two complex nos
class com{
int real,image;
public:
    com(int r=0,int i=0):real(r),image(i){
    }
    com operator+(com const &obj){    // operator: allows you to redefine the behavior of operators to work with user-defined types or classes.
    com res
    res.real=real+obj.real;
    res.image=image+obj.image;
    return res;
    }
    void print(){ cout << real << " + i" << image << "\n";
    }

};
int main()
{
    com c1(10, 5), c2(2, 4);
    com c3 = c1 + c2;
    c3.print();
    return 0;
}
