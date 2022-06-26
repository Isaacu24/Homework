#include <list>
#include "Head.h"
#include <conio.h>
#include "Body.h"

Head::Head() 
	: AllBody{nullptr}
{
}

//�θ� �Ҹ��ڸ� �������� ������ ������ �ڽ� �Ҹ��ڴ� ȣ����� �ʴ´�!
Head::~Head() 
{
	std::list<Body*>::iterator iter = AllBody.begin();

	for (; iter != AllBody.end(); ++iter)
	{
		if (nullptr == (* iter))
		{
			continue;
		}

		delete (*iter);
		(*iter) = nullptr;
	}
}


void Head::Update() 
{
	//����� ��ġ�� ����ϰ�
	//����Ʈ�� ù ��° ���̿��� �ش�
	//�׸��� �׸���

	ConsoleVector NewVector0 = GetPos();

	int Value = _getch();

	switch (Value)
	{
	case 'a':
	case 'A':
		// ȭ��ٱ����� �̵��ϸ� �̵��� �ȵǰ� ���ּ���.
		InScreenMovement({ -1, 0 });
		break;
	case 'd':
	case 'D':
		InScreenMovement({ 1, 0 });
		break;
	case 'w':
	case 'W':
		InScreenMovement({ 0, -1 });
		break;
	case 's':
	case 'S':
		InScreenMovement({ 0, 1 });
		break;
	case 'q':
	case 'Q':
		// �������ΰ��� ��������
		// ������ ����ȴ�.
		Death();
		return;
	default:
		break;
	}

	std::list<Body*>::iterator iter;
	iter = AllBody.begin();

	iter++;

	for (; iter != AllBody.end(); ++iter)
	{
		(*iter)->Init(NewVector0, "��");
	}

	return;
}



void Head::OverLap(ConsoleObject* _Link)
{
	AllBody.push_back((Body*)_Link);
}


