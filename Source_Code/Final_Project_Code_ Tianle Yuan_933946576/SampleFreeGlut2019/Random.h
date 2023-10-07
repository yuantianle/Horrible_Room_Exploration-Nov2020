#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

float* RandomCord(int bottomx, int topx, int bottomy, int topy, int bottomz, int topz)
{
	float* num = new float[3];
	num[0] = float(rand() % ((topx - bottomx + 1) * 100) + bottomx * 100) / float(100);
	num[1] = float(rand() % ((topy - bottomy + 1) * 100) + bottomy * 100) / float(100);
	num[2] = float(rand() % ((topz - bottomz + 1) * 100) + bottomz * 100) / float(100);

	std::cout << num[0] << num[1] << num[2] << std::endl;
	return num;
}
