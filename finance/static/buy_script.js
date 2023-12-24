//this doesn't work
function checkShares() {
    const shares = document.getElementById("shares").value;
    if (shares) {
        document.getElementById("sharesGuide").innerHTML = "<span>&#10008;</span> must be numbers"
        document.getElementById("sharesGuide").style.color = "red"
    }
    else {
        document.getElementById("sharesGuide").innerHTML = "<span>&#10004;</span> must be numbers"
        document.getElementById("sharesGuide").style.color = "green"
    }
}
