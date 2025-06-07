//DAY 1 [task1]

//#include <stdio.h>

//int main(){
  //  printf ("name: ayushi") ;

    //printf ("age: 19") ;

    //printf ("city: ahemdabad");
     
    //return 0;
//}



//[task2]

#include <stdio.h>
 
int main(){
    int subject1,subject2,subject3,total;
    float average;

    printf("enter mark for subject1:");
    printf("%d" , &subject1);

    printf("enter mark for subject2:");
    printf("%d" , &subject2);

    printf("enter mark for subject3:");
    printf("%d" , &subject3);

    total = subject1 + subject2 + subject3;
    average = total / 3.0;

    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
