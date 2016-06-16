//
//  ex05.cpp
//  Ex05
//
//  Created by Ally McConnell on 6/13/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>

class Date
{
private:
    int year;
    int month;
    int day;
public:
    Date();
    {
        setDate(time(0));
    }
    Date(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    int getYear()
    {
        return year;
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }
    
};

class Transaction
{
    Date dateTransaction;
    char type;
    double amount;
    double balance;
    string description;
public:
    Transaction(Date newDate Transaction, char newType, double newBalance, string newDescription)
    {
        dateTransaction = newDateTransaction;
        type = newType;
        balance = newBalance;
        print();
    }
    void()
    {
        cout << dateTransaction.getDay() << "-" << dateTransaction.getMonth() << "-" <<dateTransaction.getYear() << "\t" <<balance <<"\t" << type << "\t" << description << "\t" << endl;
    }
        
};

class Acount
        {
        public:
            int id;
            double balance;
            double annualInterestRate;
            Date dateCreated;
            string name;
            
            vector<Transaction>transactions;
        public:
            Account()
            {
                id = 0;
                balance = 0.0;
                annualInterestRate = 0.0;
            }
            Account(int newId, double newBalance)
            {
                id = newId;
                balance = newBalance;
            }
            Account(int newId, double newBalance, double newAnnualInterestRate)
            {
                id = newId;
                balance = newBalance;
                annualInterestRate = newAnnualInterestRate;
            }
            Account(string newName, int newId, double newBalance)
            {
                name = newName;
                id = newId;
                balance = newBalance;
            }
            Account(double newAnnualInterestRate, double newBalance, int newId, string newName)
            {
                annualInterestRate = newAnnualInterestRate;
                balance = newBalance;
                id = newId;
                name = newName;
            }
        public:
            int getId()
            {
                return id;
            }
            double getBalance()
            {
                return balance;
            }
            double getAnnualInterestRate()
            {
                return annualInterestRate;
            }
            void setId(int newId)
            {
                id = newId;
            }
            void setBalance(double newBalance)
            {
                balance = newBalance;
            }
            void setAnnualInterestRate(double newAnnualInterestRate)
            {
                annualInterestRate = newAnnualInterestRate;
            }
            void setDateCreated(Date newDateCreated)
            {
                dateCreated = newDateCreated;
            }
            double getMonthlyInterestRate()
            {
                return Account::annualInterestRate/12;
            }
            double withdraw(double amount)
            {
                balance -= amount;
                Date dateCreated(2015,2,10);
                Transaction newTrans(dateCreated, 'W', balance, "withdrawl made");
                transaction.push_back(newTrans);
                return balance;
            }
            double deposit(double amount){
                balance += amount;
                Date dateCreated(2015,2,10);
                Transactions newTrans(dateCreated, 'D', balance, "deposit made");
                transactions.push_back(newTrans);
                return balance;
            }
        };
        
        int main ()
        {
            Account myAccount(0.015, 1000.0, 1122, "George");
            cout << "\nAccount Holder Name: " << myAccount.name;
            cout << "\nMonthly Interest: " << myAccount.getMonthlyInterestRate();
            cout << "\nBalance: " << myAccount.balance;
            cout << "\n\n\nAccount Summary\n\n";
            cout << "----------------------------------\n";
            cout << "DAY" << "\t" << "AMOUNT" << "\t" << "Type" << "\t" << "DESCRIPTION" << endl;
            cout < " ----------------------------------\n";
            myAccount.deposit(30.00);
            myAccount.deposit(40.00);
            myAccount.deposit(50.00);
            myAccount.withdraw(5.00);
            myAccount.withdraw(4.00);
            myAccount.withdraw(2.00);
            return 0;
        }
