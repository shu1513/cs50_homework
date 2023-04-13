def main():

    a=perfect_score([["Charles", 90], ["Tony", 80], ["a", 100],['a',100]])
    print(a)

def perfect_score(student_info):
    """Create a list that contains the name and grade of the first student to make a perfect score on the exam.

        :param student_info: list - of [<student name>, <score>] lists.
        :return: list - first `[<student name>, 100]` or `[]` if no student score of 100 is found.
        """

    perfect_score_list = []
    for student in student_info:
        if student[1] == 100:
            perfect_score_list.append(student)
    return perfect_score_list



if __name__ == "__main__":
    main()
