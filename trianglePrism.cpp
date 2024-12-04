

#include "TriangularPrism.h"
using namespace std;
#include<iostream>
TriangularPrism::TriangularPrism() {
base = 5;
stars = base;
spacesBefore = 3 * int(base / 2);
spacesInRect = 1;
spacesInTriangle = 1;
}
TriangularPrism::TriangularPrism(int basePar) {
setBase(basePar);
stars = basePar;
spacesBefore = 3 * int(basePar / 2);
spacesInRect = 1;
spacesInTriangle = 1;
}
int TriangularPrism::getBase() {
return base;
}
void TriangularPrism::setBase(int basePar) {
if (basePar >= 5)
base = basePar;
else
base = 5;
}
void TriangularPrism::displayTriangularPrism() {
//part 1 - draw top
spacesInRect = 1;
for (int i = 0; i < (base /2)+1; i++)
{
if (i == 0) { //first row
drawSpaces(spacesBefore);
drawStars(1);
}
else { //second row and onward
drawSpaces(spacesBefore);
drawStars(1);
drawSpaces(spacesInRect);
drawStars(1);
spacesInRect += 2;
}
//pre for next iteration
spacesBefore -= 1;
cout << endl;
}
//part 2 - draw rhombus
spacesInRect -= 2;
for (int i = 0; i < (base /2); i++)
{
drawSpaces(spacesBefore);
drawStars(1);
drawSpaces(spacesInRect);
drawStars(1);
//prep for next iteration
spacesBefore--;
cout << endl;
}
//part 3 - draw right side up and upside down triangles
spacesInRect-=2;
for (int i = 0; i < (base /2)-1; i++)
{
drawSpaces(spacesBefore);
drawStars(1);
drawSpaces(spacesInTriangle);
drawStars(1);
drawSpaces(spacesInRect);
drawStars(1);
cout << endl;
//prep for next iteration
spacesBefore--;
spacesInTriangle += 2;
spacesInRect -= 2;
}
//part 4 - draw the last row
drawStars(base);
cout << endl;
}
void TriangularPrism::drawSpaces(int numOfSpacesPar) {
for (int i = 0; i < numOfSpacesPar; i++)
{
cout << " ";
}
}
void TriangularPrism::drawStars(int numOfStarsPar) {
for (int i = 0; i < numOfStarsPar; i++)
{
cout << "*";
}
}
