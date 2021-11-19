// Ayota Ngandjoug Daniel Anicet

#include "PPADFunctions.c"

int main(int argc, char **argv)
{
  system("clear");
  int choice = 0;

  choice = Menu();
  while (choice != 5)
  {
    system("clear");
    switch (choice)
    {
      case 1 :
        system("clear");
        ParallelismPerformance();
      break;
      case 2 :
        system("clear");
        CompareSequentialAndParallelCode();
      break;
      case 3 :
        system("clear");
        GetWithdrawalBetterType();
      break;
      case 4 :
        system("clear");
        CompareParallelTransformationAndSequentialCode();
      break;
      default :
        printf("\n\n\t\t\t\t\t\a\a WRONG CHOICE !!!\n\n");
    }
    system("clear");
    choice = Menu();
  }
  system("exit");

  return 0;
}
