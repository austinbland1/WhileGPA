// Name: Austin Bland
// Program Purpose: IC-10 with else if
// Date: 10-15-2018

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int average;


        while(num1!=0)
        {
    cout << "Enter the first grade percentage: ";
    cin >> num1;

    cout << "Enter the second grade percentage: ";
    cin >> num2;

    cout << "Enter the third grade percentage: ";
    cin >> num3;

    break;
        }
        

    average=(num1+num2+num3) / 3;

        if(average>=90)
        cout << "Your average letter grade is: A" << endl;
        else if(average>=80)
        cout << "Your average letter grade is: B" << endl;
        else if(average>=70)
        cout << "Your average letter grade is: C" << endl;
        else if(average>=60)
        cout << "Your average letter grade is: D" << endl;
        if(average<=59)
        cout << "Your average letter grade is: F" << endl;

return 0;
}


