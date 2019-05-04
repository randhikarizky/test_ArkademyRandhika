var obj = {};
    var nama = 'Randhika';
    var alamat = 'Cianjur';
    var hobi = ["Design", "Programming", "Swimming"];
    var status = false;
    var sekolah = {
        SMK : "SMK NEGERI 1 CIANJUR",
    };
    var skill = new Array("Graphic Design", "C++", "C#", "HTML");

    function biodata(){
        obj.name = nama;
        obj.address = alamat;
        obj.hobbies = hobi;
        obj.is_married = status;
        obj.school = sekolah;
        obj.skills = skill;
	    json = JSON.stringify(obj, '', '\t');
        return json;                      
    }    

    console.log(biodata());
