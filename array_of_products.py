# O(n) memory and complexity
def arrayOfProducts(array):
    # Write your code here.
	products = [1 for _ in range(len(array))]
	
	leftRunProduct = 1
	for i in range(len(array)):
		products[i] = leftRunProduct
		leftRunProduct *= array[i]
	
	rightRunProduct = 1
	for i in reversed(range(len(array))):
		products[i] *= rightRunProduct
		rightRunProduct *= array[i]
    
	
	return products
