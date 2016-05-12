with open("/Users/scott.malkie/Desktop/squares_10000.txt") as f:
     content = f.readlines()

justSquares = ""

for x in content:
    lines = x.split(' , ')
    if lines[0] != "\n":
         justSquares = justSquares + lines[1] + ","

with open("/Users/scott.malkie/Desktop/justSquares.txt", "r+") as g:
    g.write(justSquares)

g.close()
