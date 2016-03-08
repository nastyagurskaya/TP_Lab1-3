#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

const char* karts[21]={ "two","2", "deuce", "2", "trey", "3", "three", "four", "4", "five", "5", "six", "6", "seven","7", "eight","8", "nine","9" ,"ten","10"};
const char* karts_[12] = {"J","Jack","‚","Q", "Queen","„","K","Š","King", "A", "’","Ace"};

int main(){
  	char a[10];
	char* result;
	int i=0;
	int res;
	printf("Enter you card\n");
    scanf("%s",&a);
	for(i; i < 21; i+=2){
		res= strcmp(a, karts[i]);
		if(!res){
			printf("Value of this card is %s = %s\n", a, karts[i+1]);
			return 0;
		}
	}
	i=0;
	for(i; i < 12; i++){
	res= strcmp(a, karts_[i]);
	if(!res){
			printf("Value of this card is %s = %d\n",a, i/3+11);
			return 0;
		}
	}
	printf("This is not a card\n", a);
    return 0;
   }