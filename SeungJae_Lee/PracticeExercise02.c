#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
	if (argc <2) {
		printf("Program needs an integer argument\n");
		return(-1);
	}

	char *p;
	int array = 0;
	int sum = 0;
	for (int i=1; i< argc; i++) {
		array = strtol(argv[i], &p, 10); 
		sum += array;
	if (i == argc-1)
		printf("%d = ", array);
	else
		printf("%d + ", array);
	}
	printf("%d\n", sum);
	return 0;
}


