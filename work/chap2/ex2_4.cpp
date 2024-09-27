 /* exercise-template.cpp <--- The name of the source file goes here
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

    double u[3] = {1.0, 2.0, 3.0};
    double v[3] = {6.0, 5.0, 4.0};
    double A[3][3] = {{1.0, 5.0, 0.0},
                    {7.0, 1.0, 2.0},
                    {0.0, 0.0, 1.0}};
    double B[3][3] = {{-2.0, 0.0, 1.0},
                    {1.0, 0.0, 0.0},
                    {4.0, 1.0, 0.0}};

    double w[3];
    for (int i=0; i<3; i++){
        w[i] = u[i] - 3.0 * v[i];
    }

    double x[3];
    for (int i=0; i<3; i++){
        x[i] = u[i] - v[i];
    }

    double y[3];
    double row = 0;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            row += A[i][j] * u[j];
        }
        y[i] = row;
    }

    double C[3][3];
    double D[3][3];

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            C[i][j] = 4.0 * A[i][j] - 3.0 * B[i][j];
            D[i][j] = A[i][j] - B[i][j];
        }
    }

    return 0;
}
