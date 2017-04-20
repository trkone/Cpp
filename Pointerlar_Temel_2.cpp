#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a=100;
	int *p;

	p=&a;

	cout<<a<<endl;		//a'nın değeri
	cout<<*p<<endl;		// p pointerınınm içersinde tuttuğu a değişkeninin değeri

	cout<<&a<<endl;		//a değişkenin adresi
	cout<<p<<endl;		// p pointerının tuttuğu değişkenin adresi

	cout<<&p<<endl;		//pointerın adresi

	return 0;
}