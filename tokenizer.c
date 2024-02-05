#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>

// ANIL BERKAN TORUN 02200201013 2.SINIF NORMAL ÖGRETÝM

int degisken,i=-1,j=0; 

char n[100],m[100];   
int main () { 
	
	FILE *dosya;
	char oku[30];
	printf("dosya adresini giriniz ");
	scanf("%s", &oku);
	dosya = fopen ( oku , "r");

	/*FILE *dosya= fopen(oku, "r");
	if  ( (dosya =  fopen("dosya" ,"r"))==NULL)   {        
    exit(0);
    printf("{,for(,i,=,0,;,i,<,n,;,i,++,)");
    }*/

	//fscanf(dosya,"%s",&n);
	for(i=0;i<100;i++){
	
		
		}if(n[i]>=33  &&  n[i]<=47){
			if(degisken=0){
				
				m[j++]=n[i];
			}else{
				m[j++]=',';
				m[j++]=n[i];
			}
			degisken=0;
		}
		
		
		if(n[i]>=48  &&  n[i]<=57){
    		if(degisken==1){
    			
				m[j++]=n[i];
			}else{
				n[j++]=',';
				m[j++]=n[i];
		
			}
			degisken=1;
		
			 
		if(n[i]>=58  &&  n[i]<=63){
			if(degisken==2){
			
				m[j++]=n[i];
			}else{
				m[j++]=',';
				m[j++]=n[i];
			}
		
			degisken=2;
		
		
		
		
		
		
		if(n[i]>=64  &&  n[i]<=90){
			if(degisken==3){
			
				m[j++]=n[i];
			}else{
				m[j++]=',';
				m[j++]=n[i];
			}
			
			degisken=3;
		}
	
	
		if(n[i]>=91 && n[i]<=96){
		
			if(degisken==4){
				m[j++]=n[i];
			}else{
				m[j++]=',';
				m[j++]=n[i];
			}
			degisken=4;
		}
	}
	
	
	
	
	
	
	
	
		if(n[i]>=97  &&  n[i]<=122){
			
			if(degisken==5){
				m[j++]=n[i];
			}else{
				m[j++]=',';
				m[j++]=n[i];
			}
			degisken=5;
		}
		
		}
		if(n[i]>=123  &&  n[i]<=126){
		
			if(degisken==6){
				m[j++]=n[i];
			}else{
				n[j++]=',';
				n[j++]=m[i];
			}
		
			
			degisken=6;
		}
	
	
		
	

		printf(n);
		printf(" \n ");
		printf(m);

		fclose(dosya);
	



		return 0;
  }
