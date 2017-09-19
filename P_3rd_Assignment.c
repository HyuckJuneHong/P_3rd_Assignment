#include <stdio.h>
int main()
{ 
	int i, n = 0;
	int arr[100], secondMax = 1, Max;

	printf("Enter total number of elements(1 to 100):");
	scanf("%d", &n);
	printf("\n");
	
	while(n<=0 || n>100)
	{
		printf("again(1 to 100)\n");
		scanf("%d", &n);
	}
	for(i=1; i<=n; i++)
	{
		printf("%d.Enter Number:", i);
		scanf("%d", &arr[i]);
		Max = arr[0];
	
		if(arr[i] > Max)
			Max = arr[i];
	}

	for(i=1; i<=n; i++)
	{
		if(arr[i] > secondMax && arr[i] < Max)
			secondMax = arr[i];
	}
	printf("secondMax is %d\n", secondMax);
	return 0;
}
	