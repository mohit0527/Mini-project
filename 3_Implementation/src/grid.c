/**
 * @file grid.c
 * @author Jayanth
 * @brief 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"function.h"
#include<stdio.h>
/**
 * @brief For printing the grid
 * 
 * @param g 
 * @param z 
 */
void grid(char **g,int z){
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", g[0][0], g[0][1], g[0][2]);

    printf("_____|_____|____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", g[1][0], g[1][1], g[1][2]);

    printf("_____|_____|____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", g[2][0], g[2][1], g[2][2]);

    printf("     |     |     \n\n");

}
