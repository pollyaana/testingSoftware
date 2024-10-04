#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>

char* myfunc(int a, int b, int c) {
    int d = b * b - 4 * a * c;
    if (a == 0 && b == 0 && c == 0) return "Бесконечное число решений";
    if (d > 0){
	if (a == 0)
	{
	    int x;
	    if (b == 0) x = -c;
	    else{
		x = -c / b;}
	    printf("Корень: %d\n", x);
	    static char buffer[20];
	    snprintf(buffer, sizeof(buffer), "%d", x);
	    const char* str = buffer;
	    return str;
	}
    int x1 = (-b + sqrt(d)) / (2 * a);
    int x2 = (-b - sqrt(d)) / (2 * a);
    printf("Решение: x1= %d x2 = %d\n", x1, x2);
    static char buffer[20];
    snprintf(buffer, sizeof(buffer), "%d %d", x1,x2);
    const char* str = buffer;
    return str;
    }
    else if (d == 0){
	int x = -(b / ( 2 * a));
	printf("Корень: %d\n", x);
	static char buffer[20];
	snprintf(buffer, sizeof(buffer), "%d", x);
	const char* str = buffer;
	return str;	
    }
    else{
	printf("Корней нет");
	const char* str = "Нет корней";
	return str;
    }
}
void printStdoutMessages() {
    printf("This is a test message from myfunc.c\n");
    printf("Do not disturb\n");
}
