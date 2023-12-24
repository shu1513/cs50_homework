function checkShares() {
    const shares = document.getElementById("shares").value;
    if (shares is not only numeric) {
        document.getElementById("sharesGuide").innerHTML = "<span class='invalid'>&#10008;</span> must be numbers"
    }
}
