/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void drawSprites(int x, int y);
	void drawPoo(int x, int y);
	void KeyProcessingAndClamping();
	int  ClampX(int x, int myPlayerWidth);
	int  ClampY(int y, int myPlayerheight);
	bool isColliding(int playerX, int playerY, int playerWidth, int playerHeight,
		int pooX, int pooY, int pooWidth, int pooHeight);
	void GameOVer(int x, int y);
	void GameStart(int x, int y);
	void pooVelocity();
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	int myPlayerX = 400;
	int myPlayerY = 300;
	int myPlayerWidth = 20;
	int myPlayerheight = 20;
	int pooX0 = 300;
	int pooY0 = 40;
	bool isEatenPoo0 = false;
	int pooX1 = 700;
	int pooY1 = 300;
	bool isEatenPoo1 = false;
	int pooWidth = 24;
	int pooHeight = 24;
	int pooX2 = 50;
	int pooY2 = 510;
	bool isEatenPoo2 = false;
	bool isGameStarted = false;
	bool isGameRunning = true;
	int velocityX0 = 1;
	int velocityY0 = 1;
	int velocityX1 = 1;
	int velocityY1 = -1;
	int velocityX2 = -1;
	int velocityY2 = 1;

	/********************************/
};