#include<stdio.h>
#include<stdio.h>
#define n 7
int main(){
	int arr[n] = {16,18,27,16,23,21,19};
	int temp;
	for(int i=0;i<n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
