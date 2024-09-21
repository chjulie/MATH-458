/*
 * exercise-template.cpp <--- The name of the source file goes here
 *
 * <--- Description of the program goes here.
 *
 * Created on: September 02, 2015 <--- Fill in the date here
 * 	   Author: Davide Forti <davide.forti@epfl.ch> <--- Fill in your name (and e-mail) here
 */

/*
 * Any headers you need to include should be specified on the next lines
 */
#include <iostream>

int main(int argc, char* argv[])
{
	/*
	 * The body of the program goes here
	 */

    int number = 0;
    int sum = 0;

    std::cout << "Enter a list of positive integers. Enter each one and hit RETURN. Enter -1 at the end of the list. \n";

    while (number != -1){
        std::cin >> number;
        sum += number;
    }

    std::cout << "The sum of all of theses numbers is " << sum+1 << ".\n";

    return 0;
}