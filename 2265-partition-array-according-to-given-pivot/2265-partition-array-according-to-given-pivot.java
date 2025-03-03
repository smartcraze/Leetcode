class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        List<Integer> left = new ArrayList<>();
        List<Integer> middle = new ArrayList<>();
        List<Integer> right = new ArrayList<>();

        for (int num : nums) {
            if (num < pivot) {
                left.add(num);
            } else if (num == pivot) {
                middle.add(num);
            } else {
                right.add(num);
            }
        }

        int[] result = new int[nums.length];
        int index = 0;

        for (int num : left) {
            result[index++] = num;
        }
        for (int num : middle) {
            result[index++] = num;
        }
        for (int num : right) {
            result[index++] = num;
        }

        return result;
    }
}

