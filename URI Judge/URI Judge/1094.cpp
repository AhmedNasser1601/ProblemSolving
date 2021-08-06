//#include <iostream>
//#include <iomanip>
//#include <stdio.h>
//#include <string>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//	int num, amount = 0;
//	float total = 0, all_c = 0, all_r = 0, all_s = 0;
//	char type;
//
//	cin >> num;
//
//	for (int i = 1; i <= num; i++)
//	{
//		cin >> amount >> type;
//
//		total += amount;
//
//		if (type == 'C' || type == 'c')
//			all_c += amount;
//		if (type == 'R' || type == 'r')
//			all_r += amount;
//		if (type == 'S' || type == 's')
//			all_s += amount;
//	}
//
//	cout
//		<< "Total: " << total << " cobaias" << endl
//		<< "Total de coelhos: " << all_c << endl
//		<< "Total de ratos: " << all_r << endl
//		<< "Total de sapos: " << all_s << endl
//		<< "Percentual de coelhos: " << fixed << setprecision(2) << all_c * 100 / total << " %" << endl
//		<< "Percentual de ratos: " << fixed << setprecision(2) << all_r * 100 / total << " %" << endl
//		<< "Percentual de sapos: " << fixed << setprecision(2) << all_s * 100 / total << " %" << endl;
//
//	return 0;
//}