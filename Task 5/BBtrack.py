import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt


video_path = 'Videos/lebron_on_court.mp4'
cap = cv.VideoCapture(video_path)


output_path = 'output_video.avi'
fourcc = cv.VideoWriter_fourcc(*'XVID')
out = cv.VideoWriter(output_path, fourcc, 20.0, (int(cap.get(3)), int(cap.get(4))))


tracker = cv.TrackerCSRT_create()


path_points = []

ret, frame = cap.read()


bbox = cv.selectROI(frame, False)
tracker.init(frame, bbox)


while True:
    ret, frame = cap.read()
    if not ret:
        break

    
    success, bbox = tracker.update(frame)

    
    if success:
        (x, y, w, h) = [int(i) for i in bbox]
        cv.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
        out.write(frame)

        
        center = (int(x + w / 2), int(y + h / 2))
        path_points.append(center)

    
    cv.imshow('Basketball Tracking', frame)

   
    if cv.waitKey(1) & 0xFF == ord('q'):
        break


path_points = np.array(path_points)
plt.plot(path_points[:, 0], path_points[:, 1], marker='o', linestyle='-', color='b')
plt.title('Basketball Path Tracking')
plt.xlabel('X-coordinate')
plt.ylabel('Y-coordinate')


plt.show(block=True)
 

cap.release()
out.release()
cv.destroyAllWindows()

