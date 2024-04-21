# This will find the maximum number of movies
def max_movies(n, movies):
    # Sort the movies based on their ending times
    movies.sort(key=lambda x: x[1])

    # Initializing variables
    count = 0
    last_end_time = 0

    # Iterating through the sorted movies
    for start_time, end_time in movies:

        # Check if the movie can be watched without overlapping
        if start_time >= last_end_time:

            count += 1
            last_end_time = end_time

    return count

# Input
n = int(input())
movies = [list(map(int, input().split())) for _ in range(n)]

# Printing Output
print(max_movies(n, movies))