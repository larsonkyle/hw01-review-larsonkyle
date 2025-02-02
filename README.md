# HW01: Review of CS1A Functions

## Kyle Larson


![hw01](https://github.com/saddleback-college-cs1b/hw01-review-larsonkyle/actions/workflows/hw01_tests.yml/badge.svg)

## Problem Statement

The following formula gives the distance between two points $(x_1, y_1)$ and $(x_2, y_2)$ in the Cartesian plane:

$$ d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$$

Given the center and a point on the circle, you can use this formula to find the radius of the circle. Write a program that prompts the user to enter the center and a point on the circle. The program should then output the circle's radius, diameter, circumference, and area. Your program must have the following functions:

 - `distance`: This function takes as its parameters four numbers that represent two points in the plane and returns the distance between them.
 -  `radius`: This function takes as its parameters four numbers that represent the center and a point on the circle, calls the function `distance` to find the radius of the circle, and returns the circle's radius.
- `circumference`: This function takes as its parameter a number that represents the radius of the circle and returns the circle's circumference. (If $r$ is the radius the circumference is $2\pi r$.)
- `area`: This function takes as its parameter a number that represents the radius of the circle and returns the circles are. (If $r$ is the radius, the area area is $\pi r^2$.)
- Assume that $\pi = 3.1416$

## Files to work on
- `src/circle.h` and implement the necessary function headers therein
- `src/circle.cpp` and implement the necessary function definitions therein
- `src/hw01.cpp` to implement your driver code to test during development

## Compiling and Running the Program
To run the program first compile the function definition file `circle.cpp` and save the output executable as `circle.o`. Then you must link the file to the driver `hw01.cpp` main function that you use to test whether your code works by typing the following shell command: 

`g++ -c circle.cpp -o circle.o`

`g++ hw01.cpp -o hw01 circle.o`

This will compile your `hw01.cpp` and will save and executable as `hw01` in the same directory. Notice that `hw01.cpp` will depend on the function definitions in `circle.h` which you should not forget to `#include "circle.h"` to test your code. Use `hw01.cpp` as a driver to test edge cases.

## Script Generation
Use the command `script` to capture your interaction compiling and running the program as shown:

`script hw01.scr`

`date`

`pwd`

`ls -l`

`g++ hw01.cpp -o hw01`

`./hw01`

`ls -l`

`exit`

## NOTE
- It is required that you add your name and github actions workflow badge to your readme.
- Check the logs from github actions to verify the correctness of your program.
- The Initial code will not necessarily compile. You will have to write the necessary code.
- Commit all changes as you develop the code in your individual private repo. Please provide descriptive commit messages and push from local to your repository. If you do not stage, commit, and push git classroom will not receive your code at all.
- Make sure your last push is before the deadline. Your last push will be considered as your final submission.
- There is no partial credit for code that does not compile
- If you need to be considered for partial grade for any reason(failing tests on travis,etc). Then message the staff on canvas before the deadline. Late email requests may not be considered.

## References
https://github.blog/2017-03-01-real-time-feedback-for-students-using-continuous-integration-tools/
https://docs.github.com/en/actions/monitoring-and-troubleshooting-workflows/adding-a-workflow-status-badge
