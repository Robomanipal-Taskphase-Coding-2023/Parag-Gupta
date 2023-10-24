def morsecode(str):
  code = {
      'A': '.-', 'B': '-...', 'C': '-.-.', 'D': '-..', 'E': '.', 'F': '..-.', 'G': '--.', 'H': '....', 'I': '..', 'J': '.---',
      'K': '-.-', 'L': '.-..', 'M': '--', 'N': '-.', 'O': '---', 'P': '.--.', 'Q': '--.-', 'R': '.-.', 'S': '...', 'T': '-',
      'U': '..-', 'V': '...-', 'W': '.--', 'X': '-..-', 'Y': '-.--', 'Z': '--..',
      '0': '-----', '1': '.----', '2': '..---', '3': '...--', '4': '....-', '5': '.....',
      '6': '-....', '7': '--...', '8': '---..', '9': '----.',
      '.': '.-.-.-', ',': '--..--', ':': '---...', "'": '.----.', '!': '-.-.--', '?': '..--..'
  }
  codedstr = ''
  for i in str:
      if i.upper() in code:
          codedstr += code [i.upper()] + ' '
      else:
          codedstr += i + ' '
  return codedstr
str_=input("Enter the sentence to be coded: ")
morse_code = morsecode(str_)
print(f"The Morse code for '{str_}' is:")
print(morse_code)