import pandas as pd
import numpy as np
import matplotlib.pyplot as plt


df = pd.read_csv("C:/Users/OSSN/OneDrive/Desktop/Robomanipal/linear_regression_dataset (3).csv")

df['APRDRG'] = (df['APRDRG'] - df['APRDRG'].mean()) / df['APRDRG'].std()
df['TOTCHG'] = (df['TOTCHG'] - df['TOTCHG'].mean()) / df['TOTCHG'].std()
def gradient_descent(m_temp, b_temp, points, l_rate):
    x = points['APRDRG'].values
    y = points['TOTCHG'].values
    n = len(points)

    m_gradient = (-2 / n) * np.dot(x, y - (m_temp * x + b_temp))
    b_gradient = (-2 / n) * np.dot(y - (m_temp * x + b_temp), np.ones(n))

    m_temp = m_temp - l_rate * m_gradient
    b_temp = b_temp - l_rate * b_gradient

    m = m_temp - l_rate * m_gradient
    b = b_temp - l_rate * b_gradient

    return m, b

m = 0
b = 0
learning_rate = 0.1
iterations = 1000

for i in range(iterations):
    m, b = gradient_descent(m, b, df, learning_rate)

print("\nFinal Results:")
print("Slope (m):", m)
print("Intercept (b):", b)

plt.scatter(df.APRDRG, df.TOTCHG)
plt.plot(df['APRDRG'], m * df['APRDRG'] + b, color="red")
plt.xlabel('APRDRG')
plt.ylabel('TOTCHG')
plt.title('Linear Regression')
plt.show()



