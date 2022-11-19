#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void titleMenu();
void startMenu();
void aboutUs();
void itamsLostKitchen();
void itamsLocation();

void findFoodMenu();
void foodStalls();
void floorMapping();

void belgianWaffle();
void vvCafe();
void sisigOk();
void kmGrubs();
void netPlates();
void jamaicanPattie();
void idontTea();

void foodMenu1();
void foodMenu2();
void foodMenu3();
void foodMenu4();
void foodMenu5();
void foodMenu6();
void foodMenu7();

void about();
void order();

char choice;

int main()
{
   // titleMenu();
foodMenu2();
    
    return 0;
}

void titleMenu() {
cout << "\n\n\n\n" << setw(138) << "--------------------------------------------------------------------------------------\n" << endl;

    cout << setw(126) << "__________ __________                           \\   _______   " << endl;
    cout << setw(125) << "    |          |         /\\      |\\          /|    /      /  " << endl;
    cout << setw(125) << "    |          |        /  \\     | \\        / |   /          " << endl; 
    cout << setw(124) << "    |          |       /    \\    |  \\      /  |   \\______   "<< endl;
    cout << setw(124) << "    |          |      /______\\   |   \\    /   |          \\  " << endl;
    cout << setw(123) << "    |          |     /        \\  |    \\  /    |   \\       \\" << endl;
    cout << setw(124) << "____|_____     |    /          \\ |     \\/     |    \\______/ " << endl;
    cout << "\n" << endl;
    cout << setw(147) << "            ________    ______   __________           __________  __________  ________              _________      " << endl; 
    cout << setw(150) << "|          |        |  /     /       |         |   /      |           |      /         |         | |          |\\     |" << endl;
    cout << setw(150) << "|          |        | /              |         |  /       |           |     /          |         | |          | \\    |" << endl;
    cout << setw(150) << "|          |        | \\______        |         | /        |           |    |           |_________| |_______   |  \\   |" << endl;
    cout << setw(150) << "|          |        |        \\       |         |/ \\       |           |    |           |         | |          |   \\  |" << endl;
    cout << setw(150) << "|          |        | \\       \\      |         |   \\      |           |     \\          |         | |          |    \\ |" << endl;
    cout << setw(150) << "|_________ |________|  \\______/      |         |    \\ ____|_____      |      \\________ |         | |________  |     \\|" << endl;
    
    cout << "\n\n" << setw(140) << "--------------------------------------------------------------------------------------\n\n" << endl;
    cout << setw(107) << "Press Enter to Continue...";
   	getch();
   	system("CLS");
   	
   	startMenu();
}

void startMenu() {
	
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(109) << "Welcome to the" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(123) << "| A. | Find Food In FEU Tech Campus" << endl;
	cout << setw(103) << "| B. | About Us" << endl;
	cout << setw(99) << "| X. | Exit" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(143) << "Hello! I am Jr. Your personal assistant in this program. What can I help you with?" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		case 'A':
		case 'a':
		system("CLS");
		findFoodMenu();
		break;
		
		case 'B':
		case 'b':
		system("CLS");
		aboutUs();
		break;
		
		case 'X':
		case 'x':
		system("CLS");
		exit(3);
		break;
		
		default:
		system("CLS");
		startMenu();
	}
}

void aboutUs(){
	
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(111) << "| ABOUT US MENU |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" <<  setw(115) << "| A. | ITam's Lost Kitchen'" << endl;
	cout << setw(103) << "| B. | Location" << endl;
	cout << setw(99) << "| C. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to see About Us Menu" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		
		case 'A':
		case 'a':
		system("CLS");
		itamsLostKitchen();
		break;
		
		case 'B':
		case 'b':
		system("CLS");
		itamsLocation();
		break;
		
		case 'C':
		case 'c':
		system("CLS");
		startMenu();
		break;
		
		default:
		system("CLS");
		aboutUs();
		
	}
}

void itamsLostKitchen() {
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(111) << "| ABOUT PROGRAM MENU |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << setw(99) << "ADD INFORMATION FOR ABOUT US." << endl;
	
	cout << "\n\n" <<  setw(99) << "| A. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to see About Us Menu" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		
		case 'A':
		case 'a':
		system("CLS");
		aboutUs();
		break;
		
		default:
		system("CLS");
		itamsLostKitchen();
		
	}
}

void itamsLocation() {
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(111) << "| ABOUT US LOCATION MENU |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << setw(96) << "ADD INFORMATION FOR ABOUT US LOCATION." << endl;
	
	cout <<  setw(99) << "| A. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to see About Us Menu" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		
		case 'A':
		case 'a':
		system("CLS");
		aboutUs();
		break;
		
		default:
		system("CLS");
		itamsLocation();
		
	}
}

void findFoodMenu(){
	
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(111) << "| FIND FOOD MENU |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(119) << "| A. | View List of Food Stalls" << endl;
	cout << setw(108) << "| B. | Floor Mapping" << endl;
	cout << setw(99) << "| C. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to find food in FEU Tech Campus" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		case 'A':
		case 'a':
		system("CLS");
		foodStalls();
		break;
		
		case 'B':
		case 'b':
		system("CLS");
		floorMapping();
		break;
		
		case 'C':
		case 'c':
		system("CLS");
		startMenu();
		break;
		
		default:
		system("CLS");
		findFoodMenu();
		
	}
}

void foodStalls() {
	
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(112) << "| FOOD STALLS MENU |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(116) << "| A. | Famous Belgian Waffle" << endl;
	cout << setw(105) << "| B. | V & V Cafe" << endl;
	cout << setw(117) << "| C. | The Original: Sisig-Ok" << endl;
	cout << setw(103) << "| D. | KM Grubs" << endl;
	cout << setw(104) << "| E. | Netplates" << endl;
	cout << setw(127) << "| F. | De Original Jamaican Pattie Shop" << endl;
	cout << setw(120) << "| G. | I don't wanna miss a Tea'" << endl;
	cout << setw(99) << "| H. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(132) << "You choose to view the list of food stalls in FEU Tech canteen." << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		case 'A':
		case 'a':
		system("CLS");
		belgianWaffle();
		break;
		
		case 'B':
		case 'b':
		system("CLS");
		vvCafe();
		break;
		
		case 'C':
		case 'c':
		system("CLS");
		sisigOk();
		break;
		
		case 'D':
		case 'd':
		system("CLS");
		kmGrubs();
		break;
		
		case 'E':
		case 'e':
		system("CLS");
		netPlates();
		break;
		
		case 'F':
		case 'f':
		system("CLS");
		jamaicanPattie();
		break;
		
		case 'G':
		case 'g':
		system("CLS");
		idontTea();
		break;
		
		case 'H':
		case 'h':
		system("CLS");
		findFoodMenu();
		break;
		
		default:
		system("CLS");
		foodStalls();
		
	}
}

void floorMapping(){
	
} 

void foodMenu() {
		cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(111) << "| FIND FOOD MENU |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(119) << "| A. | View List of Food Stalls" << endl;
	cout << setw(108) << "| B. | Floor Mapping" << endl;
	cout << setw(99) << "| C. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to find food in FEU Tech Campus" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		case 'A':
		case 'a':
		system("CLS");
		foodStalls();
		break;
		
		case 'B':
		case 'b':
		system("CLS");
		floorMapping();
		break;
		
		case 'C':
		case 'c':
		system("CLS");
		startMenu();
		break;
		
		default:
		system("CLS");
		foodMenu();
		
	}
}

void about() {
	
	
}

void order() {
	
}

void belgianWaffle() {
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(115) << "| FAMOUS BELGIAN WAFFLE |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(108) << "| A. | See Food Menu" << endl;
	cout << setw(100) << "| B. | About" << endl;
	cout << setw(100) << "| C. | Order" << endl;
	cout << setw(99) << "| D. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to view Famous Belgian Waffle" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		case 'A':
		case 'a':
		system("CLS");
		foodMenu1();
		break;
		
		case 'B':
		case 'b':
		system("CLS");
		about();
		break;
		
		case 'C':
		case 'c':
		system("CLS");
		order();
		break;
		
		case 'D':
		case 'd':
		system("CLS");
		foodStalls();
		break;
		
		default:
		system("CLS");
		belgianWaffle();
		
	}
}

void vvCafe() {
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(115) << "| V & V CAFE |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(108) << "| A. | See Food Menu" << endl;
	cout << setw(100) << "| B. | About" << endl;
	cout << setw(100) << "| C. | Order" << endl;
	cout << setw(99) << "| D. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to view V & V Cafe" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		case 'A':
		case 'a':
		system("CLS");
		foodMenu2();
		break;
		
		case 'B':
		case 'b':
		system("CLS");
		about();
		break;
		
		case 'C':
		case 'c':
		system("CLS");
		order();
		break;
		
		case 'D':
		case 'd':
		system("CLS");
		foodStalls();
		break;
		
		default:
		system("CLS");
		vvCafe();
		
	}
}

void sisigOk() {
		cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(115) << "| THE ORIGINAL: SISIG-OK |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(108) << "| A. | See Food Menu" << endl;
	cout << setw(100) << "| B. | About" << endl;
	cout << setw(100) << "| C. | Order" << endl;
	cout << setw(99) << "| D. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to view The Original: Sisig-Ok" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		case 'A':
		case 'a':
		system("CLS");
		foodMenu3();
		break;
		
		case 'B':
		case 'b':
		system("CLS");
		about();
		break;
		
		case 'C':
		case 'c':
		system("CLS");
		order();
		break;
		
		case 'D':
		case 'd':
		system("CLS");
		foodStalls();
		break;
		
		default:
		system("CLS");
		sisigOk();
		
	}
}

void kmGrubs() {
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(115) << "| KM GRUBS |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(108) << "| A. | See Food Menu" << endl;
	cout << setw(100) << "| B. | About" << endl;
	cout << setw(100) << "| C. | Order" << endl;
	cout << setw(99) << "| D. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to view KM Grubs" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		case 'A':
		case 'a':
		system("CLS");
		foodMenu4();
		break;
		
		case 'B':
		case 'b':
		system("CLS");
		about();
		break;
		
		case 'C':
		case 'c':
		system("CLS");
		order();
		break;
		
		case 'D':
		case 'd':
		system("CLS");
		foodStalls();
		break;
		
		default:
		system("CLS");
		kmGrubs();
		
	}	
}

void netPlates() {
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(115) << "| NETPLATES |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(108) << "| A. | See Food Menu" << endl;
	cout << setw(100) << "| B. | About" << endl;
	cout << setw(100) << "| C. | Order" << endl;
	cout << setw(99) << "| D. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to view NETPLATES" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		case 'A':
		case 'a':
		system("CLS");
		foodMenu5();
		break;
		
		case 'B':
		case 'b':
		system("CLS");
		about();
		break;
		
		case 'C':
		case 'c':
		system("CLS");
		order();
		break;
		
		case 'D':
		case 'd':
		system("CLS");
		foodStalls();
		break;
		
		default:
		system("CLS");
		netPlates();
		
	}	
}

void jamaicanPattie() {
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(115) << "| DE ORIGINAL JAMAICAN PATTIE SHOP |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(108) << "| A. | See Food Menu" << endl;
	cout << setw(100) << "| B. | About" << endl;
	cout << setw(100) << "| C. | Order" << endl;
	cout << setw(99) << "| D. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to view De Original Jamaican Pattie Shop" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		case 'A':
		case 'a':
		system("CLS");
		foodMenu6();
		break;
		
		case 'B':
		case 'b':
		system("CLS");
		about();
		break;
		
		case 'C':
		case 'c':
		system("CLS");
		order();
		break;
		
		case 'D':
		case 'd':
		system("CLS");
		foodStalls();
		break;
		
		default:
		system("CLS");
		jamaicanPattie();
		
	}	
}

void idontTea() {
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(114) << "| I DON'T WANNA MISS A TEA |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(108) << "| A. | See Food Menu" << endl;
	cout << setw(100) << "| B. | About" << endl;
	cout << setw(100) << "| C. | Order" << endl;
	cout << setw(99) << "| D. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to view I Don't Wanna Miss A Tea" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		case 'A':
		case 'a':
		system("CLS");
		foodMenu7();
		break;
		
		case 'B':
		case 'b':
		system("CLS");
		about();
		break;
		
		case 'C':
		case 'c':
		system("CLS");
		order();
		break;
		
		case 'D':
		case 'd':
		system("CLS");
		foodStalls();
		break;
		
		default:
		system("CLS");
		idontTea();
		
	}	
}

//--------------------- FOOD MENU ---------------------

void foodMenu1() {
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(120) << "| FAMOUS BELGIAN WAFFLE - FOOD MENU |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(88) << "FOOD MENU ";
	cout << setw(37) << "PRICE" << endl;
	cout << "\n" << setw(90) << "1.) Plain Waffle ";
	cout << setw(38) << " 40.00 pesos" << endl;
	cout << "\n" << setw(94) << "2.) Chocolate Waffle ";
	cout << setw(35) << "55.00 pesos " << endl;
	cout << "\n" << setw(97) << "3.) Cheese Spread Waffle";
	cout << setw(31) << "55.00 pesos" << endl;
	cout << "\n" << setw(92) << "4.) Caramel Waffle ";
	cout << setw(36) << "55.00 pesos" << endl;
	cout << "\n" << setw(96) << "5.) Mango Peach Waffle "; 
	cout << setw(32) << "60.00 pesos" << endl;
	cout << "\n" << setw(95) << "6.) Tuna Garlic Ranch "; 
	cout << setw(33) << "60.00 pesos" << endl;
	cout << "\n" << setw(105) << "7.) Banana Peanut Butter Waffle ";
	cout << setw(23) << "65.00 pesos" << endl;
	cout << "\n" << setw(88) << "8.) Hot Coffee ";
	cout << setw(40) << " 65.00 pesos" << endl;
	cout << "\n" << setw(87) << "9.) Hot Choco "; 
	cout << setw(41) << " 65.00 pesos" << endl;
	cout << "\n" << setw(107) << "10.) French Butter Caramel Waffle ";
	cout << setw(21) << " 65.00 pesos" << endl;
	cout << "\n" << setw(102) << "11.) Banana Chocolate Waffle ";
	cout << setw(26) << " 65.00 pesos" << endl;
	cout << "\n" << setw(103) << "12.) Cookies and Cream Waffle ";
	cout << setw(25) << " 70.00 pesos" << endl;
	cout << "\n" << setw(109) << "13.) Scrambled Egg w/ Cheese Spread ";
	cout << setw(19) << " 70.00 pesos" << endl;
	cout << "\n" << setw(90) << "14.) Iced Coffee ";
	cout << setw(38) << " 75.00 pesos" << endl;
	cout << "\n" << setw(89) << "15.) Iced Choco ";
	cout << setw(39) << 	" 75.00 pesos" << endl;
	cout << "\n" << setw(107) << "16.) Ham with Cream Cheese Waffle ";
	cout << setw(21) << " 80.00 pesos" << endl;
	cout << "\n" << setw(104) << "17.) Chocolate Hazelnut Waffle ";
	cout << setw(24) << " 80.00 pesos" << endl;
	cout << "\n" << setw(93) << "18.) S'mores Waffle ";
	cout << setw(35) << " 85.00 pesos" << endl;
	cout << "\n" << setw(112) << "19.) Choco Banana Peanut Butter Waffle ";
	cout << setw(16) << " 90.00 pesos" << endl;



	cout << "\n\n\n" <<  setw(106) << "| A. | Back" << endl;
	cout << "\n\n\n\n\n" << setw(128) << "You choose to view Famous Belgian Waffle's food menu" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		
		case 'A':
		case 'a':
		system("CLS");
		belgianWaffle();
		break;
		
		default:
		system("CLS");
		foodMenu1();
		
	}
}

void foodMenu2(){
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(115) << "| V & V CAFE - FOOD MENU |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(88) << "FOOD MENU ";
	cout << setw(37) << "PRICE" << endl;
	cout << setw(37) << "HOT 8oz." ;
	cout << setw(10) << "COLD 12oz." << endl;
	
	cout << "\n" << setw(90) << "1.) Americano ";
	cout << setw(38) << "65.00 pesos"; 
	cout << setw(10) << "75.00 pesos" << endl;
	
	cout << "\n" << setw(94) << "2.) Tamaraw (Barako) ";
	cout << setw(35) << "65.00 pesos "; 
	cout << setw(10) << "75.00 pesos" << endl;
	
	cout << "\n" << setw(97) << "3.) Cafe Au Lait ";
	cout << setw(31) << "65.00 pesos"; 
	cout << setw(10) << "75.00 pesos" << endl;
	
	cout << "\n" << setw(92) << "4.) Macchiato";
	cout << setw(36) << "75.00 pesos"; 
	cout << setw(10) << "90.00 pesos" << endl;
	
	cout << "\n" << setw(96) << "5.) Cafe Latte"; 
	cout << setw(32) << "80.00 pesos"; 
	cout << setw(10) << "90.00 pesos" << endl;
	
	cout << "\n" << setw(95) << "6.) Spanish Latte"; 
	cout << setw(33) << "80.00 pesos"; 
	cout << setw(10) << "95.00 pesos" << endl;
	
	cout << "\n" << setw(105) << "7.) Honey Latte";
	cout << setw(23) << "80.00 pesos"; 
	cout << setw(10) << "95.00 pesos" << endl;
	
	cout << "\n" << setw(88) << "8.) Cappuccino";
	cout << setw(40) << "85.00 pesos"; 
	cout << setw(10) << "95.00 pesos" << endl;
	
	cout << "\n" << setw(87) << "9.) Caramel Macchiato"; 
	cout << setw(41) << "85.00 pesos"; 
	cout << setw(10) << "100.00 pesos" << endl;
	
	cout << "\n" << setw(107) << "10.) Cafe Mocha";
	cout << setw(21) << "85.00 pesos"; 
	cout << setw(10) << "100.00 pesos" << endl;
	
	cout << "\n" << setw(102) << "11.) Mochaccino";
	cout << setw(26) << "85.00 pesos"; 
	cout << setw(10) << "105.00 pesos" << endl;
	
	cout << "\n" << setw(103) << "12.) Salted Caramel Latte";
	cout << setw(25) << "90.00 pesos"; 
	cout << setw(10) << "105.00 pesos" << endl;
	
	cout << "\n" << setw(109) << "13.) Vanilla Latte";
	cout << setw(19) << "90.00 pesos"; 
	cout << setw(10) << "105.00 pesos" << endl;
	
	cout << "\n" << setw(90) << "14.) Caramel Latte";
	cout << setw(38) << "90.00 pesos"; 
	cout << setw(10) << "105.00 pesos" << endl;
	
	cout << "\n" << setw(89) << "15.) Tiramisu Latte";
	cout << setw(39) << "90.00 pesos";
	cout << setw(10) << "110.00 pesos" << endl;
	
	cout << "\n" << setw(107) << "16.) Easy Breezy Latte";
	cout << setw(21) << "90.00 pesos"; 
	cout << setw(10) << "110.00 pesos" << endl;
	
	cout << "\n" << setw(104) << "17.) Affogato ";
	cout << setw(24) << "-";
	cout << setw(10) << "100.00 pesos" << endl;
	
	cout << "\n" << setw(93) << "18.) Sea Salt Latte ";
	cout << setw(35) << "-";
	cout << setw(10) << "100.00 pesos" << endl;
	
	cout << "\n" << setw(112) << "19.) Espresso Con Panna ";
	cout << setw(16) << "90.00 pesos";
	cout << setw(10) << "-" << endl;


	cout << "\n\n\n" <<  setw(106) << "| A. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to view Famous V & V Cafe's food menu'" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		
		case 'A':
		case 'a':
		system("CLS");
		vvCafe();
		break;
		
		default:
		system("CLS");
		foodMenu2();
		
	}	
}

void foodMenu3(){
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(115) << "| THE ORIGINAL: SISIG-OK - FOOD MENU |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(108) << "FOOD MENUE \t\t Price" << endl;
	cout << "\n" << setw(100) << "1.)" << endl;

	cout << "\n\n" <<  setw(99) << "| A. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to view Famous Sisig-Ok's food menu'" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		
		case 'A':
		case 'a':
		system("CLS");
		sisigOk();
		break;
		
		default:
		system("CLS");
		foodMenu3();
		
	}
}

void foodMenu4(){
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(115) << "| KM GRUBS - FOOD MENU |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(108) << "FOOD MENUE \t\t Price" << endl;
	cout << "\n" << setw(100) << "1.)" << endl;

	cout << "\n\n" <<  setw(99) << "| A. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to view Famous KM Grubs' food menu'" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		
		case 'A':
		case 'a':
		system("CLS");
		kmGrubs();
		break;
		
		default:
		system("CLS");
		foodMenu4();
		
	}	
}

void foodMenu5(){
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(115) << "| NETPLATES - FOOD MENU |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(108) << "FOOD MENUE \t\t Price" << endl;
	cout << "\n" << setw(100) << "1.)" << endl;

	cout << "\n\n" <<  setw(99) << "| A. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to view Netplates' food menu'" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		
		case 'A':
		case 'a':
		system("CLS");
		netPlates();
		break;
		
		default:
		system("CLS");
		foodMenu5();
		
	}
}

void foodMenu6(){
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(115) << "| DE ORIGINAL JAMAICAN PATTIE SHOP - FOOD MENU |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(108) << "FOOD MENUE \t\t Price" << endl;
	cout << "\n" << setw(100) << "1.)" << endl;

	cout << "\n\n" <<  setw(99) << "| A. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to view De Original Jamaican Pattie Shop's food menu'" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		
		case 'A':
		case 'a':
		system("CLS");
		jamaicanPattie();
		break;
		
		default:
		system("CLS");
		foodMenu6();
		
	}
}

void foodMenu7(){
	
	
	cout << "\n\n\n\n" << setw(138) << "------------------------------------------------------------------\n" << endl;
	cout << setw(115) << "| I DON'T WANNA MISS A TEA - FOOD MENU |" << endl;
	cout << setw(112) << "ITAM'S LOST KITCHEN:" << endl;
	cout << setw(128) << "Your Food Guide and Order System in FEU Tech Campus" << endl;
	cout << "\n" << setw(138) << "------------------------------------------------------------------\n\n\n" << endl;
	
	cout << "\n\n" << setw(108) << "FOOD MENUE \t\t Price" << endl;
	cout << "\n" << setw(100) << "1.)" << endl;

	cout << "\n\n" <<  setw(99) << "| A. | Back" << endl;
	cout << "\n\n\n\n\n\n\n" << setw(122) << "You choose to view I Don't Wanna Miss A Tea's food menu'" << endl;
	cout << setw(135) << "------------------------------------------------------------------\n" << endl;
	cout << setw(103) << "Your Answer: ";
	cin >> choice;
	
	switch (choice) {
		
		case 'A':
		case 'a':
		system("CLS");
		idontTea();
		break;
		
		default:
		system("CLS");
		foodMenu7();
		
	}
}



