/* 
 * File:   main.cpp
 * Author: Ola Hill
 * Gaddis Chapter 3 
 * Class # 40718
 *
 * Created on January 19, 2015, 8:30 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()

{
    
    // problem # 1
    
    double gallons,
            miles,
            mpg;
    
    // use cin.ignore() to be let the user be able to enter all information.)
    
     cout << "Enter the number of gallons your car can hold." << endl;
     cin >> gallons;
     cin.ignore();
     
   cout << "Enter the number of miles you car can drive on a full tank" << endl;
   cin >> miles;
    
    mpg = miles / gallons;
    
   cout << "Your car can drive " << mpg << "  miles to a gallon" << endl;
   
   
   // problem #3
   
   double testScoreone,testScoretwo,testScorethree,testScorefour,testScorefive;
   double sumOfscores,averageOfscores;
   
   /* In order to use setprecision(), you must include <iomanip>, the number that goes inside the,
    * the parenthesis depends on how many decimal points you want to show. Fixed forces cout to 
    * print in a decimal*/
   
   cout << "Test score number one" << endl;
   cin >>testScoreone;
   
   cout << "Test score number two" << endl;
   cin >>testScoretwo;
   
   cout << "Test score number three" << endl;
   cin>>testScorethree;
   
   cout << "Test score number four" << endl;
   cin >>testScorefour;
   
   cout << "Test score number five" << endl;
   cin >>testScorefive;
   
   sumOfscores = testScoreone+testScoretwo+testScorethree+testScorefour+testScorefive;
   averageOfscores = sumOfscores / 5;
   
   cout << "The average test score is " << fixed << setprecision(1)<< averageOfscores << endl;
   
   // problem # 4
   
   double November,December,January;
   double sumOfrainfall, averageOfrainfall;
   
   cout << "Average rainfall for three months" << endl;
   cout << "_________________________________" << endl;
   
   cout << "Amount of rainfall in November" << endl;
   cin >> November;
   
   cout << "Amount of rainfall in December" << endl;
   cin >> December;
   
   cout << "Amount of rainfall in January" << endl;
   cin >> January;
   
   sumOfrainfall = November + December + January;
   averageOfrainfall = sumOfrainfall / 3;
   
   cout << "The average rainfall for November, December, and January is  " << averageOfrainfall <<  " inches" << endl;
   
   // problem # 7
   
   double loanPayment,insurance,costOfgas,costOfoil,costOftires,costOfmaintenace;
   double monthlyTotal,yearlyTotal;
   
   cout << "How much is your loan payment?" << endl;
   cin >> loanPayment;
   
   cout << "How much is your insurance?" << endl;
   cin >> insurance;
   
   cout << "How much is the cost of your gas?" << endl;
   cin >> costOfgas;
   
   cout << "How much is the cost of your oil?" << endl;
   cin >> costOfoil;
   
   cout << "How much is the cost of your tires?" << endl;
   cin >> costOftires;
   
   cout << "How much is the cost of your maintenance?" << endl;
   cin >> costOfmaintenace;
   
   monthlyTotal = loanPayment +insurance +costOfgas+costOfoil +costOftires +costOfmaintenace;
   yearlyTotal = monthlyTotal * 12;
   
   cout << "The total monthly expenses are $" << monthlyTotal << endl;
   cout << "The total yearly expenses are $" << yearlyTotal << endl;
   
   // problem # 22
   
   // use string when you are entering a lot of information that involves inputing words
   // use getline (cin, )in order to enter the information line by line
   string name, age, city, college, profession, animalName, petName;
   
   cout << "Enter the following information" << endl;
   
   cout << " Enter name " << endl;
   getline (cin,name);
   cout << "Enter age " ;
   getline (cin, age);
   cout << "Enter city" ;
   getline (cin, city);
   cout << "Enter college";
   getline (cin,college);
   cout << "Enter profession ";
   getline (cin,profession);
   cout << "Enter animal name";
   getline (cin, animalName);
   cout << "Enter pet name";
   getline (cin,petName);
   
   
   cout<< "There once was a person named " << name <<"who lived in " << city << "." << endl;
   cout << " At the age of "  << age << " , " << name << "went to college at " << college << " ." << endl;
   cout << name << "graduated and went to work as a " << profession << endl;
    cout << "Then," << name << " adopted a" << animalName << "named "<< petName <<".They both lived happily ever after!" << endl; 
   
   // NOT SURE HOW TO ALLOW THE USER TO ENTER THE INFORMATION PROERLY AND HAVE THE STORY READ OUT PROPERLY!
    
    // problem # 8
    
    double replacementCost,
            minimumAmount;
    
   
    cout << " Amount of replacement cost $" << endl;
            cin >> replacementCost;
             minimumAmount = replacementCost * 0.8;
                     
    cout << "The  minimum amount of insurance  is $" << minimumAmount << endl;
    
    // problem # 6
    
    double before,
            after,
            widgets;
    
     cout << "How much does the pallet weigh before the widgets?" << endl;
    cin >> before;
    
    cout << "How much  does the pallet weight after the widgets?" << endl;
    cin >> after ;
    
    widgets = after / before;
    
    cout << " The number of widgets stacked on the pallet is  " << widgets << endl;
    
    // problem # 7
    
    int cookiesPerbag = 40, servingsPerbag = 10;
    double cookiesPerserving, caloriesPerserving;
     double cookiesAte , caloriesConsumed;     
    
    
    cout << "How many cookies did you eat? " << endl;
    cin >> cookiesAte;
    
    cout << " Total consumed calories" << caloriesConsumed << endl;
    
    // problem # 15
    
    double costA,costB,costC;
    double ticketsA,ticketsB,ticketsC;
    double amount;
    
    costA = 15.0;
    costB = 12.0;
    costC = 9;
    
   cout << "Enter amount of tickets for ClassA" << endl;
    cin >> ticketsA;
    cout << "Enter amount of tickers for ClassB" << endl;
    cin >> ticketsB;
    cout <<"Enter amount of tickets for ClassC" << endl;
    cin >> ticketsC;
     // total amount
    
    amount = costA*ticketsA + costB*ticketsB + costC*ticketsC;
    
    cout << "Total amount of ticket sales is $ " << fixed << setprecision(2) << amount << endl;
    
    
    
            
        
                
        
        
    
    
 
   
   
   
   
           
           
   
   
    


    return 0;
}

