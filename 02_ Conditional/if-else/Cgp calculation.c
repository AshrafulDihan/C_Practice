//
// Created by ashra on 17/06/2025.
//
// Input 7 subject marks, calculate average,
// check fail/pass, then print grade.

#include<stdio.h>
int main()
{
  int bang , math , eng, phy, che, bio , ict ;
  float avg ;

  printf("Enter score of Bangla : ");
  scanf("%d", &bang);
  printf("Enter score of Math : ");
  scanf("%d", &math);
  printf("Enter score of English : ");
  scanf("%d", &eng);
  printf("Enter score of Physics : ");
  scanf("%d", &phy);
  printf("Enter score of chemistry :");
  scanf("%d", &che);
  printf("Enter the score of Biology : ");
  scanf("%d", &bio);
  printf("Enter the score of ICT : ");
  scanf("%d", &ict);

  // Calculate average
  avg = (bang + math + eng + phy + che + bio + ict)/7;
    //printf ("Avarage is : %.2f\n", avg);\

  // Check if any subject is below 40
  if (bang<40 || math<40|| eng <40 || phy <40 || che<40 || bio <40 || ict<40)
    {
      printf("\nYou are Faill!!");
    }
  else
   {
      // Check if average is beyond 100 (invalid input)
     if (avg >100)
      {
       printf ("⚠️ Enter correct marks (each subject must be 0-100).\n");
      }
    // Grade checking based on average
      else if (avg >= 80 && avg <= 100)
      {
       printf ("You got A+");
      }
     else if (avg >= 70 )
      {
      printf("You got A");
      }

     else if (avg >= 60 )
      {
      printf ("You got A-");
      }

     else if (avg>= 50 )
      {
        printf("You got B+");
      }

     else if (avg >= 40 )
       {
        printf("You got C");
       }
   }

    return 0;
}