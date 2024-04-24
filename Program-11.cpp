#include<iostream>
using namespace std;
class number{
	public:
		int a,b;
		number(int x,int y)
		{
			a=x;
			b=y;
			cout<<"My Name Is Krinshsmith Kava"<<endl;
			cout<<"220130318102"<<endl;
			cout<<"Parameterized Constructor Called"<<endl;
			cout<<"A="<<a<<endl;
			cout<<"B="<<b<<endl;
	}
};
int main()
{
	number(5,10);
	return 0;
}
