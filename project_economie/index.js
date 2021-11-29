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
                cout<<"x"<<ix<<" + y"<<iy<<'\n';
                s-=px+py,ix++,iy++;
                else if(efx>efy)
                    cout<<"x"<<ix<<'\n';
                    s-=px,ix++;
                else
                    cout<<"y"<<iy<<'\n';
                    s-=py,iy++;
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

function main() {
  document.getElementById("submit").onclick = function () {
    //in debugging
    var res = "";
    var ix = 1,
      iy = 1;
    var px = document.getElementById("px").value;
    var py = document.getElementById("py").value;
    var suma = document.getElementById("sum").value;
    var nr_rand = document.getElementById("nr_rand").value;
    var umgx = document.getElementById("umgx").value.split(" ");
    var umgy = document.getElementById("umgy").value.split(" ");

    //afisare

    var result =
      "pret x =" +
      px +
      "<br>" +
      "pret y =" +
      py +
      "<br>" +
      "Suma = " +
      suma +
      "<br>" +
      "nr randuri = " +
      nr_rand +
      "<br>" +
      "UMGX =" +
      umgx +
      "<br>" +
      "UMGY =" +
      umgy;
    document.getElementById("container").innerHTML = result;

    //algo
    // console.log("algo start:\n");

    //console log good

    while (ix <= nr_rand+1 && iy <= nr_rand+1 && suma > 0) {
      var efx = umgx[ix-1] / px,
        efy = umgy[iy-1] / py;
      // console.log(
      //   "var: " +
      //     "efx: " +
      //     efx +
      //     " " +
      //     "efy :" +
      //     efy +
      //     " " +
      //     umgx[ix-1] +
      //     " " +
      //     umgy[iy-1] +
      //     "\n"
      // );
      // console.log("var:" + umgx[ix] + "\n");

      if (efx == efy) {
        // console.log("1");

        res += "x" + ix + " + y" + iy + "<br>";
        // suma -= px + py, ix++, iy++;
        (suma -= px), (suma -= py), ix++, iy++;
      } else if (efx > efy) {
        // console.log("2");

        res += "x" + ix + "<br>";
        (suma -= px), ix++;
      } else {
        // console.log("3");

        res += "y" + iy + "<br>";
        (suma -= py), iy++;
      }
    }
    console.log("output generated: " + res);

    document.getElementById("result").innerHTML =
      res + "in total " + (ix - 1) + " de x si " + (iy - 1) + " de y";
  };
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
