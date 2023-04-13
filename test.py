def main():

    a=perfect_score([["Charles", 90], ["Tony", 80], ["a", 100],['b',100]])
    print(a)

def perfect_score(student_info):

    perfect_score_list = []
    for student in student_info:
        if student[1] == 100:
            perfect_score_list.append(student)
    return perfect_score_list

if __name__ == "__main__":
    main()
