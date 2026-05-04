input_data=input("Enter input sentence:")
word=input_data.split()
longest_w=max(word,key=len)
print(longest_w)