#include <iostream>
#include <math.h>
using namespace std;

void printFlavors(){
	string flavors[10] = {"Goat Cheese Beet Swirl", "Red Hot Lover", "Tutti Frutti", "Black Sabbath", "Chai", "Lavender Honey", "Superman", "Salty Caramel Cashew", "Pineapple Cilantro Sorbet", "Cayenne Chocolate"};
	int length = sizeof(flavors) / sizeof(flavors[0]);
	cout << "Flavors: \n";
	for (int i = 0; i < length; i++){
		int numb = i + 1;
		cout << (i+1) << ": " + flavors[i] + "\n";
	}
}

void printFlavorDescription(int x){
	string flavors[10] = {"Roasted beets make for a sweet, rich red contrast to this thick and tangy goat cheese treat.", 
	"We can't guarantee you'll find your soulmate but you will fall for this hottie, a light banana ice cream mixed with fiery Red Hots.", 
	"Who said fruit cake was the worst? Okay, like everyone. But this ice cream iteration, spiked with rum, swirled with roasted Georgia pecans, and sweetened with candied fruit proves us all wrong.", 
	"It's unclear what's really going on here, but it looks super rock and roll.",
	"Skip the coffee shop and scoop this frozen treat for your afternoon pick-me-up. Bonus: It'll make you feel warm and fuzzy inside thanks to baking spices like cinnamon, nutmeg, and a hint of black pepper.", 
	"Sweet and floral lavender is one of the most fragrant and versatile edible blooms. Pair it with honey and you've got one of the most refreshing and relaxing treats ever.", 
	"Blue Moon (a Midwest flavor that tastes like Fruit Loops), Cherry, and Lemon offer a burst of colorful flavor.", 
	"This scoop has also gotten fudge, cashew pieces, and a salted caramel fudge swirl. Totally OTT.", 
	"The sour sweetness of pineapple meets the crisp, grassy notes of the cilantro to meld into one ultimate fresh summer flavor.", 
	"This cone is the epitome of sugar and spice and everything nice: The Mexican hot chocolate-inspired flavor takes rich dark chocolate and funks it up with smokey-spicey cayenne pepper."};
	cout << "\n";
	cout << flavors[x-1];
	cout << "\n";

}

void printMilkFlavors(){
	string flavors[3] = {"Chocolate", "Vanilla", "Strawberry"};
	int length = sizeof(flavors) / sizeof(flavors[0]);
	cout << "\nFlavors: \n";
	for (int i = 0; i < length; i++){
		int numb = i + 1;
		cout << (i+1) << ": " + flavors[i] + "\n";
	}
}








int main(){
    string anythingElse = "yes";
	double totalPrice = 0;	    
	string totalOrder = "";
	string flavors[10] = {"Goat Cheese Beet Swirl", "Red Hot Lover", "Tutti Frutti", "Black Sabbath", "Chai", "Lavender Honey", "Superman", "Salty Caramel Cashew", "Pineapple Cilantro Sorbet", "Cayenne Chocolate"};	
	string milkFlavors[3] = {"Chocolate", "Vanilla", "Strawberry"};

	
	while (anythingElse.compare("yes") == 0){
			string answer = "";
		    cout << "Would you like ice cream or a milkshake? (ice or milk): ";
		    cin >> answer;
		    if (answer.compare("milk") == 0){
		    	printMilkFlavors();
		    	int milkAnswer = 0;
		    	cout << "What number flavor would you like? ";
		    	cin >> milkAnswer;
		    	totalOrder += milkFlavors[milkAnswer - 1] + " milkshake, ";
		    	string milkSize = "";
		    	cout << "What size would you like? (16oz or 32oz): ";
		    	cin >> milkSize;
		    	if (milkSize.compare("16oz") == 0){
		    		totalPrice += 4.75;
		    	} if (milkSize.compare("32oz") == 0){
		    		totalPrice += 8.25;
		    	}
		    	string whipAnswer = "";
		    	cout << "Would you like whipped cream? ";
		    	cin >> whipAnswer;
		    	if (whipAnswer.compare("yes") == 0){
		    		totalOrder += "With whipped cream, ";
		    	}
		    	string cherryAnswer = "";
		    	cout << "Would you like a cherry? ";
		    	cin >> cherryAnswer;
		    	if (cherryAnswer.compare("yes") == 0){
		    		totalOrder += "With a cherry on top, ";
		    	}

		    }
		    if (answer.compare("ice") == 0){
		    	printFlavors();
		    	string descriptionAnswer = "";
		    	cout << "Would you like to read the discription of a flavor? (yes or no): ";
		    	cin >> descriptionAnswer;
		    	while (descriptionAnswer.compare("yes") == 0){
		    		int flavNumb = 0;
		    		cout << "Which number flavor? ";
		    		cin >> flavNumb;
		    		printFlavorDescription(flavNumb);
		    		cout << "\n ------------------------------------------ \nWould you like to see another description? (yes or no): ";
		    		cin >> descriptionAnswer;
		    	} 
		    	int orderNumb1;
		    	int numbFlavs;
		    	cout << "How many flavors would you like? ";
		    	cin >> numbFlavs;
				double fullScoop = 2.78;
				double halfScoop = 1.56;
				double jumboScoop = 12.99;
		    	string scoop = "";

		    	for (int i = 0; i < numbFlavs; ++i){
		    		string numbers[10] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "nineth", "tenth"};
		    		cout << "What is the number of your " + numbers[i] + " flavor? ";
		    		cin >> orderNumb1;
		    		totalOrder += flavors[orderNumb1 - 1] + " ice cream, ";
		    		cout << "Full, half, or jumbo scoop? (full, half or jumbo): ";
		    		if (i == 0){
		    			cout << "\n\n*A jumbo scoop is a pint of ice cream in a foot long bowl of waffle cone drizzled with chocolate and caramel syrup with a thicc layer of whipped cream.\n\nAnswer: ";
		    		}
		    		cin >> scoop;
		    		if (scoop.compare("full") == 0){
		    			totalPrice += fullScoop;
		    		} else if (scoop.compare("half") == 0){
		    			totalPrice += halfScoop;
		    		} else if (scoop.compare("jumbo") == 0){
		    			totalPrice += jumboScoop;
		    		}
		    		
		    	}
		    	string sprinkles = "";
		    	cout << "Would you like sprinkles? (yes or no): ";
		    	cin >> sprinkles;
		    	if (sprinkles.compare("yes") == 0){
		    		string typeSprinkles = "";
		    	 	cout << "Would you like chocolate or rainbow sprinkles? (chocolate or rainbow): ";
		    	 	cin >> typeSprinkles;
		    	 	if (typeSprinkles.compare("chocolate") == 0){
		    	 		totalPrice += 0.70;
		    	 	} else if (typeSprinkles.compare("rainbow") == 0){
		    	 		totalPrice += 0.90;
		    	 	}
		    	 string brownies = "";	
		    	 cout << "Would you like brownie chunks? ";
		    	 cin >> brownies;
		    	 if (brownies.compare("yes") == 0){
		    	 		totalPrice += 1.20;
		    	 		totalOrder += "With brownie bites, ";
		    	 	}	
		    	 string chocDriz = "";
		    	 cout << "Would you like chocolate drizzel? ";
		    	 cin >> chocDriz;
		    	 if (chocDriz.compare("yes") == 0){
		    	 	totalOrder += "With chocolate drizzel, ";
		    	 	totalPrice += 1.10;
		    	 }
		    	 string caramelDriz = "";
		    	 cout << "Would you like caramel drizzel? ";
		    	 cin >> caramelDriz;
		    	 if (caramelDriz.compare("yes") == 0){
		    	 	totalPrice += 1.25;
		    	 	totalOrder += "With caramel drizzel, ";
		    	 }
		    	
		    }
		    
		}

		cout << "Would you like anything else? (yes or no): ";
		cin >> anythingElse;



	}
	string worker = "";
	cout << "\nAre you a City Worker? (yes or no): ";
	cin >> worker;
	if (worker.compare("yes") == 0){
		double percent = totalPrice * 0.0978; //they do enough to help our city
		totalPrice -= percent;
	}
	string senior = "";
	cout << "\nAre you a senior citizen (Over 65)? (yes or no): ";
	cin >> senior;

	if (senior.compare("yes") == 0){
		double percent = totalPrice * 0.05;
		totalPrice -= percent;
	}
	float nearest = roundf(totalPrice * 100) / 100;
	string totalPriceString = to_string(nearest);
	totalOrder += "end.";
	cout << "\nYour order is: " + totalOrder + "\n";
	cout << "\nYour total is $" + totalPriceString << "\n";
    return 0;
	
}
    	




