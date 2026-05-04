import pickle

Record=[]

def write_data(filename,data):
    try:
        with open(filename,'wb') as file:
            pickle.dump(data,file)
    except IOError:
        print("Error saving to file")

def read_data(filename):
    try:
        with open(filename,'rb') as file:
            pickle.load(file)
    except IOError:
        print(f"Error writing the file {filename}")
    except FileNotFoundError:
        print(f"File name with {filename} not found.")

file_name="Book_record.pkle"
while True:
    print("Enter 'add' to add record, 'search' to find book, or 'exit' to end")
    command=input("Enter command:")
    if command=='add':
        title=input('Enter Book Title:')
        id=input("Enter Book ID:")
        name=input("Enter Borrower Name:")
        days=int(input("Enter Number of Days Borrowed:"))
        isbn=input("Enter ISBN :")
        Record.append({
            'title':title,
            'id':id,
            'name':name,
            'days':days,
            'ISBN':isbn,
        }),
        write_data(file_name,Record)
        print("Book borrowing record saved.")
        
    elif command=='search':
        found=[]
        search=input("Enter Book Title or BookID to search: ")
        for info in Record:
            if search.lower()==info['title'].lower() or search==info['id']:
                found.append(info)
        
        if(found):
            print("---Book Record Found---")
            for book in found:
              print(f"Title:{book['title']}")
              print(f"Book ID:{book['id']}")
              print(f"Borrower:{book['name']}")
              print(f"Days Borrow:{book['days']}")
              print(f"ISBN:{book['ISBN']}")
              days=book['days']
              if days>14:
                  extra=days-14
                  print(f"Fine Charges: {extra*0.5}")
              break
        else:
            print(f"Book {search} not found.")
    elif command=='exit':
        print("Program end.")
        break
    else: print("Invalid command.")