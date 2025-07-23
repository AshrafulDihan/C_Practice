//
// Created by ashra on 22/06/2025.
//
#include<stdio.h>

int main ()
{

  int i;

  for (i=1; i<=20 ; i++ )
  {
    if (i%3 == 0 ) {
      continue; //bypass
    }

    if (i == 16) {
      break; // loop tarminate
    }
    printf ("%d\n",i );
  }

  return 0;
}

/*output *Here they skip 3,6,9,12,15
 *1
 *2
 *4
 *5
 *7
 *8
 *10
 *11
 *13
 *14
 *16

 */