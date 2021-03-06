//Jesus Rojas
//Group Project Source file

#include <iostream>
#include "fonts.h"
#include "GridCells.h"

using namespace std;

/*Comment until future use
class jrojas_test {
    private:
        string jr_name;

    public:
        void PrintName(string jr_name) 
        {
            cout << jrojas_test;
            return;
        }
};
*/

/* Jesus Rojas 
* CMPS 3350
* Midterm
* Date Written: 04/04/2022
**************************
* This function will test if an input
* is greater than zero
* If is less than zero
* a response is displayed
*/
void jrojas(int userInput)
{
    int maxNumber = 0;
    /* Test if user input
     * is greater than zero*/
    if (userInput > 0) {
        // maxNumber will be assigned userInput
        maxNumber = userInput;
        // Increment maxNumber for temp use
        maxNumber++;
    } else {
        printf("Please an enter a number greater than zero!\n");
    }
}

void jr_midterm_func(int value) {
    /*Test value if postive, negative or invalid input*/
    if (value >= 0)
        cout << "The value: " << value << " is a postive number";
    else if (value < 0)
        cout << "The value: " << value << " is a negative number";
    else
        cout << "The value input is INVALID, try again!\n";
    cout << "\n";
}

void jr_PrintMsg()
{
    cout << "jrojas -testing this out! Hello there!" << endl;
}

void jr_showCreditPage(Rect position, int defaultHeight, int color) {
  position.bot = defaultHeight;
  ggprint8b(&position, 16, color, "Jesus Rojas:");
  ggprint8b(&position, 16, color, "Game Designer | Game Programmer");
}

void jr_showRulesPage(Rect position, int defaultHeight, int color) {
  position.bot = defaultHeight;
  ggprint8b(&position, 16, color, "Rule 3:");
  ggprint8b(&position, 16, color, "You could pause game and resume.");
}

void jr_showWelcomePage(Rect position, int defaultHeight, int color) {
  position.bot = defaultHeight;
  ggprint8b(&position, 16, color, "press 'S' to start game");
}

bool GridCells::setCurrent(bool input) {
    currentPosition = input;
    return currentPosition;
}

bool GridCells::setTraveled(bool input) {
    traveled = input;
    return traveled;
}

bool GridCells::isSpace() {
    return space;
}
