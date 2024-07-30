#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  fstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";
  
  // Read from the file
  string myText;
  getline(MyFile, myText);
  cout << myText;

  // Close the file
  MyFile.close();
} 