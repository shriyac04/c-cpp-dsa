/*#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class student{
public:
    int id;
    string name;
    void insert (int i,string n){
    id=i;
    name=n;

    }
void display(){
cout<<id<<" "<<name<<endl;
}
};
int main(){
student s1;
student s2;
s1.insert(201,"shriya");
s2.insert(202,"kittu");
s1.display();
s2.display();
return 0;


}*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4, m=6;
    int a[n]={1,2,3,6};
    int b[m]={2,3,6,8,1,1};
    int c[n+m];
    int j=0;
    int count=0;
    for(int i=0;i<n;i++)  c[i]=a[i];
    for(int i=n;i<n+m;i++) c[i]=b[j++];
    sort(c,c+(n+m));
    for(int i=0;i<n+m;i++){
        if(c[i]!=c[i-1]){
            count++;
        }
    }
    for (int i = 0; i < n + m; i++) {
        if (i == 0 || c[i] != c[i - 1]) {
            cout << c[i] << " ";
        }
    }
    cout << endl;
cout<<count<<endl;
return 0;}
