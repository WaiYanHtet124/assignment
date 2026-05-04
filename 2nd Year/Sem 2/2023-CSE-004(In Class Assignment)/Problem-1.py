class StudentRecordSystem:
    count=0
    def __init__(self,name,roll_no,mark):
        self.name=name
        self.roll_no=roll_no
        self.mark=mark
        StudentRecordSystem.count+=1

    def student():
        return StudentRecordSystem.count
        
    
s1=StudentRecordSystem('Alice','101',85)
s2=StudentRecordSystem('Bob','102',90)  
s3=StudentRecordSystem('John','103',96)
Total_std=StudentRecordSystem.student()
print(f"Name:{s1.name}, Roll:{s1.roll_no}, Marks:{s1.mark}")
print(f"Name:{s2.name}, Roll:{s2.roll_no}, Marks:{s2.mark}")
print(f"Name:{s3.name}, Roll:{s3.roll_no}, Marks:{s3.mark}")

print(f"Total Students: {Total_std}")