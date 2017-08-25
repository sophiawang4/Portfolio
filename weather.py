'''
********* WEATHER DATA TUTORIAL -- AN INTRODUCTION TO PANDAS *********
The tutorial is full of exercises that will walk you through the Python Data
Analysis Library (a.k.a pandas), and what it can do.

NOTE:
As you're writing your code, you should be writing and REPLACING your code
often. So, each time you finish one part of an exercise, you'll probably want to
comment out your old code, and then start working on your next exercise.

TO RUN YOUR CODE IN THE COMMAND PROMPT:
navigate to the Documents directory, then run the command:
>> python weather.py

'''
# importing a couple of the libraries that we need in this program
import pandas
import matplotlib.pyplot as plt

# download weather_year.csv, and save it in a folder called "data" -- if it's not
# saved in the right place, then this line won't work.
data = pandas.read_csv("data/weather_year.csv")
#reads data in the document (weather_year.csv)

# WRITE YOUR CODE FROM THE TUTORIAL EXERCISES HERE
data.columns = ["date", "max_temp", "mean_temp", "min_temp", "max_dew",
                "mean_dew", "min_dew", "max_humidity", "mean_humidity",
                "min_humidity", "max_pressure", "mean_pressure",
                "min_pressure", "max_visibilty", "mean_visibility",
                "min_visibility", "max_wind", "mean_wind", "min_wind",
                "precipitation", "cloud_cover", "events", "wind_dir"]
print(data.columns)
print(data.mean_temp.head())
print(data.mean_temp.std())
print(data.mean_temp.hist())
plt.show()
# UNCOMMENT THE LINE BELOW WHENEVER YOU HAVE CODE THAT SHOULD DISPLAY
# A GRAPH OR CHART FROM YOUR CODE (ie, .plot(), .hist())
# plt.show()
