/*
 * =====================================================================================
 *
 *       Filename:  ptrExer2.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  06/10/16 10:15:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Madeon LIU (ML), k4733294@gmail.comments
 *   Organization:
 *
 * =====================================================================================
 */

#include<stdio.h>

int main()
{
	int *ptr;
	int a;
	//a = 2;
	ptr = (int *)0x67a9;
	printf("1231312444441424\n");
	printf("prin ptr sizeof %d \n", sizeof(ptr));
	printf("prin int sizeoc %d \n", sizeof(int));
	printf("prin ptr %p \n", ptr);
	//*ptr = 2;
	//a = *ptr;
	printf("prin *ptr to a %d", *ptr);      /* cannot for value without datasheet so line:33 not work here */
	getchar();
	return 0;

}

