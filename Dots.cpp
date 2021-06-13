#include "Dots.h"
#include <iostream>

using namespace std;

Dots::Dots()
{
	a = 0;
	b = 0;
}
Dots::Dots(int nx, int ny)
{
	a = nx;
	b = ny;
}
void Dots::setA(int nx)
{
	a = nx;
}
void Dots::setB(int ny)
{
	b = ny;
}
int Dots::getA()
{
	return a;
}
int Dots::getB()
{
	return b;
}
void Dots::print()
{
	for (int p = 0; p < 24; p++) {
		if (total % 2 != 0)
			cout << "Play1:";
		else
			cout << "Play2:";
		cin >> a >> b;
		if ((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0))
			cout << "輸入錯誤 請重新輸入" << endl;
		else {
			array[a][b] = 1;
			if (total % 2 != 0)
				z = 1;
			else if (total % 2 == 0)
				z = 2;
			for (int i = 0; i < 7; i++) {
				check();
				for (int j = 0; j < 7; j++) {
					if ((i % 2 == 0 && j % 2 == 0))
						cout << "o";
					else if (i % 2 == 0 && array[i][j] == 1 && j % 2 != 0)
						cout << "-";
					else if (j % 2 == 0 && array[i][j] == 1 && i % 2 != 0)
						cout << "|";
					else if (i % 2 != 0 && j % 2 != 0 && (array[i][j] == 1 || array[i][j] == 2)) {
						if (array[i][j] == 1)
							cout << "1";
						else if (array[i][j] == 2)
							cout << "2";
					}
					else
						cout << " ";
				}
				cout << endl;
			}
			total++;
			cout << endl;
		}
	}
	endgame();
}
void Dots::example()
{
	cout << "範例輸入1 0" << endl;
	for (int c = 0; c < 8; c++) {
		for (int d = 0; d < 7; d++) {
			if (c % 2 == 0 && d % 2 == 0)
				cout << "o";
			else if (c == 1 && d == 0)
				cout << "|";
			else
				cout << " ";
		}
		cout << endl;
	}
}
void Dots::check()
{
	if (array[1][0] == 1 && array[1][2] == 1 && array[0][1] == 1 && array[2][1] == 1) {
		if (array[1][1] == 1)
			array[1][1] = 1;
		else if (array[1][1] == 2)
			array[1][1] = 2;
		else {
			array[1][1] = z;
			if (z == 1)
				p1++;
			else
				p2++;
			total++;
		}
	}
	if (array[1][2] == 1 && array[1][4] == 1 && array[0][3] == 1 && array[2][3] == 1) {
		if (array[1][3] == 1)
			array[1][3] = 1;
		else if (array[1][3] == 2)
			array[1][3] = 2;
		else {
			array[1][3] = z;
			if (z == 1)
				p1++;
			else
				p2++;
			total++;
		}
	}
	if (array[1][4] == 1 && array[1][6] == 1 && array[0][5] == 1 && array[2][5] == 1) {
		if (array[1][5] == 1)
			array[1][5] = 1;
		else if (array[1][5] == 2)
			array[1][5] = 2;
		else {
			array[1][5] = z;
			if (z == 1)
				p1++;
			else
				p2++;
			total++;
		}
	}
	if (array[3][0] == 1 && array[3][2] == 1 && array[2][1] == 1 && array[4][1] == 1) {
		if (array[3][1] == 1)
			array[3][1] = 1;
		else if (array[3][1] == 2)
			array[3][1] = 2;
		else {
			array[3][1] = z;
			if (z == 1)
				p1++;
			else
				p2++;
			total++;
		}
	}
	if (array[3][2] == 1 && array[3][4] == 1 && array[2][3] == 1 && array[4][3] == 1) {
		if (array[3][3] == 1)
			array[3][3] = 1;
		else if (array[3][3] == 2)
			array[3][3] = 2;
		else {
			array[3][3] = z;
			if (z == 1)
				p1++;
			else
				p2++;
			total++;
		}
	}
	if (array[3][4] == 1 && array[3][6] == 1 && array[2][5] == 1 && array[4][5] == 1) {
		if (array[3][5] == 1)
			array[3][5] = 1;
		else if (array[3][5] == 2)
			array[3][5] = 2;
		else {
			array[3][5] = z;
			if (z == 1)
				p1++;
			else
				p2++;
			total++;
		}
	}
	if (array[5][0] == 1 && array[5][2] == 1 && array[4][1] == 1 && array[6][1] == 1) {
		if (array[5][1] == 1)
			array[5][1] = 1;
		else if (array[5][1] == 2)
			array[5][1] = 2;
		else {
			array[5][1] = z;
			if (z == 1)
				p1++;
			else
				p2++;
			total++;
		}
	}
	if (array[5][2] == 1 && array[5][4] == 1 && array[4][3] == 1 && array[6][3] == 1) {
		if (array[5][3] == 1)
			array[5][3] = 1;
		else if (array[5][3] == 2)
			array[5][3] = 2;
		else {
			array[5][3] = z;
			if (z == 1)
				p1++;
			else
				p2++;
			total++;
		}
	}
	if (array[5][4] == 1 && array[5][6] == 1 && array[4][5] == 1 && array[6][5] == 1) {
		if (array[5][5] == 1)
			array[5][5] = 1;
		else if (array[5][5] == 2)
			array[5][5] = 2;
		else {
			array[5][5] = z;
			if (z == 1)
				p1++;
			else
				p2++;
			total++;
		}
	}
}
void Dots::endgame()
{
	if (p1 > p2)
		cout << "Play1贏";
	else
		cout << "Play2贏";
}