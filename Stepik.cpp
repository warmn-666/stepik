#include <iostream>

int main() {
	using namespace std;

	int min_age, new_age;

	cin >> new_age;
	min_age = new_age;
	while (new_age != 0)
	{
		if (min_age > new_age)
		{
			min_age = new_age;
		}
		cin >> new_age;
	}
	cout << min_age;
	return 0;
}