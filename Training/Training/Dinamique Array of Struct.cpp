//#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <cstdio>
//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//struct NAME {
//	string firstName;
//	string lastName;
//};
//
//struct DATE {
//	short day;
//	short month;
//	int year;
//};
//
//struct PERSON {
//	NAME name;
//	DATE date;
//};
//
//int main() {
//	int size;
//
//	cout << "\t-> Enter number of Persons: ";
//	cin >> size;
//
//	PERSON* person = new PERSON[size];
//
//	for (int i = 0; i < size; i++) {
//		cout << "\n\n\t-> User [" << i + 1 << "] Data <-\n\n";
//
//		cout << "\t\t--(name)-->: "; cin >> person[i].name.firstName >> person[i].name.lastName;
//
//		cout << "\t\t--(date)-->: \n";
//		cout << "\t\t\t-D-> "; cin >> person[i].date.day;
//		cout << "\t\t\t-M-> "; cin >> person[i].date.month;
//		cout << "\t\t\t-Y-> "; cin >> person[i].date.year;
//	}
//
//	cout << "\n\n\n";
//
//	for (int i = 0; i < size; i++) {
//		cout
//			<< "\t-> No." << i + 1 << " <-\n"
//			<< person[i].name.firstName
//			<< " "
//			<< person[i].name.lastName
//			<< " -> "
//			<< person[i].date.day
//			<< "/";
//
//		switch (person[i].date.month) {
//		case 1: cout << "Jan"; break;
//		case 2: cout << "Feb"; break;
//		case 3: cout << "Mar"; break;
//		case 4: cout << "Apr"; break;
//		case 5: cout << "May"; break;
//		case 6: cout << "June"; break;
//		case 7: cout << "July"; break;
//		case 8: cout << "Aug"; break;
//		case 9: cout << "Sep"; break;
//		case 10: cout << "Oct"; break;
//		case 11: cout << "Nov"; break;
//		case 12: cout << "Dec"; break;
//		}
//
//		cout
//			<< "/"
//			<< person[i].date.year
//			<< endl << endl;
//	}
//
//	delete [] person;
//	person = NULL;
//
//	return 0;
//}