#include <iostream>
using namespace std;

void Degistir(int& a,int &b)
{
	int temp;

	temp=a;
	a=b;
	b=temp;
}

int main(int argc, char const *argv[])
{
	
	/// Bu örnekte iki değişken tanımlıycaz bu değişkenlerin değerlerini fonksiyon ve referans yardımıyla  değiştiricez

	int d1=20;
	int d2=70;

	cout<<"D1'in degeri...:"<<d1<<endl;
	cout<<"D2'nin degeri..:"<<d2<<endl;

	Degistir(d1,d2);

	cout<<"Yeni degerler...:"<<endl<<endl;

	cout<<"D1'in degeri...:"<<d1<<endl;
	cout<<"D2'nin degeri..:"<<d2<<endl;

	return 0;
}