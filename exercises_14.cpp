/*(hard drive storage capacity) If you buy a 40 GB hard drive, then
chances are that the actual storage on the hard drive is not 40 GB.
This is due to the fact that, typically, a manufacturer uses 1,000 bytes
as the value of 1K byte, 1,000 K bytes as the value of 1 MB, 1,000 MB as the
 value of 1 GB. Therefore, a 40 GB hard drive contains 40,000,000,000 bytes.
 However, in computer memory, as given in Table 1-1(Chapter 1),
 1 KB is equal to 1,024 bytes, and so on. So the actual storage on a 40 GB
 hard drive is aproximately 37.25 GB. (You might like to read the fine print
 next time you buy a hard drive.) Write a program that prompts the user to enter
 the size of the hard drive specified on by the manufacturer, on the hard drive
 box, and outputs the actual storage capacity of the hard drve*/

 #include <iostream>
 #include <cmath>

 using namespace std;

 int main()
 {
    double manufacturers_capacity;
    double actual_capacity;

    cout << "Enter the manufacturers capacity in bytes\n" << endl;
    cin >> manufacturers_capacity;
    return 0;
 }
