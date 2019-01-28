#include<iostream>
#include<string>
#include"l181184.h"
using namespace std;

int main()
{
	GitHubUser user1, user2;
	user1.firstname = "Rahim";
	user1.email = "rahim@gmail.com";
	user1.username = "rahim123";
	user1.foldercount = 3;
	user2.firstname = "Rahim";
	user2.email = "rahim@gmail.com";
	user2.username = "rahim123";
	user2.foldercount = 3;
	cout << "Comparison functionality check" << endl;
	int result=Comparison(user1, user2);
	cout << result<<endl; //Comparison functionality check
	cout << "how many users data you want to enter?" << endl;
	int usercount;
	cin >> usercount;
	GitHubUser *arr;
	arr = new GitHubUser[usercount];
	inputfromuser(arr, usercount); //input user functionality check
	cout << "please enter username" << endl;
	string username;
	cin >> username;
	int check=0;
	GitHubUser *ptr;
	ptr=Searchuser(arr, usercount, username,check);
	if (check == 1)
	{
		cout << "search result" << endl;
		cout << ptr->firstname << endl;
		cout << ptr->password << endl;
		cout << ptr->email << endl;
		cout << ptr->foldercount << endl;
		cout << ptr->username << endl;

	}
	else
	{
		cout << "not found" << endl;
	}
    

	delete[] arr;
	system("pause");

}
