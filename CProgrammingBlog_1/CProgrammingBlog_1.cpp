//#include <stdio.h>
//
//int main() 
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//
//	int* p1 = &arr[0];
//	printf("%d %d\n", *p1, p1[0]);
//	printf("%d %d\n", *(p1 + 1), p1[1]);
//
//	int* p2 = arr;
//	printf("%d %d\n", p2[0], *p2);
//	printf("%d %d\n", p2[1], *(p2 + 1));
//}

//#include <stdio.h>
//#include <stdlib.h> // malloc
//
//void resetArray(int* p)
//{
//	for (int i = 0; i < 10; ++i)
//		p[i] = 0;
//}
//
//void printArray(const int* p)
//{
//	for (int i = 0; i < 10; ++i)
//		printf("%d\n", p[i]);
//}
//
//int main()
//{
//	int* arr = (int*)malloc(sizeof(int) * 10);
//	resetArray(arr);
//	printArray(arr);
//}

#include <stdio.h>
#include <stdlib.h> // malloc, free

char* inputData()
{
	char* buf = (char*)malloc(sizeof(char) * 500);
	printf("문자열을 입력하세요 : ");
	gets_s(buf, 500);
	return buf;
}

int main() 
{
	char* s = inputData();
	printf("string : %s\n", s);
	free(s);
}
