//include the library
#include<iostream>
using namespace std;
//declare the main function
int main()
//the process begins
{
//declare required variables
double cml,ml,kml;
/*cml is the length in centimeter to be input by user.
ml is the length c converted to meters.
kml is the length c converted to kilometers.*/
//input of data
cout<<"Please input the length in centimeters:"<<endl;
//required conversion
cin>>cml;
ml=cml/100;
kml=ml/1000;
//output
cout<<"The input length is "<<cml<<"centimeters"<<endl;
cout<<" The input length in meters is "<<ml<<"meters"<<endl;
cout<<" The input length in kilometers is "<<kml<<"kilometers"<<endl;
return 0;
}


