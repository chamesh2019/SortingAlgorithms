# Sorting Algorithm Benchmark

This repository provides benchmark results for various sorting algorithms, including Merge Sort, Insertion Sort, Bubble Sort, Selection Sort, and Quick Sort. The benchmarks evaluate and compare the performance of these algorithms on datasets of different sizes, highlighting their efficiency and scalability. This project aims to help users understand the practical implications of algorithm selection based on dataset size and computational complexity.

## Algorithms Benchmarked

The following sorting algorithms were tested for performance, using 2 batch sizes of 10,000 and 100,000 integers between 0 and 100:

- **Merge Sort**
- **Insertion Sort**
- **Bubble Sort**
- **Selection Sort**
- **Quick Sort**

---

## Benchmark Results

|      Algorithm | Batch size: 10,000 | Batch size: 100,000 |
|---------------:|-------------------:|--------------------:|
|     Merge Sort |            1.365ms |              35.7ms |
| Insertion Sort |             34.9ms |            2514.4ms |
|    Bubble Sort |            162.2ms |           24508.7ms |
| Selection Sort |            157.7ms |           24321.9ms |
|     Quick Sort |            0.942ms |               8.3ms |


---

## Benchmark Summary

The benchmark evaluates the performance of five sorting algorithms (Merge Sort, Insertion Sort, Bubble Sort, Selection Sort, and Quick Sort) using two dataset sizes: 10,000 and 100,000 elements. Below is a summary of the findings:

1. **Quick Sort**:
    - Achieved the fastest performance among all algorithms.
    - For 10,000 elements: 0.942ms.
    - For 100,000 elements: 8.3ms.
    - Its \( O(n \log n) \) complexity and efficient implementation make it highly suitable for large datasets.

2. **Merge Sort**:
    - Consistently fast with \( O(n \log n) \) complexity.
    - For 10,000 elements: 1.365ms.
    - For 100,000 elements: 35.7ms.

3. **Selection Sort**:
    - Performs poorly for larger datasets due to its \( O(n^2) \) complexity.
    - For 10,000 elements: 157.7ms.
    - For 100,000 elements: 24,321.9ms.

4. **Bubble Sort**:
    - Among the slowest algorithms tested, especially for large inputs.
    - For 10,000 elements: 162.2ms.
    - For 100,000 elements: 24,508.7ms.

5. **Insertion Sort**:
    - Similar performance trends as Bubble Sort due to \( O(n^2) \) complexity.
    - For 10,000 elements: 34.9ms.
    - For 100,000 elements: 2,514.4ms.

### Key Takeaways:
- **Quick Sort and Merge Sort** are ideal for large datasets due to their efficient time complexity.
- **Selection Sort, Bubble Sort, and Insertion Sort** are significantly slower for larger datasets, making them unsuitable for real-world applications with high data volume.
- The results demonstrate the importance of algorithm selection based on data size and performance requirements.

---
**Disclaimer**: The performance results presented here are based on specific implementations of the algorithms and the hardware used for testing. Actual performance may vary depending on factors such as:

- The programming language and compiler optimizations.
- Dataset characteristics (e.g., sorted, reverse-sorted, or random data).
- The hardware used (CPU, memory, and cache size).
- Specific optimizations or variations in the algorithm implementation. 

For precise comparisons, consider testing with your own use case and environment.

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.