
/**

@author Sara Arghwan, Eliza Rassam, Sewa Khalid, Ornella Sher
@version 2.0
@mainpage Morse Code
@section Intro section on how to use it:
@brief This Code will transfer any text or number into Morse Code
@detail The input of the system will run through 3 libraries that have been pre coded based on letters, numbers and special symbols.
@param To give you any text in Morse Code

*/

#include <iostream>  //this is header stream of input and output object
#include <string>    
#include <algorithm>


using namespace std; 

	int main()    //main function
	{
	int ask = 0; // making option for user to end or countion program.



		do
	{
			cout << "Enter 1 For Entering The Program. " << endl;
			cout << "Enter 2 For Exit The Program. " << endl;
			cin >> ask;
			cout << "--------------------------" << endl;

		switch (ask)
		{
		case 1:
		{
			const char letters[53] = { ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0','@',',','?',';',':','/','-',')','(','_','!','&','=','+','$' };
			const string morseLetters[53] = { " ", ".-", "- . . .", "- . - .", "- . .", ".", ". . - .", "-- .", ". . . .", ". .", ". ---", "- . -", ". - . .",  "--", "- .", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----",".--.-.","--..--","..--..","..--..","-.-.-","---...","-..-.","-....-","-.--.","-.--.-","..--.-","-.-.--",".-...","-...-",".-.-.","...-..-" };
				  string textToChange = "";
				  string newText = "";
				  string enter = "";
			cout << "Welcome To Morse Code Convertor Program." << endl;
			cout << "\nEnter Any Letters And  let Us To Convert It : " << endl;
			cin >> textToChange;


			transform(textToChange.begin(), textToChange.end(), textToChange.begin(), ::tolower); // 

			for (unsigned int i = 0; i < textToChange.size(); i++) {
				for (unsigned short j = 0; j < 53; j++) {
					if (textToChange[i] == letters[j]) {
						newText += morseLetters[j];
						newText += "   ";

					}
				}
			}

			cout << "your morse code is:" << endl << newText;
			cout << "\n--------------------------" << endl;

				break;
		}

		case 2:
		{
			cout << "You Choosed To Exit The Program See You Again." << endl;
			cout << "--------------------------" << endl;
				break;
		};

		default:
			cout << "You Typed An Invalid Number You Should Choose 1 or 2 Try Again  ." << endl;
			cout << "--------------------------" << endl;
				break;
			
			\

		} // the end of the switch
		}	 while (ask != 2);

	
	

	


			cout << "Please Enter Any key to Exit " << endl;
			cin.ignore(2);
		return 0;

}