//#include <iostream>
//
//using namespace std;
//
//static int defaultBalance = 1000;
//
//void Deposit() {
//	system("cls");
//
//	cout << "How much are you going to deposit? ";
//	int add; cin >> add;
//	defaultBalance += add;
//}
//
//void Withdraw() {
//	system("cls");
//
//	if (defaultBalance > 0) {
//		cout << "How much are you going to withdraw? ";
//		int sub; cin >> sub;
//
//		if (defaultBalance - sub >= 0) {
//			defaultBalance -= sub;
//		}
//
//		else
//			cout << "There is no enough money\n";
//	}
//
//	else
//		cout << "There is no enough money\n";
//}
//
//void Balance() {
//	system("cls");
//
//	cout << "Current Balance: " << defaultBalance << endl;
//}
//
//int main() {
//	char again = 'y';
//	int operation;
//
//	do {
//		system("cls");
//
//		cout
//			<< "\t--> Choose your Operation <--\n"
//			<< "1. Deposit \t 2. Withdraw \t 3. Balance\n\n";
//
//		_sleep(1500);
//
//		cout << "Your choise is: ";
//		cin >> operation;
//
//		system("cls");
//
//		switch (operation) {
//		case 1: Deposit(); break;
//		case 2: Withdraw(); break;
//		case 3: Balance(); break;
//
//		default:
//			cout << "\t\t-> Invalid <-\n"; _sleep(1500); continue;
//		}
//
//		_sleep(1500);
//
//		cout << "\nAnother Operation (y/n)?: ";
//		cin >> again;
//	} while (again == 'y' || again == 'Y');
//
//	system("cls");
//
//	cout << "\n\n\n\n\t\t--> Good Bye <--\n\n\n\n";
//
//	_sleep(1500);
//
//	return 0;
//}