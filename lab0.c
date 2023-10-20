#include <stdio.h>

void task4(int row){
  // Task 4 : Create a C function that prints a triangle with the number of rows specified by a function parameter. 
 // The output is has to look like the drawing below:

  for (size_t i = 1; i <= row; i++){
    for (size_t j = 1; j <= i; j++)
    {
      printf("%c", '*');
    }
    printf("\n");
  }
}

void task5(int mark){
  // Task 5: Create a function that takes a marks in number and prints the corresponding grade
  
  if (mark >= 93 && mark <=100)
    printf("%c\n", 'A');
  else if(mark >= 85 && mark <=92)
    printf("%s\n", "B+");
  else if(mark >= 75 && mark <=84)
    printf("%c\n", 'B');
  else if(mark >= 70 && mark <=74)
    printf("%s\n", "C+");
  else if(mark >= 61 && mark <=69)
    printf("%c\n", 'C');
  else if(mark == 60)
    printf("%c\n", 'D');
  else if(mark < 60 && mark >= 0)
    printf("F\n");
  else
    printf("NOT allowed number\n");
}

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {

  // task4(10);
  // task4(5);

  // task5(88);
  // task5(110);
  // task5(69);
  // task5(-77);

  int x = 10 ,y =20;
  printf("value of x: %d, value of y: %d", x, y);
    swap(x,y);
  printf("value of x: %d, value of y: %d", x, y);

  return 0;
}


