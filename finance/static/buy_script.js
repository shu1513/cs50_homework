
function checkShares() {
    const shares = parseInt(document.getElementById("shares").value);
    if (!(shares>0)) {
        document.getElementById("sharesGuide").innerHTML = "<span>&#10008;</span> numbers of shares must be at least 1"
        document.getElementById("sharesGuide").style.color = "red"
    }
    else {
        document.getElementById("sharesGuide").innerHTML = ""
    }
}
