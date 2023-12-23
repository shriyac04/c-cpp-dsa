#include <bits/stdc++.h>
using namespace std;
class vehicle{
public:
    vehicle(){
    cout<<"this is a vehicle\n";
    }
};
class car: public vehicle{

};
int main(){
car obj;
return 0;

}
