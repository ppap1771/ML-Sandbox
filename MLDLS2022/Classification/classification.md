### Classification
---
##### So, What is classification in machine learning? 
Classification is a supervised learning strategy in which the machine is given a specific label to categorise fresh data. For label verification, the machine requires thorough testing and training.

When there are precisely two target classes, the term ***"classification"*** is frequently used. This is known as binary classification. Multinomial classification is used when more than two classes may be predicted, which is common in pattern recognition issues. However, multinomial classification is also utilised for categorical answer data, when one wishes to forecast which category contains the most instances with the highest probability among numerous categories.

One of the most critical jobs in data mining is classification. It refers to the process of assigning instances pre-defined class names depending on their characteristics. Classification and clustering have certain similarities, but they are not the same. The primary distinction between classification and clustering is that classification comprises the classification of things based on their membership in pre-defined groupings. Let's use an example to further grasp this concept: imagine you're using a self-organizing map neural network method for image identification and there are ten distinct types of objects. The categorization challenge is completed if you label each image with one of these ten classes.

Classification seems natural as humans we can do it easliy but when it comes to machine or computer we need to be very precise in telling the machine what and how to do. so that is exactly what we will see in the area of classification allgorithms.

In this set of codes we would try to look at a few classification algorithms.

### 1.Logistic Regression (funny that it is not regression but classiification).
This statistical model (also known as a logit model) is frequently used for categorization and predictive analytics. Based on a collection of independent variables, logistic regression calculates the likelihood of an event occurring, such as voting or not voting. Because the outcome is a probability, the dependent variable has a range of 0 to 1. A logit transformation is performed to the odds in logistic regression, which is the likelihood of success divided by the probability of failure. This logistic function is also known as the log odds or the natural logarithm of odds. We define a threshold aroud which we define our success or failure.

we take,
 $$Output ∈ {0,1} $$
Hypothesis Function:
 $$Z = a*X + b $$ $$h_{\theta}(x) = sigmoid(Z)$$
 And, $$sigmoid(t)= 1/(1+e^{-t})$$
The output from the hypothesis is the estimated probability. This is used to infer how confident can predicted value be actual value when given an input X.
Precisely,$$ h_{\theta}(x) = P(Y=1|x;\theta)$$ Probability that Y=1 given X parameterized by ${\theta}$.This justifies the name `‘logistic regression’`. Data is fit into linear regression model, which then be acted upon by a logistic function predicting the target categorical dependent variable.

Types:
1. Binary. 
2. Multinomial.
3. Ordinal.

##### Decision Boundary:
Here we decide the threshold foe the classification.Say, if `predicted_value ≥ 0.5`, then classify email as spam else as not spam.
Decision boundary can be linear or non-linear. Polynomial order can be increased to get complex decision boundary.

##### Cost Function
$$Cost(h_{\theta}(x),Y(actual))= -y*log(h_{\theta}(x))-(1-y)*log(1-h_{\theta}(x)) $$ 
Let, $$Cost(h_{\theta}(x),Y(actual))= J({\theta,y})$$
We diffrenciate the cost function w.r.t. all the parameters. 

##### USES:
1. `Fraud detection`: Logistic regression methods can assist teams in identifying data abnormalities that suggest fraud. Certain habits or qualities may be more closely associated with fraudulent activity, which can assist banks and other financial organisations safeguard their customers. When undertaking data analysis around company performance, SaaS-based firms have begun to employ these procedures to eradicate false user identities from their datasets.
2. `Disease Prediction`: This analytics method may be used in medicine to anticipate the risk of sickness or illness in a particular population. Healthcare institutions can set up preventative treatment for those who are predisposed to certain illnesses.
3. `Churn prediction`: Specific actions in various departments of an organisation may be predictive of churn. Human resources and management teams, for example, may want to know whether there are any high performers inside the firm who are on the verge of leaving; this sort of data may spark talks about issue areas within the company, such as culture or remuneration. Alternatively, the sales organisation may seek to understand which of its clients are considering leaving. This may encourage teams to develop a retention plan in order to minimise revenue loss.


### 2. KNN
K-Nearest Neighbor is a basic Machine Learning method that uses the Supervised Learning approach.
The K-NN method assumes similarity between the new case/data and existing cases and places the new case in the category that is most similar to the existing categories.
The K-NN method maintains all existing data and uses similarity to classify new data points. This implies that when fresh data is generated, it may be quickly categorised into a well-suited category using the K- NN method.
The K-NN algorithm may be used for both regression and classification, however it is more commonly utilised for classification tasks.
K-NN is a non-parametric method, which means it makes no assumptions about the underlying data.
It is also known as a lazy learner algorithm because it does not instantly learn from the training set; instead, it stores the dataset and then takes an action on it during classification.
During the training phase, the KNN algorithm simply saves the dataset and then classifies it into a category that is quite similar to the incoming data.
Assume we have a picture of a critter that resembles a cat or a dog and we want to know whether it is a cat or a dog. So, because it operates on a similarity measure, we may utilise the KNN method for this identification. Our KNN model will look for similarities between the new data set and the photographs of cats and dogs and place it in either category depending on the most comparable attributes.

`The following algorithm can be used to describe how K-NN works:`

Step 1: Determine the number K of neighbours.
Step 2: Determine the Euclidean distance between K neighbours.
Step 3: Determine the K closest neighbours based on the estimated Euclidean distance.
Step 4: Count the number of data points in each category among these k neighbours.
Step 5: Assign the new data points to the category with the greatest number of neighbours.
Our model is complete.

### 3.Decision tree 
Decision Tree is a Supervised learning approach that may be used to solve classification and regression issues, however it is most commonly used to solve classification problems. It is a tree-structured classifier, with internal nodes representing dataset attributes, branches representing decision rules, and each leaf node representing the conclusion.
There are two nodes in a Decision tree: the Decision Node and the Leaf Node. Choice nodes are used to make any decision and have several branches, whereas Leaf nodes are the result of such decisions and do not have any more branches.
The judgments or tests are based on the attributes of the provided dataset.
It is a graphical depiction of all possible solutions to a problem/decision given certain parameters.
It is named a decision tree because, like a tree, it begins with the root node and then branches out to form a tree-like structure.
The CART algorithm, which stands for Classification and Regression Tree algorithm, is used to form a tree.
A decision tree simply asks a question and divides the tree into subtrees based on the answer (Yes/No).

ALGORITHM:
Step 1: Begin the tree with the root node, which includes the whole dataset, explains S.
Step 2: Using the Attribute Selection Measure, find the best attribute in the dataset (ASM).
Step 3: Subdivide the S into subsets containing potential values for the best qualities.
Step 4: Create the decision tree node with the best attribute.
Step 5: Create new decision trees recursively using the subsets of the dataset obtained in step 3. Continue this procedure until you reach a point where you can no longer categorise the nodes and refer to the last node as a leaf node.

### 4.Random Forest
Random Forest is a well-known machine learning algorithm from the supervised learning approach. It may be applied to both classification and regression issues in machine learning. It is built on the notion of ensemble learning, which is a method that involves integrating several classifiers to solve a complicated issue and enhance the model's performance.

"Random Forest is a classifier that comprises a number of decision trees on various subsets of the provided dataset and takes the average to enhance the predicted accuracy of that dataset," as the name implies. Instead than depending on a single decision tree, the random forest collects the forecasts from each tree and predicts the final output based on the majority vote of predictions.

The steps and graphic below illustrate the working process:
Step 1: Choose K data points at random from the training set.
Step 2: Create decision trees for the specified data points (Subsets).
Step 3: Determine the number N for the number of decision trees you wish to construct.
Step 4: Reverse steps 1 and 2.
Step 5: Find the forecasts of each decision tree for new data points and allocate the new data points to the category with the most votes.