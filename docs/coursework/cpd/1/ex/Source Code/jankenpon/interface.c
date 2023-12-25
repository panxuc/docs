#include "game.h"
static int win_count = 0;
static int lose_count = 0;
static int tie_count = 0;
void report(int result)
{
	system("cls");
	switch (result)
	{
	case WIN: win_count++; printf("Player A Wins!\n"); break;
	case LOSE: lose_count++; printf("Player B Wins!\n"); break;
	case TIE: tie_count++; printf("A Tie!\n"); break;
	default: printf("Program error!\n"); break;
	}
	printf("\n\n");
	printf("Press Enter to Continue\n");
	getchar();
}
void print_status()
{
	system("cls");
	printf("GAME STATISTICS\n\n");
	printf("A:%d\tB:%d\tTie:%d\n", win_count, lose_count, tie_count);
	printf("Total:%d\n", win_count + lose_count + tie_count);
	printf("\n\n");
	printf("Press Enter to Continue\n");
	getchar();
}
void print_help()
{
	system("cls");
	printf("GAME HELP INFO\n\n");
	printf("While in Game, The Following Characters Can be Used:\n");
	printf(" p for Paper\n");
	printf(" r for Rock\n");
	printf(" s for Scissors\n");
	printf(" q for Main Menu\n");
	printf("\n");
}
