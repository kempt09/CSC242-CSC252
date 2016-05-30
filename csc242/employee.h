#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>

using namespace std;

class Employee {

public:
    Employee();
    //@params Employee name, maritial status, number of dependents
   	Employee(string a, string c, int d);
   	const string getName();
   	void setName(string a);
   	const string getStatus();
   	void setStatus(string a);
   	const int getDependents();
   	void setDependents(int a);
    const double getTaxRate();
    void setTaxRate(double a);
    const double getHourlyPay();
    void setHourlyPay(double a);
    const int getHoursWorked();
    void setHoursWorked(int a);

    // prints out all information for the employee
    const string getEmployeeInfo();
    const double getWeeklyPay();
    const double getTaxDeductionAmount();


private:
    string status;
    string name;
    int dependents;
    int hoursWorked;
    double hourlyPay;
    double taxRate;
};


#endif
