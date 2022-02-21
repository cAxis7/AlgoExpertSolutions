using namespace std;

bool isMonotonic(vector<int> array) {
  // Write your code here.
	if(array.empty()) return true;
	int direction = 0;
	for(int i = 1; i < array.size(); i++){
		if(array[i - 1] < array[i]){
			if(direction == 0) direction = 1;
			else if (direction == -1) return false;
		}
		else if (array[i - 1] > array[i]){
			if(direction == 0) direction = -1;
			else if (direction == 1) return false;
		}
	}
  return true;
}
