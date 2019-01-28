#include<iostream>
#include<string>
using namespace std;
struct GitHubUser
{
	string firstname;
	string username;
	string email;
	string password;
	int foldercount;
};
bool usernameexists(GitHubUser* arr, int size, string Username,int index);
GitHubUser* Searchuser(GitHubUser*user, int size, string Username);
bool Comparison(GitHubUser s, GitHubUser p) //compare two github users
{
	if (s.firstname != p.firstname)
	{
		return false;
	}
	else if (s.username != p.username)
	{
		return false;
	}
	else if (s.email != p.email)
	{
		return false;
	}
	else if (s.foldercount != p.foldercount)
	{
		return false;
	}
	else if (s.password != p.password)
	{
		return false;
	}
	else
	{
		return true;
	}

}
void inputfromuser(GitHubUser* arr, int size) //take input from user according to specified size
{
	int k=10, a=10;
	cout << "please enter first name of" << size << "github users" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << "first name" << endl;
		cin >> arr[i].firstname;
	}
	cout << "please enter usernames of" << size << "github users" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << " username" << endl;
		cin >> arr[i].username;
		k = usernameexists(arr, size, arr[i].username,i);
		//cout << "value of k=" <<k<< endl; //debugging perform
		if (k == 0)
		{
			bool check = false;
			while (check == false)
			{
				cout << "user name already exist please re-enter" << endl;
				cin >> arr[i].username;
				a = usernameexists(arr, size, arr[i].username,i);
				if (a == 1)
				{
					check = true;
					k = 10;
					a = 10;
				}
				else
				{
					check = false;
				}
			}
		}
	}
	cout << "please enter emails of" << size << "github users" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << " email" << endl;
		cin >> arr[i].email;
	}
	cout << "please enter folder counts of " << size << "github users" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << "folder counts " << endl;
		cin >> arr[i].email;
	}
	cout << "please enter passwords of " << size << "github users" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << "passwords " << endl;
		cin >> arr[i].password;
	}
		
}
bool usernameexists(GitHubUser* arr, int size, string Username,int index) //usernameexists functionality
{
	bool flag = true;
	int a = 0;
	for (int i = 0; i < size && flag==true; i++)
	{
		if (i != index)
		{
			if (Username == arr[i].username)
			{
				flag = false;
				a = 1;
				return false;
			}
		}
	}
	if (a == 0)
	{
		return true;
	}
}
GitHubUser* Searchuser(GitHubUser*user, int size, string Username,int &check)//searching user functionality
{
	int a = 0;
	bool flag = false;
	GitHubUser *p;
	for (int i = 0; i < size && flag==false; i++)
	{
		if (Username == user[i].username)
		{
			a = 10;
			flag = true;
			p = &user[i];
			
		}
	}
	if (a = 10)
	{
		return p;
	}
	else
	{
		check = 1;
		p = nullptr;

	}
	

}
