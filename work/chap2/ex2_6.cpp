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
#include <math.h> 

int main(int argc, char* argv[])
{
	/*
	 * The body of the program goes here
	 */
    // double x[100];

    // // initial guess
    // x[0] = 0;

    // for (int i=1; i<100;i++){
    //     x[i] = x[i-1] - ((exp(x[i-1]) + pow(x[i-1],3) - 5.0) / (exp(x[i-1]) + 3.0 * pow(x[i-1],2)));
    //     std::cout << "Current value of x: " << x[i] << ".\n";
    //     std::cout << "Relative error: " << (x[i] - x[i-1]) / x[i-1] << ".\n";
    // }

    // std::cout << "Final iterate: x = " << x[99] << ".\n";

    // version 2
    double x_next;
    double relerr = 1;
    double count = 0;
    double const TOL = 1e-6;

    // initial guess
    double x_prev = 0.0;
    

    while (relerr > TOL){
        x_next = x_prev - ((exp(x_prev) + pow(x_prev,3) - 5.0) / (exp(x_prev) + 3.0 * pow(x_prev,2)));
        relerr = abs((x_next - x_prev) / x_next);
        std::cout << "Current value of x: " << x_next << ".\n";
        std::cout << "Relative error: " << relerr << ".\n";
        x_prev = x_next;
        count += 1;
    }

    std::cout << "Final iterate: x = " << x_next << ".\n";
    std::cout << "Total number of iterations: " << count << ".\n";

    return 0;
}
