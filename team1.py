#file name: hang_man.py
#Author: Laura and Yarely
#Date: 02/05/2015
#Description: Creates a hangman game

# According to user length choice, will find word in list
def find_word(word_len):
	#TODO create words for each list
	#     random generator to select word in list
	if word_len == 3:
		#list of words with 3 letters
		words_3 = []
	elif word_len == 4:
		#list of words with 4 letters
		words_4 = []
	elif word_len == 5:
		#list of words with 5 letters
		words_5 = []
	elif word_len == 6:
		#list of words with 6 letters
		words_6 = []
	elif word_len == 7:
		#list of words with 7 letters
		words_7 = []
	elif word_len == 8:
		#list of words with 8 letters
		words_8 = []
	elif word_len == 9:
		#list of words with 9 letters
		words_9 = []
	elif word_len == 10:
		#list of words with 10 letters
		words_10 = []


print "Let's play hangman. \n"

# Ask user to enter desired length for word
word_len = input("Enter desired length of word (In between 3 and 10 letters.) ")

# Calls find_word function
find_word(word_len)


