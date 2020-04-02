# First attempt at a neural network
# TODO: Comment all lines to know what's up, add an input value generator,
# put trainer and input value generator in neural_network class?, learn to tune,
# init class with default argument of adjustment

import numpy as np

class neural_network:
    def __init__(self):
        np.random.seed(1)
        self.weights = 2 * np.random.random((2, 1)) - 1

    def train(self, inputs, outputs, num):
        for iteration in range(num):
            output = self.think(inputs)
            error = outputs - output
            adjustment = 0.000005*np.dot(inputs.T, error)
            self.weights += adjustment

    def think(self, inputs):
        return (np.dot(inputs, self.weights))

class trainer:
    def __init__(self):
        self.variable = 0

    def solve(self, input):
        output = (input[0] + input[1])*2
        return output

    def train(self, inputs):
        outputs = np.zeros([len(inputs),1])
        for input in range(len(inputs)):
            outputs[input] = self.solve(inputs[input])
        return outputs

class input_generator:
    def __init__(self):
        self.inputs = 0

    def generate(self, num_inputs, num_generated):
        self.inputs = np.zeros([num_generated, num_inputs])
        for num_gen in range(num_generated):
            for num_in in range(num_inputs):
                self.inputs[num_gen, num_in] = np.random.random()*10+2
        return self.inputs

neural_network = neural_network()
trainer = trainer()
input_generator = input_generator()
inputs = input_generator.generate(2, 80)
outputs = trainer.train(inputs)
neural_network.train(inputs, outputs, 100000)
test = np.array([[8, 2]])
print("Output: ", neural_network.think(test))
print("Error: ", trainer.train(test) - neural_network.think(test))
