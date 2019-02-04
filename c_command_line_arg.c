// c_commmand_line_arg.c
// compile gcc c_command_line_arg.c -o cla.o -lm
// run ./cla.o 1000 2000 3000
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc , char *argv[]){
	// argc  is the arggument count
	// argv contains the argument 
	//if(argc > 3) return -1;
	double a = atof(argv[1]);
	double b = atof(argv[2]);
	double c = atof(argv[3]);
	double s,p;
	p = a * b * c;
	s = sqrt(p);
	printf("Square root of %f * %f * %f is %lf \n",a,b,c,s);
	
	return 0;
}
