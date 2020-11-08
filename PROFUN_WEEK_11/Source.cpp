#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

struct point {
	float x, y;
};

float Dis(struct point p1,struct point p2)
{
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

void Cir(float* r)
{
	float pi = 3.14;
	*r = *r / 2;
	//Circle space 
	float space,circumference;
	space = pi * (pow(*r, 2));
	circumference = 2 * pi * (*r);
	float Circle[] = {space,circumference};

	if (*r >= 0)
	{
		if (space > 0 && circumference > 0) {
			int i = 0;
			cout << " Circle sapce = " << Circle[i] << endl;
			i++;
			cout << " Circle circumference  = " << Circle[i] << endl;
		}
			
		if (space <= 0 && circumference <= 0)
			{
				cout << "This circle is don't have space" << endl;
			}
		
	}
	
}

int main()
{	
	int num;
	cout << " How many do you want : ";
	float x1, y1;
	float  x2, y2;


	
	cin >> num;
	for (int i = 0; i < num; i++)
	{
	printf("[%d.] ",i+1);
	cout << " Enter x1 y1 x2 y2 : ";
	
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	struct point p1;
	p1.x = x1;
	p1.y = y1;
	struct point p2;
	p2.x = x2;
	p2.y = y2;

	float distance;
	distance = Dis(p1, p2);
	cout << " Distance = " << distance << endl;
	 // circle
	Cir(&distance);
	
	}
	return 0;
}