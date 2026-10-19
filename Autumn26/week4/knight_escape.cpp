#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(std::time(NULL));

    // Generate random coordinates from 2 to 7
    int row = std::rand() % 6 + 2;
    int col = std::rand() % 6 + 2;
    int new_row, new_col, dx, dy;
    int moves = 0;

    // Checks if not yeat reached corner
    while (!(row==1||row==8)||!(col==1||col==8)) {
        // Gather user input
        std::cout<<"Current position: ("<<row<<","<<col<<")"<<std::endl<<"New row: ";
        std::cin>>new_row;
        std::cout<<"New column: ";
        std::cin>>new_col;

        // Throw error if move is out of bounds
        if (new_row>8||new_row<1||new_col>8||new_col<1) {
            std::cout<<"Proposed move is out of bounds!"<<std::endl;
            continue;
        }

        // Calculate proposed movement and throw error if illegal for Knight
        dx=abs(row-new_row);
        dy=abs(col-new_col);
        if ((dx!=2||dy!=1)&&(dx!=1||dy!=2)) {
            std::cout<<"Move is illegal for the knight!"<<std::endl;
            continue;
        }

        // Once all errors are accounted for, move the knight and increment the counter.
        moves++;
        row=new_row;
        col=new_col;
    }

    // Print success message and number of moves
    std::cout<<"Well done! You escaped in: "<<moves<<" moves.";
    return 0;
}