#pragma once

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

	Snake() : head(nullptr), p(nullptr), dir(1) {}
	~Snake() {};

	void ConsoleTextFailed(const char * s);

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