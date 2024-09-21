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
    int obs[5] = {34, 58, 57, 32, 43};
    double average = 0;

    for (int i = 0; i < 5; i++){
        average += double(obs[i]);
    }

    average /= 5;

    std::cout << "The average amount of cars per day is " << average << "\n";

    return 0;
}