// Homework220120.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{
public:
    char hp;
    char hp2;
    char hp3;
    char hp4;
    char hp5;
    int att;
    __int64 att1;

    char hp1;
};

class Test
{

};

int main()
{
    Player newPlayer = Player();
    Test newTest = Test();
    
    __int64 hpPtr = (__int64)&newPlayer;
    __int64 hpPtr0 = (__int64)&newPlayer.hp;
    __int64 hpPtr1 = (__int64)&newPlayer.hp2;
    __int64 hpPtr2 = (__int64)&newPlayer.hp3;
    __int64 hpPtr3 = (__int64)&newPlayer.hp4;
    __int64 hpPtr4 = (__int64)&newPlayer.hp5;
    __int64 hpPtr5 = (__int64)&newPlayer.att;
    __int64 hpPtr6 = (__int64)&newPlayer.att1;
    __int64 hpPtr7 = (__int64)&newPlayer.hp1;

    int playerSize = sizeof(newPlayer);
    int testSize = sizeof(newTest);

    int a = 0;
}
