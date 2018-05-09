# project-2-dyorgens
//Recursion and Hashing
//Draven Yorgensen
//CoSc 2030 - Dr. Borowczak
//May 8th, 2018

Regarding much of the project, I have failed to implement proper unit testing becuase all of the data can be written in by hand. 
For example, the quicksort function takes inputted values from the user and creates a vector until the user types '-9999' to stop the program.
These inputted values are shown in the order they were given, as well as printed again after the use of the quicksort function.
Furthermore, the binary search function uses these same values from the inputted quicksort vector, however it implements the sorted version, locating a requested value and printing its indexed location... starting with 0 of course...
For mergesort you are again able to plug in your own values, which will be displayed as well as the sorted version of the vector
Although not listed, I found it simple and fun to reimplement the binary search for the mergesorted vector, this again allows you to find the index of an integer printed in the sorted version
Finally, I used a given hash function from the Hash Maps Lab (10) in order to convert a string given by the user to a hash (I adapted the same function to work with inputted integers); when prompted, the user must decide whether to use strings or integers by typing either 'int' or 'str' for integers and strings respectively, after this they are able to enter the data type that they chose. This is able to be done until the user types 'stop' (or '-9999' for interger conversion)...I did this this way to basically do an internal unit test as you can repeatedly check that the same input gives you the same hash in return. 
  Unfortunatley, the program I used and adapted worked only when inputted strings were larger than or equal to 4 letters long (i.e. 'yes','no','I', did not work) but, I was able to make it fixed such that the input amount could not exceed 80 characters as told by the instructions. 
  
  As for the Bloom Filter, I am very hazy on the idea itself and left it out, focusing most of my time on the correct implementation of each of the other functions. 
