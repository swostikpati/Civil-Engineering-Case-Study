//***********************************************************************************//
//** Author: Swostik Pati                                                          **//
//** Date Created:                                                                 **//
//** Assignment 1: Civil Engineering Case Study – Water Pressure Exerted on a Dam  **//
//** ENGR-UH-1000 Computer Programming for Engineers, NYUAD                        **//
//** Problem:                                                                      **//
//** To contruct a menu driven program to calculate the force on the dam           **//
//** at a given elevation, or the forces in a range of elevation.                  **//
//***********************************************************************************//


#include <iostream> //included input output stream
#include <iomanip>  //included 'iomanip' for creating tables
#include <cmath>    //included 'cmath' for computing complex mathmatical calculations
using namespace std;

int main()
{
    //defining variables
    const double rho(1000), g(9.81); //defining the density of water(rho) and acceleration due to gravity(g) as constant doubles
    char opt;                        //declaring 'opt' (option) of datatype char (datatype int might cause the code to break if the user enters a character)
    double ans;                      //declaring 'ans' of datatype double which would store the final result

    //Starting an infinite while loop with test condition as 'true' so as to create a menu-driven program
    while (true)
    {
        //Creating another infinite while loop for displaying the Menu to the user and validating it at the same time
        while (true)
        {
            cout << "\t\t||MENU||" << endl;
            cout << "1. Determine the force on the dam at an given elevation\n2. Determine the forces for a range of water elevations \n3. Exit \n Please enter the menu no: " << endl;
            cin >> opt;
            if (opt == '1' || opt == '2' || opt == '3') //Validating the input
            {
                break;
            }
            cout << "Error! Please enter a valid option." << endl; //Showing an error statement if the user enters an invalid input
        }
        if (opt == '3') //Checking if the user wants to terminate the program and terminating it right away without moving further
        {
            cout << "Thank you!...Exited." << endl;
            break; //breaks out of the infinite while loop and the program terminates immediately
        }
        //declaring variables for Elevation of water surface above reservior bottom(D), Width of channel base(b), Distance from edge to bank of channel(a) of double datatypes
        double D, a, b;
        //Prompting the user to give valid inputs for each variable and validating them.
        do
        {
            cout << "Enter Elevation of water surface above reservior bottom(D - in m): " << endl;
            cin >> D;
        } while (D <= 0);
        do
        {
            cout << "Enter Distance from edge to bank of channel(a - in m): " << endl;
            cin >> a;
        } while (a <= 0);
        do
        {
            cout << "Enter Width of channel base(b - in m): " << endl;
            cin >> b;
        } while (b <= 0);

        //Using switch-case to check for the option selected by the user
        switch (opt)
        {
        case '1':
            //declaring variable for Elevation of water above channel bottom where force needs to be calculated(d)
            double d;
            //validating input for 'd'
            do
            {
                cout << "Enter Elevation of water above channel bottom where force needs to be calculated(d - in m): " << endl;
                cin >> d;
            } while (d <= 0 or d > D);

            ans = (rho * g) * (((a * pow(d, 4)) / (6 * pow(D, 2))) + ((b * pow(d, 2)) / 2)); //computing the force with the formula given
            cout << "\nThe force on the dam at " << d << " m elevation is " << ans << " N\n" <<endl;

            break; //breaks out of case '1'
        case '2':
            //declaring variables for lower range(d2), upper range(d1), step-size(step) as double data type
            double d1, d2, step;

            //validating inputs for d1, d2 and step-size
            do
            {
                cout << "Enter a valid upper range (d1 - in m)" << endl;
                cin >> d1;
            } while (d1 <= 0 or d1 > D);
            do
            {
                cout << "Enter a valid lower range (d2 - in m)" << endl;
                cin >> d2;
            } while (d2 < 0 or d2 > d1);
            do
            {
                cout << "Enter a valid step in the range (in m)" << endl;
                cin >> step;
            } while (step < 0 or step > abs(d1 - d2));

            //using a for loop with counter 'i'(datatype double) starting from lower range(d2) to upper range(d1) incrementing in steps of the step-size inputed by the user
            cout<<"\nThe Elevation vs Force on the Dam is given in the table below:  "<<endl;
            cout.setf(ios::left);
            cout << setw(20) << "Elevation (in m)" << "Force (in N)" << setw(20) << endl;
            for (double i = d2; i <= d1; i += step)
            {
                //using the formula with incrementing values of the counter within the range provided
                ans = (rho * g) * (((a * pow(i, 4)) / (6 * pow(D, 2))) + ((b * pow(i, 2)) / 2));

                //printing the answers for each iteration in the form of a table showing the force against the elevation
                cout << setw(20) << i << ans << setw(20) << endl;
            }
            cout<<endl;

            break; //breaks out of case '2'
        }
    }

    return 0;
 }
