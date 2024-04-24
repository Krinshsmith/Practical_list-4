#include<iostream>
using namespace std;
class product{
	public:
		int man_year;
		int exp_year;
		product(int man_year,int exp_year):
		man_year(man_year),exp_year(exp_year)
		{
		}
		int getDifference()
		{
			return exp_year - man_year;
		}
};
void printDifference(product product)
{
	cout<<"The Difference Between Manufacture Year And Expiry Year Is :: "<<product.getDifference()<<endl;
}
int main()
{
  cout<<"My Name Is Krinshsmith Kava"<<endl;
	cout<<"220130318102"<<endl;
	product product(2023,2025);
	printDifference(product);
	return 0;
}
