#include<iostream>
using namespace std;
class simple
{
	private:
		int a,b;
		friend void addition(simple s);
	public:
		void getdata()
		{
			cout<<"My Name Is Krinshsmith Kava"<<endl;
			cout<<"220130318102"<<endl;
			cout<<"Enter The Number For Addition :: ";
			cin>>a>>b;
		}
};
void addition(simple s)
{
	cout<<"Addition Is ="<<s.a+s.b<<endl;
}
int main()
{
	simple s1;
	s1.getdata();
	addition(s1);
	return 0;		
}
