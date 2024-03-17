// Task
// Write a program which does the following:

// Find the area of a circle whose radius is 8.9. Take pi = 3.14
// Declare variables radius, pi and area and assign the relevant values to them
// Formula for area of a circle is Pi * radius * radius
#include <stdio.h>

int main() {

  double pie = 3.14;
  double radius = 8.9;
  double area = pie * radius * radius;

  printf("The Area of the given Circle is %f", area);
  return 0;
}