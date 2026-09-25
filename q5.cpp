// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>

int main() {
    int x =0, y=0;
    bool north = true, south= false, west= false, east= false;
    int T_x = 2, T_y = 3;
    int P_x = -3, P_y = 2;
    char choice;
    while (true){
    std::cout << x << y << "\n";
    std::cout << "F Move one step forward in the direction the rover is currently  \nL Turn 90 degrees to the left, without moving\nR Turn 90 degrees to the right, without moving\nP Print the rover current position and direction\nQ End the mission and quit the program\n>";
    std::cin >> choice;
    if (choice == 'Q'){
        std::cout << "Exiting";
        break;
    }
    if (choice == 'P'){
        std::cout << x << "," << y;
    }
    if (choice == 'L' && north){
        std::cout << "Facing west\n";
        west = true;
        south = false;
        east = false;
        north = false;
    }else if (choice == 'L' && west){
        std::cout << "Facing south\n";
        west = false;
        south = true;
        east = false;
        north = false;
    }else if (choice == 'L' && south){
        std::cout << "Facing east\n";
        west = false;
        south = false;
        east = true;
        north = false;
    }else if (choice == 'L' && east){
        std::cout << "Facing north\n";
        west = false;
        south = false;
        east = false;
        north = true;
    }else if (choice == 'R' && north){
        std::cout << "Facing east\n";
        west = false;
        south = false;
        east = true;
        north = false;
    }else if (choice == 'R' && east){
        std::cout << "Facing south\n";
        west = false;
        south = true;
        east = false;
        north = false;
    }else if (choice == 'R' && south){
        std::cout << "Facing west\n";
        west = true;
        south = false;
        east = false;
        north = false;
    }else if (choice == 'R' && west){
        std::cout << "Facing north\n";
        west = false;
        south = false;
        east = false;
        north = true;
    }if (choice == 'F' && north){
        if (y < 5){
            y++;
        }else{
            std::cout << "Boundary reached\n";
        }
    }if (choice == 'F' && west){
        if (x > -5){
            x--;
        }else{
            std::cout << "Boundary reached\n";
        }
    }if (choice == 'F' && south){
        if (y > -5){
            y--;
        }else{
            std::cout << "Boundary reached\n";
        }
    }if (choice == 'F' && east){
        if (x < 5){
            x++;
        }else{
            std::cout << "Boundary reached\n";
        }
    }
    if (x == T_x && y == T_y){
        std::cout << "Treasure found You win!";
        break;
    }if (x == P_x && y == P_y){
        std::cout << "You fell into a pit, Gamer over";
    }
    }
    return 0;
}