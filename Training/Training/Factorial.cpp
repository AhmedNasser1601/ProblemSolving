#include <iostream>
using namespace std;
void factors(int num)
{
	cout << "Factors of " << num << " are: " << endl;
	for (int i = 1; i <= num; ++i)
	{
		if (num % i == 0)
			cout << "--->" << i << "\n";
	}
}
int main()
{
	int n;
	while (true)
	{
		cout << "\nEnter a positive integer: ";
		cin >> n;
		factors(n);
	}
	return 0;
}