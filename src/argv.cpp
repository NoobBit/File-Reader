//Imports
#include <iostream>
#include <fstream>
#include <vector>

//Namespace
using namespace std;

//Mainloop
int main(int argc, char* argv[]){
    printf("Program name %s\n", argv[0]);
    if (argv[2] == "-e"){
        cout << "YES!\n" << endl;
    }
    if( argc == 2 ) {
        printf("The argument supplied is %s\n", argv[1]);
    }
    else if( argc > 2 ) {
        printf("Too many arguments supplied.\n");
    }
    else {
        printf("One argument expected.\n");
    }
    return 0;
    //Variables
    string fileinfo;
    string yn;
    string filename;
    string nfileinfo;

    //Enter File Name
    cout << "Enter file name: " << endl;
    cin >> filename;
    std::ifstream file (filename.c_str());

    //Check If the read file has no errors
    if (file.is_open()){
        cout <<filename << ":" << endl;
    }
    else{
        cout << "[ERROR]: FILE COULD NOT BE FOUND OR NOT READ" << endl;
    }
    

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (file, fileinfo)) {
        // Output the text from the file
        cout << fileinfo << endl;
    }

    // Close the file
    file.close();

    cout << "Would you like to edit the file?(Y/N): " << endl;
    cin >> yn;

    if (yn == "Y"){
        cout << filename << ": " << endl;
        cin >> nfileinfo;

        ofstream file (filename.c_str());

        file << nfileinfo;
    }
    else if (yn == "y")
    {
        /* code */
    }
    else if (yn == "N")
    {
        /* code */
    }
    else if (yn == "n")
    {
        /* code */
    }
    
    
    

    return 0;
}