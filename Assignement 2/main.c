#include "stdio.h"

/*//EX1
int main(){
	int x;
	printf("enter your integer: ");
	fflush(stdin);fflush(stdout);

	scanf("%d",&x);
	if(x%2==0)
	{
		printf("the number is even");
	}
	else{
		printf("the number is odd");
	}
}



//Ex2
int main(){
	char c;
	printf("enter your alphabetc: \n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if (c=='a'||c=='A'||c=='e'||c=='E'||c=='I'||c=='i'||c=='o'||c=='O'||c=='u'||c=='U')
	{
		printf("%c is vowel\n",c);
	}
	else{
		printf("%c is constant\n",c);
	}

}





//Ex3

int main(){

	int a;
	int b;
	int c;

	printf("enter 3 numbers: \n");
	fflush(stdin);fflush(stdout);
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("%d is larger number",a);
		}
		if (c>a){
			printf("%d is larger number",c);
		}
	}

	if (b>a){
		if (b>c){
			printf("%d is larger number",b);
		}
		if (c>b){
					printf("%d is larger number",c);
				}
	}
}


//Ex4

int main(){

	int x;
	printf("enter a number to check: \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x>0){
		printf("the number is positive: \n");
	}
	else if(x<0){
		printf("the number is negative: \n");

	}
	else{
		printf("you enterd ZERO: \n");
}

}


//Ex5

int main(){
	char c;
	printf("enter character: \n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if(c>='a'&&c<='z'||c>='A'&&c<='Z'){
		printf("%c is character\n",c);
	}
	else{
		printf("%c is  NOT character\n",c);
	}

}


//Ex6
int main(){
	int n;
	int sum=0;
	printf("enter a integer: \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    	sum=sum+i;
    }
    printf("the sum of numbers= %d",sum);
}
*/
/*
//Ex7
int main(){

	int n;
	int fact=1;
	printf("enter a integer: \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n<0){
		printf("the number is negative No factorial: \n");
	}
	else{
		for(int i=1;i<=n;++i){
			fact=fact*i;
		}
		printf("the factorial= %d",fact);
	}

}


//Ex8

int main(){
	float x;
	float y;
	char o;
	printf("enter two numbers: \n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("choose opreator: \n");
	fflush(stdin);fflush(stdout);
	scanf(" %c",&o);
	switch(o){
	case'+':
		printf("the sum= %f+%f=%f",x,y,x+y);
		break;
	case'-':
		printf("the difference=%f-%f=%f",x,y,x-y);
		break;
	case'*':
		printf("the multiplication=%f*%f=%f",x,y,x*y);
		break;
	case'/':
		printf("the division= %f/%f=%f",x,y,x/y);
		break;
	default:
		printf("the error when choosee operator");
		break;

	}

}

*/


