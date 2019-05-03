#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	int num_ramdom;
	srand(time(NULL));
	num_ramdom=rand() % 10+1;
	printf("%d", num_ramdom);
	return 0;
}
