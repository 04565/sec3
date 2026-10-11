#include <iostream>
#include <string>

using namespace std;

class Employee {
    private:
        static int count;

        int id;
        int age;
        double salary;
        string name;
        string department;
        string date_of_joining;

    public:
        Employee() {
            
            cout << "\n----- Enter Employee Details -----\n";
            cout << "Enter the name: ";
            getline(cin, name);

            cout << "Enter the id: ";
            cin >> id;

            cout << "Enter the age: ";
            cin >> age;

            // the salary is said to be taken as input from user as no formula is given to calculate salary in the question. 
            // It may be changed later
            cout << "Enter the Salary: "; 
            cin >> salary;

            cin.ignore();
            cout << "Enter the Department: ";
            getline(cin, department);

            
            cout << "Enter Date of joining: ";
            getline(cin, date_of_joining);

            count = count + 1;
        }


        static void employee_count();
        friend void compare_salary(Employee, Employee);
};

int Employee::count;

void Employee::employee_count() {
    cout << "\nTotal Employees: " << count <<"\n";
}

void compare_salary(Employee emp_1, Employee emp_2){
    if(emp_1.salary > emp_2.salary){
        cout << emp_1.name << " has higher salary!\n";
    }else if(emp_1.salary < emp_2.salary){
        cout << emp_2.name << " has higher salary!\n";
    }else{
        cout << "Both employees have the same salary!\n";
    }
}

int main() {
    Employee e1, e2;

    Employee::employee_count();

    compare_salary(e1, e2);

    return 0;
}