#include <iostream>
using namespace std;

int check(int number)
{  
    
    for (int i = 2; i < number; i++)
    {   
        if (number % i  ==0)
        {
            return false;
        }
        else
        {
            return true;
        }
       
    }
}
int main()
{
    int num = 1917;
    // cou can enter your own number inside "num"
    bool prime = check(num);
    if (prime == false)
    {
        cout<<"this is not a prime number";
    }else

    {
        cout<< "this is a prime number";
    }
    
    return 0;
}

