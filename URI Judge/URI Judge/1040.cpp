//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//	float a, b, c, d;
//	cin >> a >> b >> c >> d;
//
//	a = a * 2; b = b * 3; c = c * 4; d = d * 1;
//
//	float media = (a + b + c + d) / 10;
//	cout << "Media: " << fixed << setprecision(1) << media << endl;
//
//	if (media >= 7.0)
//		cout << "Aluno aprovado.\n";
//
//	else if (media >= 5.0)
//	{
//		cout << "Aluno em exame.\n";
//
//		float last; cin >> last;
//		cout << "Nota do exame: " << fixed << setprecision(1) << last << endl;
//
//		media = (media + last) / 2;
//		cout << "Aluno aprovado.\n";
//
//		if (media >= 5.0)
//			cout << "Media final: " << fixed << setprecision(1) << media << endl;
//
//		else
//			cout << "Aluno reprovado.\n";
//	}
//
//	else
//		cout << "Aluno reprovado.\n";
//
//	return 0;
//}