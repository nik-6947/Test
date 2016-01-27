#include<stdio.h>
typedef unsigned char *byte_pointer;
void show(byte_pointer ,int);
void test_show_bytes(int );
void show_int(int );
void show_float(float );
void show_pointer(void *);
int main(){
	test_show_bytes(0x1);
}
void show_bytes(byte_pointer start, int len)
{
int i;
for (i = 0; i < len; i++)
printf(" %d", start[i]);
printf("\n");
}
void test_show_bytes(int val)
{
int ival = val;
float fval = (float) ival;
int *pval = &ival;
show_int(ival);
show_float(fval);
show_pointer(pval);
}
void show_int(int x)
{
show_bytes((byte_pointer) &x, sizeof(int));
}
void show_float(float x)
{
show_bytes((byte_pointer) &x, sizeof(float));
}
void show_pointer(void *x)
{
show_bytes((byte_pointer) &x, sizeof(void *));
}
