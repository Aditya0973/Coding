from flask import Flask, render_template

app = Flask(__name__)

@app.route("/")
def index():
    title = "Homepage"
    return render_template("index.html", title=title)

@app.route("/about")
def about():
    title = "About"
    return render_template("about.html", title=title)

@app.route("/contact")
def contact():
    title = "Contact"
    return render_template("contact.html", title=title)

# @app.route("/")
# def hello_world():
#     return "<p>Hello, World!!</p>"

@app.route("/dev")
def display():
    return "<h1> dev is my friend</h1>"


# if __name__ == "__main__":
#     app.run(host="0.0.0.0")

#$env:FLASK_APP=".\18_hello.py"
#./flask run
#./flask run --debug to enable debug mode