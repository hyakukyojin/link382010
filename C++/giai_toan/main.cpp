#include <iostream>
#include 'console.h'

using namespace std;

void gotoXY (int column, int line)
{
    COORD coord;
    coord.x = column;
    coord.y = line;
    SetConsoleCursorPosition(GetStdHandle(STD_OUT_HANDLD),coord);
}

int main()
{
    gotoXY(20,5);
    return 0;
}
