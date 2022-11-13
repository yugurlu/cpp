#include <iostream>
#include <fstream>
#include <string.h>
#include <unistd.h>

using namespace std;

class userdata
{
	private:
		string username;
		string password;
		string name;
		string surname;
		unsigned int age;
	public:
		void indata()
		{
			cout << "select a username: "; cin >> username;
			cout << "select a password: "; cin >> password;
			cout << "enter name: "; cin >> name;
			cout << "enter surname: "; cin >> surname;
			cout << "enter age: "; cin >> age;

			ofstream file;
			file.open("./data/data" + username + ".txt");
			file << username << endl << password << endl << name << endl << surname << endl << age;
			file.close();
		}

		void getdata(string username)
		{
			string password;
			string name;
			string surname;
			string age;

			ifstream read("./data/data" + username + ".txt");
			getline(read,username);
			cout << "Username: " << username << endl;
			getline(read, password);
			cout << "Password: " << password << endl;
			getline(read, name);
			cout << "Name: " << name << endl;
			getline(read, surname);
			cout << "Surname: " << surname << endl;
			getline(read, age);
			cout << "Age: " << age << endl;
		}
};

int main()
{
	int choice;
	userdata user;

	cout << "1 -> Register\n2 -> Login\n"; cin >> choice;
	if (choice == 1)
	{
		user.indata();
		cout << "information is being saved..." << endl; sleep(3);
		main();
	}
	else if(choice == 2)
	{
		string username, password, un ,pw;
		do
		{
			cout << "Enter username : "; cin >> username;
			cout << "Enter password : "; cin >> password;

			ifstream read("./data/data" + username + ".txt");
			getline(read,un);
			getline(read, pw);

			cout << "Checking..." << endl; sleep(3);

			if (username != un || password != pw)
				cout << "Mismatched username and password! Please try again" << endl;
		} while (username != un || password != pw);

		char choice2;
		cout << "Succesfully logged in!" << endl;
		cout << "Do you want to see user information? (y\\n)" << endl; cin >> choice2;
		if (choice2 == 'y')
		{
			cout << "Please Wait..." << endl << endl << endl; sleep(3);
			user.getdata(username);
		}
		else
			return 0;
	}
}
