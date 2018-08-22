//include the library
#include<iostream>
using namespace std;
//declare the main function
int main()
//the process begins
{
//declare required variables
double cel,fah;
/*cel is the temperature in celcius to be input by the user.
fah is the temperature converted to fahrenheit scale.*/
//record input of user
cout<<" Please enter the temperature in celcius scale that you want to convert to fahrenheit scale:"<<endl;
//assign values to variable
cin>>cel;
//conversion
fah=((9*cel)/5)+32;
//output
cout<<"The required temperature in fahreinheit scale is "<<fah<<" Fahrenheits"<<endl;
return 0;
}
