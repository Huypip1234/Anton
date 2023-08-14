import os

f = open('file/btap/text.txt')

try:
    count=0
    for line in open('file/btap/text.txt'):
        count+=1
    if count >= 5:
        k = open('file/btap/text.txt')
        count=0
        for line in k:
            if count >= 5: break
            print(line)
            count+=1
    else:
        k = open('file/btap/text.txt')
        for line in k:
            print(line)
finally:
    f.close()
    k.close()