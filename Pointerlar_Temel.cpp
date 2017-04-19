#include <iostream>
using namespace std;

//			POİNTERLAR(işaretciler)

int main(int argc, char const *argv[])
{
	
	/*  Normal bir değişkeni bir kutu gibi düşünürsek o kutuya istediğimiz DEĞERİ yazabilioduk hatırlarsanız.
		Pointerlarda benzer bir işlem yapıyor,
		Aradaki fark;
		Değişkenler...:Bir değeri tutan kutular.
		Pointerlar....:Bir değişkenin bellek adresini tutan kutular.
		Kabaca mantığı böyle basit bir ornekle anlıyacaksınız.
	*/

	int degisk=20;	// degisk isimli bir int veri turunde degisken olusturduk,

	/* 
	
	Burada poin Adlı bir pointer oluşturduk.Eğer bir pointer tanımlamak istersek *  operatorunu
	degiskenin basina getirmek zorundayız.;

	Veri_Tipi *Degiskenin_ismi;

	*/

	int *poin;	//Evet Bir pointer tanımladık ama bu pointerın içi boş.Bunu bir kargo kutusu olarak dusunun
	// 	Kargo hazır ama nereye gidicek 


	poin=&degisk; // Evet burada kargomuzun gidecek adresi belli oldu.
	//Burada Yaptığımız işlem 
	// degisk adlı değişkenin adresini ||| poin adlı pointera aktar.
	// son olarak  &degisk 'deki  & operatoru bu operator degiskenin adresini doğrudan gormemize yarıo

	//o kadar yazdık artık bi ekranda ne yaptık ne ettik bakalım.

	cout<<&degisk<<endl;		// &  operatoruyle degiskin ram bellekteki adresini ekrana yazdır dedik.
	cout<<poin<<endl;			// point hatırlarsanız bir adres tutuoudu 8 satır uste  programa-->>>
	// poin adlı işaretci   degisk adlı değişkenin adresini tutmasını emretmiştik.
	// yani çıktı degisk adlı değişkenin adresiyle aynı olucak

	cout<<*poin<<endl; //poin adlı pointer degisk isimli degiskeni tutuodu biz burada ..
	// poin' işaretcisinin tutuğu degeri ekrana yazdır dedi || 
	//poin degisk degiskenini tutuodu degisk degiskenin degerini ekrana yazıcak


	return 0;
}