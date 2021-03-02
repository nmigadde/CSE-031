#include <stdio.h>
int main()
{
int i = 0;
int p = 0;
int x = 0;
int v = -1;
int t = -1;
int w = 0;
int posnum[20];
int negnum[20];
int possum = 0;
int negsum = 0;
int avg_pos = 0;
int avg_neg = 0;
posnum[0] = 0;
negnum[0] = 0;

while (i == 0){
	printf("Please enter an integer: ");
	scanf("%d", &x);
	
	if (x>=0){
		posnum[p] = x;
		negnum[p] = 0;
		v++; 
	}
	
	if (x<=0){
		negnum[p] = x;
		posnum[p] = 0;
		t++;
	}
	
	if (x == 0){
		i = 1;
	}
	
	p++;
}

for (w = 0; w < p; ++w){
	possum += posnum[w];
	negsum += negnum[w];
}

if(v != 0){
	avg_pos = possum / v;
}

if(t != 0){
	avg_neg = negsum / t;
}

printf("\n");

if(v != 0){
	printf("Positive average: %d \n" , avg_pos);
}

if(t != 0){
	printf("Negative average: %d", avg_neg);
}
 
return 0;
}
