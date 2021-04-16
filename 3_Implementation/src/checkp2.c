/**
 * @file checkp2.c
 * @author Jayanth
 * @brief  Checking if the winning condition is satisfied or not
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"function.h"
/**
 * @brief Checking if the winning condition is satisfied or not
 * 
 * @param g 
 * @param z 
 * @return int 
 */
int checkp2(char** g,int z)
{
	int l=0,w=0;
	for(int i=0;i<z;i++)
	{
		int c=0;
		for(int j=0;j<3;j++)
			if(g[i][j]=='O')
				c++;
		if(c==3)
			return 1;		
	}
	for(int i=0;i<z;i++)
	{
		int c=0;
		for(int j=0;j<3;j++)
			if(g[j][i]=='O')
				c++;
		if(c==3)
			return 1;				
	}
	for(int i=0;i<z;i++)
	{

		if(g[i][i]=='O')
			l++;
		if(l==3)
			return 1;				
	}
	for(int i=0;i<z;i++)
	{
		if(g[i][z-i-1]=='O')
			w++;
		if(w==3)
			return 1;				
	}
	return 0;	
}
