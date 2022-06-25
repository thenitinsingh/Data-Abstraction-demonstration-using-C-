// Data Abstraction implementation in C++
// Data Abstraction refers to the act of representing the special feature without knowing the background details.
// This helps in simulating something similar to Interface in java.
#include <iostream>
using namespace std;
class AbsEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee : AbsEmployee
{

public:
    string Name, Company;
    int Age;
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion()
    {
        if (Age > 25)
            cout << Name << ", congratulations!! You are getting promoted." << endl;
        else
            cout << Name << ", Sorry!! Better luck next time." << endl;
    }
};
int main()
{

    Employee employee1 = Employee("Nitin Singh", "Defence Resarch and Development Organization", 18);
    employee1.AskForPromotion();

    Employee employee2 = Employee("Muskaan Gauba", "Adobe", 27);
    employee2.AskForPromotion();
}
// The condition that should be deciding one's eligibilty for promotion is kept hidden from the individual by calling a seprate method for it.
