#include <Windows.h>
#include <stdio.h>
#include "Snake.h"

void HideCursor()
{
	//���ع��
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//��ȡ����̨�����Ϣ
	CursorInfo.bVisible = false; //���ؿ���̨���
	SetConsoleCursorInfo(handle, &CursorInfo);//���ÿ���̨���״̬
}

void WindowsStyle()
{
	HWND hWnd = GetConsoleWindow(); //���cmd���ھ��
	RECT rc;
	GetWindowRect(hWnd, &rc); //���cmd���ڶ�Ӧ����

	//�ı�cmd���ڷ��
	SetWindowLongPtr(hWnd,
		GWL_STYLE, GetWindowLong(hWnd, GWL_STYLE) & ~WS_THICKFRAME & ~WS_MAXIMIZEBOX & ~WS_MINIMIZEBOX);
	//��Ϊ����漰���߿�ı䣬�������SetWindowPos��������Ч��
	SetWindowPos(hWnd,
		NULL,
		rc.left,
		rc.top,
		rc.right - rc.left, rc.bottom - rc.top, NULL);
}

void gameIni()
{
	SetConsoleTitle(LPCSTR("̰���� v1.2"));
	Snake snake;
	snake.snakeWelcometo();
}

int main()
{
	system("mode con cols=100 lines=30");
	HideCursor();
	//WindowsStyle();
	gameIni();
	return 0;
}