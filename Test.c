// Program to create basic calculator
#include <stdio.h>

// Function Declarations

// Main Function
int main()
{	
	char Operator;
	float num1, num2, result = 0;

	printf("\n Please Enter an Operator (+, -, *, /) : ");
	scanf_s("%c", &Operator);

	printf("\n Please Enter the Values for two Operands: num1 and num2 : ");
	scanf_s("%f%f", &num1, &num2);

	if (Operator == '+') /* Addition operation */
	{
		/* Display Results */
		printf("\n The result of %.2f + %.2f = %.2f", num1, num2, num1 + num2);
	}
	else if (Operator == '-') /* Subtraction */
	{
		/* Display Results */
		printf("\n The result of %.2f - %.2f = %.2f", num1, num2, num1 - num2);
	}
	else if (Operator == '*') /* Multiplication */
	{
		/* Display Results */
		printf("\n The result of %.2f * %.2f = %.2f", num1, num2, num1 * num2);
	}
	else if (Operator == '/') /* Division */
	{
		/* Display Results */
		printf("\n The result of %.2f / %.2f = %.2f", num1, num2, num1 / num2);
	}
	else
	{
		/* Display Results */
		printf("\n You have entered an Invalid Operator ");
	}

	return 0;
}
