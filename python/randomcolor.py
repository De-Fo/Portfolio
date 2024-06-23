import random
import matplotlib.pyplot as mpl

randcolor = ["#"+''.join([random.choice('ABCDEF0123456789') for i in range(6)])]

mpl.scatter(random.randint(0, 0), random.randint(0,0), c=randcolor)
print(randcolor)
mpl.show()