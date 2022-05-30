#include<stdio.h>
int main(){
	for(int i = 0; i<=10; i++){
		for(int k = i; k <=10; k++){
			printf("*");     //Inverted Right Angle Triangle
		}
		printf("\n");
	}
	for(int i = 0; i <= 10; i++){
		for(int k = i; k>=0; k--){
			printf("*");       //Right Angle Triangle
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 0; i <= 10; i++){
		for(int k = 0; k <= 10; k++){
			printf("*");
		}
		printf("\n");
	}
}
