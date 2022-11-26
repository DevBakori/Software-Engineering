#include<iostream>
using namespace std;

class A
{
    public:
    int a,pin,z=123,pab = 20000,da,wa;
    char rm;
    string ahn,aba,al;
    int menu()
    {
        cout<<"\n\n||||||||||||||| WELCOME TO ATM |||||||||||||||"<<endl;
        cout<<"\n               ----------------               "<<endl;
        cout<<"\n        current Date : Mon Aug 22 15:00:59 2022 "<<endl;
        cout<<"\n               ----------------               "<<endl;  
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||"<<endl;      
        cout<<"Press 1 then press enter to access your account via pin no"<<endl;
        cout<<"\n                   or                  "<<endl;
        cout<<"\nPress 0 to get help."<<endl;
        cout<<"Press key :-";
        cin>>a;
        
        switch(a)
        {
            case 1:
            cout<<"\n\n||||||||||||||| ATM ACCOUNT ACCESS |||||||||||||||"<<endl; 
            cout<<"\n Enter your account pin access number! [only one attempt is allowed]"<<endl;
            cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
            cout<<"Enter your pin :-";
            cin>>pin;

            if(z == pin)
                {
                    menuscreen();
                }
             else
                {
                    cout<<"\n\n||||||||||||||| THANK YOU |||||||||||||||"<<endl;
                    cout<<"\nyou had made your attempt which failed!!! no more attempts allowed!! sorry!!"<<endl;
                    cout<<"\n|||||||||||||||||||||||||||||||||||||||||"<<endl;
                    cout<<"\nPresy key to continue  .  .  .  ."<<endl; 
                }
            break;
            
            case 2:
            cout<<"\n\n||||||||||||||| ATM ACCOUNT STATUS |||||||||||||||"<<endl;
            cout<<"\nyou must have the correct pin number to access this account. see your \n\n k representative for assistance during opening hours \n\n\tthanks for, your choice today!!"<<endl;
            cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
            cout<<"\nPresy key to continue  .  .  .  ."<<endl;
            break;
           }
        return 0;
    }   
    int menuscreen()
    {
              cout<<"\n\n||||||||||||||| ATM MAIN MENU SCREEN |||||||||||||||"<<endl; 
              cout<<"\nEnter [1] to deposit case"<<endl;
              cout<<"\nEnter [2] to withdraw case"<<endl;
              cout<<"\nEnter [3] to balance inquiry"<<endl;
              cout<<"\nEnter [0] to exit atm"<<endl;
              cout<<"\nPLEASE ENTER A SELECTION PRESS RETURN KEY:"<<endl;
              cin>>a;
              switch(a)
            {
                case 1:
                cout<<"\n\n||||||||||||||| ATM ACCOUNT DEPOSIT SYSTEM |||||||||||||||"<<endl;
                cout<<"The name of account holders are : Rakesh kharva"<<endl;
                cout<<"the account holders' address is : Mumbai"<<endl;
                cout<<"the branch location is dheri"<<endl;
                cout<<"account number :5678"<<endl;
                
                 cout<<"\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                 cout<<"\npresent avaliable balance :Rs."<<pab;
                
                 cout<<"\n\nEnter the amount to be Deposited :Rs.";
                 cin>>da;
                 pab+=da;
                 cout<<"\n\nyour new avalible balance amount is :Rs."<<pab;
                 
                 cout<<"\n\n\tthank you!";
                 cout<<"\nPress R to return menu . . . ."<<endl;
                 cin>>rm;
                 if(rm == 'R')
                 {
                     menuscreen();
                 }
                 break;
                
                case 2:
                cout<<"\n\n||||||||||||||| ATM ACCOUNT WITHDRAW |||||||||||||||"<<endl;
                cout<<"The name of account holders are : Rakesh kharva"<<endl;
                cout<<"the account holders' address is : Mumbai"<<endl;
                cout<<"the ch location is dheri"<<endl;
                cout<<"account number :5678"<<endl;
                cout<<"\n\nEnter the amount to be withdraw :Rs.";
                cin>>wa;
                if(wa > pab)
                {
                            cout<<"\n\n|||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;

                            cout<<"\n\tInsufficient available balance in your account.";
                            cout<<"\n\n\n\t\tSorry !!";
                    
                }
                else
                {
                    pab-=wa;
                    cout<<"Successfull withdraw Rs."<<wa<<endl;
                    cout<<"\n\nyour Avalibal bced amount is :Rs."<<pab;
                }
                
                break;
                case 3:
                cout<<"\n\nyour Avalibal balance amount is :Rs."<<pab;
                break;
                case 0:
                break;
                default :
                cout<<"Invalid input";

            }
            
    }
    
};


int main()
{
    A obj;
    obj.menu();
}