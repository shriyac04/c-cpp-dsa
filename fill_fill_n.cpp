#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int> vect(8);
vector<int> vecto(8);
//fill
fill(vect.begin()+1,vect.end()-1,4);
for(int i:vect){
    cout<<i<<" ";
}
cout<<endl;
//fill_n
fill_n(vecto.begin(),3,8);
for (int i:vecto){
    cout<<i<<" ";
}
cout<<endl;
copy_n(vect.begin(),3,vecto.end()-4);
for(int i:vecto){
    cout<<i<<" ";
}
return 0;

}
