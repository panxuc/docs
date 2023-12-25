#include "game.h"
int compare(int player_A_choice, int player_B_choice)
{
	int result;
	if (player_A_choice == PAPER)
	{
		if (player_B_choice == PAPER)
			result = TIE;
		else if (player_B_choice == ROCK)
			result = WIN;
		else if (player_B_choice == SCISSOR)
			result = LOSE;
	}
	else if (player_A_choice == ROCK)
	{
		if (player_B_choice == PAPER)
			result = LOSE;
		else if (player_B_choice == ROCK)
			result = TIE;
		else if (player_B_choice == SCISSOR)
			result = WIN;
	}
	else if (player_A_choice == SCISSOR)
	{
		if (player_B_choice == PAPER)
			result = WIN;
		else if (player_B_choice == ROCK)
			result = LOSE;
		else if (player_B_choice == SCISSOR)
			result = TIE;
	}
	else result = ERROR;
	return result;
}