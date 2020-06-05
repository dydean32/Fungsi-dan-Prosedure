#include <iostream>
using namespace std;
int x, y, hasil;
int fungsikuadrat()
{
	hasil = (x*x)+(y*y);
	return(hasil);
}

int main()
{
	cout<<"Masukan nilai X: ";
	cin>>x;
	cout<<"Masukan nilai Y: ";
	cin>>y;
	hasil = fungsikuadrat();  //isi parameter mengikuti parameter fungsi yang ada, isi parameter ini memanggil variabel main
	cout<<hasil;
}
