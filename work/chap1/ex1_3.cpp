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
    double vec1[3] = {5.0, 1.0, 4.0};
    double vec2[3] = {6.0, 7.0, 2.0};

    // Compute dot product
    double dotproduct = 0;

    for (int i=0; i<3; i++) {
        dotproduct += vec1[i] * vec2[i];
    }
    std::cout << "The result of the dot product is: " << dotproduct << "\n";

    // Euclidean norm
    double eunorm1 = 0;
    double eunorm2 = 0;

    for (int i=0; i<3; i++) {
        eunorm1 += pow(vec1[i], 2.0);
        eunorm2 += pow(vec2[i], 2.0);
    }

    std::cout << "The result of the euclidean norm of vector 1 is: " << sqrt(eunorm1) << "\n";
    std::cout << "The result of the euclidean norm of vector 2 is: " << sqrt(eunorm2) << "\n";

    return 0;
}