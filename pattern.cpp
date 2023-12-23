#include<bits/stdc++.h>
using namespace std;
void drawPattern(int r){
for(int i=1;i<=r;i++){
for(int j=1;j<=i;j++){
    cout<<j<<" ";
}
cout<<endl;
}

}
int main(){
int n;
cout<<"enter the size: ";
cin>>n;
drawPattern(n);

}
