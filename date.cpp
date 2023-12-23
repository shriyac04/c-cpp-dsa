#include <bits/stdc++.h>
using namespace std;
class date{
int day;
int month;
int year;
public:
   date(int d,int m,int y):day(d),month(m),year(y){}
   void setdata(int d,int m,int y){
   day=d;
   month=m;
   year=y;

   }

    int getday() const{
    return day;
    }
    int getmonth() const{
    return month;
    }
    int getyear() const{
    return year;
    }
    bool isvaliddate()const{
    //check if the month is valid
    if(month<1 || month>12)
        return false;
    if(day<1 || day > 31)
        return false;

    if((month==4||month==6||month==9||month==11)&&day>30)
        return false;
    if(month==2){
        if((year%4==0)&&(year%100!=0)||(year%400==0)){
            if(day>29)
                return false;
        }
        else{
            if(day>28)
                return false;
        }
        }
        return true;
    }



    };
int main(){

int day,month,year;
cin>>day;
cin>>month;
cin>>year;
date Date(0,0,0);
Date.setdata(day,month,year);
cout<<Date.getday()<<"/"<<Date.getmonth()<<"/"<<Date.getyear()<<endl;
if(Date.isvaliddate())
cout<<"the date is valid"<<endl;
else
    cout<<"the date is invalid"<<endl;
return 0;
}




