#include <Windows.h>
#include <stdio.h>
#include "Snake.h"

void HideCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//��ȡ����̨�����Ϣ
	CursorInfo.bVisible = false; //���ؿ���̨���
	SetConsoleCursorInfo(handle, &CursorInfo);//���ÿ���̨���״̬
}

void gameIni()
{
	Snake snake;
	snake.snakeWelcometo();
}

int main()
{
	system("mode con cols=100 lines=30");
	HideCursor();
	gameIni();
	return 0;
}