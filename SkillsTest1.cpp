#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    double payRate, grossIncome, netIncome, schoolAmount, bondsAmount;
    double clothesAmount, parentsBondsAmount, hoursWorked;
    const double tax_rate = 0.14;
    const double clothes_percentage = 0.10;
    const double school_percentage = 0.01;
    const double savings_percentage = 0.25;
    const double parents_contribution = 0.50;
    
    cout << "Your pay rate per hour of work: $";
    cin >> payRate;

	cout << "The number of hours you worked each week: ";
    cin >> hoursWorked;
    
    grossIncome = hoursWorked * payRate;
    netIncome = grossIncome * tax_rate;
    clothesAmount = netIncome * clothes_percentage;
    schoolAmount = netIncome * school_percentage;
    netIncome = (clothesAmount + schoolAmount);
    bondsAmount = netIncome * savings_percentage;
    parentsBondsAmount = bondsAmount * parents_contribution;
    cout << fixed << showpoint << setprecision(2);
    
    cout << "~ Your income before taxes from your summer job: $" << grossIncome << endl;
    cout << "~ Your income after taxes from your summer job: $" << netIncome << endl;
    cout << "~ The money you spend on clothes and other accessories: $" << clothesAmount << endl;
    cout << "~ The money you spend on school supplies: $" << schoolAmount << endl;
    cout << "~ The money you spend to buy savings bonds: $" << bondsAmount << endl;
    cout << "~ The money your parents spend to buy additional savings bonds for you: $" <<parentsBondsAmount << endl;
    
    _getch();
    return 0;
}