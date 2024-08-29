#ifndef jam2_hadrons_GaussPoints_H
#define jam2_hadrons_GaussPoints_H

namespace jam2 {

const int NGP2= 12;
//...Integration from 0 to infinity
const double xg12[]={
         9.3054764182325389E-003 ,   5.0355482735496913E-002 ,
        0.13000563768877305      ,  0.25998700802124597      ,
        0.46216840412348259      ,  0.77740901120748684      ,
         1.2863241685953453      ,   2.1637134669483356      ,
         3.8463460447926718      ,   7.6919741157221937      ,
         19.858810712881390      ,   107.46360047086529      };

const double wg12[]={
         2.4028699674322945E-002 ,   5.8990226050116043E-002 ,
        0.10220302865417245      ,  0.16127097752083294      ,
        0.24959610140216845      ,  0.39355053004538776      ,
        0.65118046107363614      ,   1.1685230774827742      ,
         2.3859037851476512      ,   6.0469919992107961      ,
         23.264114837162214      ,   277.49364627655586      };

//...Integration from 0 to infinity
const int NGP4=24;
const double xg24[]={
         2.4121946826553323E-003 ,   1.2797426741145325E-002 ,
         3.1845564878045296E-002 ,   6.0211799240207343E-002 ,
         9.8899899787624770E-002 ,  0.14934325359025047      ,
        0.21352327135623336      ,  0.29414534288994942      ,
        0.39490100168707831      ,  0.52086318632798589      ,
        0.67909354357053764      ,  0.87959874459292320      ,
         1.1368820227941530      ,   1.4725511815974581      ,
         1.9198899562279743      ,   2.5322802315715709      ,
         3.3996798663378351      ,   4.6833302695687982      ,
         6.6959837552734465      ,   10.111233703445359      ,
         16.608040494033848      ,   31.401546929048564      ,
         78.140709083715649      ,   414.56023727703638     };

const double wg24[] ={
         6.2004202537469487E-003 ,   1.4633159021961079E-002 ,
         2.3571211220157980E-002 ,   3.3327259294471785E-002 ,
         4.4285908308649993E-002 ,   5.6928167059581446E-002 ,
         7.1878503935466992E-002 ,   8.9974485514185673E-002 ,
        0.11237250776469496      ,  0.14071341257286479      ,
        0.17739023892674516      ,  0.22599587763799231      ,
        0.29209983767215092      ,  0.38465423270262822      ,
        0.51866646481537093      ,  0.72058232004725531      ,
         1.0399091955065385      ,   1.5765530898534792      ,
         2.5524425957285790      ,   4.5276604894410974      ,
         9.1925582510768926      ,   23.242561346889172      ,
         89.349636082267239      ,   1065.6054049423328      };

//...Integration from 0 to infinity
const int NGP24_5=24;
const double xg24_5[]={
          1.2060973413276660E-002 ,   6.3987133705726618E-002 ,
         0.15922782439022648      ,  0.30105899620103671      ,
         0.49449949893812384      ,  0.74671626795125234      ,
          1.0676163567811667      ,   1.4707267144497471      ,
          1.9745050084353915      ,   2.6043159316399294      ,
          3.3954677178526880      ,   4.3979937229646158      ,
          5.6844101139707650      ,   7.3627559079872897      ,
          9.5994497811398709      ,   12.661401157857856      ,
          16.998399331689175      ,   23.416651347843992      ,
          33.479918776367235      ,   50.556168517226794      ,
          83.040202470169234      ,   157.00773464524283      ,
          390.70354541857824      ,   2072.8011863851821      };

const double wg24_5[]={
          3.1002101268734743E-002 ,   7.3165795109805393E-002 ,
         0.11785605610078990      ,  0.16663629647235895      ,
         0.22142954154324995      ,  0.28464083529790724      ,
         0.35939251967733499      ,  0.44987242757092838      ,
         0.56186253882347481      ,  0.70356706286432402      ,
         0.88695119463372585      ,   1.1299793881899618      ,
          1.4604991883607545      ,   1.9232711635131412      ,
          2.5933323240768549      ,   3.6029116002362760      ,
          5.1995459775326927      ,   7.8827654492673958      ,
          12.762212978642895      ,   22.638302447205486      ,
          45.962791255384460      ,   116.21280673444585      ,
          446.74818041133614      ,   5328.0270247116641      };


const int NGP38= 38;
//...Integration from 0 to infinity
const double xg38[] = {9.7598635274825029E-004, 5.1567282900350925E-003,
       1.2737027203429915E-002, 2.3821075556614637E-002,
       3.8561081239514093E-002, 5.7163058876923696E-002,
       7.9893185774238318E-002, 0.10708613487768781,
       0.13915592517069370, 0.17660992627306188,
       0.22006686740430886, 0.27028000354623533,
       0.32816701341037852, 0.39484879744313967,
       0.47170019084008463, 0.56041683159486888,
       0.66310422273140357, 0.78239771250444978,
       0.92162619155991743, 1.0850386080146326,
        1.2781223462412827, 1.5080585611125856,
        1.7843860919632593, 2.1199906623294522,
        2.5326150325784020, 3.0472288777832852,
        3.6998667562505618, 4.5440734073012035,
        5.6621958974937234, 7.1861834037850976,
        9.3382770901404282, 12.516712036315512,
        17.493815405383994, 25.932882788963024,
        41.979632599852103, 78.511255729336369,
       193.92140592949386, 1024.6044908149897};

const double wg38[]={2.5063255009009689E-003 ,5.8667641486190823E-003 ,
     9.3110224667196529E-003 , 1.2882359515084497E-002 ,
     1.6631883263887846E-002 , 2.0616297188131877E-002 ,
     2.4899556074333709E-002 , 2.9555113877367468E-002 ,
     3.4668730861567069E-002 , 4.0342010459859773E-002 ,
     4.6696921065189613E-002 , 5.3881658070395952E-002 ,
     6.2078343057469607E-002 , 7.1513263780566799E-002 ,
     8.2470665216640246E-002 , 9.5311563422862275E-002 ,
     0.11049975937612265      , 0.12863832689014129,
     0.15052158636994833      , 0.17721038534567848,
     0.21014315041270704      , 0.25130304168722140,
     0.30347523233916146      , 0.37065289260111578,
     0.45869600731274773      , 0.57643490027775091,
     0.73758677242364035      , 0.96422619051202441,
     1.2933835087462366      , 1.7903359705458926,
     2.5773069794025916      , 3.9009656479992461,
     6.3092791820017702      , 11.185181156179484,
     22.702447594239192      , 57.393303343920699,
     220.62266770103969      , 2631.1765081920767};


//...Integration from 0 to infinity
const int NGP48= 48;
const double xg48[]={
          6.1487421176042762E-004 ,   3.2454124967138034E-003 ,
          8.0012194836001638E-003 ,   1.4923644029026552E-002 ,
          2.4071988145901398E-002 ,   3.5525412711809166E-002 ,
          4.9384486912758943E-002 ,   6.5773110966300133E-002 ,
          8.4840927679693215E-002 ,  0.10676631301075115      ,
         0.13176005283055117      ,  0.16006984091916471      ,
         0.19198576976269163      ,  0.22784703282658136      ,
         0.26805011798522771      ,  0.31305885142226969      ,
         0.36341675616188618      ,  0.41976232864367047      ,
         0.48284802337223692      ,  0.55356398811065954      ,
         0.63296793690764275      ,  0.72232302413694338      ,
         0.82314624672188297      ,  0.93727083903080133      ,
          1.0669274646739939      ,   1.2148509502198712      ,
          1.3844221582093894      ,   1.5798588549137069      ,
          1.8064758934428664      ,   2.0710450319666744      ,
          2.3823004871141831      ,   2.7516617851119225      ,
          3.1942875771020742      ,   3.7306456252151703      ,
          4.3889094696314030      ,   5.2087193818378976      ,
          6.2472730294334466      ,   7.5895537267736293      ,
          9.3662501944719398      ,   11.786764093096441      ,
          15.203781382826264      ,   20.249273861376103      ,
          28.148863691246728      ,   41.542061002147200      ,
          67.007762853026762      ,   124.98094847287554      ,
          308.12724145622991      ,   1626.3489033585104 };

const double wg48[]={
          1.5786125334142584E-003 ,   3.6875964751114684E-003 ,
          5.8308165460359811E-003 ,   8.0238928983646322E-003 ,
          1.0285963606857039E-002 ,   1.2637615224086617E-002 ,
          1.5101143227639394E-002 ,   1.7700995756454927E-002 ,
          2.0464306035473813E-002 ,   2.3421521042949926E-002 ,
          2.6607149895280593E-002 ,   3.0060663983716155E-002 ,
          3.3827590236108811E-002 ,   3.7960850897485472E-002 ,
          4.2522419226510490E-002 ,   4.7585382064163108E-002 ,
          5.3236529523763274E-002 ,   5.9579632189687246E-002 ,
          6.6739621707621030E-002 ,   7.4867968121674400E-002 ,
          8.4149656591385305E-002 ,   9.4812321980675796E-002 ,
         0.10713832476438342      ,  0.12148088054060502      ,
         0.13828584277259548      ,  0.15812147132215817      ,
         0.18171963932364618      ,  0.21003367208984836      ,
         0.24432076960869314      ,  0.28626142239863056      ,
         0.33813559984336633      ,  0.40308797373467181      ,
         0.48553616704542518      ,  0.59181498763484708      ,
         0.73122189002148308      ,  0.91776815084516128      ,
          1.1732202285824032      ,   1.5326071089714106      ,
          2.0546914081529448      ,   2.8430611753764796      ,
          4.0916731136127185      ,   6.1919684490501838      ,
          10.013522185119816      ,   17.750927967895134      ,
          36.027602336664273      ,   91.078739158273237      ,
          350.10924824820933      ,   4175.4471295774565     };

// Gauss points for integral at [0,1]
//...Useage: x  = xmin + xg[i]*(xmax-xmin)
//...        dx =        wg[i]*(xmax-xmin)
const double xg38f[]={9.750347321562e-04,5.130272866807e-03,1.257683570492e-02,
       2.326683453324e-02, 3.712933397571e-02, 5.407213049768e-02,
       7.398248903382e-02, 9.672791619734e-02, 1.221570481230e-01,
       1.501006598104e-01, 1.803727920852e-01, 2.127719894761e-01,
       2.470826410360e-01, 2.830764152838e-01, 3.205137797603e-01,
       3.591455951049e-01, 3.987147730539e-01, 4.389579873311e-01,
       4.796074260477e-01, 5.203925739523e-01, 5.610420126689e-01,
       6.012852269461e-01, 6.408544048951e-01, 6.794862202397e-01,
       7.169235847162e-01, 7.529173589640e-01, 7.872280105239e-01,
       8.196272079148e-01, 8.498993401896e-01, 8.778429518770e-01,
       9.032720838027e-01, 9.260175109662e-01, 9.459278695023e-01,
       9.628706660243e-01, 9.767331654668e-01, 9.874231642951e-01,
       9.948697271332e-01, 9.990249652678e-01};

const double wg38f[]={2.501440374819e-03,5.806722358234e-03,9.078288854807e-03,
       1.228986986912e-02, 1.541975027258e-02, 1.844704079701e-02,
       2.135157925234e-02, 2.411403093038e-02, 2.671600995517e-02,
       2.914019957350e-02, 3.137046669607e-02, 3.339196898957e-02,
       3.519125353345e-02, 3.675634629237e-02, 3.807683177422e-02,
       3.914392232911e-02, 3.995051662176e-02, 4.049124688530e-02,
       4.076251464019e-02, 4.076251464019e-02, 4.049124688530e-02,
       3.995051662176e-02, 3.914392232911e-02, 3.807683177422e-02,
       3.675634629237e-02, 3.519125353345e-02, 3.339196898957e-02,
       3.137046669607e-02, 2.914019957350e-02, 2.671600995517e-02,
       2.411403093038e-02, 2.135157925234e-02, 1.844704079701e-02,
       1.541975027258e-02, 1.228986986912e-02, 9.078288854807e-03,
       5.806722358234e-03, 2.501440374819e-03};

// Gauss points for integral at [0,1]
const double xg48f[]={
          6.1449637378696575E-004 ,   3.2349138668246180E-003 ,
          7.9377081385865744E-003 ,   1.4704203726876364E-002 ,
          2.3506148419784545E-002 ,   3.4306654646722834E-002 ,
          4.7060431642215184E-002 ,   6.1713989862876073E-002 ,
          7.8205869187803256E-002 ,   9.6466897985278688E-002 ,
         0.11642048374212982      ,  0.13798293453809268      ,
         0.16106381018366805      ,  0.18556630161174320      ,
         0.21138763695801366      ,  0.23841951263888350      ,
         0.26654854762452079      ,  0.29565675900464161      ,
         0.32562205685391965      ,  0.35631875632227222      ,
         0.38761810480265546      ,  0.41938882196555416      ,
         0.45149765039526868      ,  0.48380991451856531      ,
         0.51619008548143464      ,  0.54850234960473132      ,
         0.58061117803444584      ,  0.61238189519734454      ,
         0.64368124367772772      ,  0.67437794314608035      ,
         0.70434324099535839      ,  0.73345145237547915      ,
         0.76158048736111650      ,  0.78861236304198634      ,
         0.81443369838825674      ,  0.83893618981633189      ,
         0.86201706546190726      ,  0.88357951625787012      ,
         0.90353310201472126      ,  0.92179413081219674      ,
         0.93828601013712398      ,  0.95293956835778482      ,
         0.96569334535327722      ,  0.97649385158021551      ,
         0.98529579627312369      ,  0.99206229186141348      ,
         0.99676508613317538      ,  0.99938550362621303};

const double wg48f[]={
          1.5766730261527013E-003 ,   3.6637769506381039E-003 ,
          5.7386172896172951E-003 ,   7.7896578614719278E-003 ,
          9.8080802286750410E-003 ,   1.1785380419661561E-002 ,
          1.3713254854178274E-002 ,   1.5583613916398970E-002 ,
          1.7388611282385232E-002 ,   1.9120675532915361E-002 ,
          2.0772541471732388E-002 ,   2.2337280428347147E-002 ,
          2.3808329246245274E-002 ,   2.5179517776927236E-002 ,
          2.6445094742596830E-002 ,   2.7599751849992086E-002 ,
          2.8638646050201576E-002 ,   2.9557419849197783E-002 ,
          3.0352219582946930E-002 ,   3.1019711579946339E-002 ,
          3.1557096143127010E-002 ,   3.1962119292324086E-002 ,
          3.2233082217975051E-002 ,   3.2368848406341931E-002 ,
          3.2368848406341931E-002 ,   3.2233082217975051E-002 ,
          3.1962119292324086E-002 ,   3.1557096143127010E-002 ,
          3.1019711579946339E-002 ,   3.0352219582946930E-002 ,
          2.9557419849197783E-002 ,   2.8638646050201576E-002 ,
          2.7599751849992086E-002 ,   2.6445094742596830E-002 ,
          2.5179517776927236E-002 ,   2.3808329246245274E-002 ,
          2.2337280428347147E-002 ,   2.0772541471732388E-002 ,
          1.9120675532915361E-002 ,   1.7388611282385232E-002 ,
          1.5583613916398970E-002 ,   1.3713254854178274E-002 ,
          1.1785380419661561E-002 ,   9.8080802286750410E-003 ,
          7.7896578614719278E-003 ,   5.7386172896172951E-003 ,
          3.6637769506381039E-003 ,   1.5766730261527013E-003 };

// Gauss points for integral at [0,1]
const int NGP100= 100;
const double xg100f[] ={
         1.4313661327935989E-004 ,   7.5402468020208113E-004 ,
         1.8524326334374286E-003 ,   3.4375314812782887E-003 ,
         5.5078023785041230E-003 ,   8.0612296469714795E-003 ,
         1.1095320756540850E-002 ,   1.4607112118146859E-002 ,
         1.8593172872092223E-002 ,   2.3049608537254129E-002 ,
         2.7972064931871987E-002 ,   3.3355732478460243E-002 ,
         3.9195350927333006E-002 ,   4.5485214508735161E-002 ,
         5.2219177514636506E-002 ,   5.9390660307490795E-002 ,
         6.6992655751417662E-002 ,   7.5017736060204343E-002 ,
         8.3458060055799588E-002 ,   9.2305380830411898E-002 ,
        0.10155105380484275      ,  0.11118604517525227      ,
        0.12120094074014642      ,  0.13158595509898963      ,
        0.14233094121347178      ,  0.15342540032209900      ,
        0.16485849219842952      ,  0.17661904574293535      ,
        0.18869556989814612      ,  0.20107626487641062      ,
        0.21374903368930942      ,  0.22670149396745293      ,
        0.23992099005911849      ,  0.25339460539590453      ,
        0.26710917511332100      ,  0.28105129891398428      ,
        0.29520735416084920      ,  0.30956350918768505      ,
        0.32410573681378912      ,  0.33881982804973543      ,
        0.35369140598076398      ,  0.36870593981424826      ,
        0.38384875907751304      ,  0.39910506795213202      ,
        0.41445995973069838      ,  0.42989843138194300      ,
        0.44540539820996944      ,  0.46096570859328168      ,
        0.47656415878920416      ,  0.49218550778922848      ,
        0.50781449221077157      ,  0.52343584121079578      ,
        0.53903429140671832      ,  0.55459460179003051      ,
        0.57010156861805694      ,  0.58554004026930162      ,
        0.60089493204786804      ,  0.61615124092248696      ,
        0.63129406018575174      ,  0.64630859401923602      ,
        0.66118017195026457      ,  0.67589426318621082      ,
        0.69043649081231495      ,  0.70479264583915080      ,
        0.71894870108601572      ,  0.73289082488667900      ,
        0.74660539460409547      ,  0.76007900994088151      ,
        0.77329850603254702      ,  0.78625096631069058      ,
        0.79892373512358938      ,  0.81130443010185394      ,
        0.82338095425706470      ,  0.83514150780157048      ,
        0.84657459967790105      ,  0.85766905878652822      ,
        0.86841404490101037      ,  0.87879905925985358      ,
        0.88881395482474779      ,  0.89844894619515725      ,
        0.90769461916958805      ,  0.91654193994420041      ,
        0.92498226393979566      ,  0.93300734424858234      ,
        0.94060933969250926      ,  0.94778082248536344      ,
        0.95451478549126478      ,  0.96080464907266694      ,
        0.96664426752153976      ,  0.97202793506812801      ,
        0.97695039146274587      ,  0.98140682712790772      ,
        0.98539288788185320      ,  0.98890467924345915      ,
        0.99193877035302847      ,  0.99449219762149588      ,
        0.99656246851872177      ,  0.99814756736656252      ,
        0.99924597531979797      ,  0.99985686338672064 };
const double wg100f[] = {
         3.6731724525279299E-004 ,   8.5469632675902094E-004 ,
         1.3419626857767407E-003 ,   1.8279806006590005E-003 ,
         2.3122250317102171E-003 ,   2.7942140019325745E-003 ,
         3.2734742254225979E-003 ,   3.7495366277323469E-003 ,
         4.2219357348344897E-003 ,   4.6902098268472130E-003 ,
         5.1539012874344866E-003 ,   5.6125570115929824E-003 ,
         6.0657288314897168E-003 ,   6.5129739464857726E-003 ,
         6.9538553518593933E-003 ,   7.3879422637206649E-003 ,
         7.8148105387730350E-003 ,   8.2340430880725977E-003 ,
         8.6452302841617968E-003 ,   9.0479703610640786E-003 ,
         9.4418698066874446E-003 ,   9.8265437472176628E-003 ,
         1.0201616323104732E-002 ,   1.0566721056263847E-002 ,
         1.0921501208123663E-002 ,   1.1265610128168154E-002 ,
         1.1598711592627035E-002 ,   1.1920480132984091E-002 ,
         1.2230601353978524E-002 ,   1.2528772240789786E-002 ,
         1.2814701455104074E-002 ,   1.3088109619772845E-002 ,
         1.3348729591785475E-002 ,   1.3596306723288451E-002 ,
         1.3830599110396229E-002 ,   1.4051377829550590E-002 ,
         1.4258427161197572E-002 ,   1.4451544800562611E-002 ,
         1.4630542055319155E-002 ,   1.4795244029956318E-002 ,
         1.4945489796666437E-002 ,   1.5081132552584564E-002 ,
         1.5202039763227438E-002 ,   1.5308093291990243E-002 ,
         1.5399189515576296E-002 ,   1.5475239425245528E-002 ,
         1.5536168713783277E-002 ,   1.5581917848104971E-002 ,
         1.5612442127424587E-002 ,   1.5627711726931670E-002 ,
         1.5627711726931670E-002 ,   1.5612442127424587E-002 ,
         1.5581917848104971E-002 ,   1.5536168713783277E-002 ,
         1.5475239425245528E-002 ,   1.5399189515576296E-002 ,
         1.5308093291990243E-002 ,   1.5202039763227438E-002 ,
         1.5081132552584564E-002 ,   1.4945489796666437E-002 ,
         1.4795244029956318E-002 ,   1.4630542055319155E-002 ,
         1.4451544800562611E-002 ,   1.4258427161197572E-002 ,
         1.4051377829550590E-002 ,   1.3830599110396229E-002 ,
         1.3596306723288451E-002 ,   1.3348729591785475E-002 ,
         1.3088109619772845E-002 ,   1.2814701455104074E-002 ,
         1.2528772240789786E-002 ,   1.2230601353978524E-002 ,
         1.1920480132984091E-002 ,   1.1598711592627035E-002 ,
         1.1265610128168154E-002 ,   1.0921501208123663E-002 ,
         1.0566721056263847E-002 ,   1.0201616323104732E-002 ,
         9.8265437472176628E-003 ,   9.4418698066874446E-003 ,
         9.0479703610640786E-003 ,   8.6452302841617968E-003 ,
         8.2340430880725977E-003 ,   7.8148105387730350E-003 ,
         7.3879422637206649E-003 ,   6.9538553518593933E-003 ,
         6.5129739464857726E-003 ,   6.0657288314897168E-003 ,
         5.6125570115929824E-003 ,   5.1539012874344866E-003 ,
         4.6902098268472130E-003 ,   4.2219357348344897E-003 ,
         3.7495366277323469E-003 ,   3.2734742254225979E-003 ,
         2.7942140019325745E-003 ,   2.3122250317102171E-003 ,
         1.8279806006590005E-003 ,   1.3419626857767407E-003 ,
         8.5469632675902094E-004 ,   3.6731724525279299E-004};

} // end namespace jam2
#endif
