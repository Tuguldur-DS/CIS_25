# Week 5 

Module 6 uses strings, classes, and file I/O.
The program creates an Item class with two properties:
- name (string)
- quantity (int)
The class includes:
- saveToFile(): writes the item data to item
- loadFromFile(): reads the file from item

In main(), an Item object is created, assigned values, saved to the file, and then read back and displayed.

Module 11 focuses on object lifecycle in C++.
I created a Product class that shows when an object is created and destroyed by printing messages from the constructor and destructor.
The class includes:
- private attributes: id, name, and price
- a constructor that assigns values and prints a confirmation message
- a destructor that prints a message when the object goes out of scope
- a printDetails() function that displays the product's information

In main(), I created a Product object with values I chose and called printDetails() to verify everything works.
