#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Student {
	char name[20];
	int grade;
	int class1;
	float average;
};

//int main()
//{
//	struct Student *s1 = (Student*)malloc(sizeof(Student));
//	
//	strcpy(s1->name, "ȫ�浿");
//	s1->grade = 1;
//	s1->class1 = 3;
//	s1->average = 65.654f;
//
//	printf("�̸� : %s \n", s1->name);
//	printf("�г� : %d \n", s1->grade);
//	printf("�� : %d \n", s1->class1);
//	printf("��� : %f \n", s1->average);
//
//	free(s1);
//
//	return 0;
//}

typedef struct _Pointer3D {
	float x;
	float y;
	float z;
} Point3D;
//int main()
//{
//	Point3D *p1 = (Point3D*)malloc(sizeof(Point3D));
//
//	p1->x = 10.0f;
//	p1->y = 20.0f;
//	p1->z = 30.0f;
//
//	printf("%f %f %f\n", p1->x, p1->y, p1->z);
//	free(p1);
//	return 0;
//}

struct Item {
	char name[100];
	int price;
	bool limited;
};

int main()
{

	struct Item item1 = { "������ ���ϸ�� ���亥 ����� ����", 100000, false };
	struct Item *ptr;
	ptr = &item1;

	ptr->limited = true;

	if (ptr->limited == true)
		printf("������\n");
	else
		printf("�Ϲ���\n");
	return 0;
}