#include <iostream>

int main() {
	using namespace std;


	int first_part, second_part;
	cin >> first_part >> second_part;
	int sum1 = 0, sum2 = 0;

	while (first_part != 0)
	{
		sum1 = sum1 + first_part % 10;
		first_part /= 10;
	}
	while (second_part != 0)
	{
		sum2 = sum2 + second_part % 10;
		second_part /= 10;
	}
	if (sum1 == sum2)
	{
		cout << "eat" << endl;
	}
	else
	{
		cout << "unlacky(" << endl;
	}
	return 0;
}