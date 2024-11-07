//program to calculate pay for an employee

#include <stdio.h>
int main(){
	  //variable declaration
	  float hours_worked, hourly_wage;
    float standard_hours, extra_hours;
    float gross_pay, standard_pay, extra_pay;
    float taxes, tax_first_600, tax_remaining;
    float total_pay;
    
	//user input
	printf("Enter hours worked per week:");
	scanf("%f",&hours_worked);
	
	printf("Enter hourly wage:");
	scanf("%f",&hourly_wage);
	
	//extra hours calculation
if (hours_worked > 40) {
        standard_hours = 40;
        extra_hours = hours_worked - 40;
    } else {
       standard_hours = hours_worked;
        extra_hours = 0;
    }

    
    standard_pay = standard_hours * hourly_wage;
    extra_pay = extra_hours * hourly_wage * 1.5;
    //gross pay calculations
    gross_pay = standard_pay + extra_pay;

	if (gross_pay > 600) {
        tax_first_600 = 600 * 0.15;
        tax_remaining = (gross_pay - 600) * 0.20;
    } else {
        tax_first_600 = gross_pay * 0.15;
        tax_remaining = 0;
    }
    taxes = tax_first_600 + tax_remaining;

    //  net pay
    total_pay = gross_pay - taxes;

    //output
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Total Pay: $%.2f\n", total_pay);
};