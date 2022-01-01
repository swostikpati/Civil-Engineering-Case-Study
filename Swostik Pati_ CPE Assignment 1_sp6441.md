

ENGR-UH 1000

COMPUTER PROGRAMMING FOR ENGINEERS

*Assignment 1: Civil Engineering Case Study – Water*

*Pressure Exerted on a Dam*

Mohamad Eid

Fall 2021

Swostik Pati

1

Assignment 1 - Fall 2021





**Step 1: Problem Identification and Statement**

The objective is the develop a menu-driven software that provides the user with different options

to calculate the force of the water on the dam, the forces for a range of water elevations, and to

quit the menu. The program asks the user to select a valid option in the menu and then based on

the option selected by the user, the program prompts the user to input corresponding values of

water elevation, the width of channel base, etc that are essential for calculating the force of the

water on the dam. The answer is then computed and shown to the user.

**Step 2: Gathering of Information and Input/Output Description**

**Relevant Information:**

Water exerts pressure on the upstream face of a dam as shown in figure 1. The pressure can be

characterized by:

푝(푧) = ρ푔(퐷 − 푧)

(1)

where p(z) = pressure in pascals (or N/m2) exerted at an elevation z meters above the reservoir

bottom; ρ is the density of water, which for this problem is assumed to be a constant 1000 kg/m3;

g is the acceleration due to gravity (9.81 m/s2); and D is the elevation (in m) of the water surface

above the reservoir bottom.

According to equation (1), pressure increases linearly with depth, as depicted in Figure 1-a.

Omitting atmospheric pressure (because it works against both sides of the dam face and

essentially cancels out), the total force ft can be determined by multiplying pressure times the

area of the dam face (as shown in Figure 1-b). Because both pressure and area vary with

elevation, the total force is obtained by evaluating:

Swostik Pati

2

Assignment 1 - Fall 2021





퐷

푓 = ∫ ρ푔푤(푧)(퐷 − 푧)푑푧

(2)

푡

0

where w(z) = width of the dam face (m) at elevation z (Figure 1-b).

Assume that the width of the channel is modeled to be a second order polynomial as shown here:

2

2

푤(푧) = (2푎푧 /퐷 ) + 푏

(3)

Where a is distance from edge of the channel to the bank of the channel, z is distance from

channel bottom, D is depth of the channel, b is width of the channel base, and w(z) is width of

water.

Combining equations (1), (2), and (3), we get:

푑

2

2

푓(푑) = ρ푔 ∫(푑 − 푧) \* ((2푎푧 /퐷 ) + 푏)푑푧

(4)

0

This integration yields the following equation:

4

2

2

푓(푑) = ρ푔 \* [푎푑 /6퐷 + 푏푑 /2]

(5)

This equation will calculate force on the dam at specific locations depending on the depth of the

channel (D), width of the channel base (b), elevation of water above channel bottom (d), distance

from edge to bank of the channel (a), and knowing that g=9.81 N/kg and density of the water is

1000kg/m3.

**Input/output Description:**

The following explains how the program executes.

Swostik Pati

3

Assignment 1 - Fall 2021





||MENU||

\1. Determine the force on the dam at an given elevation

\2. Determine the forces for a range of water elevations

\3. Exit

Please enter the menu no:

1

Enter Elevation of water surface above reservior bottom(D - in

m):

50

Enter Distance from edge to bank of channel(a - in m):

15

Enter Width of channel base(b - in m):

25

Enter Elevation of water above channel bottom where force needs

to be calculated(d - in m):

35

The force on the dam at 35 m elevation is 1.64937e+008 N

||MENU||

\1. Determine the force on the dam at an given elevation

\2. Determine the forces for a range of water elevations

\3. Exit

Please enter the menu no:

2

Enter Elevation of water surface above reservior bottom(D - in

m):

100

Enter Distance from edge to bank of channel(a - in m):

50

Enter Width of channel base(b - in m):

50

Enter a valid upper range (d1 - in m)

80

Enter a valid lower range (d2 - in m)

40

Enter a valid step in the range (in m)

20

Swostik Pati

4

Assignment 1 - Fall 2021





The Elevation vs Force on the Dam is given in the table below:

Elevation (in m)

Force (in N)

4.13328e+008

9.88848e+008

1.90445e+009

40

60

80

||MENU||

\1. Determine the force on the dam at an given elevation

\2. Determine the forces for a range of water elevations

\3. Exit

Please enter the menu no:

3

Thank you!...Exited.

**Step 3: Design of the algorithm and hand-solved problems**

**Test Cases:**

**Test Case 1: Invalid Selection Input**

||MENU||

\1. Determine the force on the dam at an given elevation

\2. Determine the forces for a range of water elevations

\3. Exit

Please enter the menu no:

G (invalid choice)

Error! Please enter a valid option.

(The program displays an error message and prompts the user the

enter a value again)

||MENU||

\1. Determine the force on the dam at an given elevation

\2. Determine the forces for a range of water elevations

\3. Exit

Please enter the menu no:

0 (invalid choice)

Error! Please enter a valid option.

Swostik Pati

5

Assignment 1 - Fall 2021





(If the user enters another invalid input the program again

displays the error message and the loop continues until the user

enter a valid input)

||MENU||

\1. Determine the force on the dam at an given elevation

\2. Determine the forces for a range of water elevations

\3. Exit

Please enter the menu no:

**Test Case 2: Force on the dam at an given elevation**

The user selects ‘1’ and enters the values D = 505.6m, a = 100m,

b = 200m, d = 426.89m, and the output would be:

Force on the dam: 2.00013e+011 N

**Test Case 3: Forces for a range of water elevations**

The user selects ‘2’ and enters the values D = 1000m, a = 200m,

b = 400m, d1 = 800,d2 = 100, step = 100 and the output would be:

Force in the range of water elevations:-

100m - 1.96527e+010

200m - 7.90032e+010

300m - 1.79229e+011

400m - 3.22291e+011

500m - 5.10938e+011

600m - 7.48699e+011

700m - 1.03989e+012

800m - 1.38962e+012

**Test Case 4: Exiting the Menu**

If the user enters ‘3’ in the main menu, the program exits the

menu and the following output is displayed:

Thank you!...Exited.

Swostik Pati

6

Assignment 1 - Fall 2021





**Test Case 5: Invalid values**

The user selects ‘2’ and enters the values D = -100m, a = -2m,

b = 0m, d1 = 50,d2 = 90, step = 1000 and the output would be:

Enter Elevation of water surface above reservior bottom(D - in

m):

-100

(D must be greater than 0 so the user is prompted again)

Enter Elevation of water surface above reservior bottom(D - in

m):

200

Enter Distance from edge to bank of channel(a - in m):

-2

(a must be greater than 0 so the user is prompted again)

Enter Distance from edge to bank of channel(a - in m):

20

Enter Width of channel base(b - in m):

0

(b must be greater than 0 so the user is prompted again)

Enter Width of channel base(b - in m):

10

Enter a valid upper range (d1 - in m)

50

Enter a valid lower range (d2 - in m)

90

(d2 must be lower than d1 so the user is prompted again)

Enter a valid lower range (d2 - in m)

10

Enter a valid step in the range (in m)

1000

(the step must be within the range of d2 and d1 so the user is

prompted again)

Enter a valid step in the range (in m)

20

Swostik Pati

7

Assignment 1 - Fall 2021





**Algorithm Design:**

*Importing dependencies*

*Main() Function*

*Declare two constant variables rho and g of double dataype and initialize them as 1000 and 9.81*

*respectively*

*Declare opt as character*

*Declare ans as double*

*Repeat until broken out of loop (infinite loop)*

*Repeat until broken out of loop (infinite while)*

*Print “(tab)(tab)||MENU||”, Newline*

*Print “1. Determine the force on the dam at an given elevation(newline)2.*

*Determine the forces for a range of water elevations (newline)3. Exit (newline) Please*

*enter the menu no:”, Newline*

*Read value into opt*

*(Validating the user input)*

*If opt is equal to ‘1’ or ‘2’ or ‘3’ :*

*Break out of the while loop*

*Print “Error Please enter a valid option.”, Newline*

*If opt is equal to 3:*

*Print “Thank you!...Exited.”, Newline*

*Break out of the while loop*

*Declare variables D, a, and b of dataype double*

*Repeat*

*Print “Enter Elevation of water surface above reservior bottom(D - in m):”,*

*Newline*

*Read value into D*

*While D less than equal to 0*

*Repeat*

*Print “Enter Distance from edge to bank of channel(a - in m):”, Newline*

*Read value into a*

*While a less than equal to 0*

*Repeat*

*Print “Enter Width of channel base(b - in m):”, Newline*

*Read value into b*

*While b less than equal to 0*

*If opt is equal to ‘1’:*

Swostik Pati

8

Assignment 1 - Fall 2021





*Declare d as double*

*Repeat*

*Print “Enter Elevation of water above channel bottom where force needs*

*to be calculated(d - in m):”, Newline*

*Read value into d*

*While d less than equal to 0 and d greater than D*

*Assign (rho\*g) \* [(ad^4/6D^2) + (bd^2/2)] to ans*

*Print “(newline)The force on the dam at”,d, “m elevation is”,ans, “N”, Newline*

*Break out of the case*

*If opt is equal to ‘2’:*

*Declare variables d1,d2 , and step*

*Repeat*

*Print “Enter a valid upper range (d1 - in m)”, Newline*

*Read value into d1*

*While d1 less than equal to 0 or d1 is greater than D*

*Repeat*

*Print “Enter a valid lower range (d2 - in m)”, Newline*

*Read value into d2*

*While d2 less than 0 and greater than d1*

*Repeat*

*Print “Enter a valid step in the range (in m)”, Newline*

*Read value into step*

*While step less than 0 or greater than absolute value of d1 - d2*

*Print “The Elevation vs Force on the Dam is given in the table below:”, Newline*

*Indent Left*

*Print “Elevation (in m)” and “Force (in N)” (headers of the table) and set width*

*as 20 for each*

*Initiate i (counter variable) with datatype double and value d2*

*Increment i with step-size step and repeat until i less than equal to d1*

*Assign (rho\*g) \* [(ad^4/6D^2) + (bd^2/2)] to ans*

*Print i(elevation) and ans in the form of a table with width 20, Newline*

*Print Newline*

*Break out of the case*

*End Program*

Swostik Pati

9

Assignment 1 - Fall 2021





**Step 4: Implementation**

//\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*//

//\*\* Author:SwostikPati

\*\*//

\*\*//

\*\*//

\*\*//

\*\*//

\*\*//

\*\*//

\*\*//

\*\*//

//\*\* Date Created:

//\*\* Assignment 1: Civil Engineering Case Study – Water Pressure

//\*\* Exerted on a Dam

//\*\* ENGR-UH-1000 Computer Programming for Engineers, NYUAD

//\*\* Problem:

//\*\* To contruct a menu driven program to calculate the force on

//\*\* the dam

//\*\* at a given elevation, or the forces in a range of elevation.

//\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*//

#include <iostream> //included input output stream

#include <iomanip> //included 'iomanip' for creating tables

#include <cmath>

calculations

//included 'cmath' for computing complex mathmatical

using namespace std;

int main()

{

//defining variables

const double rho(1000), g(9.81); //defining the density of water(rho)

and acceleration due to gravity(g) as constant doubles

char opt;

//declaring 'opt' (option) of

datatype char (datatype int might cause the code to break if the user

enters a character)

double ans;

//declaring 'ans' of datatype double

which would store the final result

//Starting an infinite while loop with test condition as 'true' so as

to create a menu-driven program

while (true)

{

//Creating another infinite while loop for displaying the Menu to

the user and validating it at the same time

while (true)

{

Swostik Pati

10

Assignment 1 - Fall 2021





cout << "\t\t||MENU||" << endl;

cout << "1. Determine the force on the dam at an given

elevation\n2. Determine the forces for a range of water elevations \n3.

Exit \n Please enter the menu no: " << endl;

cin >> opt;

if (opt == '1' || opt == '2' || opt == '3') //Validating the

input

{

break;

}

cout << "Error! Please enter a valid option." << endl;

//Showing an error statement if the user enters an invalid input

}

if (opt == '3') //Checking if the user wants to terminate the

program and terminating it right away without moving further

{

cout << "Thank you!...Exited." << endl;

break; //breaks out of the infinite while loop and the program

terminates immediately

}

//declaring variables for Elevation of water surface above

reservior bottom(D), Width of channel base(b), Distance from edge to bank

of channel(a) of double datatypes

double D, a, b;

//Prompting the user to give valid inputs for each variable and

validating them.

do

{

cout << "Enter Elevation of water surface above reservior

bottom(D - in m): " << endl;

cin >> D;

} while (D <= 0);

do

{

cout << "Enter Distance from edge to bank of channel(a - in

m): " << endl;

cin >> a;

} while (a <= 0);

do

{

Swostik Pati

11

Assignment 1 - Fall 2021





cout << "Enter Width of channel base(b - in m): " << endl;

cin >> b;

} while (b <= 0);

//Using switch-case to check for the option selected by the user

switch (opt)

{

case '1':

//declaring variable for Elevation of water above channel

bottom where force needs to be calculated(d)

double d;

//validating input for 'd'

do

{

cout << "Enter Elevation of water above channel bottom

where force needs to be calculated(d - in m): " << endl;

cin >> d;

} while (d <= 0 or d > D);

ans = (rho \* g) \* (((a \* pow(d, 4)) / (6 \* pow(D, 2))) + ((b \*

pow(d, 2)) / 2)); //computing the force with the formula given

cout << "\nThe force on the dam at " << d << " m elevation is

" << ans << " N\n" <<endl;

break; //breaks out of case '1'

case '2':

//declaring variables for lower range(d2), upper range(d1),

step-size(step) as double data type

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

Swostik Pati

12

Assignment 1 - Fall 2021





} while (d2 < 0 or d2 > d1);

do

{

cout << "Enter a valid step in the range (in m)" << endl;

cin >> step;

} while (step < 0 or step > abs(d1 - d2));

//using a for loop with counter 'i'(datatype double) starting

from lower range(d2) to upper range(d1) incrementing in steps of the

step-size inputed by the user

cout<<"\nThe Elevation vs Force on the Dam is given in the

table below: "<<endl;

cout.setf(ios::left);

cout << setw(20) << "Elevation (in m)" << "Force (in N)" <<

setw(20) << endl;

for (double i = d2; i <= d1; i += step)

{

//using the formula with incrementing values of the

counter within the range provided

ans = (rho \* g) \* (((a \* pow(i, 4)) / (6 \* pow(D, 2))) +

((b \* pow(i, 2)) / 2));

//printing the answers for each iteration in the form of a

table showing the force against the elevation

cout << setw(20) << i << ans << setw(20) << endl;

}

cout<<endl;

break; //breaks out of case '2'

}

}

return 0;

}

Swostik Pati

13

Assignment 1 - Fall 2021





**Step 5: Software Testing and Verification**

**Test Case 1: Invalid Selection Input**

**Test Case 2: Force on the dam at an given elevation**

Swostik Pati

14

Assignment 1 - Fall 2021





**Test Case 3: Forces for a range of water elevations**

**Test Case 4: Exiting the Menu**

Swostik Pati

15

Assignment 1 - Fall 2021





**Test Case 5: Invalid values**

**User Guide:**

This program will help you determine the force exerted by water on the dam. You may wish to

find the force exerted by the water at a given elevation above the bottom of the reservoir by

providing the given height or you may provide a range of elevation and a step-size to find the

force exerted at corresponding uniform intervals within the range provided in the form of a table.

The program is in the form of a menu which will allow the you to select your desired option or

you may also exit from the program by entering ‘3’

Swostik Pati

16

Assignment 1 - Fall 2021

