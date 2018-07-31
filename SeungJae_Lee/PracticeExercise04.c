#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
	if (argc <2) {
		printf("Program needs an integer argument\n");
		return(-1);
	}

	char *p;
	int *array = 0, *tmp_array = 0;
	int sum = 0;
	array = (int *)malloc(argc*sizeof(int));
	tmp_array = (int *)malloc(argc*sizeof(int));

	for (int i=1; i< argc; i++) {
		array[i] = strtol(argv[i], &p, 10); 
		tmp_array[i] = -999;	
		sum += array[i];
	}

	for (int i=1; i< argc; i++) {
		int nCount = 0;
		for (int j=1; j<argc; j++) {
		if (array[j] < array[i])
			nCount++;
		}
		while (tmp_array[nCount] == array[i])
			nCount++;
	
		tmp_array[nCount] = array[i];
	}
	for (int i=0; i< argc-1; i++) {
		printf("%d ", tmp_array[i]);
	}
	printf("\n");
	return 0;
}


