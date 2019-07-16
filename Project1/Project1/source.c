#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	printf("example number = ");
	int num = 0;
	scanf("%d", &num);

	switch (num) {

	case 1:
	{
		int b = 20;
		int res = 2;
		printf("res = %d\n", res);
		res *= b + 10;
		printf("b = %d\n", b);
		printf("res = %d\n", res);
		break;
	}

	case 2:
	{
		int a = 15;
		int b = 0;

		if (a > 10) {
			b = a;
		}

		printf("a = %d, b = %d\n", a, b);
		break;
	}

	case 3:
	{
		int a = 10;

		if (a >= 0) {
			a = 1;
		}
		else
		{
			a = -1;
		}
		printf("a = %d\n", a);
		return 0;
	}

	case 4:
	{
		int a, b, c = 0;
		int total = 0;
		double ave = 0;
		printf("type ur 3 of scores u got = ");
		scanf("%d\n", &a);
		scanf("%d\n", &b);
		scanf("%d\n", &c);

		total = a + b + c;
		ave = total / 3;
		printf("%.1lf\n", ave);
		if (total == 259) {
			if (ave > 90) {
				printf("A");
			}
			else if (ave >= 80 && ave < 90) {
				printf("B");
			}
			else if (ave >= 70 && ave < 80) {
				printf("C");
			}
			else {
				printf("F");
			}
		}
		else {
			printf("wrong type of score total");
		}
		break;

	case 5:
	{
		printf("type a number to choose function(1~3) = ");
		int a, b, c = 0;
		scanf("%d", &a);
		if (a != 1 && a != 2 && a != 3) {
			printf("Wrong type of number\n");
			break;
		}
		printf("type 2 numbers to calculate = ");
		scanf("%d", &b);
		scanf("%d", &c);

		if (a == 1) {
			printf("%d\n", b + c);
		}
		else if (a == 2) {
			printf("%d\n", b - c);
		}
		else if (a == 3) {
			printf("%d\n", b * c);
		}
		else {
			printf("Wrong type of number\n");
		}
		break;
	}
	case 6:
	{
		printf("Type one number = ");
		int a = 0;
		scanf("%d", &a);

		if (a >= 90 && 100 >= a) {
			printf("a\n");
		}
		else if (a >= 80 && 90 > a) {
			printf("b\n");
		}
		else if (a >= 70 && 80 > a) {
			printf("c\n");
		}
		else if (a >= 60 && 70 > a) {
			printf("d\n");
		}
		else if (60 > a && a >= 0) {
			printf("f\n");
		}
		else {
			printf("Wrong type of number\n");
		}
		break;

	}
	case 7:
	{
		printf("Type one number = ");
		int a = 0;
		scanf("%d", &a);

		if (a >= 90) {
			printf("a\n");
		}
		else if (a >= 80) {
			printf("b\n");
		}
		else if (a >= 70) {
			printf("c\n");
		}
		else if (a >= 60) {
			printf("d\n");
		}
		else if (a >= 0) {
			printf("f\n");
		}
		else {
			printf("Wrong type of number\n");
		}
		break;

	}
	}
	case 8: {
		int a = 0;
		a++;
		switch (a > 0) {
		case 0: {
			printf("0");
		}
		case 1: {
			printf("a");
		}
		default: {
			printf("b");
			break;
		}
		}
		break;
	}
	case 9: {
		int a = 1;
		switch (a) {
		case 1: {
			printf("1");
		}
		case 2: {
			printf("2");
			break;
		}
		}
		break;
	}
	case 10: {
		int rich = 150;
		double grade = 4.1;

		printf("type ur rich level and grade\n");
//		scanf("%d .1lf", &rich, &grade);
		scanf("%d", &rich);
		scanf("%.1lf", &grade);

		if (rich >= 100) {
			if (grade >= 4.0) {
				printf("80");
			}
			else {
				printf("100");
			}
		}


		else {
			printf("60");
		}
		break;
	}
	case 11: {
		int watt = 0;
		const double tax = 1.09;

		printf("type total amount of your electric usage = ");
		scanf("%d", &watt);
		int a=0;
		int b=0, c=0, d=0, e=0;
		int f = 0;
		double b_fee = 0;
		

		if (watt >= 500) {
			b_fee = 9330;
			a = watt - 500;
			b = 100;
			c = 100;
			d = 100;
			e = 100;
		}
		else if (watt >= 400) {
			b_fee = 5130;
			
			b = watt % 100;
			c = 100;
			d = 100;
			e = 100;
			f = 100;
		}
		else if (watt >= 300) {
			b_fee = 2710;
			
			c = watt % 100;
			d = 100;
			e = 100;
			f = 100;
		}
		else if (watt >= 200) {
			b_fee = 1130;
			
			d = watt % 100;
			e = 100;
			f = 100;
		}
		else if (watt >= 100) {
			b_fee = 660;
			
			e = watt % 100;
			f = 100;
		}
		else if (watt >= 1) {
			b_fee = 330;
			f = watt % 100;
		}
		else {
			printf("Wrong amount of Electric usage!\n");
		}


		double w_fee = 494.0 * a + 274.3 * b + 184.3 * c + 127.8 * d + 88.5 * e + 52.0 * f;
		printf("%d %d %d %d %d %d\n", a, b, c, d, e, f);
		
		printf("%.1lf\n", b_fee);
		printf("%.1lf\n", w_fee);
		
		int f_total = (b_fee + w_fee)*tax;
		printf("%d", f_total);
	}
	}

	//somekinda change here!
	//waiting for ver.2

	return 0;
}