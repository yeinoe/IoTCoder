#include <stdio.h>
#include <string.h>

int main()
{
	int arr[51];
	int n, i, sum = 0, sum_arr = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum += i;

	}
	for (i = 1; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum_arr += arr[i];
	}
	printf("%d", sum - sum_arr);

	return 0;
}