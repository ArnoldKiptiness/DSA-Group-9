#include <iostream>
using namespace std;

// Boolean Function to Check Leap Year

bool check_leap_year(int year)
{
    bool check_leap_year = false;
    if (year % 4 == 0)
    {
       check_leap_year = true;
    }
    if (year % 100 == 0)
    {
        check_leap_year = false;
    }
    if (year % 400 == 0)
    {
        check_leap_year = true;
    }
    return check_leap_year;
}
	

int main()
{
int year; 

//Take user input

    cout << "Please input a year: ";
    cin >> year;
    if (check_leap_year(year) == false)  //Call the function and check if return is false
    {
        cout << "The year is not a leap year.  ";
    }
    else
    {
        cout << "The year is a leap year. ";
    }
    
return 0;
}

