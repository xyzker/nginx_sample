/*
 * TestNode.h
 *
 *  Created on: 2017��12��7��
 *      Author: kexi
 */
#include <ngx_queue.h>

typedef struct {
	u_char* str;
	ngx_queue_t qEle;
	int num;
} TestNode;

