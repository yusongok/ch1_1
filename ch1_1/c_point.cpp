#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define  STUDENT 5
#define  SCORE 6

void input_array(float(*score)[STUDENT]);
void avg_score(float(*score)[STUDENT]);
void avg_course(float(*score)[STUDENT]);

int main()
{
	float a[SCORE][STUDENT];
	input_array(a);
	avg_course(a);
	avg_score(a);

}

void input_array(float(*score)[STUDENT]) {
	int i, j;
	for (i = 0; i < SCORE; i++)
	{
		printf("input the %d student score:", i + 1);
			for (j = 0; j < STUDENT; j++)
			{
				scanf("%f", score[i] + j);
			}
	}
}

void avg_course(float(*score)[STUDENT]) {
	int i, j;
	float s;
			for (j=0;j<STUDENT;j++)
			{
				printf("course %d ", j);
			}
			printf("\n");
			for (i=0;i<SCORE;i++)
			{
				s = 0;
				for (j=0;j<STUDENT;j++)
				{
					printf("%.1f ", *(score[i] + j));
					s += *(score[i] + j);

				}
				printf("\ts=%.1f,avg=%.1f\n", s, s / STUDENT);
			}
		}
	
void avg_score(float(*score)[STUDENT]) 
{
	int i, j;
	float s;
	for (i=0;i<STUDENT;i++)
	{
		s = 0;
		for (j=0;j<SCORE;j++)
		{
			s += *(score[j] + i);
		}
		printf("%.1f ", s / SCORE);
	}

}