import os

for i in ['a', 'b', 'c', 'd', 'e']:
    f = open('file/' + i + '.txt', 'a')
    f.write(i)
    f.close()
    
# or:
# for i in ['a', 'b', 'c', 'd', 'e']:
#     with open('file/' + str(i) + '.txt', 'a') as f: # Auto close
#         f.writelines(i)
