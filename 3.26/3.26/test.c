#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include"game.h"
#include<math.h>

int main()
{
	int board[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				board[i][j] = 1;
			}
			if (i == j)
			{
				board[i][j] = 1;
			}
			if (i >= 2 && j >= 1&&j<i)
			{
				board[i][j] = board[i - 1][j - 1] + board[i-1][j];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <10-i ; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}

	return 0;
}








//void Adjust(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Adjust(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}










//int main()
//{
//	int money = 30;
//	scanf("%d", &money);
//	int total = 0;
//	total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	
//}






//int main()
//{
//	int line = 7;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j <line-1-i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i <line-1 ; i++)
//	{
//		for (j = 0; j <i+1 ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*(line-i-1)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}






//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		int sum = 0;
//		int count = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			tmp = tmp / 10;
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + (int)pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10000000; i++)
//	{
//		int count = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}





//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum = a;
//	while (a)
//	{
//		sum = sum + a / 10;
//		a = a / 10;
//	}
//	printf("%d", sum);
//	return 0;
//}







//void reverse_str(char arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		char ret = arr[left];
//		arr[left] = arr[right];
//		arr[right] = ret;
//		left++;
//		right--;
//	}
//}



//void reverse_str(char arr[])
//{
//	int sz = strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[sz - 1];
//	arr[sz - 1] = '\0';
//	if (strlen(arr+1) >= 2)
//	{
//		reverse_str(arr + 1);
//	}
//	arr[sz - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcd efg";
//	int sz = 0;
//	sz = strlen(arr);
//	reverse_str(arr,sz);
//	printf("%s", arr);
//	return 0;
//}


















//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j <line-1-i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			Sleep(10);
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i <line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <i+1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*(line-1-i)-1 ; j++)
//		{
//			Sleep(10);
//			printf("*");
//		}
//		printf("\n");
//	}
//}