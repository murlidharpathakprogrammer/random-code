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
    BankAccount objectOne;
    objectOne.name = "Murlidhar Pathak";
    objectOne.accountNumber= 857496524163;
    objectOne.balance=50000000;
    objectOne.showDetails();
    cout<<"\n";
    BankAccount objectTwo;
    objectTwo.name = "Gajodhar Pandey";
    objectTwo.accountNumber= 748596415263;
    objectTwo.balance=7556000;
    objectTwo.showDetails();
    return 0;
}