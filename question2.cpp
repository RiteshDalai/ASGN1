#include<iostream>
using namespace std;
int sum()
{
	int a;
	int b;
	cout << "Enter 1st integer:" << endl;
	cin >> a;
	cout << "Enter 2nd integer:" << endl;
	cin >> b;
	int s=a+b;
	cout << "Sum of " << a << " & " << b << " = " << s << endl;
}
	
int main()
{
	sum();
	return 0;
}

