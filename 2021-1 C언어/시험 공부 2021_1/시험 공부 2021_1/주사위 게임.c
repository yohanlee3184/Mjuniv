#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_03(void) {

	int player_a = 0;
	int player_b = 0;
	int game_cnt = 2;
	int dice = 0;
	char rtn = 0;
	
	printf("게임 설명 : 주사위를 총 %d 번 굴려 합친 주사위 눈의 합이 더 높은 사람이 이기게 됩니다.", game_cnt);
	printf("\n주사위 게임을 시작하겠습니다.\n");

	srand((unsigned)time(NULL));

	while (game_cnt > 0) {
		printf("\nPlayer A 주사위를 던져주세요. [enter]");

		rtn = getchar();

		dice = (rand() % 6) + 1;
		player_a += dice;
		printf("player A의 점수 : %d\n", dice);
		
		printf("\nPlayer B 주사위를 던져주세요. [enter]");

		rtn = getchar();

		dice = (rand() % 6) + 1;
		player_b += dice;
		printf("player B의 점수 : %d\n", dice);
		game_cnt--;
	}

	printf("\n========================================\n");
	printf("Player A 총합: %d\n", player_a);
	printf("Player B 총합: %d\n", player_b);
	printf("========================================\n");


	return 0;
}