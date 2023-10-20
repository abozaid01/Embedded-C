#include <stdio.h>

#define Task_5

void printArr(char *arr, int size){
  for (int i = 0; i < size; i++)
    printf("%c", arr[i]);
  printf("%c", '\n');
  
}

int add(int* x, int* y){
  return *x + *y;
}

void multiplyByNumber(int *arr, int num, int size){
  for (int i = 0; i < size; i++)
    arr[i] *= num;
  

}

void swap(int *num1, int *num2){
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

int lengthOfString(char *arr){
  int length = 0;
  while (*arr != '\0')
  {
    length ++;
    arr++;
  }

  return length;
  
}

void concatenate(char *str1,char *str2){
  while (*str1 != '\0')
    str1 ++;

  while(*str2 !='\0'){
    *str1 = *str2;
    str1++;
    str2++;
  }
  
  *str1 = '\0';
    
}

int sort(int *arr, int size){
  for (int i = 0; i < size - 1; i++)
    for (int j = 0; j < size - i - 1 ; j++)
     if(*(arr + j) > *(arr +j + 1))
      swap(arr + j, arr + j + 1);
    
  
}

int find(int *arr, int num, int size){
  for (int i = 0; i < size; i++)
  {
    if(*(arr + i) == num)
      return i;
  }

  return -1;
  
}



int main(){
  #ifdef Task_1
    printf("%s", "\n========Task1========\n");
    int num1 = 10, num2 = 20;
    printf("%d", add(&num1, &num2));
  
  #endif

  #ifdef Task_2
    printf("%s", "\n========Task2== ======\n");

    int arr[5] = {1,2,3,4,5};
    
    printArr(arr, 5);
    multiplyByNumber(arr, 2, 5);
    printArr(arr, 5);
  
  #endif

  #ifdef Task_3
    printf("%s", "\n========Task3=========\n");
    int num1 = 10, num2 = 20;
    printf("first number: %d, second number: %d\n", num1, num2);
    swap(&num1, &num2);
    printf("first number: %d, second number: %d\n", num1, num2);
  #endif

  #ifdef Task_4
    printf("%s", "\n========Task4=========\n");
    char str[20] = "hello world!";
    printf("%d ",lengthOfString(str));
    printArr(str, lengthOfString(str));
  #endif

  #ifdef Task_5
    printf("%s", "\n========Task5=========\n");
    char str1[10] = "hello ";
    char str2[10] = "world!";
    char *newArr;
    concatenate(str1, str2 );
    printArr(str1, lengthOfString(str1));
  #endif

  #ifdef Task_6
    printf("%s", "\n========Task6=========\n");
    int arr[5] = {8,6,0,4,5};
    printArr(arr, 5);
    sort(arr, 5);
    printArr(arr, 5);
  #endif

  #ifdef Task_7
    printf("%s", "\n========Task7=========\n");
    int arr[5] = {8,6,0,4,5};
    printf("The index of the number is: %d", find(arr, 4, 5));
  #endif
  
}