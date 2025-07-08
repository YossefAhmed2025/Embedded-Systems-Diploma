/*
 ============================================================================
 Name        : Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Ex1
/*int main(){
	int i;
	int j;
	int a[2][2],b[2][2],c[2][2];

	printf("enter 1st matrix");
	for(i=0;i<2;++i){
		for(j=0;j<2;++j){

			printf("enter a%d%d",i+1,j+1);
			fflush(stdin);fflush(stdout);
					scanf("%d",&a[i][j]);
		}
	}


printf("enter 2st matrix");
	for(i=0;i<2;++i){
		for(j=0;j<2;++j){

			printf("enter b%d%d",i+1,j+1);
			fflush(stdin);fflush(stdout);
					scanf("%d",&b[i][j]);
		}
	}

		for(i=0;i<2;++i){
			for(j=0;j<2;++j){

				c[i][j]=a[i][j]+b[i][j];
			}
		}



		for(i=0;i<2;++i){
			for(j=0;j<2;++j){

			printf("%d",c[i][j]);
			}
		}
}
*/





/*
//Ex2
int main(){
	int n;
	int arr[100];
	int i=0;
	float sum=0;
	printf("enter the number of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("enter the data");
	fflush(stdin);fflush(stdout);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("the avg= %f",sum/n);

}*/


//Ex3
/*int main(){
	int i;
	int j;
	int r;
	int c;
	int arr1[10][10];
	int arr2[10][10];
	printf("enter the size of matrix:");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&r,&c);
	printf("enter the data of matrix: ");
	fflush(stdin);fflush(stdout);
	for(i=0;i<r;++i){
		for(j=0;j<c;++j){

			scanf("%d",&arr1[i][j]);
		}
	}

	for(i=0;i<r;++i){
			for(j=0;j<c;++j){

			arr2[j][i]=arr1[i][j];
			}
		}
	for(j=0;j<r;++j){
				for(i=0;i<c;++i){

				printf("%d",arr2[j][i]);
				printf("\n");

				}
			}

}*/


//Ex4

/*int main(){

	int n;
	int arr[100];
	int i;
	int x;
	int location;
	printf("enter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("enter the elements: ");
	fflush(stdin);fflush(stdout);
	for(i=0;i<n;++i){

		scanf("%d",&arr[i]);

	}
	printf("enter the element you want to insert: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("enter the location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&location);
		for(i=n;i>=location;i--){

			arr[i]=arr[i-1];
		}
	arr[location-1]=x;
	n++;
	for(i=0;i<n;++i){

			printf("%d ",arr[i]);

		}
}

*/


//Ex5
/*int main(){


	int n;
	int arr[100];
	int i;
	int x;
	printf("enter number of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("enter the elements: ");
		fflush(stdin);fflush(stdout);
		for(i=0;i<n;++i){

			scanf("%d",&arr[i]);

		}

	printf("enter element want to search: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	for(i=0;i<n;++i){

		if (x==arr[i]){
		printf("we found element in location %d",i+1);}

	}

}
*/












