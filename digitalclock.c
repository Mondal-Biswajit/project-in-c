#include<stdio.h>
#include<stdlib.h>
int main(){
	int h,m,s;
	int d=1;  //we add a delay of 1 second and we will use it in the function sleep
	printf("set time :\n");
	scanf("%d%d%d",&h,&m,&s);
	
	if(h>12||m>60||s>60){
		printf("Error !\n");
		exit(0);
	}
	
	while(1){
	// this is  an infinite loop and anything inside will repeat itseelf infinity
		s++;
		
		if(s>59){
			m++;
			s=0;
		}
		
		if(m>59){
			h++;
			m=0;
		}
		
		if(h>12){
			h=1;
		}
		
		printf("\n Clock :");
		printf("\n %02d:%02d:%02d",h,m,s); // this writes our in this format 00:00:00
		sleep(d); //the function sleep slows down the while loop make it more like real clock
		system("clear"); //this  clear the screen
	}
	
}