function graph() {
    var a = parseFloat(document.getElementById("a").value);
    var b = parseFloat(document.getElementById("b").value);
    var c = parseFloat(document.getElementById("c").value);
    var xValues = [];
    var yValues = [];
    var layout = {
        xaxis: {
            title: 'x'
        },
        yaxis: {
            title: 'y'
        }
    };
    for (var x = -10; x <= 10; x += 0.1) {
        xValues.push(x);
        yValues.push(a * x * x + b * x + c);
    }
    var layout = {
        autosize: false,
        width: 500,
        height: 500,
        margin: {
          l: 50,
          r: 50,
          b: 100,
          t: 100,
          pad: 4
        }
      };
    var data = [{        x: xValues,        y: yValues,          type: 'scatter'    }];
    Plotly.newPlot('graph', data, layout);
}
