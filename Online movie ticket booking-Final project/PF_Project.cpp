/*
group members
	Azeem Mohamed husain - B22F0759CS142
	Faththima misna - B22F0757AI142

Final Project
	Online movie ticket booking
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*********************************************************GLOBAL-VARIABLES**************************************************************************/
string userName, password, name;
bool login_success = false;
/*************************************************************USER-LOGIN****************************************************************************/

void signup()
{
	system("COLOR 71");
	system("cls");
	cin.ignore();
	//asking the name from the user
	cout << "enter your name " << endl;
	getline(cin, name);

	system("cls");

	//asking the username of a user
	cout << "user name" << endl;
	getline(cin, userName);

	//checking whether the username is not same as the user's real name
	while (userName == name) {
		cout << "invalid user name or the user entered his real for user name." << endl;
		cout << "please enter the user name again" << endl;
		getline(cin, userName);
	}

	system("cls");

	//asking the password first time from the user
	cout << "Password" << endl;
	getline(cin, password);

	int len = password.length();

	bool digit = false, capital = false;

	//this loop will cover the capital and digit requirments for creating the password
	for (int i = 0;i < len;i++) {
		if (password[i] >= 'A' && password[i] <= 'Z')
			capital = true;
		else if (password[i] >= '0' && password[i] <= '9')
			digit = true;
	}

	//if the conditions are not true then the loop will run,untill the requirments of building a password is satisfied.
	while (!digit || !capital || len < 8) {
		cout << "please make sure to include atleast one capital letter,one digit,8 characters in your password." << endl;

		cout << "re-enter the password again." << endl;
		getline(cin, password);

		len = password.length();
		digit = false;
		capital = false;

		for (int i = 0;i < len;i++) {
			if (password[i] >= 'A' && password[i] <= 'Z')
				capital = true;
			else if (password[i] >= '0' && password[i] <= '9')
				digit = true;
		}
	}

	system("cls");

	cout << "registration successful";

	cout << endl << endl;

	//cout << digit << "," << capital;
	//you can confirm the function of above while loop from these two flags(digit,capital)

}

void login() {
	system("COLOR F1");

	cin.ignore();
	cout << "***********************-------------------- LOGIN -------------------- ***********************" << endl << endl;
	string name2, password2;

	cout << "Username:";
	getline(cin, name2);

	cout << endl;

	cout << "Password:";
	getline(cin, password2);

	//validating the user input
	//cout << userName << "," << name2 << endl;
	//cout << password << "," << password2 << endl;

	if (name2 == userName && password2 == password) {
		cout << "login sucessfull\n";
		login_success = true;
	}
	else {
		cout << "incorrect username or password.please try again or signup\n";
	}

	cout << endl;
}


/**********************************************************************SUB-FUNCTIONS************************************************** *************/


void menu_driven() {
	system("COLOR F0");

	cout << endl;
	cout << setw(3) << left << "1" << "today showings" << endl;
	cout << setw(3) << left << "2" << "active branches today" << endl;
	cout << setw(3) << left << "3" << "online ticket booking" << endl;
	cout << setw(3) << left << "4" << "upcoming movies & releasing date" << endl;
	cout << setw(3) << left << "5" << "exit" << endl << endl;
}

void today_showings() {
	system("COLOR E0");

	cout << setw(40) << "1) Guardians of the Galaxy Vol. 3" << endl;
	cout << setw(40) << "2) Fast X" << endl;
	cout << setw(40) << "3) The Little Mermaid" << endl;
	cout << setw(40) << "4) Transformers: Rise of the Beasts" << endl;
	cout << setw(40) << "5) John Wick: Chapter 4" << endl;
	cout << setw(40) << "6) Evil Dead Rise" << endl;
	cout << setw(40) << "7) Spider-Man: Across The Spider-Verse" << endl;
}

void active_branches_today() {
	system("COLOR 74");

	cout << setw(15) << left << "1) Cinegold Islamabad" << endl;
	cout << setw(15) << left << "2) Universal Lahore" << endl;
	cout << setw(15) << left << "3) Cinestar Lahore IMAX" << endl;
	cout << setw(15) << left << "4) Cinestar Lahore Xinhua Mall" << endl;
	cout << setw(15) << left << "5) 3D-SHOW-Rawalpindi" << endl;
}

void online_ticket_booking() {
	
	char movie_name, movie_time, branch;

	today_showings();

	do {
		cout << "\nselect a movie from above list:";
		cin >> movie_name;
	} while (movie_name < '1' || movie_name>'7');

	system("cls");

	//if(movie_name >= '1' && movie_name <= '7') {
	active_branches_today();

	do {
		cout << "\nselect the branch:";
		cin >> branch;
	} while (branch < '1' || branch>'5');

	system("cls");

	cout << "available time\n";
	cout << "a) 1.00 p.m\n";
	cout << "b) 6.00 p.m\n";
	cout << "c) 9.00 p.m\n";

	do {
		cout << "Time:";
		cin >> movie_time;
	} while (movie_time < 'a' || movie_time>'c');

	system("cls");

	system("COLOR E4");

	cout << "--------------------------------------------------------SCREEN------------------------------------------------------\n\n";
	cout << "A\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n";
	cout << "B\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n";
	cout << "C\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n";
	cout << "D\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n";
	cout << "E\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n";
	cout << "F\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n";
	cout << "G\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n";
	cout << "H\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n";
	cout << "I\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n";
	cout << "J\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n";
	cout << "K\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n";
	cout << "L\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n\n";
	cout << "******************************************************1stFLOOR*******************************************************\n";
	cout << endl << endl;
	cout << "N\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n";
	cout << "M\t" << "1	 2	3	4	5	6	7|||8	9	10	11	12	13	14\n\n";
	cout << "******************************************************2ndFLOOR*******************************************************\n";
	cout << endl << endl;

	bool seat_num[14][14] = {
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//1
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//2
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//3
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//4
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//5
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//6
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//7
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//8
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//9
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//10
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//11
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//12
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//13
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1},//14
	};

	string movie;
	switch (movie_name) {
	case '1':movie = "Guardians of the Galaxy Vol. 3";break;
	case '2':movie = "Fast X";break;
	case '3':movie = "The Little Mermaid";break;
	case '4':movie = "Transformers: Rise of the Beasts";break;
	case '5':movie = "John Wick: Chapter 4break";
	case '6':movie = "Evil Dead Rise";break;
	case '7':movie = "Spider-Man: Across The Spider-Verse";break;
	}

	string time;
	switch (movie_time) {
	case 'a':time = "1.00 p.m";break;
	case 'b':time = "6.00 p.m";break;
	case 'c':time = "9.00 p.m";break;
	}
	
	int row, column, numberOfTickets,ticket = 500, amount = 0;
	char row2;

	do {
		cout << "how many tickets you want to buy :";
		cin >> numberOfTickets;
	} while (numberOfTickets < 1 || numberOfTickets > 196);

	for (int i = 0;i < numberOfTickets;) {

		do {
			cout << "select the row :";
			cin >> row2;
		} while (row2 < 'A' || row2 > 'N');

		switch (row2) {
		case 'A':row = 1;break;
		case 'B':row = 2;break;
		case 'C':row = 3;break;
		case 'D':row = 4;break;
		case 'E':row = 5;break;
		case 'F':row = 6;break;
		case 'G':row = 7;break;
		case 'H':row = 8;break;
		case 'I':row = 9;break;
		case 'J':row = 10;break;
		case 'K':row = 11;break;
		case 'L':row = 12;break;
		case 'N':row = 13;break;
		case 'M':row = 14;break;
		}

		do {
			cout << "select the column :";
			cin >> column;
		} while (column < 1 || column >14);

		//cout<<seat_num[row - 1][column - 1];
		//cout<<row<<","<<column;

		if (seat_num[row - 1][column - 1] == 0) {
			cout << "you already reserved this seat or this seat was been already reserved.\n";
		}
		else {
			cout << "you have successfully reserved this seat.\n";
			seat_num[row - 1][column - 1] = 0;
			i++;
			amount += ticket;

			cout << endl << endl;


			cout << "________________________________________________________________________________________________" << endl;
			cout << "|--------------------------------------------MOVIE TIME----------------------------------------|" << endl;
			cout << "||A||*********BUYER NAME - " << setw(10) << right << name << "**********************************************************|" << endl;
			cout << "||D||------------------------------------------------------------------------------------------|" << endl;
			cout << "||M||" << "--------------MOVIE NAME - " << setw(40) << left << movie << "-----------------------|" << endl;
			cout << "||I||------------------------------------------------------------------------------------------|" << endl;
			cout << "||T||-----TIME  - " << time << "---------------------------------------------------------------------|" << endl;
			cout << "|---------SEAT NO_" << row2 << column << "---------------------------------A-BLOCK-----------------------------------|" << endl;
			cout << "||O||---------------------------------------------------------JUST " << ticket << ".00PKR ------------------|" << endl;
			cout << "||N||------------------------------------------------------------------------------------------|" << endl;
			cout << "||E||**********TICKET REF NO*******************************************************************|" << endl;
			cout << "|---------+-+-ENJOY YOUR WEEKEND WITH US!!!----------------------------------------------------|" << endl;
			cout << "________________________________________________________________________________________________" << endl;

			cout << "\n\n please make sure to take a print of this\n\n";
		}
	}
	cout << "\n***** Your total amount is PKR " << amount << ".00 *****";
	cout << "\n***** Your seats are now reserved. Make sure to settle your amount, 15 minutes before the show time! *****";
	cout << "\n\nThank You! " << name << " Have a nice day" << endl;
}

void upcoming_movies() {
	system("COLOR 70");

	cout << setw(40) << left << " 1) Spider - Man: Across the Spider - Verse" << "1 June 2023" << endl;
	cout << setw(40) << left << " 2) The Boogeyman" << "2 June 2023" << endl;
	cout << setw(40) << left << " 3) To Catch A Killer" << "2 June 2023" << endl;
	cout << setw(40) << left << " 4) Transformers: Rise of the Beasts" << "9 June 2023" << endl;
	cout << setw(40) << left << " 5) Elemental" << "16 June 2023" << endl;
	cout << setw(40) << left << " 6) Extraction 2" << "16 June 2023" << endl;
	cout << setw(40) << left << " 7) The Flash" << "16 June 2023" << endl;
	cout << setw(40) << left << "8) No Hard Feelings" << "23 June 2023" << endl;
	cout << setw(40) << left << " 9) Indiana Jones and the Dial of Destiny" << "30 June 2023" << endl;
	cout << setw(40) << left << "10) Bird Box Barcelona" << "14 July 2023" << endl;

	cout << "\nenter B to menu" << endl;
}


/***********************************************************************MAIN-FUNCTION****************************************************************/

int main()
{
	system("COLOR B1");

	while (!login_success) {
		//LOGIN
		char option;

		cout << "!!!***||| 1.LOGIN |||***!!!" << endl;
		cout << "!!!***||| 2.SIGNUP |||***!!!" << endl;

		cout << "choose any from above:";
		cin >> option;

		switch (option) {
		case '1':login();continue;
		case '2':signup();
			login();
			break;
		default:cout << "you can't select any other option rather than above";continue;
		}
	}

	if (login_success) {
		system("cls");

		char service_num;
		char choice;

		cout << "******************************************************  welcome to our site ******************************************************" << endl;

		do {
			menu_driven();

			cout << "enter any number from below to more service :";
			cin >> service_num;

			system("cls");
			switch (service_num) {
			case '1':today_showings();
				cout << "\nenter B to menu" << endl;
				cin >> choice;
				system("cls");

				if (choice == 'B' || choice == 'b') {
					continue;
				}
				else {
					while (choice != 'B') {
						cout << "\nenter B to menu" << endl;
						cin >> choice;
						if (choice == 'b') {
							choice = 'B';
						}
					}
					continue;
				}
				break;

			case '2':active_branches_today();
				cout << "\nenter B to menu" << endl;
				cin >> choice;
				system("cls");

				if (choice == 'B' || choice == 'b') {
					continue;
				}
				else {
					while (choice != 'B') {
						cout << "\nenter B to menu" << endl;
						cin >> choice;
						if (choice == 'b') {
							choice = 'B';
						}
					}
					continue;
				}
				break;

			case '3':online_ticket_booking();
				system("pause");
				break;

			case '4':upcoming_movies();
				cin >> choice;
				system("cls");

				if (choice == 'B' || choice == 'b') {
					continue;
				}
				else {
					while (choice != 'B') {
						cout << "\nenter B to menu" << endl;
						cin >> choice;
						if (choice == 'b') {
							choice = 'B';
						}
					}
					continue;
				}
				break;

			case '5':exit(0);break;
			default:
				cout << "invalid choice.please select any option from below";
				continue;
			}
		} while (service_num != 5);

	}

	return 0;
}