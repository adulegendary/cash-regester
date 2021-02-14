#include <iostream>
#include <cmath>
int firstDigit(int);
void changeval(int);
using namespace std;
int main() {

    double due;
    double recived;
    double change;


    cout << "Enter the amount due: ";
    cin >> due;
    cout << "\nEnter the amount received: ";
    cin >> recived;
    if (due < recived) {
        change = recived - due;

        // if((int)change == change){
        //   cout<<(int)change<<" dollars, 0 quarters, 0 dimes, 0 nickels, and 0 pennies.";
        // }
        // else if((int)change != 0) {  
        double y = fmod(change, 1);//fmod library for extracting decimal part
        y *= 100;
        int x = firstDigit(y);
        cout << (int)change << " dollars,";
        changeval(x);
        //}
    }
    else {
        cout << "\n Insufficient funds!" << endl;
    }
}
void changeval(int money) {
    int  quarters, dimes, nickles, pennies;
    quarters = money / 25;
    money = money % 25;

    //fin number of dimes
    dimes = money / 10;
    money = money % 10;

    //find number of nickles
    nickles = money / 5;
    money = money % 5;

    //find number of pennies
    pennies = money;
    cout << quarters << ", quarters, " << dimes << " dimes, " << nickles << " nickles, " << "and " << pennies << " pennies.";
}

int firstDigit(int n)
{
    // Remove last digit from number 
    // till only one digit is left 
    while (n >= 100)
        n /= 10;

    // return the first digit 
    return n;
}
//calculater.