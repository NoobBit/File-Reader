//Imports
#include <iostream>
#include <fstream>
#include <vector>

//Namespace
using namespace std;

//Variables
string fileinfo;
string yn;
string yn2;
string filename;
string nfileinfo;
string c_filename;

//Edit File Function
void edit_file(){
    //Get User Text
    cout << filename << ": " << endl;
    cin >> nfileinfo;

    //Open The File
    ofstream file (filename.c_str());

    //Write To The File
    file << nfileinfo;
}

//Creates File
void create_file(){
    //Get User Text
    cout << filename << " (New File): " << endl;
    cin >> nfileinfo;

    std::ofstream new_c_file (filename.c_str());

    new_c_file << nfileinfo << std::endl;

    if (new_c_file.is_open()){
        cout << filename << ":" << endl;
        cout << nfileinfo << endl;
        new_c_file.close();
    }
    else{
        cout << "[ERROR 3]: FILE COULD NOT BE CREATED" << endl;
    }
}

//Check If File Exits
void check_file(string f_dir){
    //Open File
    ifstream ifile;
    ifile.open(f_dir.c_str());
    //If It Does Exits
    if (ifile) {
        
    }
    //If It Does Not Exits 
    else{
        //Display Warning
        cout << "[ERROR 2]: FILE COULD NOT BE FOUND" << endl;
        //Does The User want to create the file
        cout << "Would you like to create " << filename << "?(Y/N)" << endl;
        cin >> yn2;

        //If's
        if (yn2 == "Y"){
            create_file();
        }
        else if (yn2 == "y"){
            create_file();
        }
        else if (yn2 == "N"){
            
        }
        else if (yn2 == "n"){
            
        }
    }
}

//Mainloop
int main(){
    //Enter File Name
    cout << "Enter file name: " << endl;
    cin >> filename;

    std::ifstream file (filename.c_str());

    check_file(filename);

    //Check If the read file has no errors
    if (file.is_open()){
        cout << filename << ":" << endl;
    }
    else{
        cout << "[ERROR 1]: FILE COULD NOT BE READ" << endl;
        return 0;
    }
    

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (file, fileinfo)) {
        // Output the text from the file
        cout << fileinfo << endl;
    }

    // Close the file
    file.close();

    cout << "Would you like to edit " << filename <<"?(Y/N): " << endl;
    cin >> yn;

    if (yn == "Y"){
        edit_file();
    }
    else if (yn == "y"){
        edit_file();
    }
    else if (yn == "N"){
        return 0;
    }
    else if (yn == "n"){
        return 0;
    }
    
    return 0;
}