#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct complex{
	float real,img;
	float devide;
};

typedef struct complex Complex;
void pgmFormattedWrite(Complex *z1,Complex *zc,Complex *zk,int k,float r,FILE *pgmFILE);
void complexNumberDevide(Complex *z1 ,Complex *zc,Complex *zk,int k);

int main (void){
	FILE *pgmFILE = NULL;
	Complex *z1 = (Complex*)malloc(sizeof(Complex));
	Complex *zc = (Complex*)malloc(sizeof(Complex));
	Complex *zk = (Complex*)malloc(sizeof(Complex));
	zc -> real = -0.79; 
	zc -> img  = 0.15 ;
	zc -> devide = (2/(float)1024);
	float r = 4.0; 
	pgmFormattedWrite(z1,zc,zk,75,r,pgmFILE); // k is values 75
	return 0;
}
void pgmFormattedWrite(Complex *z1,Complex *zc,Complex *zk,int k,float r,FILE *pgmFILE){
	if( (pgmFILE = fopen( "./JuliaCluster.pgm","w")) != NULL){
		float row,col;
		fprintf( pgmFILE , "%s\n", "P2");
		fprintf( pgmFILE , "%d %d\n", 2048, 2048);
		fprintf( pgmFILE , "%d\n", 255);
		for(col=2;col>=-2;){
			if(col == (float)0){
				col = col - zc->devide;
				continue;
			}
			else{
				z1-> img = col;
				for(row=-2;row<=2;){
					if(row == (float)0){
						row = row +zc->devide;
						continue;
					}
					else{
						z1-> real = row;
						complexNumberDevide(z1,zc,zk,k);
						fprintf( pgmFILE,"%d\t",(sqrt(pow(zk->real,2)+pow(zk->img,2)))<=r ? 0:255);
						row= row + zc->devide;
					}
				}
				col= col - zc->devide;
			}
		}
	}
	else{
		printf("The pgm formatted file cannot be writen.\n");
		exit( EXIT_FAILURE );
	}
}

void complexNumberDevide(Complex *z1,Complex *zc,Complex *zk,int k){
	Complex *current = (Complex*)malloc(sizeof(Complex));
	Complex *newComplex = (Complex*)malloc(sizeof(Complex));
	current -> real = z1->real;
	current -> img = z1->img;
	int foo;
		for(foo=1;foo<=k-1;foo++){
			newComplex -> real = pow(current -> real,2)-pow(current -> img,2)+zc->real;
			newComplex -> img  = current->real * current->img * 2 + zc -> img;
			current -> real = newComplex -> real;
			current -> img = newComplex -> img;
		}
	zk -> real = current -> real;
	zk -> img = current -> img;
}
