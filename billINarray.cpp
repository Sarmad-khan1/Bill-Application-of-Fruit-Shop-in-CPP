#include <iostream>
using namespace std;
int main()
{
	string fruit[4] = {"peach", "apple", "guava", "watermelon"};
	int price[4] = {60, 70, 80, 90};
	int bill = 0;
	int kgs = 0;
	string namefruit = " ";
	cout << "Enter the name of fruit: ";
	cin >> namefruit;
	cout << "Enter the quantity: ";
	cin >> kgs;
	for (int i = 0; i < 4; i++)
	{
		if (namefruit == fruit[i])
		{
			bill = kgs * price[i];
		}
	}
	cout<<"Price of "<<namefruit<<" comes out to be: "<<bill;
}
