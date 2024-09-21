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
    double p, q, x, y;
    int j;

    // 1.
    if ((p >= q) || (j != 10)){
        x = 5.0;
    }

    // 2. 
    if ((y >= q) && (j == 20)) {
        x = 5.0;
    } else {
        x = p;
    }

    // 3. 
    if (p > q){
        x = 0.0;
    } else if ((p <= q) && (j == 10)) {
        x = 1.0;
    } else {
        x = 2.0;
    }
    
    return 0;
}