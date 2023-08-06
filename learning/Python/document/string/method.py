print("-".join(["a", "b", "c"])) # return string "a-b-c"
print("a b c".split()) # Return array, params: ('char', maxSplit)
print("a b c".rsplit()) # Split tu cuoi, params: ('char', maxSplit) 

print("abcdef".replace("abc", "lol", 5)) # return string "loldef (5 la so lan thay, ko de gi mac dinh la thay het)

print("abca".count("a", 0, 4)) # return so lan xuat hien a (0: start, 4: end, ko de gi mac dinh la dem het)

print("abca".startswith("ab")) # return True (endsWith tuong tu)

print("abca".find("ab")) # return first index, ko thay return -1
print("abca".rfind("a")) # return first index (tim tu cuoi), ko thay return -1

print("abc bca".capitalize()) # Viet hoa dau -> Abc bca
print("abc bca".title()) # Viet hoa dau moi tu -> Abc Bca
print("Abc Bcd".istitle()) #True (neu viet hoa dau moi tu)

print("Abc Bcd".upper())
print("Abc Bcd".lower())
print("Abc Bcd".swapcase()) #Chu thuong thanh hoa va ngc lai
print("abc".islower()) #isupper() tuong tu

print("  abc  ".strip()) #trim
print("  abc  ".rstrip()) #right trim
print("  abc  ".lstrip()) #left trim

print("123".isdigit())  #True
print("123".isnumeric())  #True (0-9) cha bt khac isdigit o cho naoz
print("abc".isalpha()) #True

#insert
str = 'Hello, what are doing?'
index = str.find('doing')
final_string = str[:index] + 'you ' + str[index:]
print(final_string)

#reserve
s = "asd"
print(s[2::-1]) #dsa



print("abc".center(5)) # Can le giua do dai = 5
print("abc".rjust(5)) # Can le phai  do dai = 5
print("abc".ljust(5)) # Can le trai do dai = 5

print(" ".isspace()) #True

print(chr(97)) #convert ascii to char -> 'a'
print(ord("a")) #convert char to ascii -> 97

print(3+4j) # so phuc 3+4i