//this doesn't work with when html type is numbers
function checkShares() {
    const shares = parseFloat(document.getElementById("shares").value);
    if (true) {
        document.getElementById("sharesGuide").innerHTML = "<span>&#10008;</span> numbers of shares must be an integer bigger than 1"
        document.getElementById("sharesGuide").style.color = "red"
    }
    else {
        document.getElementById("sharesGuide").innerHTML = ""
    }
}
