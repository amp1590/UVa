(function(){var p=this,r=function(a){var b=typeof a;if("object"==b)if(a){if(a instanceof Array)return"array";if(a instanceof Object)return b;var c=Object.prototype.toString.call(a);if("[object Window]"==c)return"object";if("[object Array]"==c||"number"==typeof a.length&&"undefined"!=typeof a.splice&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("splice"))return"array";if("[object Function]"==c||"undefined"!=typeof a.call&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("call"))return"function"}else return"null";
else if("function"==b&&"undefined"==typeof a.call)return"object";return b},aa=function(a,b,c){return a.call.apply(a.bind,arguments)},ba=function(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var c=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(c,d);return a.apply(b,c)}}return function(){return a.apply(b,arguments)}},t=function(a,b,c){t=Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?
aa:ba;return t.apply(null,arguments)};var z=(new Date).getTime();var A=function(a){a=parseFloat(a);return isNaN(a)||1<a||0>a?0:a},B=function(a,b){return/^true$/.test(a)?!0:/^false$/.test(a)?!1:b},ca=/^([\w-]+\.)*([\w-]{2,})(\:[0-9]+)?$/,da=function(a,b){if(!a)return b;var c=a.match(ca);return c?c[0]:b};var ea=A("0.15"),fa=A("0.01"),ga=A("0.001"),ha=A("0.01"),ia=A("0.001"),ja=A("0.001"),ka=A("0.2"),la=B("true",!0),ma=A("0.01"),na=A("0.001");var oa=B("false",!1),pa=B("false",!1),qa=B("true",!1),ra=qa||!pa;var sa=String.prototype.trim?function(a){return a.trim()}:function(a){return a.replace(/^[\s\xa0]+|[\s\xa0]+$/g,"")},ta=/&/g,ua=/</g,va=/>/g,wa=/"/g,xa=/'/g,ya=/\x00/g,C={"\x00":"\\0","\b":"\\b","\f":"\\f","\n":"\\n","\r":"\\r","\t":"\\t","\x0B":"\\x0B",'"':'\\"',"\\":"\\\\"},D={"'":"\\'"},E=function(a,b){return a<b?-1:a>b?1:0};var G=function(a){G[" "](a);return a};G[" "]=function(){};var H=function(a){try{var b;if(b=!!a&&null!=a.location.href)a:{try{G(a.foo);b=!0;break a}catch(c){}b=!1}return b}catch(d){return!1}},J=function(a,b){if(!(1E-4>Math.random())){var c=Math.random();if(c<b){try{var d=new Uint16Array(1);window.crypto.getRandomValues(d);c=d[0]/65536}catch(e){c=Math.random()}return a[Math.floor(c*a.length)]}}return null};var za=function(a){var b=a.toString();a.name&&-1==b.indexOf(a.name)&&(b+=": "+a.name);a.message&&-1==b.indexOf(a.message)&&(b+=": "+a.message);if(a.stack){a=a.stack;var c=b;try{-1==a.indexOf(c)&&(a=c+"\n"+a);for(var d;a!=d;)d=a,a=a.replace(/((https?:\/..*\/)[^\/:]*:\d+(?:.|\n)*)\2/,"$1");b=a.replace(/\n */g,"\n")}catch(e){b=c}}return b};var K=document,L=window,M,Aa=null,N=K.getElementsByTagName("script");N&&N.length&&(Aa=N[N.length-1]);M=Aa;var O=function(a,b){for(var c in a)Object.prototype.hasOwnProperty.call(a,c)&&b.call(null,a[c],c,a)},P=function(a){return!!a&&"function"==typeof a&&!!a.call},Ba=function(a,b){if(!(2>arguments.length))for(var c=1,d=arguments.length;c<d;++c)a.push(arguments[c])},Ca=function(a,b){a.addEventListener?a.addEventListener("load",b,!1):a.attachEvent&&a.attachEvent("onload",b)},Da=function(a){"google_onload_fired"in a||(a.google_onload_fired=!1,Ca(a,function(){a.google_onload_fired=!0}))},Ea=function(){var a=
L.google_unique_id;return"number"==typeof a?a:0},Fa=function(a){var b=a.length;if(0==b)return 0;for(var c=305419896,d=0;d<b;d++)c^=(c<<5)+(c>>2)+a.charCodeAt(d)&4294967295;return 0<c?c:4294967296+c};var Ga=function(a,b,c){if(!a)return null;for(var d=0;d<a.length;++d)if((a[d].ad_slot||b)==b&&(a[d].ad_tag_origin||c)==c)return a[d];return null};var Ha=!0,Ia={},La=function(a,b,c,d){var e=Ja,g,f=Ha;try{g=b()}catch(h){try{var k=za(h);b="";h.fileName&&(b=h.fileName);var l=-1;h.lineNumber&&(l=h.lineNumber);f=e(a,k,b,l,c)}catch(m){Ka("pAR",m)}if(!f)throw h;}finally{if(d)try{d()}catch(n){}}return g},Ja=function(a,b,c,d,e,g){var f={};if(e)try{e(f)}catch(h){}f.context=a;f.msg=b.substring(0,512);c&&(f.file=c);0<d&&(f.line=d.toString());f.url=K.URL.substring(0,512);f.ref=K.referrer.substring(0,512);Ma(f);Na("jserror",f,g);return Ha},Na=function(a,
b,c){try{if(Math.random()<(c||.01)){var d="/pagead/gen_204?id="+a+Oa(b),e="http"+("http:"==L.location.protocol?"":"s")+"://pagead2.googlesyndication.com"+d,e=e.substring(0,2E3);L.google_image_requests||(L.google_image_requests=[]);var g=L.document.createElement("img");g.src=e;L.google_image_requests.push(g)}}catch(f){}},Ka=function(a,b){try{var c=za(b),d="";b.fileName&&(d=b.fileName);var e=-1;b.lineNumber&&(e=b.lineNumber);Ja(a,c,d,e,void 0,void 0)}catch(g){Na("jserror",{context:"mRE",msg:g.toString()+
"\n"+(g.stack||"")},void 0)}},Ma=function(a){var b=a||{};O(Ia,function(a,d){b[d]=L[a]})},Pa=function(a,b){return function(){var c=arguments;return La(a,function(){return b.apply(void 0,c)},void 0,void 0)}},Qa=function(a,b){return Pa(a,b)},Oa=function(a){var b="";O(a,function(a,d){if(0===a||a)b+="&"+d+"="+("function"==typeof encodeURIComponent?encodeURIComponent(a):escape(a))});return b};Ha=!oa;Ia={client:"google_ad_client",format:"google_ad_format",slotname:"google_ad_slot",output:"google_ad_output",ad_type:"google_ad_type",async_oa:"google_async_for_oa_experiment",dimpr:"google_always_use_delayed_impressions_experiment",peri:"google_top_experiment",pse:"google_pstate_expt"};var Ra=!!window.google_async_iframe_id,Sa=/MSIE [2-7]|PlayStation|Gecko\/20090226|Android 2\.|Opera/i,Ta=/Android/;var Ua=null,Va=function(){if(!Ua){for(var a=window,b=a,c=0;a&&a!=a.parent;)if(a=a.parent,c++,H(a))b=a;else break;Ua=b}return Ua};var Wa={S:{i:"17415661",j:"17415662"},W:{i:"36098823",j:"36098824"},ga:{i:"453848100",j:"453848101"},Z:{i:"828064124",j:"828064125"},Y:{i:"828064127",j:"828064128"},$:{i:"828064170",j:"828064171"},T:{i:"453848130",j:"453848131",F:"453848132",G:"453848133"},U:{i:"453848120",j:"453848121",F:"453848122",G:"453848123"},ha:{i:"20040030",j:"20040031"},aa:{i:"24819312",j:"24819313"},ca:{i:"24819310",j:"24819311"},da:{i:"24819308",j:"24819309"},V:{X:"828064119"},ea:{i:"10573501",j:"10573502"},C:{i:"10573591",
j:"10573592"},fa:{i:"10573511",j:"10573512"},D:{i:"10573581",j:"10573582"},ba:{i:24819400,j:24819401}};var Xa=function(a,b,c,d){return a.location&&a.location.hash=="#google_plle_"+d?d:J([c,d],b)};var Ya=function(a,b,c){c||(c=ra?"https":"http");return[c,"://",a,b].join("")};var Za=function(){},ab=function(a,b,c){switch(typeof b){case "string":$a(b,c);break;case "number":c.push(isFinite(b)&&!isNaN(b)?b:"null");break;case "boolean":c.push(b);break;case "undefined":c.push("null");break;case "object":if(null==b){c.push("null");break}if(b instanceof Array){var d=b.length;c.push("[");for(var e="",g=0;g<d;g++)c.push(e),ab(a,b[g],c),e=",";c.push("]");break}c.push("{");d="";for(e in b)b.hasOwnProperty(e)&&(g=b[e],"function"!=typeof g&&(c.push(d),$a(e,c),c.push(":"),ab(a,g,c),
d=","));c.push("}");break;case "function":break;default:throw Error("Unknown type: "+typeof b);}},bb={'"':'\\"',"\\":"\\\\","/":"\\/","\b":"\\b","\f":"\\f","\n":"\\n","\r":"\\r","\t":"\\t","\x0B":"\\u000b"},cb=/\uffff/.test("\uffff")?/[\\\"\x00-\x1f\x7f-\uffff]/g:/[\\\"\x00-\x1f\x7f-\xff]/g,$a=function(a,b){b.push('"');b.push(a.replace(cb,function(a){if(a in bb)return bb[a];var b=a.charCodeAt(0),e="\\u";16>b?e+="000":256>b?e+="00":4096>b&&(e+="0");return bb[a]=e+b.toString(16)}));b.push('"')};var gb=function(a){var b=arguments.length;if(1==b&&"array"==r(arguments[0]))return gb.apply(null,arguments[0]);for(var c={},d=0;d<b;d++)c[arguments[d]]=!0;return c};var Q;a:{var hb=p.navigator;if(hb){var ib=hb.userAgent;if(ib){Q=ib;break a}}Q=""};var jb=-1!=Q.indexOf("Opera")||-1!=Q.indexOf("OPR"),R=-1!=Q.indexOf("Trident")||-1!=Q.indexOf("MSIE"),kb=-1!=Q.indexOf("Edge"),S=-1!=Q.indexOf("Gecko")&&!(-1!=Q.toLowerCase().indexOf("webkit")&&-1==Q.indexOf("Edge"))&&!(-1!=Q.indexOf("Trident")||-1!=Q.indexOf("MSIE"))&&-1==Q.indexOf("Edge"),lb=-1!=Q.toLowerCase().indexOf("webkit")&&-1==Q.indexOf("Edge"),mb=function(){var a=Q;if(S)return/rv\:([^\);]+)(\)|;)/.exec(a);if(kb)return/Edge\/([\d\.]+)/.exec(a);if(R)return/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/.exec(a);
if(lb)return/WebKit\/(\S+)/.exec(a)},nb=function(){var a=p.document;return a?a.documentMode:void 0},ob=function(){if(jb&&p.opera){var a=p.opera.version;return"function"==r(a)?a():a}var a="",b=mb();b&&(a=b?b[1]:"");return R&&(b=nb(),b>parseFloat(a))?String(b):a}(),pb={},qb=function(a){if(!pb[a]){for(var b=0,c=sa(String(ob)).split("."),d=sa(String(a)).split("."),e=Math.max(c.length,d.length),g=0;0==b&&g<e;g++){var f=c[g]||"",h=d[g]||"",k=RegExp("(\\d*)(\\D*)","g"),l=RegExp("(\\d*)(\\D*)","g");do{var m=
k.exec(f)||["","",""],n=l.exec(h)||["","",""];if(0==m[0].length&&0==n[0].length)break;b=E(0==m[1].length?0:parseInt(m[1],10),0==n[1].length?0:parseInt(n[1],10))||E(0==m[2].length,0==n[2].length)||E(m[2],n[2])}while(0==b)}pb[a]=0<=b}},rb=p.document,sb=rb&&R?nb()||("CSS1Compat"==rb.compatMode?parseInt(ob,10):5):void 0;var T=null,tb=S||lb||jb||"function"==typeof p.atob;var U="google_ad_block google_ad_channel google_ad_client google_ad_format google_ad_height google_ad_host google_ad_host_channel google_ad_host_tier_id google_ad_modifications google_ad_output google_ad_region google_ad_section google_ad_slot google_ad_type google_ad_unit_key google_ad_unit_key_2 google_ad_width google_adtest google_allow_expandable_ads google_alternate_ad_url google_alternate_color google_analytics_domain_name google_analytics_uacct google_analytics_url_parameters google_available_width google_captcha_token google_city google_color_bg google_color_border google_color_line google_color_link google_color_text google_color_url google_container_id google_content_recommendation_ui_type google_contents google_core_dbp google_country google_cpm google_ctr_threshold google_cust_age google_cust_ch google_cust_criteria google_cust_gender google_cust_id google_cust_interests google_cust_job google_cust_l google_cust_lh google_cust_u_url google_disable_video_autoplay google_ed google_eids google_enable_content_recommendations google_enable_ose google_enable_ose_periscope google_encoding google_floating_ad_position google_font_face google_font_size google_frame_id google_gl google_hints google_image_size google_kw google_kw_type google_lact google_language google_loeid google_max_num_ads google_max_radlink_len google_mtl google_nofo google_num_radlinks google_num_radlinks_per_unit google_only_ads_with_video google_only_pyv_ads google_only_userchoice_ads google_override_format google_page_url google_pgb_reactive google_previous_watch google_previous_searches google_referrer_url google_region google_responsive_formats google_reuse_colors google_rl_dest_url google_rl_filtering google_rl_mode google_rt google_safe google_scs google_source_type google_sui google_skip google_tag_for_child_directed_treatment google_tag_info google_tag_origin google_targeting google_tdsma google_tfs google_tl google_ui_features google_video_doc_id google_video_product_type google_video_url_to_fetch google_with_pyv_ads google_yt_pt google_yt_up".split(" "),
ub={google_ad_modifications:!0,google_analytics_domain_name:!0,google_analytics_uacct:!0},xb=function(a){var b;try{a:{for(var c=a.document.getElementsByTagName("script"),d=c.length-1;0<=d;d--){var e=c[d];if(!e.google_parsed_script){e.google_parsed_script=!0;var g;b:{var f=e.innerText||e.innerHTML;if(f){var h=f.replace(/^\s+/,"").split(/[\r\n]/,1)[0].match(/^\x3c!--+(.*?)(?:--+>)?\s*$/);if(h&&/google_ad_client/.test(h[1])){g=h[1];break b}}g=null}if(g){b=g;break a}}}b=null}}catch(k){return-1}if(!b)return 1;
try{for(var c=/(google_\w+) *= *(['"]?[\w.-]+['"]?) *(?:;|$)/gm,d={},l;l=c.exec(b);)d[l[1]]=vb(l[2]);wb(d,a)}catch(m){return-2}return null==a.google_ad_client?2:3},yb=function(a){a.google_page_url&&(a.google_page_url=String(a.google_page_url));var b=[];O(a,function(a,d){if(null!=a){var e;try{var g=[];ab(new Za,a,g);e=g.join("")}catch(f){}e&&(e=e.replace(/\//g,"\\$&"),Ba(b,d,"=",e,";"))}});return b.join("")},zb=function(a){for(var b=0,c=U.length;b<c;b++){var d=U[b];ub[d]||(a[d]=null)}},vb=function(a){switch(a){case "true":return!0;
case "false":return!1;case "null":return null;case "undefined":break;default:try{var b=a.match(/^(?:'(.*)'|"(.*)")$/);if(b)return b[1]||b[2]||"";if(/^[-+]?\d*(\.\d+)?$/.test(a)){var c=parseFloat(a);return c===c?c:void 0}}catch(d){}}},wb=function(a,b){for(var c=0;c<U.length;c++){var d=U[c];null!=a[d]&&(b[d]=a[d])}};var V=null;var W=function(a){this.m=a;a.google_iframe_oncopy||(a.google_iframe_oncopy={handlers:{},upd:t(this.P,this)});this.M=a.google_iframe_oncopy},Ab;var X="var i=this.id,s=window.google_iframe_oncopy,H=s&&s.handlers,h=H&&H[i],w=this.contentWindow,d;try{d=w.document}catch(e){}if(h&&d&&(!d.body||!d.body.firstChild)){if(h.call){setTimeout(h,0)}else if(h.match){try{h=s.upd(h,i)}catch(e){}w.location.replace(h)}}";
/[\x00&<>"']/.test(X)&&(-1!=X.indexOf("&")&&(X=X.replace(ta,"&amp;")),-1!=X.indexOf("<")&&(X=X.replace(ua,"&lt;")),-1!=X.indexOf(">")&&(X=X.replace(va,"&gt;")),-1!=X.indexOf('"')&&(X=X.replace(wa,"&quot;")),-1!=X.indexOf("'")&&(X=X.replace(xa,"&#39;")),-1!=X.indexOf("\x00")&&(X=X.replace(ya,"&#0;")));Ab=X;W.prototype.set=function(a,b){this.M.handlers[a]=b;this.m.addEventListener&&this.m.addEventListener("load",t(this.H,this,a),!1)};
W.prototype.H=function(a){a=this.m.document.getElementById(a);try{var b=a.contentWindow.document;if(a.onload&&b&&(!b.body||!b.body.firstChild))a.onload()}catch(c){}};W.prototype.P=function(a,b){var c=Bb("rx",a),d;a:{if(a&&(d=a.match("dt=([^&]+)"))&&2==d.length){d=d[1];break a}d=""}d=(new Date).getTime()-d;c=c.replace(/&dtd=(\d+|M)/,"&dtd="+(1E4>d?d+"":"M"));this.set(b,c);return c};var Bb=function(a,b){var c=new RegExp("\\b"+a+"=(\\d+)"),d=c.exec(b);d&&(b=b.replace(c,a+"="+(+d[1]+1||1)));return b};gb("area base br col command embed hr img input keygen link meta param source track wbr".split(" "));var Cb;if(!(Cb=!S&&!R)){var Db;if(Db=R)Db=9<=sb;Cb=Db}Cb||S&&qb("1.9.1");R&&qb("9");var Eb=function(a){if(!a)return"";(a=a.toLowerCase())&&"ca-"!=a.substring(0,3)&&(a="ca-"+a);return a};var Fb={"120x90":!0,"160x90":!0,"180x90":!0,"200x90":!0,"468x15":!0,"728x15":!0};var Y,Z=function(a){this.s=[];this.m=a||window;this.l=0;this.o=null;this.B=0},Gb=function(a,b){this.I=a;this.R=b};Z.prototype.enqueue=function(a,b){0!=this.l||0!=this.s.length||b&&b!=window?this.v(a,b):(this.l=2,this.A(new Gb(a,window)))};Z.prototype.v=function(a,b){this.s.push(new Gb(a,b||this.m));Hb(this)};Z.prototype.J=function(a){this.l=1;if(a){var b=Qa("sjr::timeout",t(this.w,this,!0));this.o=this.m.setTimeout(b,a)}};
Z.prototype.w=function(a){a&&++this.B;1==this.l&&(null!=this.o&&(this.m.clearTimeout(this.o),this.o=null),this.l=0);Hb(this)};Z.prototype.L=function(){return!(!window||!Array)};Z.prototype.N=function(){return this.B};Z.prototype.nq=Z.prototype.enqueue;Z.prototype.nqa=Z.prototype.v;Z.prototype.al=Z.prototype.J;Z.prototype.rl=Z.prototype.w;Z.prototype.sz=Z.prototype.L;Z.prototype.tc=Z.prototype.N;var Hb=function(a){var b=Qa("sjr::tryrun",t(a.O,a));a.m.setTimeout(b,0)};
Z.prototype.O=function(){if(0==this.l&&this.s.length){var a=this.s.shift();this.l=2;var b=Qa("sjr::run",t(this.A,this,a));a.R.setTimeout(b,0);Hb(this)}};Z.prototype.A=function(a){this.l=0;a.I()};
var Ib=function(a){try{return a.sz()}catch(b){return!1}},Jb=function(a){return!!a&&("object"==typeof a||"function"==typeof a)&&Ib(a)&&P(a.nq)&&P(a.nqa)&&P(a.al)&&P(a.rl)},Kb=function(){if(Y&&Ib(Y))return Y;var a=Va(),b=a.google_jobrunner;return Jb(b)?Y=b:a.google_jobrunner=Y=new Z(a)},Lb=function(a,b){Kb().nq(a,b)},Mb=function(a,b){Kb().nqa(a,b)};var Nb=Ra?1==Ea():!Ea(),Ob=function(){var a=qa?"https":"http",b=G("script"),c;c=da("","pagead2.googlesyndication.com");return["<",b,' src="',Ya(c,"/pagead/js/r20150623/r20150626/show_ads_impl.js",a),'"></',b,">"].join("")},Pb=function(a,b,c,d){return function(){var e=!1;d&&Kb().al(3E4);var g=a.document.getElementById(b);g&&!H(g.contentWindow)&&
3==a.google_top_js_status&&(a.google_top_js_status=6);try{var f=a.document.getElementById(b).contentWindow;if(H(f)){var h=a.document.getElementById(b).contentWindow,k=h.document;k.body&&k.body.firstChild||(k.open(),h.google_async_iframe_close=!0,k.write(c))}else{var l=a.document.getElementById(b).contentWindow,m;g=c;g=String(g);if(g.quote)m=g.quote();else{f=['"'];for(h=0;h<g.length;h++){var n=g.charAt(h),x=n.charCodeAt(0),k=h+1,y;if(!(y=C[n])){var v;if(31<x&&127>x)v=n;else{var q=n;if(q in D)v=D[q];
else if(q in C)v=D[q]=C[q];else{var u=q,w=q.charCodeAt(0);if(31<w&&127>w)u=q;else{if(256>w){if(u="\\x",16>w||256<w)u+="0"}else u="\\u",4096>w&&(u+="0");u+=w.toString(16).toUpperCase()}v=D[q]=u}}y=v}f[k]=y}f.push('"');m=f.join("")}l.location.replace("javascript:"+m)}e=!0}catch(F){l=Va().google_jobrunner,Jb(l)&&l.rl()}e&&(e=Bb("google_async_rrc",c),(new W(a)).set(b,Pb(a,b,e,!1)))}},Qb=function(a){var b=["<iframe"];O(a,function(a,d){null!=a&&b.push(" "+d+'="'+a+'"')});b.push("></iframe>");return b.join("")},
Rb=function(a){var b;if(b=Nb){if(!V)a:{var c=[L.top];b=[];for(var d=0,e;e=c[d++];){b.push(e);try{if(e.frames)for(var g=e.frames.length,f=0;f<g&&1024>c.length;++f)c.push(e.frames[f])}catch(h){}}for(g=0;g<b.length;g++)try{var k=b[g].frames.google_esf;if(k){V=k;break a}}catch(l){}V=null}b=!V}return b?(k={style:"display:none"},k["data-ad-client"]=Eb(a),k.id="google_esf",k.name="google_esf",a=Ya(da("","googleads.g.doubleclick.net"),"/pagead/html/r20150623/r20150626/zrt_lookup.html"),
k.src=a,Qb(k)):""},Tb=function(a,b,c){var d=b.google_ad_output,e=b.google_ad_format;e||"html"!=d&&null!=d||(e=b.google_ad_width+"x"+b.google_ad_height,c&&(e+="_as"));c=!b.google_ad_slot||Sb(b);e=e&&c?e.toLowerCase():"";b.google_ad_format=e;e=[b.google_ad_slot,b.google_ad_format,b.google_ad_type,b.google_ad_width,b.google_ad_height];c=[];for(var d=0,g=M.parentElement;g&&25>d;g=g.parentNode,++d)c.push(9!=g.nodeType&&g.id||"");(c=c.join())&&e.push(c);b.google_ad_unit_key=Fa(e.join(":")).toString();e=
a.google_adk2_experiment=a.google_adk2_experiment||J(["C","E"],ja)||"N";if("E"==e){e=M;c=[];for(d=0;e&&25>d;++d){var g="",g=(g=9!=e.nodeType&&e.id)?"/"+g:"",f;a:{if(e&&e.nodeName&&e.parentElement){f=e.nodeName.toString().toLowerCase();for(var h=e.parentElement.childNodes,k=0,l=0;l<h.length;++l){var m=h[l];if(m.nodeName&&m.nodeName.toString().toLowerCase()==f){if(e==m){f="."+k;break a}++k}}}f=""}c.push((e.nodeName&&e.nodeName.toString().toLowerCase())+g+f);e=e.parentElement}e=c.join()+":";c=[];if(a)try{for(var n=
a.parent,d=0;n&&n!=a&&25>d;++d){for(var x=n.frames,g=0;g<x.length;++g)if(a==x[g]){c.push(g);break}a=n;n=a.parent}}catch(y){}b.google_ad_unit_key_2=Fa(e+c.join()).toString()}else"C"==e&&(b.google_ad_unit_key_2="ctrl")},Ub=Math.floor(1E6*Math.random()),Vb=function(a){var b;try{b={};for(var c=a.data.split("\n"),d=0;d<c.length;d++){var e=c[d].indexOf("=");-1!=e&&(b[c[d].substr(0,e)]=c[d].substr(e+1))}}catch(g){}c=b[3];if(b[1]==Ub&&(window.google_top_js_status=4,a.source==top&&0==c.indexOf(a.origin)&&
(window.google_top_values=b,window.google_top_js_status=5),window.google_top_js_callbacks)){for(a=0;a<window.google_top_js_callbacks.length;a++)window.google_top_js_callbacks[a]();window.google_top_js_callbacks.length=0}},Sb=function(a){return a.google_override_format||!Fb[a.google_ad_width+"x"+a.google_ad_height]&&"aa"==a.google_loader_used};La("sa::main",function(){var a=window,b=a.google_ad_modifications=a.google_ad_modifications||{};if(!b.plle){b.plle=!0;var b=b.loeids=b.loeids||[],c=Wa.C;(c=Xa(a,ha,c.i,c.j))&&b.push(c);c=Wa.D;(c=Xa(a,ia,c.i,c.j))&&b.push(c)}var d=a.google_ad_slot,b=a.google_ad_modifications;!b||Ga(b.ad_whitelist,d,void 0)?b=null:(c=b.space_collapsing||"none",b=(d=Ga(b.ad_blacklist,d))?{u:!0,K:d.space_collapsing||c}:b.remove_ads_by_default?{u:!0,K:c}:null);if(b&&b.u)zb(a);else{Da(a);if(!window.google_top_experiment&&
!window.google_top_js_status)if(b=window,2!==(b.top==b?0:H(b.top)?1:2))window.google_top_js_status=0;else if(top.postMessage){var e;try{e=L.top.frames.google_top_static_frame?!0:!1}catch(g){e=!1}if(e){if(window.google_top_experiment=J(["jp_c","jp_zl","jp_wfpmr","jp_zlt","jp_wnt"],ea),"jp_c"!==window.google_top_experiment){e=window;e.addEventListener?e.addEventListener("message",Vb,!1):e.attachEvent&&e.attachEvent("onmessage",Vb);window.google_top_js_status=3;e={0:"google_loc_request",1:Ub};var b=
[],f;for(f in e)b.push(f+"="+e[f]);top.postMessage(b.join("\n"),"*")}}else window.google_top_js_status=2}else window.google_top_js_status=1;f=window.google_ad_output;void 0!==window.google_always_use_delayed_impressions_experiment||f&&"html"!=f||(window.google_always_use_delayed_impressions_experiment=J(["C","E"],ga));(f=!1===window.google_enable_async)||(f=navigator.userAgent,Sa.test(f)?f=!1:(void 0!==window.google_async_for_oa_experiment||!Ta.test(navigator.userAgent)||Sa.test(navigator.userAgent)||
(window.google_async_for_oa_experiment=J(["E","C"],fa)),f=Ta.test(f)?"E"===window.google_async_for_oa_experiment:!0),f=!f||window.google_container_id||window.google_ad_output&&"html"!=window.google_ad_output);if(f)a.google_loader_used="sb",a.google_start_time=z,Tb(a,a),document.write(Rb(a.google_ad_client)+Ob());else{Nb&&(e=a.google_ad_client,f=navigator,la&&a&&e&&f&&(b=a.document,f=b.createElement("script"),e=Eb(e),f.async=!0,f.type="text/javascript",f.src=Ya("pagead2.googlesyndication.com","/pub-config/"+
e+".js"),e=b.getElementsByTagName("script")[0],e.parentNode.insertBefore(f,e)));a.google_unique_id?++a.google_unique_id:a.google_unique_id=1;e={};null==a.google_ad_client&&("google_pubvars_recovery_experiment"in a?f=a.google_pubvars_recovery_experiment:(f=J(["C","E"],ma),a.google_pubvars_recovery_experiment=f),e.google_pubvars_recovery_experiment=f,"E"==f&&(e.google_pubvars_recovery_progress=xb(a)));wb(a,e);e.google_loader_used="sa";zb(a);f=G("script");b={};c=e.google_ad_height;b.width='"'+e.google_ad_width+
'"';b.height='"'+c+'"';b.frameborder='"0"';b.marginwidth='"0"';b.marginheight='"0"';b.vspace='"0"';b.hspace='"0"';b.allowtransparency='"true"';b.scrolling='"no"';b.allowfullscreen='"true"';b.onload='"'+Ab+'"';for(var h,c=a.document,d=b.id,k=0;!d||c.getElementById(d);)d="aswift_"+k++;b.id=d;b.name=d;var k=e.google_ad_width,l=e.google_ad_height,d=["<iframe"];for(h in b)b.hasOwnProperty(h)&&Ba(d,h+"="+b[h]);d.push('style="left:0;position:absolute;top:0;"');d.push("></iframe>");h=b.id;k="border:none;height:"+
l+"px;margin:0;padding:0;position:relative;visibility:visible;width:"+k+"px;background-color:transparent";c.write(['<ins id="',h+"_expand",'" style="display:inline-table;',k,'"><ins id="',h+"_anchor",'" style="display:block;',k,'">',d.join(" "),"</ins></ins>"].join(""));h=b.id;b=Sb(e)?J(["c","e"],ka):null;Tb(a,e,"e"==b);c=yb(e);d=null;k=J(["C","E"],na);if("E"==k)a:{try{if(window.JSON&&window.JSON.stringify&&window.encodeURIComponent){var m=encodeURIComponent(window.JSON.stringify(e)),n;if(tb)n=p.btoa(m);
else{for(var l=[],x=0,y=0;y<m.length;y++){for(var v=m.charCodeAt(y);255<v;)l[x++]=v&255,v>>=8;l[x++]=v}var q=r(l);if("array"!=q&&("object"!=q||"number"!=typeof l.length))throw Error("encodeByteArray takes an array as a parameter");if(!T)for(T={},m=0;65>m;m++)T[m]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=".charAt(m);m=T;v=[];for(q=0;q<l.length;q+=3){var u=l[q],w=q+1<l.length,F=w?l[q+1]:0,I=q+2<l.length,db=I?l[q+2]:0,x=u>>2,y=(u&3)<<4|F>>4,eb=(F&15)<<2|db>>6,fb=db&63;I||(fb=
64,w||(eb=64));v.push(m[x],m[y],m[eb],m[fb])}n=v.join("")}d=n;break a}Na("sblob",{json:window.JSON?1:0,eURI:window.encodeURIComponent?1:0})}catch(Wb){Ka("sblob",Wb)}d=""}else"C"==k&&(d="{C}");n=Rb(e.google_ad_client);u=(new Date).getTime();w=a.google_top_experiment;if(F=a.google_async_for_oa_experiment)a.google_async_for_oa_experiment=void 0;I=a.google_always_use_delayed_impressions_experiment;n=["<!doctype html><html><body>",n,"<",f,">",c,"google_show_ads_impl=true;google_unique_id=",a.google_unique_id,
';google_async_iframe_id="',h,'";google_start_time=',z,";",k?'google_pub_vars = "'+d+'";':"",w?'google_top_experiment="'+w+'";':"",F?'google_async_for_oa_experiment="'+F+'";':"",I?'google_always_use_delayed_impressions_experiment="'+I+'";':"",b?'google_append_as_for_format_override="'+b+'";':"","google_bpp=",u>z?u-z:1,";google_async_rrc=0;</",f,">",Ob(),"</body></html>"].join("");(a.document.getElementById(h)?Lb:Mb)(Pb(a,h,n,!0))}}});})();
