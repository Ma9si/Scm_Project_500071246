#include<iostream>
#include "stack_header.h"
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

/*.....................................................*/

int sortarray()                                                    //function to sort elements in array in ascending order
{
    int arr[100];
    int size, i, j, temp;
 
    // Reading the size of the array
    cout<<"Enter size of array: ";
    cin>>size;
 
    //Reading elements of array
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    //Sorting an array in ascending order
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //Printing the sorted array in ascending order
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}

/*....................................................*/

int addmatrix()                                                  //function for addition of two matrix
{
	int x[3][3],y[3][3],z[3][3],i,j;
cout<<"ENTER ELEMENTS OF 1st MATRIX\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cin>>x[i][j];
}
cout<<"ENTER ELEMENTS OF 2nd MATRIX\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cin>>y[i][j];
}
cout<<"MATRIX [X]";
for(i=0;i<3;i++)
{
cout<<"\n\n";
for(j=0;j<3;j++)
cout<<x[i][j]<<"\t";
}
cout<<"\nMATRIX [Y]";
for(i=0;i<3;i++)
{
cout<<"\n\n";
for(j=0;j<3;j++)
cout<<y[i][j]<<"\t";
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
z[i][j]=x[i][j]+y[i][j];
}
cout<<"\nMATRIX [Z]";
for(i=0;i<3;i++)
{
cout<<"\n\n";
for(j=0;j<3;j++)
cout<<z[i][j]<<"\t";
}
}

/*...........................................*/

int mergearray()                                                    //function to merge any array
{
int a[10],b[10],c[20],i;
   
   cout<<"Enter Elements in 1st Array: ";
   for(i=0;i<10;i++)
   {
   cin>>a[i];
   }
   cout<<"Enter Elements in 2nd Array: ";
   for(i=0;i<10;i++)
   {
   cin>>b[i];
   }
   cout<<"\nElements of Array After Merge: ";
   for(i=0;i<10;i++)
   {
    c[i]=a[i];
    c[i+10]=b[i];
   }
   for(i=0;i<20;i++)
   {
   cout<<c[i]<<"\t";
   }
}

/*.............................................*/


int insertelement()                                                       //function to insert an element in array                                                     //function to insert an element in arr
{
	 int i,a[5],no,pos;
  cout<<"Enter data in Array: ";
  for(i=0;i<5;i++)
  {
  cin>>a[i];
  }
  cout<<"\n\nStored Data in Array: ";
  for(i=0;i<5;i++)
  {
  cout<<a[i];
  }
  cout<<"\n\nEnter position to insert number: ";
  cin>>pos;
  if(pos>5)
  {
  cout<<"\n\nThis is out of range";
  }
  else
  {
  cout<<"\n\nEnter new number: ";
  cin>>no;
  --pos;
  for(i=5;i>=pos;i--)
  {
  a[i+1]=a[i];
  }
  a[pos]=no;
  cout<<"\n\nNew data in Array: ";
  for(i=0;i<6;i++)
  {
  cout<<a[i];
  }
  }
}

/*............................................*/


int Deletelement()                                                     //function to delete an element in array
{
	int i,a[5],no,pos;
   cout<<"Enter Data in Array: ";
   for(i=0;i<5;i++)
   {
    cin>>a[i];
   }
   cout<<"\n\nStored Data in Array:  ";
   for(i=0;i<5;i++)
   {
    cout<<a[i];
   }
   cout<<"\n\nEnter poss. of Element to Delete: ";
   cin>>pos;
   if(pos>5)
   {
   cout<<"\n\nThis value is out of range: ";
   }
   else
   {
   --pos;
   for(i=pos;i<=4;i++)
   {
    a[i]=a[i+1];
   }
   cout<<"\n\nNew Data in Array: ";
   for(i=0;i<4;i++)
   {
    cout<<a[i];
  }
  }
}

/*.................................................*/

int revarray()                                                     //function to reverse an array
{
	int a[20],b[20],i,j,n;
   cout<<"How many elements you want to enter: ";
   cin>>n;
   cout<<"Enter any "<<n<<" elements in Array: ";
   for(i=0; i<n ;i++)
   {
   cin>>a[i];
   }
   cout<<"Reverse of Array: ";

   for(i=n-1,j=0; i>=0;i--,j++)
   {
    b[i]=a[j];
   }
   for(i=0; i<n ;i++)
   {
   cout<<b[i];
   }
}
 
/*.................................................*/

int sumelement()                                                   //function to find sum of an array elements
{
	 int arr[20],i,n,sum=0;
   
   cout<<"How many elements you want to enter: ";
   cin>>n;
   cout<<"Enter any "<<n<<" elements in Array: ";
   for(i=0;i<n;i++)
   {
   cin>>arr[i];
   }
   cout<<"Sum of all Elements are: ";

   for(i=0;i<n;i++)
   {
    sum=sum+arr[i];
   }
   for(i=0;i<n;i++)
   {
   }
  cout<<sum;
}

/*...............................................*/

int length()                                            //function to find length of string
{
	int i,count=0;
   char ch[20];
   
   cout<<"Enter any string: ";
   cin>>ch;
   for(i=0;ch[i]!='\0';i++)
   {
   count++;
   }
   cout<<"String Length: "<<count;
}

/*................................................*/

int compare()                                            //function to compare two strings
{
	 char str1[20],str2[20],i,j,flag=0;
 
 cout<<"Enter first string: ";
 gets(str1);
 cout<<"Enter Second string: ";
 gets(str2);
 i=0;
 j=0;
  while(str1[i]!='\0')
  {
   i++;
  }
  while(str2[j]!='\0')
  {
   j++;
  }
 if(i!=j)
 {
 flag=0;
 }
 else
 {
 for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
 {
 if(str1[i]==str2[j])
 {
 flag=1;
 }
 }
 }
 if(flag==0)
 {
 cout<<"Strings are not equal";
 }
 else
 {
 cout<<"Strings are equal";
 }
}

/*............................................*/

int reverse()                                                       //function to reverse the string
{

char str[100],temp;
 int i,j=0;
 
 cout<<"Enter any the string :";
 gets(str);  //  gets function for input string
 i=0;
 j=strlen(str)-1;
  while(i<j)
   {
   temp=str[i];
   str[i]=str[j];
   str[j]=temp;
   i++;
   j--;
   }
 cout<<"Reverse string is: "<<str;
}

/*................................................*/

int frequency()                                        //function to count frequency of characters
{
	int i,count=0;
   char ch[20],c;
   
   cout<<"Enter Any String: ";
   gets(ch);
   cout<<"Enter any Character form string: ";
   cin>>c;
   for(i=0;ch[i]!='\0';i++)
   {
   if(ch[i]==c)
   count++;
   }
   if(count==0)
   {
   cout<<"Given character not found";
   }
   else
   {
   cout<<"Repetition of " <<c<<" "<<count<<" times";
   }
}

/*...................................................*/

int concatenate()                                           //function to concatenate two strings
{
	char str1[100] = "upes";
   char str2[100] = "devops";
   int i,j;
   cout<<"String 1: "<<str1<<endl;
   cout<<"String 2: "<<str2<<endl;
   for(i = 0; str1[i] != '\0'; ++i);
      j=0;
   while(str2[j] != '\0') {
      str1[i] = str2[j];
      i++;
      j++;
   }
   str1[i] = '\0';
   cout<<"String after concatenation: "<<str1;
   return 0;
}

/*....................................................*/


int vowcount()                                               //function to count no of vowels and consonants in string

   {
   
   char str[50];
    int v = 0, c = 0, n = 0, s = 0;
    cout << "Enter a string : ";
    gets(str);
    for (int i = 0; str[i]!='\0'; ++i)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            ++v;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                ++c;
             else if (str[i] >= '0' && str[i] <= '9')
                      ++n;
                  else
                      ++s;
    }
    cout << "Number of vowels : " << v;
    cout << "\nNumber of consonants : " << c;
    cout << "\nNumber of numbers :" << n;
    cout << "\nNumber of special characters : " << s;
    return 0;
}	
  
/*....................................................*/


void stack()                                                   //function to implement stack which includes user defined header file
{
   int ch, val; 
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {   
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
             push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4); 
    
}

/*...............................................*/

int upper()                                                           //function to convert lowercase string into upper case string
{
	char s[30];
   int i;
   //display a message to user to enter the string
   cout<<"Enter the String in lowercase: "; 
   //storing the string into the char array 
   cin>>s;

   /* running the loop from 0 to the length of the string
    * to convert each individual char of string to uppercase
    * by subtracting 32 from the ASCII value of each char
    */
   for(i=0;i<=strlen(s);i++) { 
      /* Here we are performing a check so that only lowercase 
       * characters gets converted into uppercase. 
       * ASCII value of a to z(lowercase chars) ranges from 97 to 122 
       */ 
      if(s[i]>=97 && s[i]<=122)
      {
		s[i]=s[i]-32;
      }
   }
   cout<<"The entered string in uppercase: "<<s;
   return 0;
}

/*...................................................*/


int temp()                                                            //function to convert input temperature into fahrenheit or celsius 
{
	int choice;
float temp, Convtemp;
cout <<"Temperature Conversion Menu: \n";
cout << " 1. Fahrenheit to Celsius" << endl;
cout << " 2. Celsius to Fahrenheit" << endl;
cout << " Enter your choice: ";
cin >> choice;
if (choice == 1)
{cout << "\n "<< " Enter Temp in Fahrenheit: " ;
cin >> temp;
Convtemp = (temp-32.0)/1.8;
cout << " \n Temperature in Celsius is: " << Convtemp << endl;
}
else
{cout << "\n "<< " Enter Temp in Celsius: " ;
cin >> temp;
Convtemp = (1.8*temp)+32.0;
cout << " \n Temperature in Fahrenheit is: " << Convtemp;} 

return 0;
}

/*.........................................*/


int character()                                           //function to convert number into character
{
	long int n,sum=0,r;    
cout<<"Enter the Number= ";    
cin>>n;    
while(n>0)    
{    
r=n%10;    
sum=sum*10+r;    
n=n/10;    
}    
n=sum;    
while(n>0)    
{    
r=n%10;    
switch(r)    
{    
case 1:    
cout<<"one ";    
break;    
case 2:    
cout<<"two ";    
break;    
case 3:    
cout<<"three ";  
break;    
case 4:    
cout<<"four ";  
break;    
case 5:    
cout<<"five ";  
break;    
case 6:    
cout<<"six ";   
break;    
case 7:  
cout<<"seven ";  
break;  
case 8:    
cout<<"eight ";    
break;    
case 9:    
cout<<"nine ";  
break;    
case 0:    
cout<<"zero ";  
break;    
default:    
cout<<"tttt ";    
break;    
}    
n=n/10;    
}    
}

/*..........................................*/


int feet()                                                       //function to convert feet into inches
 {
   // Declare Variables
   int f, i = 0;

   cout << "Simple C++ Program : Convert Feet to Inches\n";

   //Read Feet Value
   cout << "\nEnter feet : ";
   cin>>f;

   //Converting into inches
   i = f * 12;

   //Print Total Inches
   cout << "\n\nTotal Inches : " << i;

   
   return (0);
}

/*...............................................*/


int decimal()                                           //function to convert decimal into binary
{  
int a[10], n, i;    
cout<<"Enter the number to convert: ";    
cin>>n;    
for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}    
cout<<"Binary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    
}  

/*..............................................*/


int days()                                                             //function to convert days into years,weeks and days
{

	int days, years, weeks;

	cout << "Enter days:";   // Read total number of days from user
	cin >> days;
    
	years = (days / 365);
	weeks = (days % 365) / 7;
	days  = days - ((years * 365) + (weeks * 7));

	cout << "Years : " << years <<endl;
	cout << "weeks : " << weeks <<endl; 
	cout << "Days : " << days <<endl;
    
	return 0;
}

/*...............................................*/

int working()                                                                           //C++ Program to demonstrate the working of pointer.
 {                                                                       
    int *pc, c;
    
    c = 5;
    cout << "Address of c (&c): " << &c << endl;
    cout << "Value of c (c): " << c << endl << endl;

    pc = &c;    // Pointer pc holds the memory address of variable c
    cout << "Address that pointer pc holds (pc): "<< pc << endl;
    cout << "Content of the address pointer pc holds (*pc): " << *pc << endl << endl;
    
    c = 11;    // The content inside memory address &c is changed from 5 to 11.
    cout << "Address pointer pc holds (pc): " << pc << endl;
    cout << "Content of the address pointer pc holds (*pc): " << *pc << endl << endl;

    *pc = 2; 
    cout << "Address of c (&c): " << &c << endl;
    cout << "Value of c (c): " << c << endl << endl;

    return 0;
}

/*..............................................*/

int Arrayelements()                                                    //Access Array Elements Using Pointer
{
   int data[5];
   cout << "Enter elements: ";

   for(int i = 0; i < 5; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(data + i);

   return 0;
}

/*...............................................*/

//illustrate the use of the Void Pointer.

 
int voidpointer()
{
void *ptr1,*ptr2,*ptr3,*ptr4;
int i;
char c;
float f;
double d;
cout<<"Enter the integer value : ";
cin>>i;
cout<<endl;
cout<<"Enter the charater: ";
cin>>c;
cout<<endl;
cout<<"Enter the float value: ";
cin>>f;
cout<<endl;
cout<<"Enter the double value: ";
cin>>d;
cout<<endl;
 
ptr1=&i;
ptr2=&c;
ptr3=&f;
ptr4=&d;
 
cout<<"Your entered integer address is: "<<ptr1<<endl;
cout<<"Your entered character address is: "<<ptr2<<endl;
cout<<"Your entered float value address is: "<<ptr3<<endl;
cout<<"Your entered double value address  is: "<<ptr4<<endl;
 

}


//function to display address of elements of an array using both array and pointers


int address()
{
    float arr[5];
    float *ptr;
    
    cout << "Displaying address using arrays: " << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    return 0;

}

/*..................................................*/

int root()
{
	{

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}
}



