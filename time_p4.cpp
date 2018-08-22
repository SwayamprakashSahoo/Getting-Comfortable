//include the library
#include<iostream>
using namespace std;
//declare the main function
int main()
//the process begins
{
//declare required variables
int day,year,week,day2,rem;
/*day is the number of days to be input by the user.
year is the number of years.
week is the number of weeks remaining.
day2 is the number of days remaining.
rem is an intermediate variable.*/
//record input
cout<<" Please enter the number of days:"<<endl;
cin>>day;
//conversion
year=day/365;
rem=day%365;
week=rem/7;
day2=day-((year*365)+(week*7));
//output
cout<<"The given number of days can be expressed as:"<<endl;
cout<<year<<" Years "<<week<<" Weeks "<<day2<<" Days"<<endl;
return 0;
}

