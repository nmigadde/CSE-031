#include <stdio.h>
int main()
{
int rep = 0;
int typo = 0;
int i = 1;

printf("Enter the number of repetitions for the punishment phrase: ");
scanf("%d", &rep);


if (rep < 0){
	printf("\n");
	printf("You entered an invalid value for the number of repetitions!");
	return 0;
}

printf("Enter the repetition count when you wish to introduce a typo: ");
scanf("%d", &typo);

if (typo < 0){
	printf("\n");
	printf("You entered an invalid value for the typo placement!");
	return 0;
}

rep = rep + 1;
printf("\n");

while (i<rep) {
	if (i != typo){
		printf("C programming language is the best! ");
	}
	if (i == typo){
		printf("C programming lnguage is the bet! ");
	}
	
	i++;
}

return 0;
}
