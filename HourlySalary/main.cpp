//
//  main.cpp
//  HourlySalary
//
//  Created by Usama Saleem on 1/15/20.
//  Copyright © 2020 Usama Saleem. All rights reserved.
//  Beginner Personal Project (C++)

#include <iostream>
using namespace std;
int main() {
    double salary, hours, weekly, minute, second, itemTime;
    cout << "Welcome to HourlySalary. I'll show you some anayltics about your salary.\n\n";
    cout << "How many hours do you work per week? ";
    cin >> hours;
    cout << "And what is your hourly salary? ";
    cin >> salary;
    
    cout << "\ncalculating...\n";
    cout << "\nYour weekly salary is: $" << (weekly = hours*salary);
    cout << "\nAnnual Salary: $" << double(weekly*52);
    cout << "\n\nNow, it gets interesting...\n";
    cout << "\nEvery minute, you make: $ " << (minute = salary/60);
    cout << "\nEvery second, you make: $ " << (second = minute/60);
    
    cout << "\n\nYou really want a coffee, and it costs $2. Is it worth it?\nFor you, you will need to work " << (itemTime = 120/salary) << " minutes to afford it.\n\n... Is that worth it? Invest it instead. ";
    
    cout << "\n\n";
    
    
    
}

