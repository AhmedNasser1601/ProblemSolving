////Write a program thatstores information
////regarding football tournament played by 4 teams
////The program keeps the team ID and number of points
////The program reads scores of 4 matches
////A function assigns points according to the match result
////In each match, The winning team gets 3 points
////In case of a tie, assign 1 point for both teams
////Finally, the program displays the points earned by all teams
//#include <iostream>
//#define limit 999999999
//using namespace std;
//const int numTeams = 4;
//struct team
//{
//	int ID;
//	int points;
//} teamPoints[numTeams];
//void HELP(long help)
//{
//	if (help == limit)
//	{
//		cout
//			<< "\n\n********************************************************************\n\n"
//			<< "        --->          >> # HELP MENU # <<          <---\n\n"
//			<< "-----> In case of Win,, -> The winning team gets (3) points <-----\n"
//			<< "-----> In case of Tie,, -> The both two teams get (1) point <-----"
//			<< "\n\n********************************************************************\n\n"
//			<< "\n---> note that::> If you want a help,, press (999999999) at any time\n"
//			<< "\n\n********************************************************************\n\n";
//		help = NULL;
//	}
//}
//void updateTeamPoints(int fTeam, int sTeam, int winner)
//{
//	for (int i = 1; i <= numTeams; i++)
//	{
//		if (winner == 0)
//		{
//			if (teamPoints[i].ID == fTeam || teamPoints[i].ID == sTeam)
//				teamPoints[i].points++;
//		}
//		else if
//			(teamPoints[i].ID == winner)
//			teamPoints[i].points += 3;
//	}
//}
//int main()
//{
//	int team1, team2, winner;
//	int help;
//	HELP(help = limit);
//	cout << "Enter IDs of competing teams: " << endl;
//	for (int i = 1; i <= numTeams; i++)
//	{
//		cout << "--(" << i << ")--> ";
//		cin >> teamPoints[i].ID;
//		while (teamPoints[i].ID == limit)
//		{
//			HELP(help = limit);
//			cout << "--(" << i << ")--> ";
//			cin >> teamPoints[i].ID;
//		}
//	}
//	cout << "\n->->->-> Match results <-<-<-<-\n\n";
//	for (int i = 1; i <= 4; i++)
//	{
//		cout << "Match ---> (" << i << ")\n" << "\tEnter competing teams IDs : \n";
//		cout << "\t--(1)--> "; cin >> team1;
//		while (team1 == limit)
//		{
//			HELP(help = limit);
//			cout << "\t--(1)--> "; cin >> team1;
//		}
//		cout << "\t--(2)--> "; cin >> team2;
//		while (team2 == limit)
//		{
//			HELP(help = limit);
//			cout << "\t--(2)--> "; cin >> team2;
//		}
//		cout << "Enter ID of winning team, or 0 if tie: ";
//		cout << "---> "; cin >> winner;
//		while (winner == limit)
//		{
//			HELP(help = limit);
//			cout << "Enter ID of winning team, or 0 if tie: ";
//			cout << "---> "; cin >> winner;
//		}
//		updateTeamPoints(team1, team2, winner); cout << endl;
//	}
//	for (int i = 1; i <= numTeams; i++)
//	{
//		cout << "Team (" << i << ") ---> Whose ID is (" << teamPoints[i].ID << ")";
//		cout << "\tHas Points ---> " << teamPoints[i].points << endl;
//	}
//	cout << endl << endl;
//	system("pause");
//	return 0;
//}