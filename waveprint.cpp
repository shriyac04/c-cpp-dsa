#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n;
cout<<"enter the size of the matrix: ";
cin>>n;
int arr[n][n];
cout<<"enter the element: ";
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
   cin>>arr[i][j];
}
}
cout<<"the 2-d matrix is:\n";
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
   cout<<arr[i][j]<<" ";

}
cout<<endl;
}
for(int i=0;i<n;i++){
        if(i%2==0){
        for (int j=n-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
}else{
for (int k=0;k<n;k++){
        cout<<arr[k][i]<<" ";

}

}
 cout<<endl;
}
}

