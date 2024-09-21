/*
 * exercise-template.cpp <--- The name of the source file goes here
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

    double A[2][2] = {{4.0, 10.0}, {1.0, 1.0}};
    double det, a, b, c, d;

    a = A[0][0];
    b = A[0][1];
    c = A[1][0];
    d = A[1][1];

    det = a * d - b * c;
    double A_inv[2][2] = {{d/det, -b/det}, {-c/det, a/det}};

    std::cout << "The matrix inverse of A is \n";

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            std::cout << A_inv[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

