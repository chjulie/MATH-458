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
#include <string>

int main(int argc, char* argv[])
{
	/*
	 * The body of the program goes here
	 */
    std::string name;
    std::string surname;
    
    std::cout << "Enter your name: \n";
    std::cin >> name;
    std::cout << "Enter your surname: \n";
    std::cin >> surname;

    std::cout << name << " " << surname << "\n";

    return 0;
}