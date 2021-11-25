import tensorflow as tf

# print(tf.cuda.isavailable())
# print(tf.__version__)


if __name__ == "__main__":
    try:
        print(tf.__version__)
    except Exception as e:
        print(e)