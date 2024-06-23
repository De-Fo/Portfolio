var form = document.getElementById('sheetdb-form');
form.addEventListener("submit", e => {
    e.preventDefault();
    fetch('https://sheetdb.io/api/v1/YOUR API KEY', {
        method: "POST",
        body: new FormData(document.getElementById("sheetdb-form")),
    }).then(
        response => response.json()
    ).then(data => {
        console.log('SheetDB Response:', data); // Log the response data

        if (data.created == '1') {
            alert("Message sent successfully");
            window.location.href = "https://www.snowkiteorava.com";
        } else {
            alert("Error submitting form. Please try again.");
        }
    }).catch(error => {
        console.error('Error submitting form', error);
        alert("Error submitting form. Please try again.");
    });
});
