#include <stdio.h>

// Function declarations
int add (int n1, int n2);
int subtract (int n1, int n2);
int multiply (int n1, int n2);
int divide (int n1, int n2);

// Main function
int main()
{
	int num1, num2;

	printf("Enter two numbers: ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d + %d = %d\n", num1, num2, add(num1, num2));
	printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
	printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
	printf("%d / %d = %d\n", num1, num2, divide(num1, num2));

	return 0;
}

// Function to add two integer numbers
int add(int n1, int n2)
{
	int result;
	result = n1 + n2;
	return result;
}

// Function to subtract two integer numbers
int subtract(int n1, int n2)
{
	int result;
	result = n1 - n2;
	return result;
}

// Function to multiply two integer numbers
int multiply(int n1, int n2)
{
	int result;
	result = n1 * n2;
	return result;
}

// Function to divide two integer numbers
int divide(int n1, int n2)
{
	int result;
	result = n1 / n2;
	return result;
}

