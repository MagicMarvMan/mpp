/*
 * NumParser.c
 *
 *  Created on: 24.01.2018
 *      Author: marvin
 */

#include <stdio.h>
#include <stdlib.h>

int parseNum();
int parseSum();
int parseFactor();
int parseProduct();

char * x;

int parseFactor() {
	if(*x >= '0' && *x <= '9') {
		return *x++ - '0';
	} else {
		printf("expected digit but found %c\n", *x);
		return 0;
	}
}

int parseSum() {
	return 0;
}

int parseProduct() {
	return 0;
}

int parseNum() {
	return 0;
}

int main() {
	x = "2*3+5";
	return EXIT_SUCCESS;
}
