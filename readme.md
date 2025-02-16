Create all the variables you'll need. This will include a file pointer, at least one stringstream, and a number of strings and ints
Open up the data file
Use a loop to read the file one line at a time
Use a stringstream and the getline() function to read one data element at a time
note that the delimiter is a char, not a string, so it should be in a single quote
note also that you may need temporary strings, because getline always returns strings
Use a stringstream to do any data conversion you might need
Add up the two integers
Print the text that number of times
Repeat for each line in the text file
