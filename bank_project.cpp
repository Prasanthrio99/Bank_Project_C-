#include <iostream>
//Bank management system
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
			cout<<"\nEnter Customer Name : "	;
			cin>>account_holder_name;
			cout<<"\nEnter customer Account NO : ";
			cin>>account_no;
			cout<<"\nEnter Customer Account Type : ";
			cin>>account_type;		
		}
		void display_details()
		{
			cout<<"\n\nThe Customer Name is : "<<account_holder_name;
			cout<<"\nThe Customer Account No : "<<account_no;
			cout<<"\nThe Customer Account Type : "<<account_type;
		}
};
class current_account :public account_details
{
	private:
		float balance;
	public:
		void current_account_display()
		{
			cout<<"\n The Account Balance is : "<<balance;
		}
		void current_account_deposit()
		{
			float deposit;
			cout<<"\nEnter the Amount to Deposit : ";
			cin>>deposit;
			balance = balance + deposit;
		}
};

int main() 
{
	
}