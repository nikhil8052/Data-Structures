
# Structure of the Node 
class Node :
    def __init__(self,val):
        self.value=val
        self.next=None 


# LinkedList Class 
class LinkedList : 
    def __init__(self) : 
        self.head = None 
    
    # Insert the value 
    def insert(self,val ):
        if self.head== None :
            self.head=Node(val)
        else : 
            tem=self.head 
            while(tem.next):
                tem=tem.next
            tem.next=Node(val)

    # Traverse the List 
    def traverse(self ):
        tem=self.head 
        while(tem!= None ):
            print(tem.value)
            tem=tem.next



# Building 
list1=LinkedList()
list1.insert(12)
list1.insert(13)
list1.traverse()



         


        