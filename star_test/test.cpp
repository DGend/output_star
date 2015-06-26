#include <stdio.h>
int main()
{
	int count = 5; // 전체 줄 겟수 설정.
	int temp2 = (count / 2 + 1); // 카운트하는 수의 중앙값을 가진 변수.
	int temp = 1;int math = 1; // 공식을 연산하기위한 변수.
	for(int a=0; a< count; a++) // 전체 시행 횟수를 출력하기위한 반복문.
	{
		if(temp2 < temp)
			math--;
		else
			math = temp;
		
		//공백을 위한 반복문
		for(int c = 0; c < temp2 - math;c++)
		{
			printf(" ");
		}
		// *을 출력하기위한 반복문
		for(int b = 0; b < 2*(math-1)+1; b++) // (2*n)+1공식
		{
			printf("*");
		}
		printf("\n");
		temp++;
	}

}