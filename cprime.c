//
//  cprime.c
//  cprimes
//
//  Created by Calv Collins on 30/04/2014.
//  Copyright (c) 2014 Calvin Collins. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <strings.h>
#include <math.h>

bool isPrime(int num, int *val) {
	if (num <= 1) {
		if (num < 0) {
			*val = -1;
			return false;
		}
		if (num == 1) {
			*val = 1;
			return false;
		}
		*val = 0;
		return false;
	}
	else {
		for (int i=2; i < round(num/2); i++) {
			if (num % i == 0) {
				*val = i;
				return false;
			}
		}
	}
	*val = -1; //In case of anyone calling and getting weird results.
	return true;
}

int main(int argc, char const *argv[])
{
	int input;
	char* message = "Enter a number to check: ";
	printf("%s", message);
	scanf("%d",&input);
	int divisor;

	bool prime = isPrime(input, &divisor);
	if (prime) {
		printf("The number is a prime!\n");
	}
	else {
		printf("The number is not a prime! The two values are: %d,%d\n",input/divisor,divisor);
	}
	return 0;
}