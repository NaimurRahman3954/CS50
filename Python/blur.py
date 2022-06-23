from PIL import Image, ImageFilter
before = Image.open("image.png")
after = before.filter(ImageFilter.GaussianBlur(3))  # Gaussian blur
after.save("afterImage.png")
