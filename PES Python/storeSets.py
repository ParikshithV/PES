store1 = ["apple", "samsung", "mi", "vivo", "oppo"]
store2 = ["samsung", "vivo", "oneplus", "apple", "nokia"]
universal = store1 + store2

print("The common phones: ")
print(set(store2).intersection(store1))

print("\nAll the phones: ")
print(universal)

print("\nPhones available in only store 2: ")
print(set(store2) - set(store1))

print("\nPhones available in only store 1: ")
print(set(store1) - set(store2))
