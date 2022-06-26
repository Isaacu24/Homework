#include "TextScreen.h"
#include <assert.h>
#include <iostream>

TextScreen::TextScreen(int _width, int _Hight, const char* _DefaultValue)
	: Size_(_width, _Hight)
	, PixelData_(nullptr)
	, DefaultPixel_()
{
	CreateScreen(Size_, _DefaultValue);
}

TextScreen::~TextScreen()
{
	for (int i = 0; i < Size_.y_; i++)
	{
		if (nullptr != PixelData_)
		{
			delete[] PixelData_[i];
			PixelData_ = nullptr;
		}
	}
}



void TextScreen::CreateScreen(ConsoleVector _Size, const char* _Defaultvalue)
{
	Size_ = _Size;

	for (int i = 0; i < 2; i++)
	{
		DefaultPixel_[i] = _Defaultvalue[i];
	}

	int RealWidth = Size_.x_ * 2;
	RealWidth += 1;

	PixelData_ = new char*[Size_.y_];

	for (int i = 0; i < Size_.y_; i++)
	{
		PixelData_[i] = new char[RealWidth];
	}
}

void TextScreen::SettingScreen()
{
	int RealWidth = Size_.x_ * 2;
	RealWidth += 1;

	for (int y = 0; y < Size_.y_; y++)
	{
		for (int x = 0; x < Size_.x_; x++)
		{
			for (int i = 0; i < 2; i++)
			{
				PixelData_[y][(x * 2) + i] = DefaultPixel_[i];
			}

			PixelData_[y][Size_.x_ * 2] = '\n';
			PixelData_[y][(Size_.x_ * 2) + 1] = 0;
		}
	}

}

void TextScreen::PrintScreen()
{
	system("cls");
	
	for (int i = 0; i < Size_.y_; i++)
	{
		printf(PixelData_[i]);
	}
}

void TextScreen::SetPixel(ConsoleVector _Pos, const char* _DefaultValue)
{
	SetPixel(_Pos.x_, _Pos.y_, _DefaultValue);
}

void TextScreen::SetPixel(int _x, int _y, const char* _DefaultValue)
{
	if (Size_.x_ - 1 < _x || Size_.y_ - 1 < _y)
	{
		assert(false);
	}

	for (int i = 0; i < 2; i++)
	{
		PixelData_[_y][(_x * 2) + i] = _DefaultValue[i];
	}
}
