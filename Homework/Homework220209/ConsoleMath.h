#pragma once
class ConsoleMath
{
	ConsoleMath();
	~ConsoleMath();
};

class ConsoleVector
{
public:
	int x_;
	int y_;

	ConsoleVector GetHalfVector()
	{
		ConsoleVector NewVector;

		NewVector.x_ = x_ / 2;
		NewVector.y_ = y_ / 2;

		return NewVector;
	}

	//ConsoleVector operator=(const ConsoleVector& _Other)
	//{
	//	x_ = _Other.x_;
	//	y_ = _Other.y_;
	//}

	ConsoleVector(int _x, int _y)
		: x_(_x), y_(_y)
	{
	}

	ConsoleVector()
		: x_(0), y_(0)
	{
	};
};