#include <iostream>
using namespace std;

int main()
{

   int score;
   char ch;

   cout << "Enter the score :";
   cin >> score;
   if (score <= 100)
   {
      ch = (score > 35 && score >= 90) ? 'A' : (score > 35 && score >= 80) ? 'B'
                                           : (score > 35 && score >= 70)   ? 'C'
                                           : (score > 35 && score >= 50)   ? 'D'
                                           : (score >= 35)                 ? 'E'
                                                                           : 'F';
      cout << "Your Grade is : " << ch << endl;

      switch (ch)
      {
      case 'A':
         cout << "Execellent Work!!";
         break;
      case 'B':
         cout << "Execelle!!";
         break;
      case 'C':
         cout << "Execell!";
         break;
      case 'D':
         cout << "Exece!";
         break;
      case 'E':
         cout << "ExeceWork!!";
         break;
      case 'F':
         cout << "Try again";
         break;
      }
   }
   else
   {
      cout << "invalid numbers" << endl;
   }
   return 0;
}