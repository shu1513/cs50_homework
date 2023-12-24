//this doesn't work with when html type is numbers
function checkShares() {
    const shares = parseInt(document.getElementById("shares").value);
    console.log("Shares:", shares);
    if (isNaN(shares) || shares <= 0) {
        document.getElementById("sharesGuide").innerHTML = "<span>&#10008;</span> numbers of shares must be an integer bigger than 1"
        document.getElementById("sharesGuide").style.color = "red"
    }
    else {
        document.getElementById("sharesGuide").innerHTML = ""
    }
}
