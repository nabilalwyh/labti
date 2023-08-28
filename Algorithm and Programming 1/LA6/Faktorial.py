#faktorial.py

def faktor(n):
    if n == 1:
        return 1
    else:
        return n * faktor(n-1)
