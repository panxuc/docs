#include "game.h"
extern int choose_by_admin();
extern int choose_by_player_A();
extern int choose_by_player_B();
extern int compare(int player_A_choice, int player_B_choice);
extern void print_status();
extern void print_help();
extern void main_menu();
extern void report(int result);
int main()
{
	int result;
	int player_A_choice, player_B_choice, admin_choice;
	reset:
	while ((admin_choice = choose_by_admin()) != QUIT)
	{
		switch (admin_choice)
		{
		case WIN: system("cls"); break;
		case HELP: 
			print_help();
			printf("\n\n");
			printf("Press Enter to Continue\n");
			getchar();
			goto reset;
			break;
		case GAME: 
			print_status();
			goto reset;
			break;
		default: goto reset; break;
		}
		reset_A:
		player_A_choice = choose_by_player_A();
		switch (player_A_choice)
		{
		case PAPER:
		case ROCK:
		case SCISSOR:
			reset_B:
			player_B_choice = choose_by_player_B();
			printf("\nPress Enter to Continue\n");
			getchar();
			switch (player_B_choice)
			{
			case PAPER:
			case ROCK:
			case SCISSOR:
				result = compare(player_A_choice, player_B_choice);
				report(result); main_menu(); break;
			case HELP: 
				print_help(); 
				goto reset_B;
				break;
			case QUIT: goto reset; break;
			default: printf("Input Error! Try Again.\n"); break;
			}
		case HELP: 
			print_help(); 
			goto reset_A;
			break;
		case QUIT: goto reset; break;
		default: printf("Input Error! Try Again.\n"); break;
		}
	}
	print_status();
	return 0;
}