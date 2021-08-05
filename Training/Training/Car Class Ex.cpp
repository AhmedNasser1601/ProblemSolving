//#include<iostream>
//#include<string>
//
//using namespace std;
//
//const int maxSize = 100;
//
//class CAR
//{
//private:
//	string name;
//	char color[10];
//	int maxSpeed;
//	int model;
//
//public:
//	void set_Name(string n)
//	{
//		name = n;
//	}
//	void set_Color(char c[])
//	{
//		strcpy_s(color, c);
//	}
//	void set_maxSpeed(int s)
//	{
//		maxSpeed = s;
//	}
//	void set_Model(int m)
//	{
//		model = m;
//	}
//
//	void print()
//	{
//		cout
//			<< endl
//			<< "Name : " << name << endl
//			<< "Color : " << color << endl
//			<< "Max Speed : " << maxSpeed << endl
//			<< "Model : " << model
//			<< endl;
//	}
//}car[maxSize];
//
//int main()
//{
//	string N;
//	char C[10];
//	int S, M;
//
//	cout << "How Much Cars you have: ";
//	int limitSize = 0; cin >> limitSize;
//
//	for (int i = 0; i < limitSize; i++)
//	{
//		cout << endl << "\tCar no." << i + 1 << endl;
//
//		cout << "Enter Name: "; cin >> N;
//		car[i].set_Name(N);
//
//		cout << "Enter Color: "; cin >> C;
//		car[i].set_Color(C);
//
//		cout << "Enter Max Speed: "; cin >> S;
//		car[i].set_maxSpeed(S);
//
//		cout << "Enter Model: "; cin >> M;
//		car[i].set_Model(M);
//	}
//
//	for (int i = 0; i < limitSize; i++)
//		car[i].print();
//
//	system("pause");
//	return 0;
//}