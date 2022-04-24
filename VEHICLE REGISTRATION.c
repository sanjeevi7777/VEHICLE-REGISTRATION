# include <stdio.h>
int main(){
	int i;
	int N;
	int j;
	int k;
	int v;
		int co=0;
	//scanf("%d",&N);
for(i =0;i<10;i=i+1){
   


		for(j=0;j<10;j++){
			
			
			for( k=0;k<10;k++){
			
			
			    for(v=0;v<10;v++){
			    	if(i==0 && j==0 && k==0 && v==0){
			    		{};
						}
					else{
						int a=v+k+j+i;
						int n=a;
						int s=0;
					
					
					    //printf("%d\n",a);
						if(a>=10){
							while(n!=0){
							    int r=n%10;
								n=n/10;
								s=s+r;
								//printf("%i",n)	;
							
						}
							}
			if (a!=8 && s!=8){
		
				co=co+1;					
			
			printf("  TN 78 %d",i);
				printf("%d",j);
					printf("%d",k);
						printf("%d",v);
							}
						}
							
							
			
		   }
    	}
	}
		
}
	
  
  for(i =0;i<10;i=i+1){
   


		for(j=0;j<10;j++){
			
			
			for( k=0;k<10;k++){
			
			
			    for(v=0;v<10;v++){
			    	if(i==0 && j==0 && k==0 && v==0){
			    		{};
						}
					else{
						int a=v+k+j+i;
						int n=a;
						int s=0;
					
					    //printf("%d\n",a);
						if(a>=10){
							while(n!=0){
							    int r=n%10;
								n=n/10;
								s=s+r;
								//printf("%i",n)	;
							
						}
							}
			if (a!=8 && s!=8){
		int a;
			for( a=0;a<26;a++)	{
							
				co=co+1;
			printf("  TN 78 %c ",a+65);
			 printf("%d",i);
				printf("%d",j);
					printf("%d",k);
						printf("%d",v);
					}
					int b;
					int c;
					for(b=0;b<26;b++)	{	co=co+1;
						for( c=0;c<26;c++)	{
						
							co=co+1;
							
			
			printf("  TN 78 %c",b+65);
			printf("%c ",c+65);
			  printf("%d",i);
				printf("%d",j);
					printf("%d",k);
						printf("%d",v);
							}
						}
						}
							
							
			
		   }
    	}
	}
		
}
printf("%d",co)	;

}
return 0;
}
