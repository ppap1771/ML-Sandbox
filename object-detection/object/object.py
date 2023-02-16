import cv2 as cv
import numpy as np
import sys
import os

img = cv.imread("../images/11.jpg")

print(os.path.exists('../images/11.jpg'))
# print(img)

x = np.shape(img)
print(x)

