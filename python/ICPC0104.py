for i in range(int(input())):
    n = input()
    number_list = []
    cur_num = ""
    for j in n:
        if j.isdigit():
            cur_num += j
        else:
            if cur_num != "":
                number_list.append(int(cur_num))
            cur_num = ""

    print(min(number_list))
