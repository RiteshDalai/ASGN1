#include<iostream>
using namespace std;
double circle()
{
	double r;
	
	cout << "Enter radius of the circle: " << endl;
	cin >> r;
	double d=2*r;
	cout << "diamater of the circle is : " << d <<endl;
	double c=(2*3.14*r);
	cout << "circumference of the circle is : " << c << endl; 
	double a=3.14*(r*r);
	cout << "The area of the circle is : " << a << endl;
}
int main()
{
	circle();
	return 0;
}

