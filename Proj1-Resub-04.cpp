#include <stdio.h>
#include <stdlib.h>
#include <math.h>//for mathematical input
#include <string.h>//for string comparison
#include <conio.h>// for getch()
//REVISION
//ALL STAR NUMBER CALCULATOR
//Created by Erfigo Smaradheva & Boby Yurismono -- Group 4
//This program is the mini project of Algorithm and Programming

//LIST OF FUNCTIONS
void decimal(int x, int base);
int bintodec(long long bin);
int bintooct1(long long bin);
int bintohex(long long bin);
long long int bintooct2(long long bin);
long long octtodec(int oct);
long long octtobin(int oct);
long long octtohex(int oct);
void hextobin(char* hex);
long long int hextobin2(char hex[]);
long long hextodec(char hex[]);
long long int hextooct(char hex[]);


int main()
{system ("cls");//to turn the page of the program
system("color B");//option differs by the color
	int option;
	char name[20];
	printf("\n\n\n\n\n\n\n\t\t\t------------------------------------------------------------------------");
	printf("\n\t\t\t------------------------All Star Number Calculator----------------------");
	printf("\n\t\t\t------------------------------------------------------------------------");
	printf("\n\n\n\t\t\t            |Designed by: Erfigo Smaradheva & Boby Yurismono|");
	printf("\n\t\t\t  |This program helps you to input number in other numerical system.|");
	printf("\n\t\t\t         |You will be asked to first enter your type of number| ");
	printf("\n\t\t\t |and the Calculator will change the number into other type of number.|");
	printf("\n\t\t\t|Enter your name=\t\t");//name will be inputted
	scanf("%s", &name);
	printf("\n\t\t\t------------------------Enter any key to continue-----------------------");
	getch();
	system("cls");
	do
	{//main option
	system("color E");
		printf("\a\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tMain Option");
		printf("\n\t\t\t\tHello %s!", name);
		printf("\n\n\t\t\t\tSelect your input as a numerical system below= ");
		printf("\n\t\t\t\t1)Decimal \n\t\t\t\t2)Binary \n\t\t\t\t3)Octal");
		printf("\n\t\t\t\t4)Hexadecimal\n\t\t\t\t5)Help Function \n\t\t\t\t0 for exit.\n\t\t\t\tEnter here=");
		scanf("%d", &option);
		
		if(option==1)//decimal calculator starts here
		{system("cls");
		system("color F");
		int num;
		printf("\n\n\t\t\t\t\tThe Decimal Converter");
		 
		dec:
			printf("\n\nInput your positive Decimal Number=\t ");
			scanf("%d", &num);
			
			if(num>=0)
			{
			
			printf("\nBinary Value=\t");
			decimal(num,2);//the 2 acts as the base
			printf("\nOctal Value=\t");
			decimal(num,8);//the 8 as the base
			printf("\nHex Value=\t");
			decimal(num,16);//the 16 as the base
			printf("\nEnter any key to go back into main option.");
			getch();
			system("cls");
		   }
		   else
		   {
		   	printf("\n%d is negative, please enter a positive number.", num);
		   	goto dec;
		   }
		}
		if(option==2)//binary calculator starts here
		{system ("cls");
		system ("color 3");
		long int bin,hex=0,i=1,calc;
		
					
					printf("\n\n\t\t\t\t\tThe Binary Converter");
					
					printf("\n\nEnter your binary number(0 or 1)= ");
					//enter binary as input one or zero(high or low)
					scanf("%d",&bin);
					
					printf("The Decimal number=\t%d",bintodec(bin));//decimal function
					printf("\nThe octal number=\t%d", bintooct1(bin));//octal function
					printf("\nThe hex number=\t\t%1X",bintohex(bin));//%1X read a form of string 
					printf("\nEnter any key to go back into main option.");
					getch();
					system("cls");
			}
		if (option==3)//octal calculator starts here
		{
		system ("color A");
		system("cls");
			
			long long oct;
				printf("\n\n\t\t\t\t\tThe Octal Converter");
			printf("\nEnter the Octal number= ");
			scanf("%d", &oct);
			octtohex(oct);//go to function of octal to hexadecimal
			printf("\nDecimal number=\t\t%d", octtodec(oct));//octal to decimal
			printf("\nBinary number=\t\t%d", octtobin(oct));//octal to binary
			printf("\nEnter any key to go back into main option.");
			getch();
			system("cls");
		}
		if(option==4)//Hexadecimal calculation starts here
		{
		system("cls");
		system("color 4");
	
					char hex[50];//hex as array
					printf("\n\n\t\t\t\t\tThe Hexadecimal Converter");
					printf("\nEnter the Hexadecimal number=\t");
					scanf("%s",&hex);
					hextobin(hex);//go to hex to binary function
					hextodec(hex);//go to hex to decimal function
					printf("\nThe Octal number=\t%d", hextooct(hex));//go to hex to octal function
					printf("\nEnter any key to go back into main option.");
					getch();
					system("cls");
			}
		if(option==5)//Help function for user to acknowledge the numerical system
		{
			system("cls");
			
				printf("\n\n\t\t\t");
				printf("Need help? these are the definition of each numerical system.");
				printf("\n\n\t-Decimal\t\t=the standard system for denoting integer and non-integer numbers.");
				printf("\n\t-Binary\t\t\t=a number system that represented by base of 2.");
				printf("\n\t-Octal\t\t\t=a base-8 number system.");
				printf("\n\t-Hexadecimal\t\t=a number system that represents number using base of 16.");
				printf("\n\n\n\t\t\t");
				printf("How to use?");
				printf("\n\n\tHere the user first select the basis of numerical system for one of the four above.");
				printf("\n\n\tThen, the user write down the number that is wanted to be deciphered.");
				printf("\n\n\tFinally the user will receive the remaining three number system of the basis number.");
				printf("\n\n\tThe user can write down the answer and after that go back into the main option.");
				printf("\n\n\tselect any key to go back into the main option.");
				getch();
				system("cls");
				}
		
	/*Decimal is the standard system for denoting integer and non-integer numbers.
Hexadecimal is a number system that represents number using base of 16.
Binary is a number system that represented by base of 2.
Octal is a base-8 number system*/

		if(option>5)
		{
			system("cls");
		}
		
		
	}while(option!=0);//program end
	system("cls");
	printf("\n\n\n\n\t\t\t\tThanks %s for using this program.", name);
		
}
//FUNCTION INPUT
//decimal conversion to all
void decimal(int x, int base)
{
	int calculator= x%base;
	if (x==0)
	{
		return;
	}
	decimal(x/base, base);//function redo
	if (calculator<10)//calculator less than 10 means a numerical term
	{
		printf("%d", calculator);
	}
	else
	{
		printf("%c", calculator-10+'A');//this ist the numerical and alphabetic terms
	}
}
//binary conversion to decimal
 bintodec(long long bin)
{
	int dec=0;
	int i=0;
	int rem;
	while(bin!=0)
	{
		rem=bin%10;//remaining of division of binary into 10
		bin/=10;
		dec+=rem*pow(2,i);//i here is powered by two
		++i;//with i always being added
	}return dec;
}
//binary conversion to octal
int bintooct1(long long bin)
{
	int oct=0,dec=0,i=0;
	while (bin!=0)//binary to decimal first
	{
		dec+=(bin%10)*pow(2,i);
		++i;
		bin/=10;
	}
	i=1;
	while (dec!=0)//decimal to octal
	{
		oct+=(dec%8)*i;//octal described as decimal in division with 8 times i
		dec/=8;
		i*=10;
	}
	return oct;//return function
}
//binary conversion to hexadecimal	
int bintohex(long long bin)
{
	long int calc, i=1, hex=0;
		while (bin!=0)//hex function
					{
						calc=bin%10;//if bin equals other than 0
						hex=hex+calc*i;
						i=i*2;
						bin=bin/10;
					}
	return hex;//return as hexadecimal value
					
}
//octal conversion to decimal
long long octtodec(int oct)
{
	int rem, dec=0,i=1;//oct to dec basically the reverse of dec to oct
	while(oct!=0)
	{
		rem=oct%10;
		dec=dec+(rem*i);
		i=i*8;
		oct=oct/10;
		
	}
	return dec;
}

//octal conversion to binary
long long octtobin(int oct)
{
	int dec=0, i=0;//initialize value for decimal and counter
	long long bin=0;
	//octal to decimal first
	while (oct!=0)
	{
		dec+=(oct%10)*pow(8,i);//8 as base
		++i;
		oct/=10;	
	}
	i=1;
	//decimal to binary
	while (dec!=0)
	{
		bin+=(dec%2)*i;//2 as base
		dec/=2;
		i*=10;
	}
	return bin;
}
//octal conversion to hexadecimal
long long octtohex(int oct)
{
	
			int hexa=0,mul=1,i=0, k=0,rev=0,count=0;//initializers
			char bin[40]="", hex[50];//characterization of hex since hex got alphabetic input
			int rem;//remainings
	
			while(oct!=0)
			{//octal to binary
				rem=oct%10;
				if (rem>7)
				{
					count++;
					break;
				}
				rev=(rev*10)+rem;
				oct=oct/10;
				
			}
			if(count==0)
			{
			oct=rev;
				while(oct!=0)
				{
					rem=oct%10;
					switch(rem)
					{
			case 0:
                strcat(bin, "000");//strcat to lead the case towards binary value from octal
                break;
            case 1:
                strcat(bin, "001");
                break;
            case 2:
                strcat(bin, "010");
                break;
            case 3:
                strcat(bin, "011");
                break;
            case 4:
                strcat(bin, "100");
                break;
            case 5:
                strcat(bin, "101");
                break;
            case 6:
                strcat(bin, "110");
                break;
            case 7:
                strcat(bin, "111");
                break;
					}
					oct=oct/10;
				}
				while(bin[k]!='\0')
					k++;
					count=1;
					k--;
					while(k>=0)
        {
            if(bin[k]=='0')
                rem = 0;
            else
                rem = 1;
            hexa = hexa + (rem*mul);
            if(count%4==0)
            {
                if(hexa<10)
                    hex[i] = hexa+48;
                else
                    hex[i] = hexa+55;
                mul = 1;
                hexa = 0;
                count = 1;
                i++;
            }
            else
            {
                mul = mul*2;
                count++;
            }
            k--;
        }
        if(count!=1)
            hex[i] = hexa+48;
        if(count==1)
            i--;
        printf("\nThe Hex number=\t\t");
        count = 0;
        for(i=i; i>=0; i--)
        {
            if(hex[i]=='0' && count==0)
            {
                count++;
                continue;
            }
            else
                printf("%c", hex[i]);
        }
    }
    else
        printf("\nInvalid Octal number %d\n", rem);
}
//hexadecimal conversion to decimal
long long hextodec(char hex[])
{
	char bin[50];//hex and binary as array
					long int count=0;
					long long dec, loc;//decimal and location
					int i=0, val, len;//length, value, and i for looping
					dec=0;
					loc=1;
					len=strlen(hex);//string function to calculate length
					len--;
					for(i=0;hex[i]!='\0';i++)
					{
					if(hex[i]>='0' && hex[i]<='9')
        			{
            			val = hex[i] - 48;
       				}
        			else if(hex[i]>='a' && hex[i]<='f')
        			{
            			val = hex[i] - 97 + 10;
       				}
        			else if(hex[i]>='A' && hex[i]<='F')
        			{
            			val = hex[i] - 65 + 10;
        			}

        				dec+= val * pow(16, len);//len is power by 16 times by val itself 
						//and later added by dec
        				len--;
    				}
					
					printf("\nThe Decimal number=\t%d",dec);
					
					
	}


//hexadecimal coversion to binary
void hextobin(char* hex)//char* means to describe the char hex automatically in the main
{
	long int i=0;
	printf("\nThe Binary number=\t");
	while (hex[i])//hex[i] is being looped
	{
		switch(hex[i])
		{//4 bit binary is applied for calculating hexadecimal to binary
			case '0':
				printf("0000");
				break;
			case '1':
				printf("0001");
				break;
			case '2':
				printf("0010");
				break;
			case '3':
				printf("0011");
				break;
			case '4':
				printf("0100");
				break;
			case '5':
				printf("0101");
				break;
			case '6':
				printf("0110");
				break;
			case '7':
				printf("0111");
				break;
			case '8':
				printf("1000");
				break;
			case '9':
				printf("1001");
				break;
			case 'a':
			case 'A':
				printf("1010");
				break;
			case 'b':
			case 'B':
				printf("1011");
				break;
			case 'c':
			case 'C':
				printf("1100");
				break;
			case 'd':
			case 'D':
				printf("1101");
				break;
			case 'e':
			case 'E':
				printf("1110");
				break;
			case 'f':
			case 'F':
				printf("1111");
				break;
			default:
				printf("Wrong Hexadecimal number");//if there are mistypes of number				
		}i++;//i is being added until it reached the max element of array
	}
}
//hexadecimal conversion to binary for hex to oct calculation
long long int hextobin2(char hex[])
{
	long long int bin, place;
	int i=0, rem,val;
	int n=strlen(hex);//string length of array hex
	bin=011;//binary input
	place=011;//binary input
	for (i = 0; i<n; i++) 
	{
      bin = bin * place;
      switch (hex[i]) {//array element in switch case described as binary numbers
      case '0':
         bin += 0;
         break;
      case '1':
         bin += 1;
         break;
      case '2':
         bin += 10;
         break;
      case '3':
         bin += 11;
         break;
      case '4':
         bin+= 100;
         break;
      case '5':
         bin += 101;
         break;
      case '6':
         bin += 110;
         break;
      case '7':
         bin += 111;
         break;
      case '8':
         bin += 1000;
         break;
      case '9':
         bin += 1001;
         break;
      case 'a'://for lower case
      case 'A'://for upper case
         bin += 1010;
         break;
      case 'b':
      case 'B':
         bin += 1011;
         break;
      case 'c':
      case 'C':
         bin += 1100;
         break;
      case 'd':
      case 'D':
         bin += 1101;
         break;
      case 'e':
      case 'E':
         bin += 1110;
         break;
      case 'f':
      case 'F':
         bin += 1111;
         break;
      default:
         printf("Invalid hexadecimal input.");//if there are mistypes of numbers
      }
      place = 10000;
   }
   return bin;//return function
}
	
//binary conversion to octal for hex to octal calculation
long long int bintooct2(long long bin)

{
   long long int octal, place;
   int i = 0, rem, val;
   octal = 011;//binary input
   place = 011;//binary input
   place = 1;
   while (bin > 0) {
      rem = bin % 1000;
      switch (rem)//remainings of binary divided by 1000
	{
      case 0:
         val = 0;
         break;
      case 1:
         val = 1;
         break;
      case 10:
         val = 2;
         break;
      case 11:
         val = 3;
         break;
      case 100:
         val = 4;
         break;
      case 101:
         val = 5;
         break;
      case 110:
         val = 6;
         break;
      case 111:
         val = 7;
         break;
      }
      octal = (val * place) + octal;//octal calculation
      bin /= 1000;
      place *= 10;
   }
   return octal;//return function
}				
//hexadecimal conversion to octal		
long long int hextooct(char hex[])
{
			long long int oct, bin;
			//hexadecimal to binary function
			bin=hextobin2(hex);
			//binary to octal function
			oct=bintooct2(bin);
			return oct;
}		
		
/*Some of the program were learned from:
https://www.programiz.com/c-programming/examples
https://www.tutorialspoint.com/
https://codeforwin.org/
https://www.geeksforgeeks.org/*/



