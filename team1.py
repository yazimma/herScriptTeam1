# Filename: hang_man.py
# Contributors: Laura and Yarely, Anita & Naelin, Lesly & Laura
# Last modified: 02/20/2015
# Description: Creates a hangman game

#Laura and Lesly focused on debugging the current code. We intended to create a function 
#that displayed the board with the guesses and the hangman 

# According to user length choice, will find word in list
def find_word(word_len):
	#TODO create words for each list
	#     random generator to select word in list
	if word_len == 3:
		#list of words with 3 letters
		words_3 = []
		enter_word(words_3, word_len)
		return words_3
	elif word_len == 4:
		#list of words with 4 letters
		words_4 = []
		enter_word(words_4, word_len)
		return words_4
	elif word_len == 5:
		#list of words with 5 letters
		words_5 = []
		enter_word(words_5, word_len)
		return words_5
	elif word_len == 6:
		#list of words with 6 letters
		words_6 = []
		enter_word(words_6, word_len)
		return words_6
	elif word_len == 7:
		#list of words with 7 letters
		words_7 = []
		enter_word(words_7, word_len)
		return words_7
	elif word_len == 8:
		#list of words with 8 letters
		words_8 = []
		enter_word(words_8, word_len)
		return words_8
	elif word_len == 9:
		#list of words with 9 letters
		words_9 = []
		enter_word(words_9, word_len)
		return words_9
	elif word_len == 10:
		#list of words with 10 letters
		words_10 = []
		enter_word(words_10, word_len)
		return words_10



# This function will ask user to enter the word that will be stored into an array according to the word_len
def enter_word(array, word_len):
	user_input = raw_input("Enter word of length" + word_len)
	array.append(user_input)

def initBoard(word_len):
	x = 0
	board = []
	for x in range (word_len):
		board = board.append('_')
	return board

def guessCharacter(targetWord):
	numOfGuesses += 0
	guess = raw_input("Enter a letter: ")
	numOfGuesses += 1 #counter for the number of guesses
	guessesSoFar = guessesSoFar.append(guess)
	index = 0 #index initialized
	charFound = False
	numOfWrongGuess = 0 #counter for the wrong guesses
	
	for char in targetWord:	
		if guess == char:
			#targetWord[index] = guess #why?
			charFound = True
			board[index] = guess 
		index += 1
	
	if charFound == False:
		numOfWrongGuess += 1
		print "Letter not found"
		
	
#function will display the board and hangman
def displayBoard(word_len):
	for i in range(word_len):
		board
	
	
# Ask user to enter desired length for word
def main():
	print "Let's play hangman. \n"
	word_len = input("Enter desired length of word (In between 3 and 10 letters.) ")
# Calls find_word function
	targetWord = find_word(word_len)
	
	board = initBoard(word_len)
	guessCharacter(targetWord)

main()
	
	
	


