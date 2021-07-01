// given number is armstrong or not

#include<stdio.h>
void main(){
	int num,t,r,sum=0;
	printf("\n Enter the number: ");
	scanf("%d",&num);
	t = num;
	while(t>0){
		r = t % 10;
		sum += pow(r,3);
		t/=10;
	}
	if(sum == num){
		printf("\n %d is an armstrong number",num);
	}else{
		printf("\n %d is not an armstrong number",num);
	}
	
}
