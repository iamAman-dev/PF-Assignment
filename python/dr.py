PI = 3.14159

# 1
def program1():
    a, b, c = 4, 3, 2
    print("Program 1:", a, b, c)

# 2
def program2():
    print("Program 2: C language is a powerful programming language.")

# 3
def program3():
    a, b = 3, 5
    a, b = b, a
    print("Program 3:", a, b)

# 4
def program4():
    year = 19
    print("Program 4: Months =", year * 12)

# 5
def program5():
    x = int(input("Enter number 1: "))
    y = int(input("Enter number 2: "))
    print("Sum =", x + y)
    print("Product =", x * y)

# 6
def program6():
    age = int(input("Enter your age: "))
    print("Age in months =", age * 12)

# 7
def program7():
    roll = int(input("Roll no: "))
    pf = int(input("Marks in PF: "))
    cg = int(input("Marks in CG: "))
    ic = int(input("Marks in IC: "))
    total = pf + cg + ic
    avg = total / 3
    print("Total =", total)
    print("Average =", avg)

# 8
def program8():
    f = float(input("Enter Fahrenheit: "))
    c = (5/9) * (f - 32)
    print("Celsius =", c)

# 9
def program9():
    a, b, c, d = 1, 2, 5, 8
    print("Maximum =", max(a, b, c, d))

# 10
def program10():
    miles = 2.5
    print("Km =", miles * 1.609)

# 11
def program11():
    a, b = 5, 9
    print("Average =", (a + b) / 2)

# 12
def program12():
    r, h = 3, 5
    volume = PI * r * r * h
    print("Volume =", volume)

# 13
def program13():
    r = 3
    print("Area =", PI * r * r)

# 14
def program14():
    mm = 20
    print("Inches =", mm / 25.4)

# 15
def program15():
    a, b = 5, 8
    a, b = b, a
    print("a =", a, "b =", b)

# 16
def program16():
    a = b = c = 3
    print("Product =", a*b*c)

# 17
def program17():
    x = 15.58971
    i = int(x)
    f = x - i
    print("Int =", i, "Fraction =", f)

# 18
def program18():
    vi, t, a = 5, 2, 3
    s = vi*t + 0.5*a*t*t
    print("s =", s)

# 19
def program19():
    age = 19
    print("Your age is: ",age," Months =", age * 12, "Days =", age * 365)

# 20
def program20():
    print("C:\\Windows>")
    print("'P'\t'A'\t'K'")
    print("\"Pakistan\"")

# 21
def program21():
    print("XXXXX\nXXXX\nXXX\nXX\nX")

# 22
def program22():
    name = input("Name: ")
    age = int(input("Age: "))
    height = float(input("Height: "))
    gender = input("Gender M/F: ")
    print(name, age, height, gender)

# 23
def program23():
    r = float(input("Enter radius: "))
    print("Area =", PI*r*r, "Circum =", 2*PI*r)

# 24
def program24():
    cag = int(input("CAG: "))
    icp = int(input("ICP: "))
    pf = int(input("PF: "))
    fe = int(input("FE: "))
    ap = int(input("AP: "))
    total = cag + icp + pf + fe + ap
    print("Total =", total, "Average =", total/5)

# 25
def program25():
    import math
    a = float(input("a: "))
    b = float(input("b: "))
    c = float(input("c: "))
    s = (a + b + c) / 2
    area = math.sqrt(s*(s-a)*(s-b)*(s-c))
    print("Area =", area)

# 26
def program26():
    rs = 12000
    print("Dollars =", rs/60)

# 27
def program27():
    h = int(input("Hours: "))
    m = int(input("Minutes: "))
    s = int(input("Seconds: "))
    print("Total seconds =", h*3600 + m*60 + s)

# 28
def program28():
    a = int(input("a: "))
    b = int(input("b: "))
    c = int(input("c: "))
    print("Disc =", b*b - 4*a*c)

# 29
def program29():
    n = int(input("n: "))
    if n > 100:
        print("n is greater than 100")

# 30
def program30():
    n = int(input("Enter number: "))
    if n % 2 == 0:
        print("Even")
    else:
        print("Odd")


# MENU
def showMenu():
    print("------ MENU ------")
    print("1. Program 1")
    print("2. Program 2")
    print("3. Program 3")
    print("4. Program 4")
    print("5. Program 5")
    print("6. Program 6")
    print("7. Program 7")
    print("8. Program 8")
    print("9. Program 9")
    print("10. Program 10")
    print("11. Program 11")
    print("12. Program 12")
    print("13. Program 13")
    print("14. Program 14")
    print("15. Program 15")
    print("16. Program 16")
    print("17. Program 17")
    print("18. Program 18")
    print("19. Program 19")
    print("20. Program 20")
    print("21. Program 21")
    print("22. Program 22")
    print("23. Program 23")
    print("24. Program 24")
    print("25. Program 25")
    print("26. Program 26")
    print("27. Program 27")
    print("28. Program 28")
    print("29. Program 29")
    print("30. Program 30")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        program1()
    elif choice == 2:
        program2()
    elif choice == 3:
        program3()
    elif choice == 4:
        program4()
    elif choice == 5:
        program5()
    elif choice == 6:
        program6()
    elif choice == 7:
        program7()
    elif choice == 8:
        program8()
    elif choice == 9:
        program9()
    elif choice == 10:
        program10()
    elif choice == 11:
        program11()
    elif choice == 12:
        program12()
    elif choice == 13:
        program13()
    elif choice == 14:
        program14()
    elif choice == 15:
        program15()
    elif choice == 16:
        program16()
    elif choice == 17:
        program17()
    elif choice == 18:
        program18()
    elif choice == 19:
        program19()
    elif choice == 20:
        program20()
    elif choice == 21:
        program21()
    elif choice == 22:
        program22()
    elif choice == 23:
        program23()
    elif choice == 24:
        program24()
    elif choice == 25:
        program25()
    elif choice == 26:
        program26()
    elif choice == 27:
        program27()
    elif choice == 28:
        program28()
    elif choice == 29:
        program29()
    elif choice == 30:
        program30()
    else:
        print("Invalid choice!")

showMenu()