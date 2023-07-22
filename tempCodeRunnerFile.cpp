int size = students.size() - 1;
                if (maxIndex == size)
                {
                    students.pop_back();
                }
                else
                {
                    swap(students[maxIndex], students.back());
                    students.pop_back();
                }