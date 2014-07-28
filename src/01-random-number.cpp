/*
	Simple D6 Dice Roller program in an infinite loop.
*/

#include <iostream>
// Required the cstdlib library to access rand() as it is not available in the C++ libraries
#include <cstdlib>

//int 

int main()
{	
	for( ; ; )
	{
		std::cout << "Press CTRL+c to quit the loop.\n" << std::endl;
		
		int a = 1 + (rand() % 6);
		
		switch( a )
		{
			case 1: /* Rolled 1 */
				std::cout << "Rolled a one!" << std::endl;
				break;
			case 2: /* Rolled 2 */
				std::cout << "Rolled a two!" << std::endl;
				break;
			case 3: /* Rolled 3 */
				std::cout << "Rolled a three!" << std::endl;
				break;
			case 4: /* Rolled 4 */ 
				std::cout << "Rolled a four!" << std::endl;
				break;
			case 5: /* Rolled 5 */
				std::cout << "Rolled a five!" << std::endl;
				break;
			case 6: /* Rolled a 6 */
				std::cout << "Rolled a six!" << std::endl;
				break;
			default : /* For all weird occurrences */
				std::cout << "Invalid number" << std::endl;
				break;
		}
		
		std::cout << "\nPress Enter to continue." << std::endl;
		std::cin.get();
	}
	
	return 0;
}