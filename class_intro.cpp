#include<iostream>
using namespace std;

    class BankAccount{
        public:
        string name;
        long int accountNumber;
        int balance;
        void showDetails(){
                cout<<"Account Number: "<<accountNumber<<endl;
                cout<<"Customer Name: "<<name<<endl;
                cout<<"Balance: "<<balance<<endl;
            }
    };

int main(){
    BankAccount one;
    one.name = "Murlidhar Pathak";
    one.accountNumber= 857496524163;
    one.balance=50000000;
    one.showDetails();
    cout<<"\n";
    BankAccount two;
    two.name = "Gajodhar Pandey";
    two.accountNumber= 748596415263;
    two.balance=7556000;
    two.showDetails();
    return 0;
}