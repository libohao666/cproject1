/*************************************************************************
	> File Name: haizei_test.h
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2020年01月12日 星期日 18时26分12秒
 ************************************************************************/

#define MAX_N 1000

typedef void (*Func_T)();

struct Func_Data {
	Func_T func;
	char *func_name;
};

extern Func_Data func_arr[MAX_N];
extern int func_cnt ;

#define TEST(a, b)  \
	void a##b(); \
	__attribute__((constructor)) \
	void add_##a##b() { \
		add_function(a##b, #a "." #b);\
	} \
	void a##b()

#define EXPECT_EQ(a, b) { \
	if (a == b) { \
		printf("YES\n"); \
	} \
	else { \
		printf("NO\n"); \
	} \
}

int RUN_ALL_TESTS();

void add_function(Func_T, const char *);

