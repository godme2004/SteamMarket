#include <iostream>
using namespace std;

int main()
{
	cout << "1.discount // 2.price" << endl;
	int a;
	cin >> a;
	if (a == 1)
	{
		cout << "buy:";
		float buy;
		cin >> buy;

		cout<< "sale:";
		float sale;
		cin >> sale;

		float discount = buy / (sale * 0.87);
		cout << discount << endl;
	}
	else
	{
		cout<< "buy:";
		float buy;
		cin >> buy;

		cout << "discount:";
		float discount;
		cin >> discount;

		float sale = buy / (discount * 0.87);
		cout << sale << endl;
	}
	return 0;
}