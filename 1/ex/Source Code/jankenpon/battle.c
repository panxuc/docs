#include "game.h"
void main_menu()
{
	system("cls");
	printf("ROCK PAPER SCISSORS Duo Version\n");
	printf("Edited by Xuc Pan\n");
	printf("\nMAIN MENU\n");
	printf("1) Start\n");
	printf("2) Help\n");
	printf("3) Statistics\n");
	printf("q) Quit\n\n");
}
int choose_by_admin()
{
	main_menu();
	char c;
	int admin_choice;
	f: printf("Please Select:\n");
	scanf("%c", &c); getchar();
	switch (c)
	{
	case '\n':
	case '\r': goto f; break;
	case '1': admin_choice = WIN; break;
	case '2': admin_choice = HELP; break;
	case '3': admin_choice = GAME; break;
	case 'q': admin_choice = QUIT; break;
	default: admin_choice = LOSE; break;
	}
	return admin_choice;
}
int choose_by_player_A()
{
	char c;
	int player_A_choice;
	printf("Player A Selects: ");
	scanf("%c", &c); getchar();
	switch (c)
	{
	case 'p': player_A_choice = PAPER; printf("Player A Selected Paper!\n"); break;
	case 'r': player_A_choice = ROCK; printf("Player A Selected Rock!\n"); break;
	case 's': player_A_choice = SCISSOR; printf("Player A Selected Scissors!\n"); break;
	case 'q': player_A_choice = QUIT; break;
	default: player_A_choice = HELP; break;
	}
	return player_A_choice;
}
int choose_by_player_B()
{
	char c;
	int player_B_choice;
	printf("Player B Selects: ");
	scanf("%c", &c); getchar();
	switch (c)
	{
	case 'p': player_B_choice = PAPER; printf("Player B Selected Paper!\n"); break;
	case 'r': player_B_choice = ROCK; printf("Player B Selected Rock!\n"); break;
	case 's': player_B_choice = SCISSOR; printf("Player B Selected Scissors!\n"); break;
	case 'q': player_B_choice = QUIT; break;
	default: player_B_choice = HELP; break;
	}
	return player_B_choice;
}