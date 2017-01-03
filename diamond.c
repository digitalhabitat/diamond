#include <stdio.h>
#include <math.h>

void diamond(int num_odd);
void diamondAlt(int num_odd);

int main(){

  int num;

  printf("Please enter an odd number!\n");
  scanf("%d",&num);
  
  // call diamond function with our num input
  diamond(num);
  
  return 0;
}  

void diamond(int num_odd){

  int med, space;
  int i, j;
  char ch ='A';

  med = num_odd/2+.5;
  
  // must be odd number to function
  if (num_odd%2 == 1){
    printf("\n");
    // upward pyramind
    for (i = 1; i <= med+1; i++){
      // determine field width
      space = med + 2 - i;

      // print letter to median
      for(j = 0; j <= i-1; j++){
        printf("%*c",space,ch+j);
        // terminate spacing
        space = 0;
      }
      // rever to A (subtracting 2 due to prievious loop post increment
      for(j-=2; j>=0;j--){
        printf("%c",ch+j);
       }
      printf("\n");
    } // end upward pryamind loop

    // Downward Pyramid
    for (i -= 2; i >= 0; i--){
      
      space = med + 2 - i;
      for(j = 0; j <= i-1;j++){
        printf("%*c",space,ch+j);
        space = 0;
      }
      for(j -= 2; j >= 0; j--){
        printf("%c",ch+j);
      }
      printf("\n");
    }
  }
}

void diamondAlt(int num_odd){

  int i, j, k;
  char ch ='A';

  // must be odd number to function
  if (num_odd%2 == 1){
    //different technique
    for( i = 0; i < num_odd/2+1; i++){
      // Spaces
      for(k = num_odd/2+.5; k > i; k--){
        printf(" ");
      }
      // Letters
      for(j = 0; j < i; j++){
        printf("%c",ch+j);
      }
      for(j;j >= 0; j--){
        printf("%c",ch+j);
      }
      printf("\n");
    }

    for( i; i > 1; i--){
      // Spaces
      for(k = num_odd/2+2.5; k > i; k--){
        printf(" ");
      }
      // Letters
      for(j = 0; j < i-2; j++){
        printf("%c",ch+j);
      }
      for(j; j >= 0; j--){
        printf("%c", ch+j);
      }
    printf("\n");
    }
  }  
}
