// Day 3 of 75 day challeng

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  
 
printf("Enter String Here :");
  scanf("%s",str);

  int length = strlen(str);
    char reversed[length + 1];

    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';

    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n",reversed);

  return 0;
}
