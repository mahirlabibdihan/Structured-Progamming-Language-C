/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|
M A H I R     L A B I B     D I H A N

*/

/*
	Suppose there is a house.
	Which has an entry door and an exit door.
	You will enter into the house from one door,
	then exit from another.
	You want to repeat this.
	That means, You want to enter into the house,
	then exit from the house, then again go back to the entry door and enter into the house and so on.
	Thus it creates loop. 
	But it has problem. It creates an infinity loop.
	Which means you will never stop doing this.
	You will keep enter into the house and exit from it.
	To prevent this, we hired a security guard at the entry point.
	He will allow you to enter on certain condition only.
	So what may be the condition?
	Suppose this is a donation house.
	You will get 1 taka per entry.
	So you want to be millionaire by entering into the house again and again.
	To prevent this, authority has given a condition to the guard. 
	That is nobody can collect more than 10 taka.
	So, the guard will only allow the person who have collected less than equal to 10 taka [ <=10 ]
	So, one person will enter into the house and do some work and collect 1 taka  and then exit the house.
	Once he have collected 10 taka, he can't enter into the house anymore.
	Thus this loop of enter and exit ends.
	If we implement it into code.

	First we take variable to track the amount collected.
	
	int amount;

	Then this person will start the loop.
	General structure of "For loop".
	for(Part 1;Part 2;Part 3)
	{
		Body
	}

	There are 3 parts inside "For loop" divided by semi-colon.
	Part 1: Initially you don't have any money. So we set the amount to 0.
	Part 2: At every entry point a condition will be checked. The condition will be placed here. Which is amount<=10.We use boolean expressions to express a condition. amout<=10 is a boolean expression.
	Part 3: Before exiting he will collect 1 taka. So total amount will increase by 1. We did this operation in this part.

	There is a body in the for loop where you will do some work.
	for(amount=0;amount<=10;amount=amount+1)
	{
		// Some work
	}

	Work flow:
	Your total collected amount will initialized to 0. [ Part 1 ]
	Certain condition will be checked at entry. [ Part 2 ]
	You will enter into the house and do stuffs. [ Body ]
	Before exiting you will collect 1 taka. [ Part 3 ]
	Exit.
	Certain condition will be checked at entry. [ Part 2 ]
	You will enter into the house and do stuffs. [ Body ]
	Before exiting you will collect 1 taka. [ Part 3 ]
	Exit.
	.
	.
	.
	.
	and so on. Until you have collected 10 taka.
	As we can see part 1 is executed only once.
	Part 2,Body, Part 3 will be executed repeatedly.

				Part 1
				  |
				Part 2<-------
				  |			 |
				 Body------>Part 3


	Part 1,2,3, Body are not mandatory for a "For loop".
	You can customize them in you own way. This is just an example.




*/
int main()
{
	// for(;condition;)
	// {		
	// }


	// for(;;) // If the condition is not provided it is assumed to be true . // And its a infinity loop
	// {

	// }


	int i,j;

	for(i=0;i<10;i++)
	{

	}

	// Upper loop can also be written as
	i=0;
	for(;;)
	{
		if(i<10) break;
		i++;
	}


	for(i=0,j=5;i<j;i++,j--) // use of comma operator
	{

	}


}