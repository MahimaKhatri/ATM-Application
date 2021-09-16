#include<iostream>
using namespace std;

void displaymenu()
{
    cout<<"Welcome"<<endl;
    cout<<"**********************MENU**********************"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit Money"<<endl;
    cout<<"3. Withdraw Money"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"***********************************************"<<endl;

}

int main()
{
    //check balance,deposit,withdraw
    int option;
    double balance=500;
    do{
    displaymenu();
    cout<<"Select any Option"<<endl;
    cin>>option;
    system("clear");
    

    switch(option)
    {
        case 1: cout<<"Balance is:Rs "<<balance<<endl;
               break;
        case 2: cout<<"Deposit Money:";
                double deposit;
                cin>>deposit;
                balance+=deposit;
                cout<<"Total Balance:Rs "<<balance<<endl;
                break;
        case 3:cout<<"Withdraw Amount:";
               double withdraw;
               cin>>withdraw;
               if(withdraw<=balance)
               {
                   balance-=withdraw;
                   cout<<"Total Balance:Rs "<<balance<<endl;
               }
               else 
               {
                   cout<<"Not Enough Balance";
               }
               break;
        default:cout<<"Thanks for coming"<<endl;
    }
    }while(option!=4);
    
}