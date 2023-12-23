#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
 int n;
    cout<<"enter n: ";
    cin>>n;
    int i = 0;
while (i < n) {
  if (i == 4) {
    i++;
    continue;
  }
  cout << i << "\n";
  i++;
}
}
