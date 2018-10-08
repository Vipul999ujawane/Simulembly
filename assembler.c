#include<stdio.h>
#include<string.h>

main()
{
	char t[10],u[10],sy[200]; int i=0,j,a[100];  int k=0,rda[10];char rds[10];
	do{
		scanf("%s",t);
		if(strcmp(t,"output")==0)a[i]=48;
		if(strcmp(t,"mar=ib")==0)a[i]=11;
		if(strcmp(t,"ib=mar")==0)a[i]=21;
		if(strcmp(t,"mbr=ib")==0)a[i]=12;
		if(strcmp(t,"ib=mbr")==0)a[i]=22;
		if(strcmp(t,"pc=ib")==0)a[i]=13;
		if(strcmp(t,"ib=pc")==0)a[i]=23;
		if(strcmp(t,"d=ib")==0)a[i]=14;
		if(strcmp(t,"ib=d")==0)a[i]=24;
		if(strcmp(t,"e=ib")==0)a[i]=15;
		if(strcmp(t,"ib=e")==0)a[i]=25;
		if(strcmp(t,"mbr=k[mar]")==0)a[i]=0;
		if(strcmp(t,"k[mar]=mbr")==0)a[i]=1;
		if(strcmp(t,"p=ib")==0)a[i]=31;
		if(strcmp(t,"q=ib")==0)a[i]=32;
		if(strcmp(t,"ib=p+q")==0)a[i]=33;
		if(strcmp(t,"ib=p-q")==0)a[i]=34;
		if(strcmp(t,"ib=p*q")==0)a[i]=35;
		if(strcmp(t,"ib=p/q")==0)a[i]=36;
		if((t[3]>47)&&(t[3]<58)){strcpy(u,&t[3]);a[i]=500+atoi(u);}
		if(strcmp(t,"jnf")==0){scanf("%s",u);a[i]=sy[u[0]]+500;rda[k]=i;rds[k]=u[0];k++;i++;a[i]=10;}
		if(strcmp(t,"jmp")==0){scanf("%s",u);a[i]=sy[u[0]]+500;rda[k]=i;rds[k]=u[0];k++;i++;a[i]=13;}
		if(t[1]==':')sy[t[0]]=i--; 
		i++;		
	}while(strcmp(t,"end")!=0);
	for(k=k-1;k>=0;k--){j=rda[k];a[j]=500+sy[rds[k]];}
	for(j=0;j<i-1;j++)printf("%d ",a[j]); printf("49");
}