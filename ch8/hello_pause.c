/*
 * hello_pause.c
 *
 **********************************************************************
 * This program is part of the source code released for the book
 *  "Linux System Programming"
 *  (c) Kaiwan N Billimoria
 *  Packt Publishers
 *
 * From: Ch 8
 **********************************************************************
 * A quick 'Hello, World'-like program; here, we call pause(2) to keep
 * the process alive while it runs in the background. The idea is, this
 * simple process serves as a test-bed for other apps.
 */
#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	printf("Hello, Linux System Programming, World!\n");
	pause();
	exit(EXIT_SUCCESS);
}
