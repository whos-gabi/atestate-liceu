function myFunction() {
    var x = document.getElementById("myTopnav");
    if (x.className === "topnav") {
        x.className += " resp";
    } else {
        x.className = "topnav";
    }
}