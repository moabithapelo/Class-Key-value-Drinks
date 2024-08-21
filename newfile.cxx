#include <iostream>

using namespace std;

class DRINKS
{
  private:
	double drink_price;
	string drink_name;

  public:
	DRINKS(string name, double price)
	{
		set_name(name);
		set_price(price);
	}

	void set_name(string name)
	{
		drink_name = name;
	}
	void set_price(double price)
	{
		drink_price = price;
	}
	string get_name()
	{
		return drink_name;
	}
	double get_price()
	{
		return drink_price;
	}
};

void sortdrinks_byprice(DRINKS drinks_array[], int array_size);

int main()
{
	int array_size;
	DRINKS D1("Coke", 33), D2("Oros", 22), D3("Cranberry", 88), D4("Fanta", 11);
	DRINKS drinks_array[] = {D1, D2, D3, D4};

	array_size = sizeof(drinks_array) / sizeof(drinks_array[0]);

	sortdrinks_byprice(drinks_array, array_size);

	return 0;
}

void sortdrinks_byprice(DRINKS drinks_array[], int array_size)
{
	double price;
	string name;
	int j;
	for (int i = 1; i < array_size; i++)
	{
		price = drinks_array[i].get_price();
		name = drinks_array[i].get_name();
		j = i - 1;

		while (drinks_array[j]. get_price()>price && j>=0)
		{
			drinks_array[j + 1].set_price(drinks_array[j].get_price());
			
			
drinks_array[j + 1].set_name(drinks_array[j].get_name());			
			j = j - 1;
		}
		drinks_array[j + 1].set_price(price);
		
		drinks_array[j + 1].set_name(name);
	}

	for (int i = 0; i < 4; i++)
	{
		double prices = drinks_array[i].get_price();
		string name = drinks_array[i].get_name();
		cout << name << " : R" << prices << endl;
	}
	
}
