#include <cstdio>
void a() { puts("this is a()");};
void b() {puts("this is b()");}
void c() {puts("this is c()");};
void d() {puts("this is d()");};
void e() {puts("this is e()");};

int jump(char *);
int prompt();
void (* funcs[])()={a,b,c,d,e,NULL};
void executeJump(){
	while (prompt());
	puts("\ndone");
}
	int prompt(){
	puts("Choose an option:");
	puts("");
	puts("1: f;unction a()");
	puts("2: f;unction b()");
	puts("3: f;unction c()");
	puts("4: f;unction d()");
	puts("5: f;unction d()");
	char 
	
	}