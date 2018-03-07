#include <iostream>
#include <math.h>

using namespace std;

int bin_2_dec(long long);                                                           //declaring the binary to decimal conversion function
long long dec_2_bin(int);                                                           //declaring the decimal to binary conversion function
char menu();                                                                        //declaring the menu function



int main()
{


    do{
    switch(menu())
    {
        case 'b':
                long long n;
                cout<<"Enter a binary number: "<<endl;                              //Taking in the binary number from the user
                cin>>n;
                cout<< n <<" in binary is "<< bin_2_dec(n)<<" in decimal \n"<<endl; //Calling the function within the output of the result
                break;

        case 'd':
                int m, deci;
                cout << "Enter a decimal number: ";                                 //Taking in the decimal number from the user
                cin >> m;
                deci = dec_2_bin(m);
                cout << m << " in decimal = " << deci << " in binary \n" << endl ;  //Calling the function to do the conversion within the output of the result
                break;

        case 'q':
                return 0;
    }
    }
    while(1);






    return 0;
}

int bin_2_dec(long long n)
{
    int decnum = 0, i = 0, r;                                                       //setting up variables used within the function and decnum to be returned as the final value
    while (n!=0)
    {
        r = n%10;                                                                   //storing the remainder of dividing the binary number by 10
        n /= 10;                                                                    //changing the value of n to the initial value of binary number divided by 10
        decnum += r*pow(2,i);                                                       //setting the value of decnum
        ++i;                                                                        //incrementing i for next loop of calculation if n is not equal to 0
    }
return decnum;
}

long long dec_2_bin(int m)
{
    long long bin = 0;                                                              //setting up variable bin to be returned from function with final value of binary number
    int re, i=1;                                                                    //setting up variables to be used within the function for calculations. It is important that i is set to the value of 1 and not zero for this calculation
    while(m!=0)
    {
        re = m%2;                                                                   //setting r to the value of the remainder of the decimal divided by 2
        m /=2;                                                                      //changing the value of m to the initial value divided by 2
        bin += re*i;                                                                //setting the value of bin for this iteration of the loop
        i *= 10;                                                                    //scaling i by a factor of 10 to be used in the next iteration of the loop if m is not equal to 0

    }
return bin;
}

char menu()
{
    char choice;

        cout<<" Enter 'b' to convert Binary to Decimal. \n Enter 'd' to convert Decimal to Binary \n Enter 'q' to Quit "<<endl;
        cin>>choice;


return choice;
}


