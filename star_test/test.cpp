#include <stdio.h>
int main()
{
	int count = 5; // ��ü �� �ټ� ����.
	int temp2 = (count / 2 + 1); // ī��Ʈ�ϴ� ���� �߾Ӱ��� ���� ����.
	int temp = 1;int math = 1; // ������ �����ϱ����� ����.
	for(int a=0; a< count; a++) // ��ü ���� Ƚ���� ����ϱ����� �ݺ���.
	{
		if(temp2 < temp)
			math--;
		else
			math = temp;
		
		//������ ���� �ݺ���
		for(int c = 0; c < temp2 - math;c++)
		{
			printf(" ");
		}
		// *�� ����ϱ����� �ݺ���
		for(int b = 0; b < 2*(math-1)+1; b++) // (2*n)+1����
		{
			printf("*");
		}
		printf("\n");
		temp++;
	}

}