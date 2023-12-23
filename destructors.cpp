#include <bits/stdc++.h>
using namespace std;
int counts =0;
class a{
public:
a(){
counts++;
cout<<"\n no. of object created: \t"<<counts;
}
~a(){
cout<<"\n no of object destroyed:\t"<<counts;
--counts;

}

};
int main(){
a t,t1,t2,t3;
return 0;
}
