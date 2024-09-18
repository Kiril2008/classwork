//#include <iostream>
//using namespace std;
//void noZero(int** ar, int row, int col ) {
  //  int i, j, n=0;
  //  for (i=0; i < row; i++) {
      //  bool rowzero = false;
    //    for (j=0; j < col ; j++) {
      //      if(ar[i][j] == 0) {
       //         rowzero = true;
         //       break;

          //  }
    //    }

   //     if(rowzero==false)n++;
 //   }
  //  cout<<n<<endl;
    //cout<<n<<' ';
 //   int **aray = new int*[n];
    //for (i=0; i < n; i++) {
     //   aray[i] = new int[col];
    //   for (j=0; j < col; j++) {
       //     aray[i][j] = ar[i][j];
        //    cout << aray[i][j] << ' ';
     //   }
     //   cout << endl;
   // }
//}
   // int main() {
   // srand(time(NULL));
   // int row,col;
   // cin>>row>>col;
    //int **ar = new int*[row];
     //   for (int i = 0; i < row; i++) {
      //  ar[i]=new int[col];
     //   for (int j = 0; j < col; j++) {
       //     ar[i][j]=rand()%10;
      //      cout << ar[i][j] <<' ';
     //   }
     //   cout<<endl;
   // }
   // noZero(ar, row, col);
  //  for(int i=0;i<row;i++) {
   //     delete[] ar[i];
  //  }
  //  delete[]ar;

  //  return 0 ;
//}
#include <iostream>
#include <windows.h>
using namespace std;
int main() {
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 int shop;
 cout<<"Кількість магазинів: ";
 cin>>shop;
 double** ar = new double* [shop] ;
 for (int i = 0; i < shop; i++) {
  ar[i] = new double[6] ;
 }
 cout<<"Дохід магазинів"<<endl;
 for (int i = 0; i < shop; i++) {
  for (int r= 0; r < 6; r++) {
   ar[i][r]= ((double)rand()/ RAND_MAX) * (10000 - 1000)+1000;
   cout<<ar[i][r] << " ";
  }
  cout<<endl;
 }
 int mounth;
 double suma, total=0;
 cout<<" Введіть місяць та дохід ";
 cin>>mounth>>suma;
 for(int i = 0; i < shop; i++) {
  total += ar[i][mounth-1];
 }
 cout<<(total>suma?"Звгвльний дохід перевищив: " :"Загальний дохід не перевищив ");
  return 0;
 }

