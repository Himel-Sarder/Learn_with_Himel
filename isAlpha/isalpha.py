'''The `isalpha()` method is a Python string method that checks if all the characters in a given string are 
alphabetic characters (letters) or not. It returns `True` if all characters are letters, and `False` otherwise.

//Here's an example:
'''
string1 = "Hello"
string2 = "123"

print(string1.isalpha())  # Output: True, as all characters are letters
print(string2.isalpha())  # Output: False, as there are non-letter characters

'''
In the context of the pangram-checking code, `ch.isalpha()` is used to check if each character in the string is a letter before adding it to the set of unique letters. 
This ensures that non-alphabetic characters are not considered when checking for a pangram.
'''
