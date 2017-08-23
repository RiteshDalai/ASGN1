#include<iostream>
using namespace std;
double arit()
{
	double a;
	double b;
	cout << "Enter 1st number" << endl;
	cin >> a;
	cout << "Enter 2nd number" << endl;
	cin >> b;
	double s=a+b;
	double p=a*b;
	double d=a/b;
	double m=a-b;
	cout << "SUM= " << s << endl;
	cout << "Prouduct= " << p << endl;
	cout << "Difference= " << m << endl;
	cout << a << " divided by " << b << " = " << d << endl;
}

int main()
{
	arit();
	return 0;
}

