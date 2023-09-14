// MERGE-SORT
template <typename T>
void merge(T *arr, int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;
    T *temp = new T[right - left + 1];
    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (i = 0; i < k; ++i)
    {
        arr[left++] = temp[i];
    }

    delete[] temp;
}

template <typename T>
void mergeSort(T arr[], int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

// quick sort
template <typename T>
void quickSort(T a[], int leftEnd, int rightEnd)
{
    if (leftEnd >= rightEnd)
    {
        return;
    }

    int leftCursor = leftEnd;
    int rightCursor = rightEnd + 1;
    T pivot = a[leftEnd];
    while (true)
    {
        do
        {
            leftCursor++;
        } while (a[leftCursor] < pivot);

        do
        {
            rightCursor--;
        } while (a[rightCursor] > pivot);

        if (leftCursor >= rightCursor)
        {
            break;
        }
        std::swap(a[leftCursor], a[rightCursor]);
    }

    a[leftEnd] = a[rightCursor];
    a[rightCursor] = pivot;

    quickSort(a, leftEnd, rightCursor - 1);
    quickSort(a, rightCursor + 1, rightEnd);
}