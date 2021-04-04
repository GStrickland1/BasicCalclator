// Program to create basic calculator
#include <stdio.h>
#include <stdlib.h>

// Union
union Calc {
	int add;
	int subtract;
	int multiply;
	int divide;
}; int num1; int num2;

// Main Function
int main()
{
	FILE * fpr; //File I/O 
		fpr = fopen_s("data.txt", "r");
		if (fpr == NULL)
		{
			puts("Error while opening file");
			exit();
		}
		fclose(fpr);
	
	char Operator;
	unsigned int num1, num2, result = 0;

	printf("\n Please Enter an Operator (+, -, *, /) : ");
	scanf_s("%c", &Operator, 1);

	printf("\n Please Enter the Values for two Operands: num1 and num2 : ");
	scanf_s("%u%u", &num1, &num2);

	if (Operator == '+') /* Addition operation */
	{
		/* Display Results */
		printf("\n The result of %.2u + %.2u = %.2u", num1, num2, num1 + num2);
	}
	else if (Operator == '-') /* Subtraction */
	{
		/* Display Results */
		printf("\n The result of %.2u - %.2u = %.2u", num1, num2, num1 - num2);
	}
	else if (Operator == '*') /* Multiplication */
	{
		/* Display Results */
		printf("\n The result of %.2u * %.2u = %.2u", num1, num2, num1 * num2);
	}
	else if (Operator == '/') /* Division */
	{
		/* Display Results */
		printf("\n The result of %.2u / %.2u = %.2u", num1, num2, num1 / num2);
	}
	else
	{
		/* Display Results */
		printf("\n You have entered an Invalid Operator ");
	}
	return 0;
}
