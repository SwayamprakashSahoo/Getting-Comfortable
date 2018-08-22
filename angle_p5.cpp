//include the library
#include<iostream>
using namespace std;
//declare the main function
int main()
//the process begins
{
//declare required variables
double angle1,angle2,angle3;
/*angle1 and angle2 are to be input by the user.
angle3 is the 3rd angle of the triangle.*/
//taking values for variables
cout<<"Please input the 1st angle of the triangle:"<<endl;
cin>>angle1;
cout<<"Please input the 2nd angle of the triangle:"<<endl;
cin>>angle2;
//calculation of 3rd angle
angle3=180-(angle1+angle2);
//output
cout<<"The 3rd angle of the triangle is:"<<endl;
cout<<angle3<<endl;
return 0;
}
