/** 
#include<bits/stdc++.h>
using namespace std;
int px,py,s,umgx[100],umgy[100];
void tabel()
{
    int randuri;
    cin>>px>>py>>s;
    cin>>randuri;
    for(int i=1;i<=randuri;++i)
        cin>>umgx[i];
    for(int i=1;i<=randuri;++i)
        cin>>umgy[i];
        int ix=1,iy=1;
        while(ix<=randuri && iy<=randuri && s>0)
        {
            float efx=umgx[ix]/px,efy=umgy[iy]/py;
            if(efx==efy)
                cout<<"x"<<ix<<" + y"<<iy<<'\n',s-=px+py,ix++,iy++;
                else
                    if(efx>efy)
                    cout<<"x"<<ix<<'\n',s-=px,ix++;
                else
                    cout<<"y"<<iy<<'\n',s-=py,iy++;
        }


    cout<<"in total "<<ix-1<<" de x si "<<iy-1<<" de y";
}

input:
2 1 9  
5 
10 8 6 4 2
8 7 6 5 4
int main()
{
   tabel();
}
*/

function tabel() {
  document.getElementById("submit").onclick = function () {
    // var rows = document.getElementById("nr_rand").value;
    // var columns = 2;
    // // if(rows == null )
    // // rows=10
    // var output =
    //   '<table border="1" cellspacing="0" cellpadding="5" class="table">';

    // function createTable(nr_rand, columns) {
    //   for (var i = 1; i <= rows; i++) {
    //     output = output + "<tr>";
    //     for (var j = 1; j <= columns; j++) {
    //       output =
    //         output +
    //         "<td>" +
    //         '<input class="input" type="text" placeholder="introduceti pentru">' +
    //         "</td>";
    //     }
    //     output = output + "</tr>";
    //   }
    //   output = output + "</table>";
    //   document.getElementById("container").innerHTML = output;
    // }
    // createTable(rows, columns);

    citire();
    afisare(); //buggy
  };
}

function citire() {
  var px = document.getElementById("px").value;
  var py = document.getElementById("py").value;
  var suma = document.getElementById("sum").value;
  var nr_rand = document.getElementById("px").value;
  var u_x = 0,
    u_y = 0;
  var umgx = Array();
  var umgy = Array();
  umgx[u_x] = document.getElementById("umgx").value;
  umgy[u_y] = document.getElementById("umgy").value;
  //  alert("Element: " + array[x] + " Added at index " + x);
  u_x++;
  u_y++;
  //   document.getElementById("text1").value = "";
}

function afisare() {
  var result =
    "pret x =" +
    px.value +
    "<br>" +
    "pret y =" +
    py.value +
    "<br>" +
    "Suma = " +
    sum.value +
    "<br>" +
    "nr randuri = " +
    nr_rand.value +
    "<br>" +
    "UMGX =" +
    umgx.value +
    "<br>" +
    "UMGY =" +
    umgy.value;
  document.getElementById("container").innerHTML = result;
}

function add_element_to_array() {
  check_input_error(umgx, nr_rand);
  check_input_error(umgy, nr_rand);
}

function check_input_error(arr, nr_rand) {
  var e = "input ERROR";

  if (nr_rand != arr.length) {
    //   error
    document.getElementById("error").innerHTML = e;
  } else {
    console.log("No imput errors, nice...");
  }
}
