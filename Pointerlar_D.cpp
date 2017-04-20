#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	/*
	Genel programlar 2 tip bellek kullanır.
	Bunlar Stack(Yığın), Heap(Öbek).

	Stack: main()  fonksiyonu içine tanımlanan tüm değişkenleri ram bellekte saklar.
	Bir kuyuya atılan taş gibi düşünün.
	Heap:Çalışan programların kullanabileceği boş bir alan, burada yeni bir değişken oluşturup
	istediğimiz zaman ram bellekten silebiliriz.
	Bir kütüphaneye eklenen kitap gibi duşunun o kitabı istediğmiz zaman alıp okuyabiliriz.
	*/

	// Dinamik değişkeni kullanmak için...
	// veri_tipi *değişkenin_ismi=new veri_tipi;
	// değişken pointer türünden olmak zorunda!!!

	int *a=new int;
	*a=20;

	cout<<*a<<endl;


	// işimiz bittiğinde bellekten silmek için

	delete a;


	return 0;
}