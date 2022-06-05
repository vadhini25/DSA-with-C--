#include <iostream>
using namespace std;
void numbers (int num1, int num2) {
   while (num1 <= num2) {
      int flag = 0;
      for(int i = 2; i < num1; i++) {
         if(num1 % i == 0) {
            flag = 1;
            break;
         }
      }
      if (flag == 0)
      cout<<num1<<endl;
      num1++;
   }
}
int main() {
   int num1 = 20;
   int num2 = 50;
   numbers(num1,num2);
   return 0;
}
