#include<iostream>
using namespace std;
class Student{
	public :
	Student()
	{	cout<<"My Name Is Krinshsmith Kava"<<endl;
		cout<<"220130318102"<<endl;
		cout<<"Constructor Invoke"<<endl;
	}
	~Student()
	{
		cout<<"Destructor Invoke"<<endl;
	}
};
int main()
{
	Student s1;
	Student s2;
}
