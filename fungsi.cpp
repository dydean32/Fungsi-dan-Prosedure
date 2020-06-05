#include <iostream>
using namespace std;

float fungsikuadrat(int x)
{
	return((2*x*x)+(5*x)+8);
}

int main()
{
	int x,hasil;
	cin>>x;
	hasil = fungsikuadrat(x);
	cout<<hasil;
}
