#include <iostream>
#include <cstring>
using namespace std;


int *artir(int *dizi,int boyutu,int ekle)
{
	int *ydizi=new int[boyutu+ekle];
	memcpy(ydizi,dizi,(sizeof(int)*boyutu));
	
	
	delete[] dizi;
	
	
	return ydizi;
}

int main()
{
	int *d1=new int[5];
	
	for(int s=0; s<5; s++)
	{
		d1[s]=s;
	}
	
	d1=artir(d1,5,3);
	
	for(int s=5; s<8; s++)
	{
		d1[s]=s;
	}
	
	for(int s=0; s<8; s++)
	{
		cout<<d1[s];
	}
	
	return 0;
}
