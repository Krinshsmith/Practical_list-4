#include<iostream>
using namespace std;
class Myclass{
	public :
		Myclass()
	{
		cout<<"My Name Is Krinshsmith Kava"<<endl;
		cout<<"220130318102"<<endl;
		cout<<"Object Create"<<endl;
	}
	
	~Myclass()
	{
		cout<<"Object Destroyed"<<endl;
	}
};
int main()
{
	Myclass s1;
	Myclass s2;
}
