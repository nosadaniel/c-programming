#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,b,c,x1,x2;
	printf("THIS PROGRAM SOLVE FOR QUADRATIC EQUATIONS\n");
	printf("Enter Value For A\n");
	scanf("%f",&a);
	if(a==0){
		printf("Value for A Must not be %a \n",a);
		while(a==0){
			printf("Enter Value For A\n");
			scanf("%f",&a);
		}
	}
	printf("Enter Value For B\n");
	scanf("%f",&b);
	printf("Enter Value For C\n");
	scanf("%f",&c);
	if((b==0) && (c==0)){
		printf("X1 = 0 \n X2 = 0 \n");
	}
	else{
		float d = 4*a*c;
		float e = (b*b) - d;
		if(e<0){
			printf("Math Error");
		}
		else if(e==0){
			x1 = (-b)/(2*a);
			x2 = (-b)/(2*a);
			printf("X1 = %f\n", x1);
			printf("X2 = %f\n", x2);
		}
		else{
			float sq_root = sqrt(e);
			x1 = (-b + sq_root)/(2*a);
			x2 = (-b - sq_root)/(2*a);
			printf("X1 = %f\n", x1);
			printf("X2 = %f\n", x2);
		}
	}
	return 0;
}
