/* finds the thousandth prime number
    -redo of old primality code
    -utilizes new isprime() function
    -written by TRK 7/22/17*/
#include <stdio.h>
#include <math.h>

int isprime(int n);
int nthPrime(int target);


int main()
{
    int tgt=1000;

    printf("\n\nthousandth prime number is: %d\n\n",nthPrime(tgt));
    return 0;
}



int isprime(int n){        
    int i = 3;
    if(n==2)
        return 1;
    if(n % 2 == 0.0 | n == 1)
        return 0;

    while( i < sqrt(n) + 1){
            if ( n % i == 0.00)
                return 0;
            i+=2;
    }
    return 1;
}

int nthPrime(int target){

    int cnt=0; //amount of primes
    int num=2; //number being tested

    while(cnt  <= target){
        //Test is number is prime
        if( isprime(num) == 1){

            cnt++;//increase amount of primes

            if(cnt == target){
                return num;
            }      
        }

        num++; //move to next item
    }
    return num--;
}
