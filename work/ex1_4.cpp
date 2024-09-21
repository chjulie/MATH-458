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
    double A[2][2] = {{1.0, 2.0}, {4.0, 5.0}};
    double B[2][2] = {{2.0, 4.0}, {8.0, 10.0}};
    double C[2][2], D[2][2];

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            C[i][j] = A[i][j] + B[i][j];
            D[i][j] = A[i][j] * B[i][j];
        }
    }
    // Find a way to print all elements and not adress of first element
    std::cout << "C =  \n";

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            std::cout << C[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "D =  \n";

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            std::cout << D[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
