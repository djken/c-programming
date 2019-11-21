/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kendy
 *
 * Created on November 21, 2019, 4:37 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int x, y;
    char text[20];

    scanf("%2d %d %*f %5s", &x, &y, text);
    /* input: 1234  5.7  elephant */
    
    printf("%d  %d  %s", x, y, text);
    /* output: 12  34  eleph */ 
    return 0;
}

