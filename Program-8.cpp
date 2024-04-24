#include<iostream>
using namespace std;
class x{
	private:
		int std_id;
		string name;
	public:
		void getdata()
		{
			cout<<"My Name Is Krinshsmith Kava"<<endl;
			cout<<"220130318102"<<endl;
			cout<<"Enter Student Id ::";
			cin>>std_id;
			cin.ignore();
			cout<<"Enter Student Name ::";
			getline(cin,name);
		}
		friend class y;
};
class y{
	public:
		void putdata(x& x1)
		{
			cout<<"Student Id Is :: "<<x1.std_id<<endl;
			cout<<"Student Name Is :: "<<x1.name<<endl;
		}
};
int main()
{
		x x1;
		x1.getdata();
		
		y y1;
		y1.putdata(x1);
		return 0;
}
