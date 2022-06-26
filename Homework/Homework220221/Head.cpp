#include <list>
#include "Head.h"
#include <conio.h>
#include "Body.h"

Head::Head() 
	: AllBody{nullptr}
{
}

//부모 소멸자를 가상으로 만들지 않으면 자식 소멸자는 호출되지 않는다!
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
	//헤더의 위치를 기억하고
	//리스트의 첫 번째 아이에게 준다
	//그리고 그린다

	ConsoleVector NewVector0 = GetPos();

	int Value = _getch();

	switch (Value)
	{
	case 'a':
	case 'A':
		// 화면바깥으로 이동하면 이동이 안되게 해주세요.
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
		// 무슨일인가가 벌어져서
		// 게임이 종료된다.
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
		(*iter)->Init(NewVector0, "＠");
	}

	return;
}



void Head::OverLap(ConsoleObject* _Link)
{
	AllBody.push_back((Body*)_Link);
}


