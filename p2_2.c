#include<stdio.h>

#define N_STEPS (100)

int main(void){
		int i;
		double x,v,y,z;
		x=y=z=0;
		//init
		double x0 = 0.0, v0 = 1.0, dt = 1.0;

		for(i = 0;i < N_STEPS;i++){
			//x = v0 * i * dt + x0; 
			x = x + v *dt;
			printf("1\n\n");
			printf("C %5.3f %5.3f %5.3f\n",x,y,z);
		}
		return 0;
	}
