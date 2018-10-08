#include <stdio.h>
int main()
{
	int ib,ir,mar,mbr,pc,d,e,f,p,q,n,k[100],i,flag=0;pc=0;i=0;
	FILE *fp=fopen("uu","r");	
	do{
		if(i<=pc){scanf("%d",&k[i]);i++;continue;}
		ir=k[pc];pc++;
		if((ir==10)&&(flag==0))pc=ib;
		if(ir==11)mar=ib;	
		if(ir==21)ib=mar;
		if(ir==12)mbr=ib;
		if(ir==22)ib=mbr;
		if(ir==13)pc=ib;
		if(ir==23)ib=pc;
		if(ir==14)d=ib;
		if(ir==24)ib=d;
		if(ir==15)e=ib;
		if(ir==25)ib=e;
		if(ir==0)mbr=k[mar];
		if(ir==1)k[mar]=mbr;
		if(ir==31)p=ib;
		if(ir==32)q=ib;
		if(ir/100==5)ib=ir%100;
		if(ir==33){ib=p+q;if(ib<0)flag=1;else flag=0;}
		if(ir==34){ib=p-q;if(ib<0)flag=1;else flag=0;}
		if(ir==35){ib=p*q;}
		if(ir==36){ib=p/q;}
		if(ir==47){printf("Give Input: ");scanf("%d",&ib);}
		if(ir==48){printf("Out: %d ",ib);fflush(stdout);sleep(1);}
	}while(ir!=49);
	printf("over");
}