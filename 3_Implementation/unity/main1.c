/**
 * @file main1.c
 * @author Jayanth
 * @brief Main function
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include"function.h"
void main()
{
	printf("Mode \n 1.Player v Computer\n 2.Player v Player  ");
	int q;
	int z=3;
		char **g = (char **)calloc(z, sizeof(char *));
		for (int r = 0; r < z; r++)
			g[r] = (char *)calloc(z,sizeof(char));
		for(int i=0;i<z;i++)
			for(int j=0;j<z;j++)
				g[i][j]=' ';
	scanf("%d",&q);
	if(q==1){
		printf("Mode------Player v Computer \n");
		printf("Player - 'X'  Computer - '0'\n");
		for(int i=1;i<9;i++)
		{
			grid(g,z);
			
		}
	}	
	else if(q==2){
		printf("Mode------Player v Player \n");
		printf("Player1 - 'X'  Player2 - '0'\n");
		int m=0,n=0,k,l;		
		for(int i=1;i<=9;i++)
		{
			if(i%2){
				printf("Player1 Enter a number to chose the grid \n");
				scanf("%d",&k);
				p1ch(k,g,z);
				
				m++;
				if(m>=3)
				{
					int w=checkp1(g,z);
					if(w)
					{
						printf("Player 1 Wins!!!!!!!\n");
						grid(g,z);
						break;
					}
				}
			}
			else{	
				printf("Player2 Enter a number to chose the grid \n");
				n++;
				scanf("%d",&k);
				p2ch(k,g,z);
				if(n>=3)
				{
					int w=checkp2(g,z);
					if(w)
					{
						printf("Player 2 Wins!!!!!!!\n");
						grid(g,z);
						break;
					}
				}
			}
			grid(g,z);				
		}
		
		
		
	}
	for (int i = 0; i < z; i++)
        	free(g[i]);
    	free(g);	
		
}
