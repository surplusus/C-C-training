#include "stdafx.h"
#include <math.h>
#include <Windows.h>

typedef struct 
{
	int x;
	int y;
} Point2D;

//int main()
//{
//	Point2D p1;
//	Point2D p2;
//
//	p1.x = 30;
//	p1.y = 20;
//	p2.x = 60;
//	p2.y = 50;
//
//	int distX = p2.x - p1.x;
//	int distY = p2.y - p2.y;
//
//	system("cls");
//
//	printf("p1 : %d %d \n", p1.x, p1.y);
//	printf("p2 : %d %d \n", p2.x, p2.y);
//
//	double distXY = sqrt((distX*distX) + (distY*distY));
//
//	printf("%f \n", distXY);
//	
//	return 0;
//}

struct Rectangle {
	int x1, y1;
	int x2, y2;
};

int main()
{
	struct Rectangle rect;
	int area;

	rect.x1 = 20;
	rect.y1 = 20;
	rect.x2 = 40;
	rect.y2 = 30;

	area = (rect.x2 - rect.x1) * (rect.y2 - rect.y1);

	printf("%d \n", area);
	return 0;
}