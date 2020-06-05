#include <iostream>
using namespace std;

void volumebalok(int p, int l, int t, int *v)
{
	*v =  p*l*t;
	
}

int main()
{
	int panjang, lebar, tinggi, vol;
	cin>>panjang;
	cin>>lebar;
	cin>>tinggi;
	volumebalok(panjang,lebar,tinggi,&vol);
	cout<<vol<<endl;
}
