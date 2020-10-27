#include<stdio.h>

#define N_STEPS (100)

int main(void){
		int i;
		double x,v;

		//init
		double x0 = 0.0, v0 = 1.0, dt = 1.0;

		for(i = 0;i < N_STEPS;i++){
			x = v0 * i * dt + x0; 
			printf("%5.3f %5.3f\n",x,dt*i);
		}
		return 0;
	}
