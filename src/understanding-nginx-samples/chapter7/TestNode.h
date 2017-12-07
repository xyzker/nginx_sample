/*
 * TestNode.h
 *
 *  Created on: 2017Äê12ÔÂ7ÈÕ
 *      Author: kexi
 */
#include <ngx_queue.h>

typedef struct {
	u_char* str;
	ngx_queue_t qEle;
	int num;
} TestNode;

