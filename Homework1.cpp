//Reach Vann


#include <iostream>
#include <unordered_map>
#include <limits>
#include<iomanip>
using namespace std;
struct data{
    float salary, raisep, newsalary, raiseamount;
    string department;
};


int main(){
    cout << setprecision(2) << showpoint << fixed;
    float ma = numeric_limits<int>::min();
    float mi = numeric_limits<int>::max();
    unordered_map <string, data> data1;
    int noe;
    cout << "Enter Number of Employees: ";
    cin >> noe;
    string key[noe];
    float ctotal = 0, rtotal = 0, ntotal = 0, avg = 0;
    for(int x = 0; x < noe; x++){
        cout << "\nEnter Name: ";
        getline(cin.ignore(), key[x]);
        cout << "Department: ";
        cin >> data1[key[x]].department;
        cout << "Salary: $";
        cin >> data1[key[x]].salary;
        cout << "Raise Percentage: ";
        cin >> data1[key[x]].raisep;
        data1[key[x]].raiseamount = (data1[key[x]].salary * (data1[key[x]].raisep / 100));
        data1[key[x]].newsalary = data1[key[x]].salary + data1[key[x]].raiseamount;
        ctotal += data1[key[x]].salary;
        rtotal += data1[key[x]].raiseamount;
        ntotal += data1[key[x]].newsalary;
        ma = max(ma, data1[key[x]].raiseamount);
        mi = min(mi, data1[key[x]].raiseamount);
    }
    
    avg = rtotal / noe;

    for(auto y : key){
        cout << endl << "Name: " << y << endl;
        cout << "Department: " << data1[y].department << endl;
        cout << "Salary: $" << data1[y].salary << endl;
        cout << "Raise Percentage: " << data1[y].raisep << "%" << endl;
        cout << "Raise Amount: $" << data1[y].raiseamount << endl;
        cout << "New Salary: $" << data1[y].newsalary << endl;
    }
    
    cout << "\nAverage Raise: $"  << avg << endl;
    cout << "Smallest Raise: $" << mi << endl;
    cout << "Largest Raise: $" << ma << endl;
    cout << "Total amount of current yearly income: $" << ctotal << endl;
    cout << "Total amount of raise: $" << rtotal << endl;
    cout << "Total amount of new pay: $" << ntotal << endl;
    return 0;

}

/* This is a comment 
Enter Number of Employees: 5

Enter Name: James, Kobe
Department: Accounting
Salary: $66111.54
Raise Percentage: 6.6

Enter Name: Walton, Lebron
Department: Marketing
Salary: $89224.17
Raise Percentage: 4.8

Enter Name: Rondo, Luke
Department: Sales
Salary: $75123.25
Raise Percentage: 7.4

Enter Name: Bryant, Kyle
Department: Sales
Salary: $69644.44
Raise Percentage: 5.5

Enter Name: Kuzma, Rajon
Department: Marketing
Salary: $96222.77
Raise Percentage: 3.9

Name: James, Kobe
Department: Accounting
Salary: $66111.54
Raise Percentage: 6.60%
Raise Amount: $4363.36
New Salary: $70474.90

Name: Walton, Lebron
Department: Marketing
Salary: $89224.17
Raise Percentage: 4.80%
Raise Amount: $4282.76
New Salary: $93506.93

Name: Rondo, Luke
Department: Sales
Salary: $75123.25
Raise Percentage: 7.40%
Raise Amount: $5559.12
New Salary: $80682.37

Name: Bryant, Kyle
Department: Sales
Salary: $69644.44
Raise Percentage: 5.50%
Raise Amount: $3830.44
New Salary: $73474.88

Name: Kuzma, Rajon
Department: Marketing
Salary: $96222.77
Raise Percentage: 3.90%
Raise Amount: $3752.69
New Salary: $99975.46

Average Raise: $4357.67
Smallest Raise: $3752.69
Largest Raise: $5559.12
Total amount of current yearly income: $396326.19
Total amount of raise: $21788.37
Total amount of new pay: $418114.53

*/

