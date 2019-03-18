import cs50
import csv

from flask import Flask, jsonify, redirect, render_template, request

# Configure application
app = Flask(__name__)

# Reload templates when they are changed
app.config["TEMPLATES_AUTO_RELOAD"] = True

# Registered users
users = []


@app.after_request
def after_request(response):
    """Disable caching"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/", methods=["GET"])
def get_index():
    return redirect("/form")


@app.route("/form", methods=["GET"])
def get_form():
    return render_template("form.html")


@app.route("/form", methods=["POST"])
def post_form():
    # Checking for errors
    if not request.form.get("name"):
        return render_template("error.html", message="Please provide your name")
    if not request.form.get("surname"):
        return render_template("error.html", message="Please provide your surname")
    if not request.form.get("city"):
        return render_template("error.html", message="Please provide your city")
    if not request.form.get("zipcode"):
        return render_template("error.html", message="Please provide your Zip Code")
    if not request.form.get("country"):
        return render_template("error.html", message="Please provide your country")
    if not request.form.get("title"):
        return render_template("error.html", message="Please provide your title")
    # Appending data in csv
    file = open("survey.csv", "a")
    writer = csv.writer(file)
    writer.writerow((request.form.get("name"), request.form.get("surname"), request.form.get("city"),
                     request.form.get("zipcode"), request.form.get("country"), request.form.get("title")))
    file.close()
    return redirect("/sheet")


@app.route("/sheet", methods=["GET"])
def get_sheet():
    # Reads from file and store the data in other html
    file = open("survey.csv", "r")
    reader = csv.reader(file)
    users = list(reader)
    return render_template("registered.html", users=users)
