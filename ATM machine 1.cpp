#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {
    
    private:
    string name;
    long long accnumber;
    char type[10];
    long long amount = 0;
    long long tot = 0;
    
    public:
    
    void setvalue()
    {
        cout<< "Enter name\n";
        cin.ignore();
        
        getline(cin, name);
        
        cout<< "Enter Account number\n";
        cin>> accnumber;
        cout<< "Enter Account type\n";
        cin>> type;
        cout<<"Enter Balance\n";
        cin>> tot;
    }
    
    void showdata()
    {
        cout<<"Name:" << name << endl;
        cout<<"Account No:" << accnumber << endl;
        cout<<"Account type:" << type << endl;
        cout <<"Balance:" << tot << endl;
    }
    
    void deposit()
    {
        cout<<"Enter amount to be deposited\n";
        cin >>amount;
        tot = tot + amount;
    }
    
    void withdraw()
    {
        int a, avai_balance;
        cout << "Enter amount to withdraw\n";
        cin >> a;
        avai_balance = tot - a;
        cout<<"Available Balance is: " << avai_balance;
        tot = avai_balance;
    }
    
    void showbal()
    {
        tot = tot;
        cout<< "\n Total balance is: " << tot;
    }
};
    
    int main()
    {
        
        Bank b;
        
        int choice;
        
        
        while (1){
            
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            <<"WELCOME"
            <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
        cout<<"Enter your choice\n";
        cout<<"\t1. Enter Name , Account Number , Account Type\n";
        cout<<"\t2. Balance Enquiry\n";
        cout<<"\t3. Deposit Money\n";
        cout<<"\t4. Withdraw Money\n";
        cout<<"\t5. Show Total Balance\n";
        cout<<"\t6. Cancel\n";
        cin>> choice;
        
        
        switch(choice){
            case 1:
            b.setvalue();
            break;
            
            case 2:
            b.showdata();
            break;
            
            case 3:
            b.deposit();
            break;
            
            case 4:
            b.withdraw();
            break;
            
            case 5:
            b.showbal();
            break;
            
            case 6:
            exit(1);
            break;
            
            default:
            cout<<"\nInvalid choice\n";
        }
    }
}
    