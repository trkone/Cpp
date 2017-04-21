#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;


int* genislet(int *dizi,unsigned int boyut,unsigned int eklenecek)
{
	int *dzi=new int[boyut+eklenecek];

	memcpy(dzi,dizi,(sizeof(int)*boyut));

	delete[] dizi;


	return dzi;
}

int* azalt(int *dizi,unsigned int azal)
{
	
	int *dzi=new int[azal];

	memcpy(dzi,dizi,(sizeof(int)*azal));
	
	delete[] dizi;
	

	return dzi;
}


int main(int argc, char const *argv[])
{
	int *dizi=new int[20];

	for (int i = 0; i < 20; i++)
	{
			dizi[i]=i;
	}


	dizi=genislet(dizi,20,5);
	
	
	for (int i = 20; i < 25; i++)
	{
			dizi[i]=i;
	}
	
	cout<<"Genisledikten sonraki hali...:"<<endl;
	for(int i=0; i<25; i++)
		cout<<i<<endl;
		
	dizi=azalt(dizi,10);
	
	cout<<"Azaltma yapildiktan sonraki hali...:"<<endl;
	
	for(int i=0; i<10; i++)
	{
		cout<<dizi[i]<<endl;
	}

	return 0;
}
