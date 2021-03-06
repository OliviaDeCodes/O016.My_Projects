/*************************************************************************
	> File Name: utility.cpp
	> Author: wangpeizhen
	> Mail: 
	> Created Time: 四  4/ 2 14:56:55 2020
 ************************************************************************/
#include "utility.h"
#include <cstring>
bool Is(const char*& Stream, const char* Text) {
	size_t len = strlen(Text);
	const char* Read = Stream;
	while (*Read == ' ')Read++;
	if (strncmp(Read, Text, len) == 0) {
		Stream = Read + len;
		return true;
	} else {
		return false;
	}
}

char GetOp(BinaryOperator B) {
	switch (B) {
	case BinaryOperator::Plus:
		return '+';
	case BinaryOperator::Minus:
		return '-';
	case BinaryOperator::Multiply:
		return '*';
	case BinaryOperator::Divide:
		return '/';
	}
}

int IsLarger(BinaryOperator B1, BinaryOperator B2) {
	int result_b2 = static_cast<int>(B2);
	int result_b1 = static_cast<int>(B1);
	return Regular(result_b2) - Regular(result_b1);
}

int Regular(int input) {
	return input < 2 ? 0 : 1;
}
