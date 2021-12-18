//SHUFFLING A DECK OF 52 CARDS 
//Code in C++

# THE CODE GIVES SHUFFLED NUMBERS EVERYTIME WE RUN THE CODE
#include <iostream>
using namespace std;
void shuffle(int card[], int n)
{
 srand(time(0));
  for (int i=0; i<n ;i++)
    {
        int r = i + (rand() % (52 -i));
        swap(card[i], card[r]);
    }
}
  
 int main()
 {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8,
               9, 10, 11, 12, 13, 14, 15,
               16, 17, 18, 19, 20, 21, 22,
               23, 24, 25, 26, 27, 28, 29,
               30, 31, 32, 33, 34, 35, 36,
               37, 38, 39, 40, 41, 42, 43,
               44, 45, 46, 47, 48, 49, 50,
               51};
  
    shuffle(a, 52);
  
    for (int i=0; i<52; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
