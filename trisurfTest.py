import os
import matplotlib as mpl
if os.environ.get('DISPLAY','') == '':
    print('no display found. Using non-interactive Agg backend')
    mpl.use('Agg')
import matplotlib.pyplot as plt

from mpl_toolkits.mplot3d import axes3d
import matplotlib.pyplot as plt
import matplotlib.cm as cm
from matplotlib.ticker import LinearLocator, FormatStrFormatter
import numpy as np

import datetime
import numpy as np
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
import re


from mpl_toolkits.mplot3d import Axes3D # This import has side effects required for the kwarg projection='3d' in the call to fig.add_subplot
import matplotlib.pyplot as plt
import random

#!/usr/bin/python3

import sys

import matplotlib
import matplotlib.pyplot as plt
from matplotlib.ticker import MaxNLocator
from matplotlib import cm
from mpl_toolkits.mplot3d import Axes3D

import numpy as np
from numpy.random import randn
from scipy import array, newaxis


# ======
## data:

minpoint = [0,0]
maxpoint = [100,100]
points = [3,2]

xSpacing = (maxpoint[0]-minpoint[0])/(points[0]-1)
ySpacing = (maxpoint[1]-minpoint[1])/(points[1]-1)
xCoordinateList = []
yCoordinateList = []
zCoordinateList = [0,1,0,1,0,0,0,0,0]

def generateCoordinateLists():
    #Generate X coordinates
    for i in range(0,points[0]):
        xCoordinateList.append(minpoint[0] + (i * xSpacing))
    #Generate Y coordinates
    for i in range(0,points[1]):
        yCoordinateList.append(minpoint[1] + (i * ySpacing))
    #Print for debugging
    #print(xCoordinateList)
    #print(yCoordinateList)


    #Generates an array of points
    


generateCoordinateLists()

mesh_x = np.zeros(points[0])
for i in range(0, points[0]):
    mesh_x[i] = minpoint[0] + xSpacing*i
mesh_y = np.zeros(points[1])
for i in range(0, points[1]):
    mesh_y[i] = minpoint[1] + ySpacing*i
col_i = 0
mesh_values = [1,1,1,1,1,1]
mesh_z = np.zeros(shape=(points[0],points[1]))
for col in mesh_values:
    row_i = 0
    for val in col:
        mesh_z[col_i][row_i] = val
        row_i = row_i + 1
    col_i = col_i + 1



print(mesh_x)
print(mesh_y)
print(mesh_z)


# ======
## plot:

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

#surf = ax.plot_surface(X, Y, Z, rstride=1, cstride=1, cmap='viridis', edgecolor='none')
contour = plt.contourf(mesh_x, mesh_y[::-1], mesh_z, alpha=.75, antialiased=True)
#, cmap=plt.cm.get_cmap(self._settings.get(["matplotlib_heatmap_theme"]))



ax.xaxis.set_major_locator(MaxNLocator(5))
ax.yaxis.set_major_locator(MaxNLocator(6))
ax.zaxis.set_major_locator(MaxNLocator(5))

fig.tight_layout()

plt.savefig('image.png')
