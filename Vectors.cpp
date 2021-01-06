#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>


int main ()
{
  // constructors used in the same order as described above:
  std::vector<int> first;                                // empty vector of ints
  std::vector<int> second (4,100);                       // four ints with value 100
  std::vector<int> third (second.begin(),second.end());  // iterating through second
  std::vector<int> fourth (third);                       // a copy of third

  // the iterator constructor can also be used to construct from arrays:
  int myints[] = {16,2,77,29};
  std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

  std::cout << "The contents of fifth are:";
  for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
/*
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    srand (time(NULL));

  // generate secret number between 1 and 10:
    int iS;
    vector<int> vec1;

    for (int i = 1; i <= 15; i++){
        iS = rand() % 100 + 1;
        vec1.push_back(iS);}

    cout << "Understanding begin() and end() function: " << endl;
    for (vector<int>::iterator i = vec1.begin(); i != vec1.end(); ++i)
        cout << *i << " ";

    sort(vec1.begin(), vec1.end(), greater<int>());

    cout << "Sorted \n";
    for (vector<int>::iterator x = vec1.begin(); x != vec1.end(); ++x)
        cout << *x << " ";
    cout <<endl;
    cout << "Adding two members: "<<vec1[14] + vec1[0];
    return 0;
}*/
