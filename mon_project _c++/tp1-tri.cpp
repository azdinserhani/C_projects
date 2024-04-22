 #include<stdio.h>
 
 main(){
 	int te[4],ech;
 	for(int i =0 ; i< 4;i++){
 		printf("Entre un element du tableau :");
 		scanf("%d",&te[i]);
	}
	
	for(int i = 0;i<4;i++){
		for(int j = i+1; j< 4; j++){
			if(te[i] < te[j]){
				ech = te[i];
				te[i] = te[j];
				te[j] = ech;
			}	
		}
	}
	for(int i =0 ;i <4;i++){
	printf("%d",te[i]);	
	}
	
 }
