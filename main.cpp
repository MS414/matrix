#include<stdio.h>
#include"head.h"

int arr[256] = {'0'};

int main() {
	FILE* fout = fopen("text.txt", "wt");
		for (int i = 0; i <= 100000; ++i) {
			int x = func();
			fprintf(fout, "%d  ", x);
			arr[x] = arr[x] + 1;
		}
		fclose(fout);
		for (int i = 0; i <= 255; ++i) {
			float f = 0;
			f = arr[i] / 100000.;
			printf("Probability of %d is %1.5f\n", i, f);
		}
		return 0;
}
