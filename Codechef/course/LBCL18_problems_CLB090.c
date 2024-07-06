// Write a program which does the following

// Create an integer array containing the elements: 10, 20, 30, 40, 50, 60
// Compile and output to the console the accurate count of the number of integer elements in the given array.

int main(void) {
	// your code goes here
int numbers[6] = {10, 20, 30, 40, 50, 60};

// To get actual count
printf("%d", sizeof(numbers) / sizeof(numbers[0]));

// Output:
// 6
}
