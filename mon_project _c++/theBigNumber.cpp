#include <stdio.h>
void BigNum(int a,int b , int c){

		if(a>b &&a > c){
		printf("%d is the big number",a);
	}else if(b>a &&b > c){
		printf("%d is the big number",b);
	}else{
		printf("%d is the big number",c);
	}
}
main(){
	int a,b,c;
	printf("entre value de premiere nomber :");
	scanf("%d",&a);
	printf("entre value de deuseme nomber :");
	scanf("%d",&b);
	printf("entre value de troiseme nomber :");
	scanf("%d",&c);
	BigNum(a,b,c);
	

}


