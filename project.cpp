#include<iostream>
using namespace std;


int factorial()                                                         //function to calculate factorial of a number
{
	
	
    int num,i;
	long int fact=1;
	
	cout<<"Enter an integer number: ";
	cin>>num;
	
	for(i=num;i>=1;i--)
		fact=fact*i;
	
	cout<<"Factorial of "<<num<<" is = "<<fact<<endl;
	
	return 0;
}

/*.......................................*/

int prime()
{                                                                       //function to calculate whether the number is prime or not                    
 /* variable definition and initialization */   
    int n, i, c = 0;
    
    /* Get user input */    cout << "Enter any number n: ";
	 cin>>n;
    
    /*logic*/    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout << "n is a Prime number" << endl;
    }
    else
    {
         cout << "n is not a Prime number" << endl; 
    }
    
    return 0;
}

/*.......................................*/


int pallindrome()                                                           //function to determine whether the number is pallindrome or not      
{
	int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}


/*..............................................*/

int armstrong()                                                      //function to determine whether the no. is armstrong or not
{
	int origNum, num, rem, sum = 0;
  cout << "Enter a positive  integer: ";
  cin >> origNum;

  num = origNum;

  while(num != 0)
  {
      rem = num % 10;
      sum += rem * rem * rem;
      num /= 10;
  }

  if(sum == origNum)
    cout << origNum << " is an Armstrong number.";
  else
    cout << origNum << " is not an Armstrong number.";

  return 0;
}


/*.............................................*/


int evenodd()                                                       //function to find whether the no. is even or odd
{
	int n;

    cout << "Enter an integer: ";
    cin >> n;

    if ( n % 2 == 0)
        cout << n << " is even.";
    else
        cout << n << " is odd.";

    return 0;
}

/*.............................................*/

int perfect()                                                       //function to check whether the no. is perfect or not
{
	int n,i=1,sum=0;
    cout << "Enter a number: ";
    cin >> n;
       while(i<n){
       if(n%i==0)
       sum=sum+i;
       i++; 
}
 
if(sum==n)
    cout << i << " is a perfect number\n"; 
else
    cout << i << " is not a perfect number\n"; 

return 0;
}

int perfectsq()                                                    //function to check whether the number is perfect square or not
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	int r=1,i=1;
	while(r<n)
	{
		i++;
		r=i*i;
	}
	if(r==n)
	cout<<n<<" is a perfect square";
	else
	cout<<n<<" is not a perfect square";
	return 0;
}

int curoot()                                                       //function to check whether the number is perfect cube or not
{
	int num, curoot,ans; 

 cout << "\n\n Check whether a number is a perfect cube or not: \n";
 cout << " -----------------------------------------------------\n";
    cout<<" Input a number: ";
    cin>>num;
curoot=round(pow(num, 1.0/3.0));

if(curoot*curoot*curoot==num)
{
  cout<<" The number is a perfect Cube of "<<curoot<<endl;   
}
else
{
  cout<<" The number is not a perfect Cube."<<endl;   
}
}

int power2()                                                         //function to check whether the no. is power of two or not
{
	int n;
	
    cout<<"Enter the number :";
    cin>>n;

    if(n>0)
    {
        while(n%2 == 0)
        {
            n/=2;
        }
        if(n == 1)
        {
            cout<<"Number is power of 2"<<endl;
        }
    }
    if(n == 0 || n != 1)
    {
        cout<<"Number is not power of 2"<<endl;
    }
    return 0;
}
