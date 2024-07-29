#include <iostream>
// Bank management system
/*
	Savings Account
	Current Account

	--Account Creation
	--Deposit
	--Withdrawl
	--Balance
*/
using namespace std;
class account_details
{
private:
	string account_holder_name;
	int account_no;
	string account_type;

public:
	void get_account_details()
	{
		cout << "\nEnter Customer Name : ";
		cin >> account_holder_name;
		cout << "\nEnter customer Account NO : ";
		cin >> account_no;
		cout << "\nEnter Customer Account Type : ";
		cin >> account_type;
	}
	void display_details()
	{
		cout << "\n\nThe Customer Name is : " << account_holder_name;
		cout << "\nThe Customer Account No : " << account_no;
		cout << "\nThe Customer Account Type : " << account_type;
	}
};
class current_account : public account_details
{
private:
	float balance;

public:
	void current_account_display()
	{
		cout << "\n The Account Balance is : " << balance;
	}
	void current_account_deposit()
	{
		float deposit;
		cout << "\nEnter the Amount to Deposit : ";
		cin >> deposit;
		balance = balance + deposit;
	}
	void current_account_withdraw()
	{
		float withdraw;
		cout << "\n\nBalance : " << balance;
		cout << "\nEnter amount to be withdraw : ";
		cin >> withdraw;
		if (balance < 1000)
		{
			balance = balance - withdraw;
			cout << "\nBalance Amount After withdraw :" << balance;
		}
		else
		{
			cout << "\n! Insuffcient Balance !";
		}
	}
};

class savings_account : public account_details
{
private:
	float saving_account_balance;

public:
	void saving_account_display()
	{
		cout << "\n The Account Balance is : " << saving_account_balance;
	}
	void current_account_deposit()
	{
		float saving_account_deposit, interest;
		cout << "\nEnter the Amount to Deposit : ";
		cin >> saving_account_deposit;
		saving_account_balance = saving_account_balance + saving_account_deposit;
		interest = (saving_account_balance * 2) / 100;
		saving_account_balance = saving_account_balance + interest;
	}
	void saving_account_withdraw()
	{
		float saving_withdraw;
		cout << "\n\nBalance : " << saving_account_balance;
		cout << "\nEnter amount to be withdraw : ";
		cin >> saving_withdraw;
		if (saving_account_balance < 500)
		{
			saving_account_balance = saving_account_balance - saving_withdraw;
			cout << "\nBalance Amount After withdraw :" << saving_account_balance;
		}
		else
		{
			cout << "\n! Insuffcient Balance !";
		}
	}
};

int main()
{
	current_account c;
	savings_account s;
	char type;
	cout << "\nEnter S for saving customer and C for current A/C customer : ";
	cin >> type;
	if (type == 's' || type == 'S')
	{
		s.get_account_details();
		while (1)
		{
			int choice;
			cout << "\nChoose Your Choice" << endl;
			cout << "1) Deposit" << endl;
			cout << "2) Withdraw" << endl;
			cout << "3) Display Balance" << endl;
			cout << "4) Display with full Details " << endl;
			cout << "5) Exit " << endl;
			cout << "6) Enter Your choice: ";
			cin>>choice;
			switch (choice)
			{
			case 1:
				s.current_account_deposit();
				break;
			case 2:
				s.saving_account_withdraw();
				break;
			case 3:
				s.saving_account_display();
			case 4:
				s.display_details();
				s.saving_account_display();
			case 5:
				goto end;
			default:
				cout<<"\n\nEntered choice is invaild,\"TRY AGAIN\"";
			}
		}
	}
	else if (type == 'c' || type == 'C')
	{
	}
	else
	{
		cout << "\nInvalid Account Selection"
	}
	end:
		cout<<"n Thank your for banking us ......"<<endl;
}