#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_03(void) {

	int player_a = 0;
	int player_b = 0;
	int game_cnt = 2;
	int dice = 0;
	char rtn = 0;
	
	printf("���� ���� : �ֻ����� �� %d �� ���� ��ģ �ֻ��� ���� ���� �� ���� ����� �̱�� �˴ϴ�.", game_cnt);
	printf("\n�ֻ��� ������ �����ϰڽ��ϴ�.\n");

	srand((unsigned)time(NULL));

	while (game_cnt > 0) {
		printf("\nPlayer A �ֻ����� �����ּ���. [enter]");

		rtn = getchar();

		dice = (rand() % 6) + 1;
		player_a += dice;
		printf("player A�� ���� : %d\n", dice);
		
		printf("\nPlayer B �ֻ����� �����ּ���. [enter]");

		rtn = getchar();

		dice = (rand() % 6) + 1;
		player_b += dice;
		printf("player B�� ���� : %d\n", dice);
		game_cnt--;
	}

	printf("\n========================================\n");
	printf("Player A ����: %d\n", player_a);
	printf("Player B ����: %d\n", player_b);
	printf("========================================\n");


	return 0;
}