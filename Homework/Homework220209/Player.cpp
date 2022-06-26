#include "Player.h"
#include <conio.h>
#include <assert.h>

Player::Player(TextScreen* _screen, const char* _Text)
	:Pos_(0, 0)
	, screen_(nullptr)
	, Text()
{
	if (nullptr == _screen)
	{
		assert(false);
	}

	screen_ = _screen;

	for (int i = 0; i < 2; i++)
	{
		Text[i] = _Text[i];
	}

	Pos_ = screen_->GetSize().GetHalfVector();
}

Player::~Player()
{
}

void Player::Render()
{
	screen_->SetPixel(Pos_, Text);
}

void Player::Update()
{
	int value = _getch();

	switch (value)
	{
		case 'a':
		case 'A':
			Pos_.x_ -= 1;
			break;

		case 'd':
		case 'D':
			Pos_.x_ += 1;
			break;

		case 's':
		case 'S':
			Pos_.y_ += 1;
			break;

		case 'w':
		case 'W':
			Pos_.y_ -= 1;
			break;
	}


}
