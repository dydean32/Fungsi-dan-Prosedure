#include <iostream>
using namespace std;

int v,p,l,t;
void volumebalok()
{
	v =  p*l*t;
}

int main()
{
	cin>>p;
	cin>>l;
	cin>>t;
	volumebalok();
	cout<<v<<endl;
}
