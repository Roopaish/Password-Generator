# Equivalent Python Code

import random,string

numbers = '0123456789'
smallLetter = "abcdefghijklmnopqrstuvwxyz"
capitalLetter = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
symbols = '`~!@#$%^&*()_+=-[]{};:",./?'

def generateCharacters(Choice):
  return random.choice(Choice)

def generatePassword():
  password = ""
  length = int(input("Enter the length of Password "))
  passwordType = input("Specilized Password(s) or Quick Password(any)?");

  print("--------------------------");

  if passwordType == 's' or passwordType == 'S':
    numberY,smallLetterY,capitalLetterY,symbolsY = input("Should it contain Numbers?(y/n)"),input("Small Letters? "),input("Capital Letters? "),input("Symbols? ")
  else:
    numberY,smallLetterY,capitalLetterY,symbolsY = 'y','y','y','y'
  
  print("--------------------------");

  for i in range(0,length):
    temp = ""
    if numberY == 'y' or numberY == 'Y':
      temp += generateCharacters(numbers)
    if smallLetterY == 'y' or smallLetterY == 'Y':
      temp += generateCharacters(smallLetter)
    if capitalLetterY == 'y' or capitalLetterY == 'Y':
      temp += generateCharacters(capitalLetter)
    if symbolsY == 'y' or symbolsY == 'Y':
      temp += generateCharacters(symbols)

    password += random.choice(temp)
  
  print(f"Password = {password}")

generatePassword()


# another quick way
print("-------Quick Way-------");

def quickPassword():
  # secure_random = random.SystemRandom()
  alphabet = string.ascii_letters + string.digits + string.punctuation
  # password = "".join(secure_random.choices(alphabet,k=16));
  # print(f"Quick Password = {password}")
  password = "".join(random.sample(alphabet,16))
  print(f"Quick Password = {password}")

quickPassword()