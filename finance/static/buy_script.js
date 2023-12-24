function checkShares() {
    const shares = document.getElementById("shares").value;
    if (isNaN(shares)) {
        document.getElementById("sharesGuide").innerHTML = "<span>&#10008;</span> must be numbers"
    }
}
