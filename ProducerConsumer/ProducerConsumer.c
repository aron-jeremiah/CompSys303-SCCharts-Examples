#include "ProducerConsumer.h"

void producer(int buffer[10], int* count, int* i) {
	if(*count >= 10) {
		return;
	} else {
		buffer[*i] = 5;
		*i = (*i + 1) % 10;
		*count += 1;
	}
}

void consumer(int buffer[10], int* count, int*i) {
	if(*count <= 0) {
		return;
	} else {
		buffer[*i] = 0;
		*i = (*i + 1) % 10;
		*count -= 1;
	}
}