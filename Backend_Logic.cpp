#include<bits/stdc++.h>
using namespace std;

struct User{
    int User_Id;
    int User_Amount;
    string User_Name;
    int User_Phone;

    User(int Id,string Name,int Phone){  //Create User
        this->User_Id=Id;
        this->User_Name=Name;
        this->User_Phone=Phone;
        this->User_Amount=0;
    }

    ~User(){     // Delete User
            
    }

    void updateUser(){   // Update User Info 

    }
};

class IndividualExpense{
    string id;
    double totalAmount;
    double borrowAmount;
    string description;
    string timeStamp;
    string payee;
    string borrower;

    public:
    IndividualExpense(double totalAmount,double borrowAmount,string description,string timeStamp,string payee,string borrower){
        this->id="abc233";
        this->totalAmount=totalAmount;
        this->borrowAmount=borrowAmount;
        this->description=description;
        this->timeStamp=timeStamp;
        this->payee=payee;
        this->borrower=borrower;
    }

    // void displayExpense(){
    //     cout<<"id -> "<<id<<endl;
    //     cout<<"totalAmount -> "<<totalAmount<<endl;
    //     cout<<"borrowAmount -> "<<borrowAmount<<endl;
    //     cout<<"description -> "<<description<<endl;
    //     cout<<"timeStamp -> "<<timeStamp<<endl;
    //     cout<<"payee -> "<<payee<<endl;
    //     cout<<"borrower -> "<<borrower<<endl;
    //     cout << "***************" << endl;
    // }

    // void saveToFirebase(){

    // }

    // void updateExpense(){

    // }

    // ~IndividualExpense(){

    // }
};

class ExpenseEvent{

    string expId;
    string expenseName;
    double amount;
    string expenseTime;
    string payeId;
    map<string,double>mp;

    ExpenseEvent(string id,string Name,string Time,double Amnt,string Id,map<string,double>&mp){
        this->expId=id;
        this->expenseName=Name;
        this->expenseTime=Time;
        this->amount=Amnt;
        this->payeId=Id;
        this->mp=mp;    
    }
};

class ExpenseService{
    string expId;
    string expenseName;
    double amount;
    string expenseTime;
    string payeId;
    map<string,double>mp;

    public:
    ExpenseService(string id,string Name,string Time,double Amnt,string Id,map<string,double>&mp){
        this->expId=id;
        this->expenseName=Name;
        this->expenseTime=Time;
        this->amount=Amnt;
        this->payeId=Id;
        this->mp=mp;    
    }

    void splitExpense(){
        for(auto i:mp){
            IndividualExpense exp(amount,i.second,expenseName,expenseTime,payeId,i.first); 
        }
    }

    void saveToFirebase(){

    }

    void updateExpense(){

    }

    void deleteExpense(){

    }
};

class Settlement{
    string settlementId;
    string payeId;
    string borrowId;
    double amount;
    string description;
    string timeStamp;

    Settlement(string id,string payeId,string borrowId,double amount,string timeStamp,string description){
        this->settlementId=id;
        this->payeId=payeId;
        this->borrowId=borrowId;
        this->amount=amount;
        this->timeStamp=timeStamp;
        this->description=description;
    }

    void settleExp(){
        // dB updation logic
    }
};


int main()
{
    map<string,double>mp;
    double totalAmnt=300;
    mp["abhi897"]=120;
    mp["yash567"]=100;
    ExpenseService exp("andhr","Night Canteen","23:30",totalAmnt,"suman147",mp);

    exp.splitExpense();
    return 0;
}