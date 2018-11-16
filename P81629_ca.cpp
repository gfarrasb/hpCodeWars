#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    int euros, cents;
    cin >> euros >> cents;

    euros = euros + (cents/100);
    cents = cents%100;

    int bitllets500 = 0;
    int bitllets200 = 0;
    int bitllets100 = 0;
    int bitllets50 = 0;
    int bitllets20 = 0;
    int bitllets10 = 0;
    int bitllets5 = 0;
    int monedes2 = 0;
    int monedes1 = 0;
    int monedes50cent = 0;
    int monedes20cent = 0;
    int monedes10cent = 0;
    int monedes5cent = 0;
    int monedes2cent = 0;
    int monedes1cent = 0;

    bitllets500 = euros/500;
    euros = euros%500;

    bitllets200 = euros/200;
    euros = euros%200;

    bitllets100 = euros/100;
    euros = euros%100;

    bitllets50 = euros/50;
    euros = euros%50;
   
    bitllets20 = euros/20;
    euros = euros%20;
  
    bitllets10 = euros/10;
    euros = euros%10;

    bitllets5 = euros/5;
    euros = euros%5;

    monedes2 = euros/2;
    euros = euros%2;

    monedes1 = euros/2;
    euros = euros%1;

    monedes50cent = cents/50;
    cents = cents%50;
  
    monedes20cent = cents/20;
    cents = cents%20;

    monedes10cent = cents/10;
    cents = cents%10;

    monedes5cent = cents/5;
    cents = cents%5;

    monedes2cent = cents/2;
    cents = cents%2;

    monedes1cent = cents/1;
    cents = cents%1;

    cout << "Banknotes of 500 euros: " << bitllets500 << endl;
    cout << "Banknotes of 200 euros: " << bitllets200 << endl;
    cout << "Banknotes of 100 euros: " << bitllets100 << endl;
    cout << "Banknotes of 50 euros: " << bitllets50 << endl;
    cout << "Banknotes of 20 euros: " << bitllets20 << endl;
    cout << "Banknotes of 10 euros: " << bitllets10 << endl;
    cout << "Banknotes of 5 euros: " << bitllets5 << endl;
    cout << "Coins of 2 euros: " << monedes2 << endl;
    cout << "Coins of 1 euro: " << monedes1 << endl;
    cout << "Coins of 50 cents: " << monedes50cent << endl;
    cout << "Coins of 20 cents: " << monedes20cent << endl;
    cout << "Coins of 10 cents: " << monedes10cent << endl;
    cout << "Coins of 5 cents: " << monedes5cent << endl;
    cout << "Coins of 2 cents: " << monedes2cent << endl;
    cout << "Coins of 1 cent: " << monedes1cent << endl;
    return 0;
    
}
