#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char **argv){	 
   int size=argc-1;
   int *data=(int *)malloc(size*sizeof(int));
   int sum=0; 
   char mystr[80];
    for (int i=0;i<size;i++){  
      data[i]=atoi(argv[i+1]);
      sum+=data[i];
    }
   for (int i=0;i<size;i++){
for (int j=0;j


    }

      if (i>0){
	strcat(mystr,"+");
	}
      strcat(mystr,argv[i+1]);
    }
    printf("sum will be %s = %d\n",mystr,sum);
    return(0);
}
