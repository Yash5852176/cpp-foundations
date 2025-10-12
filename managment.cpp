# include <iostream>
# include <string>
# include <vector>
# include <limits>

using namespace std;

class Employee {
    private :
    string name;
    int reg_no;
    double monthlysalary;

    public: 
    Employee (){
        reg_no = 0;
        monthlysalary = 0.0;
    }
    void setDetails (){
        cout << "Enter Employee name:";
        getline(cin>>ws,name);
        cout << "Enter Registration Number:";
        cin >> reg_no;
        cout << "Enter Monthly Salary:";
        cin >> monthlysalary;
    }  
    double getAnnualSalary() const {
        return monthlysalary * 12;
    }
    void displayDetails() const {
         cout << "\n-------------------\n";
        cout << "Enter Employee name:"<< name << endl;
        cout << "Enter Registration Number:"<< reg_no << endl;
        cout << "Annual Salary:" << getAnnualSalary() << endl;
    } 
};

int main() {
    vector<Employee> Employees;
    char addMore;

    do{
        Employee newEmployee;
        newEmployee.setDetails();

    Employees.push_back(newEmployee);
    cout <<"\nAdd another employee? (y/n):";
    cin >> addMore;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');       
    } while ( addMore == 'y' || addMore == 'Y');
     cout << "\n --- All Employee Details ---\n";
     for (const auto& emp: Employees) {
     emp.displayDetails (); 
     }
     return 0;
}