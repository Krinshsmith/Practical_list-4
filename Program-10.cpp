#include<iostream>
using namespace std;
class student{
	private:
		int id;
		float sgpa;
	public:
		student()
		{
			cout<<"My Name Is Krinshsmith Kava"<<endl;
			cout<<"220130318102"<<endl;
			cout<<"Enter Student Id ::"<<endl;
			cin>>id;
			cout<<"Enter Student SGPA ::"<<endl;
			cin>>sgpa;
			cout<<"Student Information"<<endl;
			cout<<"ID ::"<<id<<endl;
			cout<<"SGPA ::"<<sgpa<<endl;
			
		}
};
int main()
{
	student s1;
	return 0;
}
