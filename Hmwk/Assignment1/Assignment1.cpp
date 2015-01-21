/* 
 * File:   main.cpp
 * Author: Ola Hill
 * Class # 40718
 *Gaddis chapter 2
 * Created on January 16, 2015, 10:48 AM
 */

#include <iostream>
using namespace std;



int main()
{
    // problem # 15
   cout << "   *" << endl;
   cout << "  ***" << endl;
   cout << " *****" << endl;
   cout << "*******" << endl; 
   
   // problem # 16 
   cout << "   *" << endl;
   cout << "  ***"  << endl;
   cout << " *****" << endl;
   cout << "*******" << endl;
   cout << " *****" << endl;
   cout << "  ***"  << endl;
   cout << "   *" << endl;
   
   // problem # 1
  
     int apples = 62;
     int oranges = 99;
     int total = apples + oranges;
  
     cout << " The total is  " <<  apples + oranges << endl;
     
     // problem #14
     cout << "Your name" << endl << "Your address, with city, state, and ZIP code" << endl << "Your telephone number" << endl << "Your college major" << endl;
     
     
     // problem #8
     double subtotal,   // Total amount of items before taxes
             finalTotal,  // Total price plus taxes       
             taxes,
             itemOne = 12.95,
             itemTwo = 24.95,
             itemThree = 6.95,
             itemFour = 14.95,
             itemFive = 3.95;
     
     // calculate subtotal of items before taxes
        subtotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
        cout << "Amount  before Taxes is $" << subtotal << endl;
    
     // calculate total of items after taxes
         total = subtotal*.6;
        cout << " Amount of taxes is $" << total << endl;
     // calculate total after taxes
         finalTotal = subtotal + total ;
        cout << " Total price is $" << finalTotal << endl;
             
        
        // problem # 10
        
        double mpg = 12,
                miles = 350;
        
        cout << " The number of miles per gallon a car can get is " << miles/mpg << endl;
        
        // problem # 17
        
        double amount,  // total before commission
                fee,    // amount due to broker
                commission,
                share = 600,
                price = 21.77;
                 
        
        // Calculate the amount paid for stock
        amount = share*price; 
        cout << "The amount paid for the stock is $" << amount << endl;
        
        // Calculate the amount of commission
        fee = amount*.2;
        cout << "The amount of the commission is $" << fee << endl;
        
        // Total amount of transaction
        total = fee + amount; 
        cout << "The total amount paid is $" <<  total << endl;
        
        // problem # 12
        
        double   number,       // acres in tract, 
                 acreOfland = 43560,
                 tractOfland = 386767;
        
        
        
        // calculate the number of acres in a tract of land
        number = tractOfland / acreOfland;
         cout << " The number of acres in this tract of land is " << number << " square feet" << endl;
         
         // problem # 5
         
         double sum,  // total of all numbers 
                 average,
                 num1 = 28,
                 num2 = 32,
                 num3 = 37,
                 num4 = 24,
                 num5 = 33;
         
         // calculate the total of all five numbers
         sum = num1 + num2+ num3 + num4 + num5;
         
         // divide the total by the 5
         average = sum / 5;
         
         cout << "The average of all five numbers are " << average << endl;
         
         
         
         
     
     
     
     
     
     
     
   
  
   
  
    
    return 0;
   
}

