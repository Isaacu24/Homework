#pragma once
#include "ConsoleMath.h"
#include "TextScreen.h"

// ���� :
class ConsoleObject
{
public:
	// constrcuter destructer
	ConsoleObject(
		TextScreen* _Screen,
		const char* _Text,
		const ConsoleVector& _Pos);

	~ConsoleObject();

	// delete Function
	ConsoleObject(const ConsoleObject& _Other) = delete;
	ConsoleObject(ConsoleObject&& _Other) noexcept = delete;
	ConsoleObject& operator=(const ConsoleObject& _Other) = delete;
	ConsoleObject& operator=(ConsoleObject&& _Other) noexcept = delete;

	ConsoleVector GetPos()
	{
		return Pos_;
	}

	void SetPos(ConsoleVector _Value)
	{
		Pos_ = _Value;
	}

	void SetMove(ConsoleVector _Value)
	{
		if (Screen_->GetSize().x_ <= (Pos_.x_ + _Value.x_)
			|| 0 > (Pos_.x_ + _Value.x_))
		{
			return;
		}

		else if (Screen_->GetSize().y_ <= (Pos_.y_ + _Value.y_)
			|| 0 > (Pos_.y_ + _Value.y_))
		{
			return;
		}

		Pos_ += _Value;
	}


	void Render();

protected:

private:
	// Has a �����̶�� �մϴ�.
	// �÷��̾�� ������ �ʹ����� ���� 
	// ���� �� ������ ������ ���� ������ �Ѵٸ�
	// ���̳� �����Ҵ�� �ڽŸ��� �޸𸮸� ������ �Ѵ�.
	TextScreen* Screen_;

	ConsoleVector Pos_;
	// ���� ���̴�.
	char Text_[3];
};
