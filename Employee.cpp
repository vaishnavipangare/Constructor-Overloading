//NAME:VAISHNAVI PANGARE
//PRN:25070123501
//ENTC A3
//EXPERIMENT-13

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    double salary;

public:
    // Constructor with no parameters
    Employee() {
        name = "Unknown";
        age = 0;
        salary = 0.0;
    }

    // Constructor with one parameter (name)
    Employee(string n) {
        name = n;
        age = 0;
        salary = 0.0;
    }

    // Constructor with two parameters (name, age)
    Employee(string n, int a) {
        name = n;
        age = a;
        salary = 0.0;
    }

    // Constructor with three parameters (name, age, salary)
    Employee(string n, int a, double s) {
        name = n;
        age = a;
        salary = s;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp1;
    Employee emp2("vaishnavi");
    Employee emp3("harshika", 30);
    Employee emp4("tanishka", 40, 50000.0);

    cout << "Employee 1 details:" << endl;
    emp1.displayDetails();
    cout << "Employee 2 details:" << endl;
    emp2.displayDetails();
    cout << "Employee 3 details:" << endl;
    emp3.displayDetails();
    cout << "Employee 4 details:" << endl;
    emp4.displayDetails();

    return 0;
}

//Output:
//Employee 1 details:
//Name: Unknown
//Age: 0
//Salary: 0
//Employee 2 details:
//Name: vaishnavi
//Age: 0
//Salary: 0
//Employee 3 details:
//Name: harshika
//Age: 30
//Salary: 0
//Employee 4 details:
//Name: tanishka
//Age: 40
//Salary: 50000
