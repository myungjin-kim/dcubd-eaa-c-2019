#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b;
	double x;
	double y;

		printf("���� �������� [��Ȱȯ����] --> [��ȯ��� ����]�� �����մϴ�.\n");
		puts("");
		printf("[1] ����(m) [2] ��ġ(in) [3] ��Ʈ(ft) [4] �ߵ�(yd) [0] ����(stop)\n");
		printf("[��������] --> [��ȯ����], �� ���� �޴� ��ȣ�� �����ϼ���. >>");
		
		scanf("%d %d", &a, &b);
		do {
		printf("[��ȯ�� ����]�� ���̸� �Է��ϼ���. >>");
		scanf("%lf", &x);

		if (x == 0)
		{
			printf("�����մϴ�.");
			break;
		}
		else if (a == 1 && b == 2)
		{
			y = 39.37 * x;
			printf("[���] %.2f(����) --> %.2f(��ġ)\n\n", x, y);
		}
		else if (a == 1 && b == 3)
		{
			y = 3.28 * x;
			printf("[���] %.2f(����) --> %.2f(��Ʈ)\n\n", x, y);
		}
		else if (a == 1 && b == 4)
		{
			y = 1.09 * x;
			printf("[���] %.2f(����) --> %.2f(�ߵ�)\n\n", x, y);
		}
		else if (a == 2 && b == 1)
		{
			y = 0.02 * x;
			printf("[���] %.2f(��ġ) --> %.2f(����)\n\n", x, y);
		}
		else if (a == 2 && b == 3)
		{
			y = 0.08 * x;
			printf("[���] %.2f(��ġ) --> %.2f(��Ʈ)\n\n", x, y);
		}
		else if (a == 2 && b == 4)
		{
			y = 0.02 * x;
			printf("[���] %.2f(��ġ) --> %.2f(�ߵ�)\n\n", x, y);
		}
		else if (a == 3 && b == 1)
		{
			y = 0.30 * x;
			printf("[���] %.2f(��Ʈ) --> %.2f(����)\n\n", x, y);
		}
		else if (a == 3 && b == 2)
		{
			y = 12 * x;
			printf("[���] %.2f(��Ʈ) --> %.2f(��ġ)\n\n", x, y);
		}
		else if (a == 3 && b == 4)
		{
			y = 0.33 * x;
			printf("[���] %.2f(��Ʈ) --> %.2f(�ߵ�)\n\n", x, y);
		}
		else if (a == 4 && b == 1)
		{
			y = 0.91 * x;
			printf("[���] %.2f(�ߵ�) --> %.2f(����)\n\n", x, y);
		}
		else if (a == 4 && b == 2)
		{
			y = 36 * x;
			printf("[���] %.2f(�ߵ�) --> %.2f(��ġ)\n\n", x, y);
		}
		else if (a == 4 && b == 3)
		{
			y = 3 * x;
			printf("[���] %.2f(�ߵ�) --> %.2f(��Ʈ)\n\n", x, y);
		}

	} while (1);

	

}