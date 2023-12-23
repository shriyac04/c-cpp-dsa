#include <bits/stdc++.h>
using namespace std;
int count_stair(int n){
if(n==1)
    return 1;
if(n==2)
    return 2;
return count_stair(n-1)+count_stair(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<count_stair(n);

}
