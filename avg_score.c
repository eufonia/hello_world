#include <stdio.h>
#include <conio.h>

/*
임의의 시험 점수를 입력 받아서 평균을 구하는 프로그램
*/

int main(void)
{
	int num = 0, rep = 1, score = 0;
	float sum = 0;	//시험 점수의 합

	printf("시험 점수 갯수를 입력하시오: ");	//시험 점수의 갯수 입력
	scanf("%d", &num);

	while (rep < num + 1)	//시험 점수의 갯수만큼 반복
	{
		printf("점수 %d: ", rep);
		scanf("%d", &score);

		sum += (float)score;
		rep++;	//다음 점수 입력으로 넘어가기 위한 증가

	}

	printf("평균은 %.1f 입니다.", sum / (float)num);

	_getch();

	return 0;
}
