#include<iostream>
using namespace std;

class corredores
{
public:
	virtual void velocidade()=0;
	~corredores();
};

class homem :public corredores
{
public:
	void velocidade()
	{
		cout << "rapido" << endl;
	}
};

class cao :public corredores
{
public:
	void velocidade()
	{
		cout << "Muito rapido" << endl;
	}
};

class cavalo :public corredores
{
public:
	void velocidade()
	{
		cout << "Extremamente rapido" << endl;
	}
};


int main()
{

	corredores *a = new homem();
	corredores *b = new cao();
	corredores *c = new cavalo();

	a->velocidade();
	b->velocidade();
	c->velocidade();

	system("pause");
	return 0;
}