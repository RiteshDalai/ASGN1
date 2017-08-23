#include<iostream>
using namespace std;
double rec()
{
	double l;
	double b;
	cout << "Enter length of a rectangle: " << endl;
	cin >> l;
	cout << "Enter breadth of a rectangle: " << endl;
	cin >> b;
	double a=l*b;
	cout << "The area of that rectangle: " << a << endl;
}
int main()
{
	rec();
	return 0;
}

