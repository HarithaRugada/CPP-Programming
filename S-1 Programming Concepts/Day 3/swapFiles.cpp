#include <iostream>
#include <fstream>

using namespace std;

void writeIntoFile(string fileName, string contentOfFile)
{
    fstream fileStream;
    fileStream.open(fileName, ios::out);
    if(fileStream.is_open())
    {
        fileStream << contentOfFile;
        fileStream.close();
    }
}

string readFromFile(string fileName)
{
    fstream fileStream;
    string line;
    string contentOfFile;
    fileStream.open(fileName);
    if(fileStream.is_open())
    {
        while (getline(fileStream, line))
        {
            contentOfFile.append(line);
            contentOfFile.append("\n");
            cout << "before swapping content of " << fileName << endl;
            cout << line << endl;
        }
        cout << endl;
        fileStream.close();
    }
    else 
        cout << "Failed in opening the file";
    fileStream.open(fileName, ios::out);
    fileStream.close();
    return contentOfFile;
}

int main()
{
    string contentOfFileOne;
    string contentOfFileTwo;
    contentOfFileOne = readFromFile("swapFile1.txt");
    contentOfFileTwo = readFromFile("swapFile2.txt");
    writeIntoFile("swapFile2.txt", contentOfFileOne);
    writeIntoFile("swapFile1.txt", contentOfFileTwo);
    return 0;
}