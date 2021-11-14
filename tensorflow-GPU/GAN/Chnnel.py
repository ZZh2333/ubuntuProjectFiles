import tensorflow as tf
import pymysql

# print(tf.cuda.isavailable())
# print(tf.__version__)


if __name__ == "__main__":
    try:
        print(tf.__version__)
        # db = pymysql.connect(host="1.119.44.200",port=30002,user="root",passwd="bdctableau",db="data_portal")
        # db = pymysql.connect(host="59.110.230.49",port=3306,user="zouzh",passwd="zouzihan0706",db="class")
    except Exception as e:
        print(e)