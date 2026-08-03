import numpy as np
import matplotlib.pyplot as plt

rings = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
ages = np.array([5, 10, 15, 20, 25, 30, 35, 40, 45, 50])
w = 0.0
b = 0.0
learning_rate = 0.01
num_iterations = 1000
n = len(rings)
cost_list = []
fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(12, 5))
ax1.scatter(rings, ages, color='red', label='Data')
for i in range(num_iterations):
    y_pred = w*rings + b
    error = y_pred - ages
    dw = (1/n) * np.dot(error, rings)
    db = (1/n) * np.sum(error)
    w -= learning_rate * dw
    b -= learning_rate * db
    cost_list.append(np.mean(error**2))
    print(
        f"Iteration {i+1}: w = {w:.4f}, b = {b:.4f}, cost = {np.mean(error**2):.4f}")
    if (i+1) % 100 == 0:

        ax1.plot(rings, y_pred, label='Prediction')
        ax1.set_xlabel('Rings')
        ax1.set_ylabel('Ages')
        ax1.set_title(f'Iteration {i+1}')
        ax1.legend()
        ax2.plot(cost_list)
        ax2.set_xlabel('Iteration')
        ax2.set_ylabel('Cost')
        ax2.set_title('Cost over Iterations')


plt.show()
