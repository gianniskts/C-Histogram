// preprocessor directives
#include <stdio.h>

// main
int main(void){
// welcome message
      printf("Input number of histogram bar (Maximum 10):");
// input
      int numberBar;
      scanf("%d", &numberBar);
      int hashArr[numberBar];
      for(int i=0; i<numberBar; i++){
            scanf("%d", &hashArr[i]);
            printf("You entered %d\n", hashArr[i]);
      }
// implementation
      for(int i=0; i<numberBar; i++){
            for(int j=0; j<hashArr[i]; j++){
                  printf("#");
            }
                  printf("\n");
      }
// return 
      return 0;
}
