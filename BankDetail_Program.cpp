/*Create a class bank account with the following details:
 Name of the account holder, type of account, account
number and current balance as private members.
 Member functions:-
1. Initials( ):- to get initial information from user.
2. Deposit ( ):- to get the amount user want to deposit.
3. Withdraw ( ):- to get the amount , user want to
withdraw.
4. Display ( ):- to display all the information.*/
#include<iostream>
using namespace std;

class bank_account{
    private:
    double balance;
    char acc_holder[20], acc_type[10],acc_number[13];
    public:
    void initials();
    void deposit_amount();
    void withdraw();
    void display();
};
void bank_account ::initials(){
    cout<<"\nEnter the name of account holder=> ";
    gets(acc_holder);
    cout<<"\nEnter the account number(must be 13 digit number)=> ";
    cin>>acc_number;
    cout<<"\nEnter the type of account(Saving/Current)=> ";
    cin>>acc_type;
    cout<<"\nEnter current balance of account=> ";
    cin>>balance;
}
void bank_account ::deposit_amount(){
    float deposit;
    cout<<"\nHow much amount do you want to desposit?";
    cin>>deposit;
    cout<<"!Deposit Sucessfully!";
    balance=balance+deposit;
}
void bank_account ::withdraw(){
    float withd;
    cout<<"\nHow much amount do you want to withdraw?\n";
    cin>>withd;
    cout<<"\n!Withdraw Sucessfully!\n";
    balance=balance-withd;
}
void bank_account ::display(){
 cout<<"\nName of account holder: "<<acc_holder;
 cout<<"\nAccount number: "<<acc_number;
 cout<<"\nCurrent balance available in account: "<<balance;
}
int main(){
    system("CLS");
    bank_account b;
    cout<<"***********WELCOME TO BANK***********";
    cout<<"\nPlease enter your deatils";
    b.initials();

    int x;
    cout<<"\nWhich operation do you want to perform?";
    cout<<"\n1. Deposit Money";
    cout<<"\n2. Withdraw Money";
    cout<<"\nEnter your choice ";
    cin>>x;
    switch (x)
    {
    case 1:{
        b.deposit_amount();}
        break;
    case 2:{
        b.withdraw();
    }
        break;
    default: cout<<"Oops!You enter wrong choice. Please enter again";
        break;
    }
    b.display();
}