#include <stdio.h>

int main() 
{
	int arr[10] = { 1, 2, 3, 4, 5 };

	int* p1 = &arr[0];
	printf("%d %d\n", *p1, p1[0]);
	printf("%d %d\n", *(p1 + 1), p1[1]);

	int* p2 = arr;
	printf("%d %d\n", p2[0], *p2);
	printf("%d %d\n", p2[1], *(p2 + 1));
}
