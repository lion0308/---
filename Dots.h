#ifndef Dots_h
#define Dots_h

class Dots
{
public:
    Dots();
    Dots(int x, int y);
    void setA(int);
    void setB(int);
    int getA();
    int getB();
    void print();
    void example();
    void check();
    void endgame();
private:
    int array[10][10] = {};
    int a, b, z, total = 1, p1 = 0, p2 = 0;
};

#endif