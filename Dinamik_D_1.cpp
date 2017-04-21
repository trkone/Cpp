#include <iostream>
using namespace std;

int main()
{
	int *p;
	
	if(!(p=new int))
	{
		cout<<"Ram bellek ayrilamadi!"<<endl;
	}
	else
	{
		cout<<"P'ye atanacak deger....:";
		cin>>(*p);
		cout<<"Atandi...:"<<(*p)<<endl;
		
		delete p;
	}
	
	return 0;
}
