
def merge_sort(a):

    if len(a) <= 1:
        return a
    
    else:
        left_a = a[:len(a)//2]
        right_a = a[len(a)//2:]

        left_a = merge_sort(left_a)
        right_a = merge_sort(right_a)
        
        return list_bonding(left_a, right_a)



def list_bonding(a, b):
    sorted_list = []
    i, j = 0, 0
    
    for k in range(0, len(a)+len(b) ):
        
        if i == len(a):
            sorted_list.append(b[j])
            j += 1
        
        elif j == len(b):
            sorted_list.append(a[i])
            i += 1

        elif a[i] < b[j]:
            sorted_list.append(a[i])
            i += 1
            
        else:
            sorted_list.append(b[j])
            j += 1

    return sorted_list



def main():
    A = [7, 0, 1, 9, 4, 5, 3, 6, 2, 8]
    print(merge_sort(A))
    return 0

main()
