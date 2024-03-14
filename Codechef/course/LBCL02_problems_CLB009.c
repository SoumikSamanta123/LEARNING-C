// Area & Perimeter of Rectangle
// Write a program for the following problem

// Let’s consider a rectangle of sides 11 and 13.
// Find and output area of the rectangle having sides as 11 and 13
// Find and output perimeter of the rectangle having side as 11 and 13
// For any rectangle, the formula for area is length * breadth.
// The formula for perimeter is 2 * (length + breadth)

#include <stdio.h>

int main() {
    int b=11,l=13;
    // Add the formula for area of 11 and 13
	printf("%d\n", b*l);
	
	// Add the formula for perimeter of 11 and 13
	printf("%d\n", 2 * (b+l));
	
	return 0;
}
