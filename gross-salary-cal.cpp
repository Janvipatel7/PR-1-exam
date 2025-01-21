#include<iostream>

using namespace std;

int main(){
int baseSalary , grossSalary , HRA , DA , TA;

    cout << " enter the value of basesalary : ";
    cin >> baseSalary;

    cout << "Enter HRA Percentage :- ";
    cin >> HRA;
     
    cout << "Enter DA Percentage :- ";
    cin >> DA;

    cout << "Enter TA Percentage :- ";
    cin >> TA;

    grossSalary = baseSalary + (baseSalary * HRA / 100) + (baseSalary * DA /100) + (baseSalary * TA /100);

    cout << "Gross Salary : " << grossSalary << endl;

    return 0;
}


