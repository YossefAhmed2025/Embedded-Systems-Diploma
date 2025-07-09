/*
 ============================================================================
 Name        : string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//EX1
/*
int main(){
	char c[100];
	char x;
	int i;
	int count=0;
	printf("enter the string: ");
	fflush(stdin);fflush(stdout);
    gets(c);
    printf("enter the character you want calculate freq: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	for(i=0;c[i]!='\0';++i){
		if(x==c[i])
		++count;

	}
	printf("number of freq= %d ",count);


}*/
/*
//EX2
int main(){

	char c[100];
	int i;
	int count=0;
	printf("enter the string: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",&c);
	for(i=0;c[i]!='\0';++i){
		++count;
	}
	printf("the length of string= %d",count);

}*/

//EX3
/*
int main(){

	char c[100];
	int i;
	int j;
	int temp;
	printf("enter the string: ");
	fflush(stdin);fflush(stdout);
	gets(c);
	i=0;
	j=strlen(c)-1;
	while(i<j){
		temp=c[i];
		c[i]=c[j];
		c[j]=temp;
		i++;
		j--;
	}

		printf("the reverse of string: %s",c);



}*/





