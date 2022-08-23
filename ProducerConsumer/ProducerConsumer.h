#ifndef __ProducerConsumer__H__
#define __ProducerConsumer__H__

#include <stdio.h>

void producer(int buffer[10], int* count, int* i);
void consumer(int buffer[10], int* count, int* i);

#endif
