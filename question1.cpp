#include<iostream> 
using namespace std;
int integer()
{
	int a;
	cout << "Enter an integer:";
	cin >> a;
	return a;
}
double decimal()
{
	double c;
	cout <<"Enter your exact weight:" << endl;
	cin >> c;
	return c;
}
bool torf()
{
	cout << boolalpha;
	bool b;
	cout << "Are you a robot(1=true/0=false)?" << endl;
	cin >> b;
	return b;
}
char yos()
{
	char r;
	cout << "Enter the initial of your first name:" << endl;
	cin >> r;
	return r;
}

int main()
{
	cout << "Your name is:" << yos() << endl;
	cout << "The integer is:" << integer() << endl;
	cout << "Your weight is:" << decimal() << endl;
	cout << "Are you a Robot?" << " " << torf() << endl;
	return 0;
}

