#include "haizei_test.h"
#include<cstdio>

Func_T func_arr[MAX_N];
int func_cnt = 0;

int RUN_ALL_TESTS() {
	for (int i = 0; i < func_cnt; i++) {
		printf("TEST:%d\n", i);
		func_arr[i]();
		printf("END\n");
	}
	return 0;
}
