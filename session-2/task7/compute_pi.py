
# Use the series approxiation to Pi 
# pi_n = 4 x ( 1 - 1/3 + 1/5 - 1/7 + 1/9 - ... )
#   to approximate Pi
#   and examine how accurate it is as 
#   you increase the number of terms, n.
#   Enter the number of terms, n,  as a command line argument.
#   ie. measure error = abs( Pi-pi_n )
#   Hint: math library function fabs(x) gives you the absolute value as a double. 
#   Print out the number of terms, the computed value pi_n and the error
 
n = int(input("Enter the number of terms: "))
term_count = 0
approximation = 0
while term_count < n:
    current_term = 1/((2*term_count) + 1)
    if term_count % 2 != 0:
        current_term *= -1
    approximation += current_term
    term_count += 1 

print(4*approximation)
    