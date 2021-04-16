/**
 * @file p2ch.c
 * @author Jayanth (you@domain.com)
 * @brief Inputs given by player2 and storing them in grid
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"function.h"
/**
 * @brief Inputs given by player2 and storing them in grid
 * 
 * @param k 
 * @param g 
 * @param z 
 */
void p2ch(int k,char** g,int z)
{
			if(k==1)
				g[0][0]='O';
			else if(k==2)
				g[0][1]='O';
			else if(k==3)
				g[0][2]='O';	
			else if(k==4)
				g[1][0]='O';	
			else if(k==5)
				g[1][1]='O';	
			else if(k==6)
				g[1][2]='O';	
			else if(k==7)
			        g[2][0]='O';
			else if(k==8)
				g[2][1]='O';
			else if(k==9)
				g[2][2]='O';
}
