#include "haizei_test.h"
#include<cstdio>
#include<string.h>

struct Func_Data func_arr[MAX_N];
int func_cnt = 0;

int RUN_ALL_TESTS() {
	for (int i = 0; i < func_cnt; i++) {
		printf("[=== RUN ===] %s\n",
			func_arr[i].func_name);
		func_arr[i].func();
	}
	return 0;
}

void add_function(Func_T func,const char *str) {
	func_arr[func_cnt].func = func;
	func_arr[func_cnt].func_name = strdup(str);
	func_cnt += 1;
	return ;
}
