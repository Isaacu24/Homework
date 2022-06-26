#include <cstdlib>
#include <iostream>

class MyInt
{
private:
    int Value;

public:
    MyInt& operator += (MyInt& _MyInt)
    {
        Value = Value + _MyInt.Value;

        return *this;
    }

    MyInt& operator += (int a)
    {
        Value = Value + a;

        return *this;
    }

    MyInt& operator ++ ()
    {
        Value += 1;
        return *this;
    }

    MyInt operator ++ (int)
    {
        MyInt newMyInt(Value);
        Value += 1;

        //원래의 값을 리턴되고 값이 바뀐다.
        return newMyInt; 
    }

    MyInt& operator -= (int a)
    {
        Value = Value - a;

        return *this;
    }

    MyInt& operator -- ()
    {
        Value -= 1;
        return *this;
    }

    MyInt operator -- (int)
    {
        MyInt newMyInt(Value);
        Value -= 1;

        return newMyInt;
    }

    //friend std::ostream& operator << (std::ostream& _Out, MyInt _MyInt)
    //{
    //    std::cout << _MyInt.Value << std::endl;
    //    return _Out;
    //}



public:
    MyInt(int _Value)
    {
        Value = _Value;
    }

    MyInt(MyInt& _MyInt)
    {
        Value = _MyInt.Value;
    }
};


int main()
{
    MyInt myInt = 1;
    MyInt myInt1 = myInt;

    myInt1 += myInt;

    ++myInt1;

    myInt;
    (myInt++)++;
    myInt;
    myInt++;

 /*   std::cout << myInt;*/

    int a = 0;

    return 0;
};


//전위와 후위 연산자
//전위: 참조형
//후위: 값형

