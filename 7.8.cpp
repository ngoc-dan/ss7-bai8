#include<stdio.h>
int main(){
	int n,row,col;
	printf("nhap so cot : ");
	scanf("%d",&row);
	printf("nhap so hang : ");
	scanf("%d",&col);
	int arr[row][col]={};
	for( int i=0 ; i<row ; i++){
		printf("\n");
		for(int j=0 ; j<col ; j++){
			printf("nhap phan tu : ");
			scanf("%d",&n);
			arr[i][j]=n;
		
		}
	}
	for( int i=0 ; i<row ; i++){
		printf("\n");
		for(int j=0 ; j<col ; j++){
	printf("%d ",arr[i][j]);
}
}
	return 0;
}
