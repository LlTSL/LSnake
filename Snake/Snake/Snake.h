#pragma once

/*
	��Ŀ����: ̰����
	�汾 : v1.1
	���� : LlTS
*/

class Snake
{
public:
	enum { W, S, A, D};
	struct Node
	{
		int x, y;   //����
		Node* next;  //��һ���ڵ�
	}; 
	Node* head, *p, *food;
	int dir;   //��λ

	Snake() : head(nullptr), p(nullptr), dir(1), food(nullptr) {}
	~Snake() {};

	void ConsoleTextFailed(const char * s);

	void gameOver();
	void gameExplation();
	void snakeWelcometo();
	void gotoxy(int x, int y);
	void iniMap(); 
	void iniSanke();
	void createFood();
	void controlKey();
	void moveSanke();
	void cantWall();
	void color(int col);
};