#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    }
    cout<<endl;

    bool unique[n];
    for(int j=0;j<n;j++){
        unique[j]=true;
    }
    cout<<"the unique elements in the given array: "<<endl;
    for(int i=0;i<n;i++){
            if(unique[i]){
               for(int k=i+1;k<n;k++){
                if(arr[i]==arr[k]){
                    unique[k]=false; //making changes in a virtual array
                }
               }
               cout<<arr[i]<<" ";
            }

        }
    }




