#pragma once
#include "ConsoleObject.h"

// ���� :
class Player : public ConsoleObject
{
public:
	// constrcuter destructer
	Player(TextScreen* _Screen, const char* _Text);
	~Player();

	// delete Function
	Player(const Player& _Other) = delete;
	Player(Player&& _Other) noexcept = delete;
	Player& operator=(const Player& _Other) = delete;
	Player& operator=(Player&& _Other) noexcept = delete;


	void Update(bool& _IsLoop);

protected:

private:
	// Monster* OtherMonster;

};

