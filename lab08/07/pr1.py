numbers = input("Введите последовательность чисел через пробел: ").split()
for num_str in numbers:
    num = int(num_str)
    if num < 0:
        print("Найдено отрицательное число:", num)
        break
else:
    print("Все числа неотрицательные!")