# Can giua: 
print('{:^10}'.format('aaaa')) #' aaaa '
# Can trai: 
print('{:<10}'.format('aaaa')) #'aaaa '
# Can phai: 
print('{:>10}'.format('aaaa')) #' aaaa'
# căn phai, thay khoang trang = -: 
print('{:->10}'.format('aaaa')) #'------aaaa'
# can trai, thay khoang trang = *: 
print('{:*<10}'.format('aaaa')) #'aaa******'
# căn giua, thay khoang trang = +: 
print('{:+^10}'.format('aaaa')) #'+++aaaa+++'