 #include <stdio.h>

int main(void)
{
	int firstNumber, secondNumber;
	char operator;

	scanf("%d %d %c", &firstNumber, &secondNumber, &operator);

	switch (operator)
	{
		case '+':
			printf("%d", firstNumber + secondNumber);
			break;
		case '-':
			printf("%d", firstNumber - secondNumber);
			break;
		case '*':
			printf("%d", firstNumber * secondNumber);
			break;
		case '/':
			if (secondNumber != 0)
				printf("%d", firstNumber / secondNumber);
			else
				printf("Cannot divide by zero");
			break;
		case '%':
			if (secondNumber != 0)
				printf("%d", firstNumber % secondNumber);
			else
				printf("Cannot divide by zero");
			break;
		default:
			printf("Invalid operator");
	}

	return 0;
}
