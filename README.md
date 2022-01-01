

# Civil Engineering Case Study - Water Pressure in a Dam


## Problem Identification and Statement

The objective is the develop a menu-driven software that provides the user with different options
to calculate the force of the water on the dam, the forces for a range of water elevations, and to
quit the menu. The program asks the user to select a valid option in the menu and then based on
the option selected by the user, the program prompts the user to input corresponding values of
water elevation, the width of channel base, etc that are essential for calculating the force of the
water on the dam. The answer is then computed and shown to the user.

## Gathering of Information and Input/Output Description

### Relevant Information:

[Picture]

[Picture]

Water exerts pressure on the upstream face of a dam as shown in figure 1. The pressure can be

characterized by:

𝑝(𝑧) = ρ𝑔(𝐷 − 𝑧) ...(1)

where p(z) = pressure in pascals (or N/m2) exerted at an elevation z meters above the reservoir
bottom; ρ is the density of water, which for this problem is assumed to be a constant 1000 kg/m3;
g is the acceleration due to gravity (9.81 m/s2); and D is the elevation (in m) of the water surface
above the reservoir bottom.

According to equation (1), pressure increases linearly with depth, as depicted in Figure 1-a.
Omitting atmospheric pressure (because it works against both sides of the dam face and
essentially cancels out), the total force ft can be determined by multiplying pressure times the
area of the dam face (as shown in Figure 1-b). Because both pressure and area vary with
elevation, the total force is obtained by evaluating:

[Equation] ...(2)
where w(z) = width of the dam face (m) at elevation z (Figure 1-b).\
Assume that the width of the channel is modeled to be a second order polynomial as shown here:

[Equation] ...(3)

Where a is distance from edge of the channel to the bank of the channel, z is distance from
channel bottom, D is depth of the channel, b is width of the channel base, and w(z) is width of
water.

Combining equations (1), (2), and (3), we get:

[Equation] ...(4)

This integration yields the following equation:

[Equation] ...(5)

This equation will calculate force on the dam at specific locations depending on the depth of the
channel (D), width of the channel base (b), elevation of water above channel bottom (d), distance
from edge to bank of the channel (a), and knowing that g=9.81 N/kg and density of the water is
1000kg/m3.

### Input/output Description:

The following explains how the program executes.


||MENU||

1. Determine the force on the dam at an given elevation

2. Determine the forces for a range of water elevations

3. Exit

Please enter the menu no:

1

Enter Elevation of water surface above reservior bottom(D - in m):

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

1. Determine the force on the dam at an given elevation

2. Determine the forces for a range of water elevations

3. Exit

Please enter the menu no:

2

Enter Elevation of water surface above reservior bottom(D - in m):

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

1. Determine the force on the dam at an given elevation

2. Determine the forces for a range of water elevations

3. Exit

Please enter the menu no:

3

Thank you!...Exited.

## Design of the algorithm and hand-solved problems

### Test Cases

### Test Case 1: Invalid Selection Input

||MENU||

1. Determine the force on the dam at an given elevation

2. Determine the forces for a range of water elevations

3. Exit

Please enter the menu no:

G (invalid choice)

Error! Please enter a valid option.

(The program displays an error message and prompts the user the
enter a value again)

||MENU||

1. Determine the force on the dam at an given elevation

2. Determine the forces for a range of water elevations

3. Exit

Please enter the menu no:

0 (invalid choice)

Error! Please enter a valid option.

(If the user enters another invalid input the program again

displays the error message and the loop continues until the user

enter a valid input)

||MENU||

1. Determine the force on the dam at an given elevation

2. Determine the forces for a range of water elevations

3. Exit

Please enter the menu no:

### Test Case 2: Force on the dam at an given elevation

The user selects ‘1’ and enters the values D = 505.6m, a = 100m,

b = 200m, d = 426.89m, and the output would be:

Force on the dam: 2.00013e+011 N

### Test Case 3: Forces for a range of water elevations

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

### Test Case 4: Exiting the Menu

If the user enters ‘3’ in the main menu, the program exits the

menu and the following output is displayed:

Thank you!...Exited.

### Test Case 5: Invalid values

The user selects ‘2’ and enters the values D = -100m, a = -2m,

b = 0m, d1 = 50,d2 = 90, step = 1000 and the output would be:

Enter Elevation of water surface above reservior bottom(D - in m):

-100

(D must be greater than 0 so the user is prompted again)

Enter Elevation of water surface above reservior bottom(D - in m):

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

## Step 5: Software Testing and Verification

### Test Case 1: Invalid Selection Input
[Picture]
### Test Case 2: Force on the dam at an given elevation
[Picture]

### Test Case 3: Forces for a range of water elevations
[Picture]

### Test Case 4: Exiting the Menu
[Picture]

### Test Case 5: Invalid values**
[Picture]

## User Guide:

This program will help you determine the force exerted by water on the dam. You may wish to
find the force exerted by the water at a given elevation above the bottom of the reservoir by
providing the given height or you may provide a range of elevation and a step-size to find the
force exerted at corresponding uniform intervals within the range provided in the form of a table.
The program is in the form of a menu which will allow the you to select your desired option or
you may also exit from the program by entering ‘3’.
