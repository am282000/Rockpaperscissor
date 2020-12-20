#include<stdio.h>

int rockPaperScissor(char you,char comp){
	//return 1 if you win, -1 if you lose and 0 if draw.
	
	//draw condition
	if(you==comp){
		return 0;
	}
	
	//non-draw condition
	if(you=='r' && comp=='p'){
		return -1;
	}
	else if(you=='p' && comp=='r'){
		return 1;
	}
	
	if(you=='r' && comp=='s'){
	return 1;
	}
	else if(you=='s' && comp=='r'){
		return -1;
	}
	
	if(you=='s' && comp=='r'){
	return -1;
	}
	else if(you=='r' && comp=='s'){
		return 1;
	}
	
}

int main(){
	char you,comp;
	comp ='r';
	printf("Enter 'r' for Rock , 'p' for Paper , 's' for Scissors\n");
	scanf("%c",&you);
	int result = rockPaperScissor(you,comp);
	printf("You choose %c and comp choose %c.",you,comp);
	if(result==0){
		printf("Game Draw !!\n");
	}
	else if(result==1){
		printf("You Win !!");
	}
	else{
		printf("You Lose!!");
	}
	return 0;
}
