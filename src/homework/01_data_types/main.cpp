//write include statements
#include "data_types.h"
#include<iostream>


//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
    cout<<"Please enter a number: ";
    cin >> num;
    int result; 
    result = multiply_numbers(num);
    cout<<result<<std::endl;

    int num1 = 4;
    result = multiply_numbers(num1);
    cout<<result<<std::endl;

	return 0;
}
   