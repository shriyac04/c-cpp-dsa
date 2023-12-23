#include <bits/stdc++.h>
using namespace std;
template <typename z> z mymax(z x,z u){
return(x>u)? x:u;
}

int main(){
cout<<mymax<int>(9,8)<<endl;
cout<<mymax<char>('a','b')<<endl;
}
