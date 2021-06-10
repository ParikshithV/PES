#include <stdio.h>
struct student {
  int slno;
  int subject[5];
};

int main(){
  int l, s, sum_sub[5], avg_sub[5], highest[5];
  int high_stud[10];
  struct student student[5];
  int n=5;  //number of students
  for (int i = 0; i < n; i++) {
    printf("\nEnter sl.no. of student:");
    scanf("%d",&(student[i].slno));
    for (int j = 0; j < 5; j++) {
      printf("Enter marks for subject %d: ",j+1);
      scanf("%d",&(student[i].subject[j]));
    }
  }

  for (int i = 0; i < n; i++) {
    sum_sub[i]=0;
    for (int j = 0; j < 5; j++) {
      sum_sub[i] = sum_sub[i] + student[i].subject[j];
    }
    avg_sub[i] = sum_sub[i]/5;
    printf("Avg marks for subject %d: %d\n",i+1,avg_sub[i]);
  }

  for (int i = 0; i < 5; i++) {
    //high_sub[i]=0;
    for (int j = 0; j < n; j++) {
      if (student[j].subject[i]<student[j+1].subject[i]){
        highest[i] = student[j+1].subject[i];
        high_stud[i] = j+1;
      }b
      else{
        highest[i] = student[j].subject[i];
        high_stud[i] = j;
      }
      //high_sub[i] = sum_sub[i] + student[i].subject[j];
    }
  }

  for (int h = 0; h < 5; h++) {
    printf("Highest marks for subject %d: %d by student %d\n",h+1,highest[h],high_stud[h]);
  }

  return 0;
}
