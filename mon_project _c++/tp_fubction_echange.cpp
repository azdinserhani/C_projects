#include<stdio.h>

void echange(float &a , float &b){
    float ech;
    ech = a;
    a = b;
    b = ech;
    printf("%f",&a);
}
void doubl(float &n1,float &n2){
	n1 = 0;
	n2 = 0;
}
main(){
//    float u,v;
//    printf("\n\t\t\t echange len valeur ");
//    printf("\n entre le premiere valeur u :");
//    scanf("%f",&u);
//    printf("\n entre la deusieme valeur v :");
//    scanf("%f",&v);
//    echange(u,v);
//    printf("\n la valeur de u est : %.2f",u);
//    printf("\n la valeur de v est : %.2f",v);
	float a,b;
	printf("entre premiere nombre :");
	scanf("%f",&a);
	printf("entre deusieme nombre :");
	scanf("%f",&b);
	doubl(a,b);
	printf(" premiere nombre :%.0f",a);
	printf("\ndeusieme nombre :%.0f",b);
    
}


