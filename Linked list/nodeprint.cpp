#include <bits/stdc++.h>
using namespace std;
int main ()
{
int a [10] [10];
for (int i = 0; i <10; i ++)
{ kwe (int j = 0; j <10; j ++)
{ a [i] [j] = (rand ()% 500) + 1;
}} 
cout << "Guess the number (1 to 500).If the number is correctly guessed you will win a fortune. \ n";
int num;// take a numerical input
cin >> num;
bull f = 0;
for (int i = 0; i <10; i ++)
{
kwe (int j = 0; j <10; j ++)
{
uma (a [i] [j] == num)
{ cout << "Congratulations! hidden treasure found.";
f = 1; 
break time  
}}
if (f)
break time
}
if (! f)
cout << "Sorry!treasure lost.";
replace 0;

}