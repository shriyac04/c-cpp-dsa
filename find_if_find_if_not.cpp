#include <bits/stdc++.h>
using namespace std;
//find_if
// Returns true if argument is even
bool IsEven(int i){
return ((i%2)==0);
}
//return true if the argument is odd
bool IsOdd(int i) {
    return (i % 2); }


int main()
{
    vector<int> vec{ 10, 25, 40, 55 };

    // Iterator to store the position of element found
    vector<int>::iterator it;
    vector<int>::iterator itr;

    // std::find_if
    itr=find_if_not(vec.begin(),vec.end(),IsEven);
    it = find_if(vec.begin(), vec.end(), IsOdd);
    cout<<"the first odd value is: "<<*itr<<endl;
    cout << "The first odd value is " << *it << '\n';

    return 0;

}
