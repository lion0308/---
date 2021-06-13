#include<iostream>
#include"Dots.h"
using namespace std;
int main() {
    Dots dot;
    cout << "遊戲名稱:畫格子" << endl;
    cout << "遊戲說明:請輸入2個數,第一個數代表行,第二個數代表列" << endl;
    dot.example();
    dot.print();
}
#include "Dots.h"