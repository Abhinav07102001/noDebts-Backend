#include <bits/stdc++.h>
using namespace std;

class IndividualExpense{
    string photo;
    string userName;
    int amount;

    IndividualExpense(string photo,string userName,int amount){
        this->photo=photo;
        this->userName=userName;
        this->amount=amount;
    }
};

class Event{
    string eventName;
    int amount;
    string timeStamp;

    Event(string eventName,int amount,string timeStamp)
    {
        this->eventName=eventName;
        this->amount=amount;
        this->timeStamp=timeStamp;
    }
};


class Service{
   int overallExp; 
   vector<IndividualExpense>v1;
   vector<Event>v2;
};