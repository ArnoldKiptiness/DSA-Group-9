#include <iostream>
using namespace std;

// Function to Check Leap Year

bool is_leap_year(int year)
{
    bool is_leap_year = false;
    if (year % 4 == 0)
    {
       is_leap_year = true;
    }
    if (year % 100 == 0)
    {
        is_leap_year = false;
    }
    if (year % 400 == 0)
    {
        is_leap_year = true;
    }
    return is_leap_year;
}
	

int main()
{
int year; 
    cout << "Please input a year: ";
    cin >> year;
    if (is_leap_year(year) == false)  //Call the function and check if return is false
    {
        cout << "The year is not a leap year.  ";
    }
    else
    {
        cout << "The year is a leap year. ";
    }
    
return 0;
}

