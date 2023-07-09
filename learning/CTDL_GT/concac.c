#include<stdio.h>
#include<time.h>
int main() {
	int i, n=25, dem=0;
	for(i=1; i<=5; i++) {
		dem++;
	}
	printf("%d\n", dem);
	dem=0;
	for(i=1; i*i<=n; i++) {
		dem++;
	}
	
	
	printf("%d", dem);
	return 0;
}
