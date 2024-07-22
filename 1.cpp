#include <iostream>
using namespace std;
class Employee{
    private:
    string Company;
    string Name;
    int Age;
    public:
    void Introduction(){
        cout<<Company<<endl;
        cout<<Name<<endl;
        cout<<Age<<endl;
        cout<<'\n';
    }
    Employee(string company,string name,int age){
        Name=name;
        Company=company;
        Age=age;
    }
};

int main() {
    Employee employee1=Employee("Amazon","Sreedhar",19);
    employee1.Introduction();
    Employee employee2=Employee("Cisco","Sai",18);
    employee2.Introduction();
    return 0;
}