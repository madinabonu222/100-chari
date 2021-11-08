#include<stdio.h>
int Substract_Of_Natural_Numbers(int Number);

int main()
{
	int Number, i, Substract = 0;

	printf("\nPlease Enter any Integer Value\n");
	scanf_s("%d", &Number);

	Substract = Substract_Of_Natural_Numbers(Number);

	printf("Substracting of Natural Numbers = %d", Substract);
	return 0;
}

int Substracting_Of_Natural_Numbers(int Number)
{
	int i, Substract = 0;

	if (Number == 0)
	{
		return Number;
	}
	else
	{
		return (Number * (Number - 1) / 2);
	}

}