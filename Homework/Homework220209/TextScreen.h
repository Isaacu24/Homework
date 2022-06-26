#pragma once
#include "ConsoleMath.h"

class TextScreen
{
public:
	TextScreen(int _width, int _Hight, const char* _DefaultValue);
	~TextScreen();

	TextScreen(const TextScreen& _Other) = delete;
	TextScreen(TextScreen&& _Other) = delete;
	TextScreen& operator=(const TextScreen& _Ohter) = delete;
	TextScreen& operator=(TextScreen&& _Other) noexcept = delete;

	ConsoleVector GetSize()
	{
		return Size_;
	}

	void CreateScreen(ConsoleVector _Size, const char* _Defaultvalue);
	void SettingScreen();
	void PrintScreen();

	void SetPixel(ConsoleVector _Pos, const char* _DefaultValue);
	void SetPixel(int _x, int _y, const char* _DefaultValue);



private:
	ConsoleVector Size_;
	char** PixelData_;
	char DefaultPixel_[3];
};

