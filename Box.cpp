#include "Box.h"
#include <iostream>
using namespace std;

void Box::setLength(int l) {
	length = l;
}
void Box::setWidth(int w) {
	width = w;
}
void Box::setHeigth(int h) {
	heigth = h;
}
int Box::getLength() {
	return length;
}
int Box::getWidth() {
	return width;
}
int Box::getHeigth() {
	return heigth;
}
int Box::calcVolume() {
	return length * width * heigth;
}

