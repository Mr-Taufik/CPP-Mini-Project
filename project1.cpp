#include <iostream>

using namespace std;

struct question
{
     string qua;
     string answer1;
     string answer2;
     string answer3;
     int correct_answer;

};

void prin(question array[],int i)
{
     cout << array[i].qua << endl;
     cout << array[i].answer1 << endl;
     cout << array[i].answer2 << endl;
     cout << array[i].answer3 << endl;

}
int main()
{
     int option = 0;
     struct question array[3] =
         {
             {"What is the smallest country?",
               "1. USA",
               "2. India",
               "3. Vatican City", 3},
             {"What 's the biggest animal in the world?",
               "1. Elephant",
               "2. Blue whale",
               "3. Great white shark", 2},

             {"How many elements are there in the periodic table?",
               "1. 118elements",
               "2. 119elements",
               "3. 120elements", 3}
         };

     for(int i = 0; i < 3; i++)
     {
          prin(array, i);
          cout << "Choose 1-3: ";
          cin >> option;
          if(option != array[i].correct_answer)
          {
               cout << "Incorrect!" << endl;
          }
          cout << "Correct" << endl;

     }

     return 0;
}
