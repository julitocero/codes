def bubble_sort(arr)
    n = arr.length
    for i in 0...(n - 1)
        for j in 0...(n - 1 - i)
            if arr[j] > arr[j + 1]
                # Intercambiar arr[j] y arr[j + 1]
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
            end
        end
    end
end

arr = [64, 34, 25, 12, 22, 11, 90]
bubble_sort(arr)
puts arr.inspect
