#include <stdio.h>

int main() {
  int	 a[5];
  int flag = 0;
  int n;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<=(n); i++) {
     /* Imprime resultado da n-esima iteracao do scheduler */
    if((i%a[0])==0){
    	printf("0");
    }
    else flag++;
    if((i%a[1])==0){
    	printf("1");
    }
    else flag++;
    if((i%a[2])==0){
    	printf("2");
    }
    else flag++;
    if((i%a[3])==0){
    	printf("3");
    }
    else flag++;
    if((i%a[4])==0){
    	printf("4");
    }
    else flag++;
    if (flag == 5){
    	printf("-");
    }
    flag =0;
    printf("\n");
  }

  return 0;
}
