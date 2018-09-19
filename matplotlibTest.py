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

from mpl_toolkits.mplot3d import Axes3D # This import has side effects required for the kwarg projection='3d' in the call to fig.add_subplot
import matplotlib.pyplot as plt
import random


minpoint = (0,0)
maxpoint = (100,100)
points = (2000,2000)
spacing = ((maxpoint[0]-minpoint[0])/points[0],(maxpoint[1]-minpoint[1])/points[1])

##maxpointPlus = (maxpoint[0] + spacing[0], maxpoint[1] + spacing[1])
#print(maxpointPlus)


x = np.linspace(minpoint[0],maxpoint[0],points[0])
y = np.linspace(minpoint[1],maxpoint[1],points[1])
z = 
#Z = np.exp(-(X**2 + Y**2))

#print(X)
#print(Y)
#print(Z)

fig = plt.figure()
fig.patch.set_facecolor('white')
ax = fig.add_subplot(111, projection='3d')
ax.plot_surface(X,Y,Z)
ax.set_xlabel(xlabel)
ax.set_ylabel(ylabel)
ax.set_zlabel(zlabel)
ax.set_title(title)
plt.show()
plt.close()


plt.savefig('image.png')
