//include the library
#include<iostream>
#include<cmath>
using namespace std;
//declare the main function
int main()
//the process begins
{
//declare required variables
double p,t,r,ci;
/*p indicates the principal.
t indicates time of investment.
r indicates the rate of compound interest
ci indicates the compound interest for the time period*/
//taking values for variables
cout<<"Please enter the principal amount:"<<endl;
cin>>p;
cout<<"Please enter the time of investment in years:"<<endl;
cin>>t;
cout<<"Please enter the rate of interest per annum:"<<endl;
cin>>r;
//calculation
ci=p*(pow((1+r/100),t))-p;
//output
cout<<"The compound interest for the given time period is:"<<ci<<endl;
return 0;
}


