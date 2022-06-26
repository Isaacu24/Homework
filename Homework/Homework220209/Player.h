#pragma once
#include "ConsoleMath.h"
#include "TextScreen.h"

class Player
{
public:
	Player(TextScreen* _screen, const char* _Text); 
	~Player();

	ConsoleVector GetPos()	{ return Pos_; }
	void SetPos(ConsoleVector _Pos) { Pos_ = _Pos; }
	void Render();
	void Update();

private:
	TextScreen* screen_;
	ConsoleVector Pos_;
	char Text[3];
};

