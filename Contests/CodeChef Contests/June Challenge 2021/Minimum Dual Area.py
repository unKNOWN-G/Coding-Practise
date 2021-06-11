# Problem: DAREA Contest: JUNE21C
def ass(arr):
    min_val = arr[0][1]
    max_val = arr[0][1]
    area_arr = [0]
    for i in range(1, len(arr)):
        if (arr[i][1] < min_val):
            min_val = arr[i][1]
        elif (arr[i][1] > max_val):
            max_val = arr[i][1]

        area_arr.append(abs(arr[i][0] - arr[0][0]) * abs(max_val - min_val))
    if (len(area_arr) == 0):
        return [0]
    else:
        return area_arr


test_cases = int(input())
for i in range(test_cases):
    n = int(input())
    a = []
    b = []
    for i in range(n):
        f, g = map(int, input().split())
        a.append([f, g])
        b.append([g, f])

    a.sort()
    b.sort()
    area1 = ass(a)
    area2 = ass(a[::-1])[::-1]
    area3 = ass(b)
    area4 = ass(b[::-1])[::-1]

    # print(area1,area2,area3,area4)

    area1 = area1[:-1]
    area2 = area2[1:]
    area3 = area3[:-1]
    area4 = area4[1:]

    # print(area1,area2,area3,area4)

    if (len(area1) == 0):
        print(0)
    else:
        min_val = area1[0] + area2[0]
        for i in range(len(area1)):
            if (area1[i] + area2[i] < min_val):
                min_val = area1[i] + area2[i]

            if (area3[i] + area4[i] < min_val):
                min_val = area3[i] + area4[i]

            # if(area1[i+1]+area2[i]<min_val):
            #     min_val = area1[i+1]+area2[i]

            # if(area3[i+1]+area4[i]<min_val):
            #     min_val = area3[i+1]+area4[i]

        print(min_val)


