#include<iostream>
using namespace std;
class number{
	public :
		int a,b;
		number(int x,int y)
		{
			a=x;
			b=y;
			cout<<"My Name Is Krinshsmith Kava"<<endl;
			cout<<"220130318102"<<endl;
			cout<<"Parametrized Constructor Called"<<endl;
			cout<<"A="<<a<<endl;
			cout<<"B="<<b<<endl;
		}
		number(number &z)
		{
			a=z.a;
			b=z.b;
			cout<<"Copy Constructor Called"<<endl;
			cout<<"A="<<a<<endl;
			cout<<"B="<<b<<endl;
		}
};
int main()
{
	number n(5,10);
	number n1(n);
	return 0;
}
