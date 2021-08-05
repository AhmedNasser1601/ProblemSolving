////Student info
//#include<iostream>
//#include<string>
//using namespace std;
//struct NAME
//{
//	string first;
//	string last;
//};
//struct BIRTHDATE
//{
//	int day;
//	int month;
//	int year;
//};
//struct STUDENT
//{
//	long long ID;
//	NAME name;
//	BIRTHDATE birthdate;
//	string address;
//}stud1, stud2, stud3, stud4, stud5, stud6, stud7, stud8, stud9, stud10;
//int main()
//{
//	int choise; double total_grade_stud1 = 0, total_grade_stud2 = 0, total_grade_stud3 = 0;
//	cout << "Enter the Number of Students ...\t"; cin >> choise; cout << endl << endl;
//	for (int i = 1; i <= choise; i++)
//	{
//		cout << "\n<<< Student (" << i << ") >>>\n";
//		cout << "\nEnter ID...\t"; cin >> stud1.ID;
//		cout << "\nEnter Full_Name...\n"; cout << "\tFirst..."; cin >> stud1.name.first; cout << "\tLast..."; cin >> stud1.name.last;
//		cout << "\nEnter Birth_Date...\n"; cout << "\tDay..."; cin >> stud1.birthdate.day; cout << "\tMonth..."; cin >> stud1.birthdate.month; cout << "\tYear..."; cin >> stud1.birthdate.year;
//		cout << "\nEnter Address..."; cin >> stud1.address;
//		cout << "\nEnter << 6 >> Grades...\n";
//		float grades_stud1[6];
//		for (int a = 0; a < 6; a++)
//		{
//			cout << "\t"; cin >> grades_stud1[a];
//		}
//		for (int x = 0; x < 6; x++)
//		{
//			total_grade_stud1 += grades_stud1[x];
//		}
//		cout << endl;
//	}
//	cout << endl << endl;
//	for (int j = 1; j <= choise; j++)
//	{
//		cout << "\n<<< Student (" << j << ") >>>\n";
//		cout << endl << "ID: " << stud1.ID;
//		cout << endl << "Full_Name: " << stud1.name.first << " " << stud1.name.last;
//		cout << endl << "Address: " << stud1.address;
//		cout << endl << "Birth_Date: " << stud1.birthdate.day << "\\" << stud1.birthdate.month << "\\" << stud1.birthdate.year;
//		cout << endl << "Total_Grade: " << total_grade_stud1 << "\n";
//	}
//	cout << endl << endl;
//	return 0;
//}