// Write your function here
/*
Write a function named makeChange() that takes two double input parameters, cost and amount,
along with three int output parameters: quarters (25 cents), dimes (10 cents) and cents. We'll
skip using nickels (5 cent coins) for this problem.
The cost is the cost of your purchases, and the amount is the amount you give to the cashier.
Your function will calculate the change after subtracting the cost of the purchases from the
amount. The output variables quarters, dimes and cents will be used for to return the coins
and the return statement will be used to return the dollars.
Here's an example. Your purchases are $1.08 and you pay with a $5.00 bill.*/


int makeChange(double cost, double amount,int &quarters, int &dimes, int &cents)
{
double change = amount - cost;
// calculation of dollars and remaining amount
int dollars = (int)change;
change = change - dollars;

//calculation of quarters and remaining amount
quarters = (int)(change/0.25);
change = change -(quarters*0.25);

//calculation of dimes and remaining amount
dimes = (int)(change/0.10);
change = change - (dimes*0.10);

//calculation of cents
cents = (int)((change+0.005)/0.01);
// here 0.005 was added to round off the conversion from double to int
//if you dont add it you will get one cent less.

return dollars;

}
