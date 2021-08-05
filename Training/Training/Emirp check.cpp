////Emirp check
//#include <iostream>
//using namespace std;
//bool Prime(int x)
//{
//	for (int i = 2; i <= x / 2; i++)
//		if (x%i == 0 || x <= 1)
//			return false;
//	return true;
//}
//int reverse(int n)
//{
//	int rev = 0;
//	while (n != 0)
//	{
//		int digit = n % 10;
//		rev *= 10;
//		rev += digit;
//		n = n / 10;
//	}
//	return rev;
//}
//bool emirp(int x)   //prime spelled backwards
//{
//	int y = reverse(x);
//	if (Prime(y))
//		return true;
//	return false;
//}
//int main()
//{
//	int x;
//	while (true)
//	{
//		cout << "Enter a Number...\n\t---> "; cin >> x;
//		if (Prime(x))
//			cout << "Prime\n";
//		else cout << "Not Prime\n";
//	}
//	system("pause");
//	return 0;
//}