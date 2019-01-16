#pragma once

#include "Board.h"
#include "BlackStone.h"
#include "WhiteStone.h"

class Game
{
	Board* m_board[BOARD][BOARD];
	BlackStone* m_black_stone;
	WhiteStone* m_white_stone;

	public:
		Game();
		~Game();
	void GameStart();
	void CountStone(int board[BOARD][BOARD], int *c1, int *c2);
};