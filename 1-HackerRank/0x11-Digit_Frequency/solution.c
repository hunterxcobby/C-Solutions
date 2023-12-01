#include <stdio.h>

int main() 
{
	int i;
	/* Initialize an array to store the frequency of each digit (0 to 9)*/
	int frequency[10] = {0};

	/* Read the input string*/
	char num[100];
	scanf("%s", num);

	/* Iterate through each character in the string*/
	for (i = 0; num[i] != '\0'; i++) 
	{
		/* Check if the character is a digit*/
		if (num[i] >= '0' && num[i] <= '9') 
		{
			/* Increment the corresponding frequency count*/
			frequency[num[i] - '0']++;
		}
	}

	/* Print the frequency of each digit*/
	for ( i = 0; i < 10; i++) 
	{
		printf("%d ", frequency[i]);
	}

	return 0;
}

