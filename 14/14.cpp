#include <iostream>
#include <time.h>
#define N 5 
#define M 3
void output(int a[M][N])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			printf("a[%d;%d]= %d\t", i, j, a[i][j]);
		printf("\n");
	}
}
void key(int a[M][N])
{
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
		{
			printf(" a[%d;%d]= ", i, j);
			scanf_s("%d", &a[i][j]);
		}


}
/*void rand(int a[M][N])
{
	int A, B;
	srand(time(NULL));
	do
	{
		printf("¬ведите промежуток [a,b] ");
		scanf_s("%d%d", &A, &B);
	} while (A > B);
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			a[i][j] = rand() % (B - A + 1) + A;
	output(a);


}*/
void downup(int a[M][N])
{
	int t;
		for (int j = 0; j < N; j++)
	{
		if (j % 2 != 0)

			for (int i = 0; i < M/2; i++)
			{
			t = a[i][j];
			a[i][j] = a[M - i-1][j];
			a[M - i-1][j] = t;
		    }
	}
	output(a);
}
void main()
{
	setlocale(LC_ALL, "rus");
	int a[M][N];
	//rand(a);
	key(a);
	printf("\n"
		"\n");
	downup(a);
	system("pause");
}