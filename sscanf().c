#include <stdio.h>
int main()
{
  char info[ ] = "Shihab Dhaka 01626318831";
  char name[50];
  char city[50];
  int phone;
  sscanf(info, "%s %s %d", name,city, &phone);
  printf("His Name is :%s\nHe lives in :%s\nHis Phone Number is :%11d",name, city,phone);

  return 0;
}

