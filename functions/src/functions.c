#include<stdio.h>

//EX1
/*int check_num(int num);
int main(){
	int flag;
	int n1;
	int n2;
	int i;
	printf("enter intervals to check intervals: ");
	scanf("%d %d",&n1,&n2);
	printf("number prime between intervals %d %d ", n1,n2);
	for(i=n1+1;i<n2;++i){
		flag=check_num(i);
		if(flag==0){
			printf("%d, ",i);
		}
	}


	return 0;
}
int check_num(int num){
	int j;
	int flag=0;
	for(j=2;j<=num/2;++j){

		if(num%j==0){
			flag=1;
			break;
		}

	}

	return flag;

}*/


//EX2
/*int factorial(int num);
int main(){
	int n;
	int fact;
	printf("enter number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	fact=factorial(n);
	printf("factorial= %d", fact);

}
int factorial(int num){

	if(num!=1)
	{
		return factorial(num-1)*num;
	}
}
*/





//Ex3

/*#include <stdio.h>

void Reverse();

int main() {
    printf("Enter your sentence: ");
    fflush(stdout);

    Reverse();

    return 0;
}

void Reverse() {
    char c;
    scanf("%c", &c);

    if (c != '\n') {
        Reverse();
        printf("%c", c);
    }
}
*/




//EX4

int power(int base ,int exp);
int main(){

	int base;
	int exp;
	int powerr;
	printf("enter base: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&base);

	printf("enter power: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&exp);
	powerr=power(base,exp);
	printf("%d^%d= %d",base,exp,powerr);



}
int power(int base ,int exp){

	if (exp !=0 )
	{
		return( base*power(base,exp-1));
	}
	else{
		return 1;
	}


}

