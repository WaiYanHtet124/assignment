import pickle

def write_data(filename,data):
    try:
        with open(filename,'wb') as file:
            pickle.dump(data,file)
    except IOError:
        print("Error writing to file.")

def read_data(filename):
    try:
        with open(filename,'rb') as file:
            return pickle.load(file)
    except IOError:
        print(f"Error reading the file {filename}.")
    except FileNotFoundError:
        print(f"File name with {filename} not found.")

Data=[]
file_name='Vehicle_info.pkle'
while(True):
    print("Enter 'insert' to store records to file, 'search' to search vehicle info, or 'exit' to stop.")
    command=input("Enter command: ")
    if(command=='insert'):
       model=input('Enter vehicle model:')
       ID=input('Enter vehicle ID:')
       rent_day=int(input('Enter rental days: '))
       rate=int(input('Enter daily rate:'))
       Data.append({
           'Model':model,
           'ID':ID,
           'Rental_day':rent_day,
           'rate':rate,
           'cost':(rent_day*rate)+(rent_day*rate*0.07)
       })
       write_data(file_name,Data)
       print("Record saved.")
    elif(command=='search'):
        search=input('Enter Vehicle ID or Model to search:')
        found=[]
        for info in Data:
            if search.lower()==info['Model'].lower() or search==info['ID'].lower():
                found.append(info)
        if found:
            for info in found:
                print(f"Model:{info['Model']}")
                print(f"ID:{info['ID']}")
                print(f"Rental Day:{info['Rental_day']}")
                print(f"Daily Rate:{info['rate']}")
                print(f"Total Cost(+7% rate):{info['cost']}")
                break
        else:
            print(f"Vehicle {search} not found.")

    elif(command=='exit'):
        print('Program end')
        break
    else: 
        print('Invalid command')

