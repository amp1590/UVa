(function(){var n=this,aa=function(a,b,c){return a.call.apply(a.bind,arguments)},ba=function(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var c=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(c,d);return a.apply(b,c)}}return function(){return a.apply(b,arguments)}},q=function(a,b,c){q=Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?aa:ba;return q.apply(null,arguments)};var r=(new Date).getTime();var t=function(a){a=parseFloat(a);return isNaN(a)||1<a||0>a?0:a},ca=function(a,b){var c=parseInt(a,10);return isNaN(c)?b:c},da=/^([\w-]+\.)*([\w-]{2,})(\:[0-9]+)?$/,ea=function(a,b){if(!a)return b;var c=a.match(da);return c?c[0]:b};var y=ca("101",-1),A=ca("0",0),fa=t("0.1"),ga=t("0.05"),ha=t("0.001"),ia=t("0.001"),ja=t("0.01"),ka=t("");var B=function(){return"r20160617"},C=/^true$/.test("false")?!0:!1,la=/^true$/.test("false")?!0:!1,ma=/^true$/.test("true")?!0:!1,na=ma||!la;var D=String.prototype.trim?function(a){return a.trim()}:function(a){return a.replace(/^[\s\xa0]+|[\s\xa0]+$/g,"")},oa=/&/g,pa=/</g,qa=/>/g,ra=/"/g,sa=/'/g,ta=/\x00/g,ua={"\x00":"\\0","\b":"\\b","\f":"\\f","\n":"\\n","\r":"\\r","\t":"\\t","\x0B":"\\x0B",'"':'\\"',"\\":"\\\\","<":"<"},E={"'":"\\'"},va=function(a,b){return a<b?-1:a>b?1:0};var wa=Array.prototype.forEach?function(a,b,c){Array.prototype.forEach.call(a,b,c)}:function(a,b,c){for(var d=a.length,e="string"==typeof a?a.split(""):a,f=0;f<d;f++)f in e&&b.call(c,e[f],f,a)};var F;a:{var xa=n.navigator;if(xa){var ya=xa.userAgent;if(ya){F=ya;break a}}F=""}var G=function(a){return-1!=F.indexOf(a)};var za=G("Opera"),H=G("Trident")||G("MSIE"),Aa=G("Edge"),I=G("Gecko")&&!(-1!=F.toLowerCase().indexOf("webkit")&&!G("Edge"))&&!(G("Trident")||G("MSIE"))&&!G("Edge"),Ba=-1!=F.toLowerCase().indexOf("webkit")&&!G("Edge"),Ca=function(){var a=n.document;return a?a.documentMode:void 0},Da;
a:{var Ea="",Fa=function(){var a=F;if(I)return/rv\:([^\);]+)(\)|;)/.exec(a);if(Aa)return/Edge\/([\d\.]+)/.exec(a);if(H)return/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/.exec(a);if(Ba)return/WebKit\/(\S+)/.exec(a);if(za)return/(?:Version)[ \/]?(\S+)/.exec(a)}();Fa&&(Ea=Fa?Fa[1]:"");if(H){var Ga=Ca();if(null!=Ga&&Ga>parseFloat(Ea)){Da=String(Ga);break a}}Da=Ea}
var Ha=Da,Ia={},Ja=function(a){if(!Ia[a]){for(var b=0,c=D(String(Ha)).split("."),d=D(String(a)).split("."),e=Math.max(c.length,d.length),f=0;0==b&&f<e;f++){var g=c[f]||"",h=d[f]||"",k=RegExp("(\\d*)(\\D*)","g"),l=RegExp("(\\d*)(\\D*)","g");do{var m=k.exec(g)||["","",""],p=l.exec(h)||["","",""];if(0==m[0].length&&0==p[0].length)break;b=va(0==m[1].length?0:parseInt(m[1],10),0==p[1].length?0:parseInt(p[1],10))||va(0==m[2].length,0==p[2].length)||va(m[2],p[2])}while(0==b)}Ia[a]=0<=b}},Ka=n.document,La=
Ka&&H?Ca()||("CSS1Compat"==Ka.compatMode?parseInt(Ha,10):5):void 0;var J=function(a){J[" "](a);return a};J[" "]=function(){};var Ma;if(!(Ma=!I&&!H)){var Na;if(Na=H)Na=9<=Number(La);Ma=Na}Ma||I&&Ja("1.9.1");H&&Ja("9");var Oa=function(a){try{var b;if(b=!!a&&null!=a.location.href)a:{try{J(a.foo);b=!0;break a}catch(c){}b=!1}return b}catch(c){return!1}},Qa=function(a,b){if(!(1E-4>Math.random())){var c=Math.random();if(c<b)return c=Pa(window),a[Math.floor(c*a.length)]}return null},Pa=function(a){try{var b=new Uint32Array(1);a.crypto.getRandomValues(b);return b[0]/65536/65536}catch(c){return Math.random()}},Ra=function(a,b){for(var c in a)Object.prototype.hasOwnProperty.call(a,c)&&b.call(void 0,a[c],c,a)},Sa=function(a){var b=
a.length;if(0==b)return 0;for(var c=305419896,d=0;d<b;d++)c^=(c<<5)+(c>>2)+a.charCodeAt(d)&4294967295;return 0<c?c:4294967296+c};var Ta=function(a,b,c){a.addEventListener?a.addEventListener(b,c,!1):a.attachEvent&&a.attachEvent("on"+b,c)};var Ua=function(a,b,c,d,e){this.w=c||4E3;this.s=a||"&";this.A=b||",$";this.u=void 0!==d?d:"trn";this.C=e||null;this.v=!1;this.l={};this.B=0;this.j=[]},Va=function(a,b){var c={};c[a]=b;return[c]},K=function(a,b,c,d){a.j.push(b);a.l[b]=Va(c,d)},Ya=function(a,b,c,d){b=b+"//"+c+d;var e=Wa(a)-d.length-0;if(0>e)return"";a.j.sort(function(a,b){return a-b});d=null;c="";for(var f=0;f<a.j.length;f++)for(var g=a.j[f],h=a.l[g],k=0;k<h.length;k++){if(!e){d=null==d?g:d;break}var l=Xa(h[k],a.s,a.A);if(l){l=c+l;
if(e>=l.length){e-=l.length;b+=l;c=a.s;break}else a.v&&(c=e,l[c-1]==a.s&&--c,b+=l.substr(0,c),c=a.s,e=0);d=null==d?g:d}}f="";a.u&&null!=d&&(f=c+a.u+"="+(a.C||d));return b+f+""},Wa=function(a){if(!a.u)return a.w;var b=1,c;for(c in a.l)b=c.length>b?c.length:b;return a.w-a.u.length-b-a.s.length-1},Xa=function(a,b,c,d,e){var f=[];Ra(a,function(a,h){var k=Za(a,b,c,d,e);k&&f.push(h+"="+k)});return f.join(b)},Za=function(a,b,c,d,e){if(null==a)return"";b=b||"&";c=c||",$";"string"==typeof c&&(c=c.split(""));
if(a instanceof Array){if(d=d||0,d<c.length){for(var f=[],g=0;g<a.length;g++)f.push(Za(a[g],b,c,d+1,e));return f.join(c[d])}}else if("object"==typeof a)return e=e||0,2>e?encodeURIComponent(Xa(a,b,c,d,e+1)):"...";return encodeURIComponent(String(a))};var ab=function(a,b,c,d,e,f){try{var g;c instanceof Ua?g=c:(g=new Ua,Ra(c,function(a,b){var c=g,d=c.B++,e=Va(b,a);c.j.push(d);c.l[d]=e}));if((d?a.s:Math.random())<(e||a.j)){var h=Ya(g,a.l,a.u,a.v+b+"&");"undefined"===typeof f?$a(h):$a(h,f)}}catch(k){}},$a=function(a,b){n.google_image_requests||(n.google_image_requests=[]);var c=n.document.createElement("img");if(b){var d=function(a){b(a);a=d;c.removeEventListener?c.removeEventListener("load",a,!1):c.detachEvent&&c.detachEvent("onload",a);a=d;c.removeEventListener?
c.removeEventListener("error",a,!1):c.detachEvent&&c.detachEvent("onerror",a)};Ta(c,"load",d);Ta(c,"error",d)}c.src=a;n.google_image_requests.push(c)};var bb=document,L=window,cb=null,M=bb.getElementsByTagName("script");M&&M.length&&(cb=M[M.length-1]);var db=cb;var eb=Object.prototype.hasOwnProperty,fb=function(a,b){for(var c in a)eb.call(a,c)&&b.call(void 0,a[c],c,a)},N=function(a){return!(!a||!a.call)&&"function"===typeof a},gb=function(a,b){for(var c=1,d=arguments.length;c<d;++c)a.push(arguments[c])},O=function(a,b){if(a.indexOf){var c=a.indexOf(b);return 0<c||0===c}for(c=0;c<a.length;c++)if(a[c]===b)return!0;return!1},hb=function(a){"google_onload_fired"in a||(a.google_onload_fired=!1,Ta(a,"load",function(){a.google_onload_fired=!0}))},ib=function(a){a=
a.google_unique_id;return"number"===typeof a?a:0},jb=!!window.google_async_iframe_id;var kb=function(a){return(a=a.google_ad_modifications)?a.eids||[]:[]},lb=function(a){return(a=a.google_ad_modifications)?a.loeids||[]:[]},mb=function(a,b,c){if(!a)return null;for(var d=0;d<a.length;++d)if((a[d].ad_slot||b)==b&&(a[d].ad_tag_origin||c)==c)return a[d];return null};var nb=function(a,b){this.j=a;this.l=b},ob=function(a,b,c){this.url=a;this.j=b;this.G=!!c;this.depth=null};var pb=function(a,b,c){this.u=a;this.w=b;this.s=c;this.l=null;this.v=this.j},qb=function(a,b,c){this.message=a;this.j=b||"";this.l=c||-1},sb=function(a,b,c,d){var e;try{e=c()}catch(h){var f=a.s;try{var g=rb(h),f=(d||a.v).call(a,b,g,void 0,void 0)}catch(k){a.j("pAR",k)}if(!f)throw h;}finally{}return e},tb=function(a,b){var c=P;return function(){for(var d=[],e=0;e<arguments.length;++e)d[e]=arguments[e];return sb(c,a,function(){return b.apply(void 0,d)})}};
pb.prototype.j=function(a,b,c,d,e){try{var f=e||this.w,g=new Ua;g.v=!0;K(g,1,"context",a);b instanceof qb||(b=rb(b));K(g,2,"msg",b.message.substring(0,512));b.j&&K(g,3,"file",b.j);0<b.l&&K(g,4,"line",b.l.toString());b={};if(this.l)try{this.l(b)}catch(w){}if(d)try{d(b)}catch(w){}d=[b];g.j.push(5);g.l[5]=d;var h;e=n;d=[];var k,l=null;do{b=e;Oa(b)?(k=b.location.href,l=b.document&&b.document.referrer||null):(k=l,l=null);d.push(new ob(k||"",b));try{e=b.parent}catch(w){e=null}}while(e&&b!=e);k=0;for(var m=
d.length-1;k<=m;++k)d[k].depth=m-k;b=n;if(b.location&&b.location.ancestorOrigins&&b.location.ancestorOrigins.length==d.length-1)for(k=1;k<d.length;++k){var p=d[k];p.url||(p.url=b.location.ancestorOrigins[k-1]||"",p.G=!0)}for(var v=new ob(n.location.href,n,!1),x=d.length-1,m=x;0<=m;--m){var u=d[m];if(u.url&&!u.G){v=u;break}}var u=null,z=d.length&&d[x].url;0!=v.depth&&z&&(u=d[x]);h=new nb(v,u);h.l&&K(g,6,"top",h.l.url||"");K(g,7,"url",h.j.url||"");ab(this.u,f,g,!1,c)}catch(w){try{ab(this.u,f,{context:"ecmserr",
rctx:a,msg:ub(w),url:h.j.url},!1,c)}catch(Ub){}}return this.s};var rb=function(a){return new qb(ub(a),a.fileName,a.lineNumber)},ub=function(a){var b=a.toString();a.name&&-1==b.indexOf(a.name)&&(b+=": "+a.name);a.message&&-1==b.indexOf(a.message)&&(b+=": "+a.message);if(a.stack){a=a.stack;var c=b;try{-1==a.indexOf(c)&&(a=c+"\n"+a);for(var d;a!=d;)d=a,a=a.replace(/((https?:\/..*\/)[^\/:]*:\d+(?:.|\n)*)\2/,"$1");b=a.replace(/\n */g,"\n")}catch(e){b=c}}return b};var vb,P;vb=new function(){this.l="http:"===L.location.protocol?"http:":"https:";this.u="pagead2.googlesyndication.com";this.v="/pagead/gen_204?id=";this.j=.01;this.s=Math.random()};P=new pb(vb,"jserror",!0);var xb=function(a,b){sb(P,a,b,wb)},wb=P.j,yb=function(a,b){return tb(a,b)};var zb={client:"google_ad_client",format:"google_ad_format",slotname:"google_ad_slot",output:"google_ad_output",ad_type:"google_ad_type",pse:"google_pstate_expt"};P.s=!C;var Q=function(a,b){this.l=a<b?a:b;this.j=a<b?b:a};Q.prototype.clone=function(){return new Q(this.l,this.j)};var Ab=function(a){var b;try{b=parseInt(a.localStorage.getItem("google_experiment_mod"),10)}catch(c){return null}if(0<=b&&1E3>b)return b;b=Math.floor(1E3*Pa(a));try{return a.localStorage.setItem("google_experiment_mod",""+b),b}catch(c){return null}};var Bb=null,Cb=function(){if(!Bb){for(var a=window,b=a,c=0;a&&a!=a.parent;)if(a=a.parent,c++,Oa(a))b=a;else break;Bb=b}return Bb};var Db={m:"10573511",o:"10573512"},Eb={m:"10573695",o:"10573696"},Fb={m:"10583695",o:"10583696"},R={X:{},oa:{m:"453848102",o:"453848103"},ga:{m:"24819308",o:"24819309",T:"24819320",Z:"24819321"},ea:{m:"24819330",o:"24819331"},fa:{m:"108809120",$:"108809121"},ba:{m:"86724438",o:"86724439"},ka:{m:"10573505",o:"10573506"},M:{m:"10573595",o:"10573596"},N:{m:"10573581",o:"10573582"},ja:{m:"10573605",o:"10573606"},Y:{m:"26835105",o:"26835106"},aa:{m:"35923720",o:"35923721"},D:{m:"35923760",o:"35923761"},
L:{m:"20040000",o:"20040001"},V:{m:"20040016",o:"20040017"},ha:{m:"19188000",o:"19188001"},W:{P:"314159230",da:"314159231"},ca:{la:"27285692",na:"27285712",ma:"27285713"},ia:{m:"27415010",o:"27415011"},S:{m:"618018082",R:"618018083",U:"618018084"}};var Gb=new function(){this.j=new Q(100,199)};var S=function(a,b,c,d){return a.location&&a.location.hash=="#google_plle_"+d?d:Qa([c,d],b)};var Hb=function(a,b,c){xb("files::getSrc",function(){if("https:"==L.location.protocol&&"http"==c)throw c="https",Error("Requested url "+a+b);});return[c,"://",a,b].join("")},Ib=function(a,b,c){c||(c=na?"https":"http");return Hb(a,b,c)};var Jb=function(){},Lb=function(a,b,c){switch(typeof b){case "string":Kb(b,c);break;case "number":c.push(isFinite(b)&&!isNaN(b)?String(b):"null");break;case "boolean":c.push(String(b));break;case "undefined":c.push("null");break;case "object":if(null==b){c.push("null");break}if(b instanceof Array||void 0!=b.length&&b.splice){var d=b.length;c.push("[");for(var e="",f=0;f<d;f++)c.push(e),Lb(a,b[f],c),e=",";c.push("]");break}c.push("{");d="";for(e in b)b.hasOwnProperty(e)&&(f=b[e],"function"!=typeof f&&
(c.push(d),Kb(e,c),c.push(":"),Lb(a,f,c),d=","));c.push("}");break;case "function":break;default:throw Error("Unknown type: "+typeof b);}},Mb={'"':'\\"',"\\":"\\\\","/":"\\/","\b":"\\b","\f":"\\f","\n":"\\n","\r":"\\r","\t":"\\t","\x0B":"\\u000b"},Nb=/\uffff/.test("\uffff")?/[\\\"\x00-\x1f\x7f-\uffff]/g:/[\\\"\x00-\x1f\x7f-\xff]/g,Kb=function(a,b){b.push('"');b.push(a.replace(Nb,function(a){if(a in Mb)return Mb[a];var b=a.charCodeAt(0),e="\\u";16>b?e+="000":256>b?e+="00":4096>b&&(e+="0");return Mb[a]=
e+b.toString(16)}));b.push('"')};var Ob=G("Safari")&&!((G("Chrome")||G("CriOS"))&&!G("Edge")||G("Coast")||G("Opera")||G("Edge")||G("Silk")||G("Android"))&&!(G("iPhone")&&!G("iPod")&&!G("iPad")||G("iPad")||G("iPod"));var T=null,Pb=I||Ba&&!Ob||za||"function"==typeof n.btoa,Qb=function(a){var b;if(Pb)b=n.btoa(a);else{b=[];for(var c=0,d=0;d<a.length;d++){for(var e=a.charCodeAt(d);255<e;)b[c++]=e&255,e>>=8;b[c++]=e}if(!T)for(T={},a=0;65>a;a++)T[a]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=".charAt(a);a=T;c=[];for(d=0;d<b.length;d+=3){var f=b[d],g=(e=d+1<b.length)?b[d+1]:0,h=d+2<b.length,k=h?b[d+2]:0,l=f>>2,f=(f&3)<<4|g>>4,g=(g&15)<<2|k>>6,k=k&63;h||(k=64,e||(g=64));c.push(a[l],a[f],a[g],a[k])}b=
c.join("")}return b};var U="google_ad_block google_ad_channel google_ad_client google_ad_format google_ad_height google_ad_host google_ad_host_channel google_ad_host_tier_id google_ad_modifications google_ad_output google_ad_region google_ad_section google_ad_slot google_ad_type google_ad_unit_key google_ad_dom_fingerprint google_ad_width google_adtest google_allow_expandable_ads google_alternate_ad_url google_alternate_color google_ama google_analytics_domain_name google_analytics_uacct google_analytics_url_parameters google_auto_format google_available_width google_captcha_token google_city google_color_bg google_color_border google_color_line google_color_link google_color_text google_color_url google_container_id google_content_recommendation_ui_type google_contents google_core_dbp google_country google_cpm google_ctr_threshold google_cust_age google_cust_ch google_cust_criteria google_cust_gender google_cust_id google_cust_interests google_cust_job google_cust_l google_cust_lh google_cust_u_url google_disable_video_autoplay google_delay_requests_count google_delay_requests_delay google_ed google_eids google_enable_content_recommendations google_enable_ose google_encoding google_floating_ad_position google_font_face google_font_size google_frame_id google_gl google_hints google_is_split_slot google_image_size google_kw google_kw_type google_lact google_language google_loeid google_max_num_ads google_max_radlink_len google_mtl google_nofo google_num_radlinks google_num_radlinks_per_unit google_only_ads_with_video google_only_pyv_ads google_only_userchoice_ads google_override_format google_page_url google_pgb_reactive google_previous_watch google_previous_searches google_referrer_url google_region google_responsive_formats google_reuse_colors google_rl_dest_url google_rl_filtering google_rl_mode google_rt google_safe google_scs google_source_type google_sui google_skip google_tag_for_child_directed_treatment google_tag_info google_tag_origin google_targeting google_tdsma google_tfs google_tl google_ui_features google_video_doc_id google_video_product_type google_video_url_to_fetch google_webgl_support google_with_pyv_ads google_yt_pt google_yt_up".split(" "),
Rb={google_ad_modifications:!0,google_analytics_domain_name:!0,google_analytics_uacct:!0},Sb=function(a){return(a=a.innerText||a.innerHTML)&&(a=a.replace(/^\s+/,"").split(/\r?\n/,1)[0].match(/^\x3c!--+(.*?)(?:--+>)?\s*$/))&&/google_ad_client/.test(a[1])?a[1]:null},Tb=function(a){if(a=a.innerText||a.innerHTML)if(a=a.replace(/^\s+|\s+$/g,"").replace(/\s*(\r?\n)+\s*/g,";"),(a=a.match(/^\x3c!--+(.*?)(?:--+>)?$/)||a.match(/^\/*\s*<!\[CDATA\[(.*?)(?:\/*\s*\]\]>)?$/i))&&/google_ad_client/.test(a[1]))return a[1];
return null},Xb=function(a){var b;try{a:{var c=a.document.getElementsByTagName("script"),d=a.navigator&&a.navigator.userAgent||"",e;if(!(e=/appbankapppuzdradb|daumapps|fban|fbios|fbav|fb_iab|gsa\/|messengerforios|naver|niftyappmobile|nonavigation|pinterest|twitter|ucbrowser|yjnewsapp|youtube/i.test(d))){var f;if(f=/i(phone|pad|pod)/i.test(d)){var g;if(g=/applewebkit/i.test(d)&&!/version|safari/i.test(d)){var h;try{h=!(!L.navigator.j&&!(C&&L.google_top_window||L.top).navigator.j)}catch(v){h=!1}g=!h}f=
g}e=f}for(var d=e?Sb:Tb,k=c.length-1;0<=k;k--){var l=c[k];if(!l.google_parsed_script){l.google_parsed_script=!0;var m=d(l);if(m){b=m;break a}}}b=null}}catch(v){return!1}if(!b)return!1;try{for(var c=/(google_\w+) *= *(['"]?[\w.-]+['"]?) *(?:;|$)/gm,k={},p;p=c.exec(b);)k[p[1]]=Vb(p[2]);Wb(k,a)}catch(v){return!1}return!!a.google_ad_client},Yb=function(a){try{if(window.JSON&&window.JSON.stringify&&window.encodeURIComponent){var b,c,d=function(){return this};null!=Object.prototype.toJSON&&(b=Object.prototype.toJSON,
Object.prototype.toJSON=d);null!=Array.prototype.toJSON&&(c=Array.prototype.toJSON,Array.prototype.toJSON=d);var e=Qb(encodeURIComponent(window.JSON.stringify(a)));b&&(Object.prototype.toJSON=b);c&&(Array.prototype.toJSON=c);return e}ab(vb,"sblob",{json:window.JSON?1:0,eURI:window.encodeURIComponent?1:0},!0,.001,void 0)}catch(f){P.j("sblob",f,void 0,void 0)}return""},Zb=function(a){a.google_page_url&&(a.google_page_url=String(a.google_page_url));var b=[];fb(a,function(a,d){if(null!=a){var e;try{var f=
[];Lb(new Jb,a,f);e=f.join("")}catch(g){}e&&(e=e.replace(/\//g,"\\$&"),gb(b,d,"=",e,";"))}});return b.join("")},$b=function(a){for(var b=0,c=U.length;b<c;b++){var d=U[b];Rb[d]||(a[d]=null)}},Vb=function(a){switch(a){case "true":return!0;case "false":return!1;case "null":return null;case "undefined":break;default:try{var b=a.match(/^(?:'(.*)'|"(.*)")$/);if(b)return b[1]||b[2]||"";if(/^[-+]?\d*(\.\d+)?$/.test(a)){var c=parseFloat(a);return c===c?c:void 0}}catch(d){}}},Wb=function(a,b){for(var c=0;c<
U.length;c++){var d=U[c];null==b[d]&&null!=a[d]&&(b[d]=a[d])}};var V=function(a){this.j=a;a.google_iframe_oncopy||(a.google_iframe_oncopy={handlers:{},upd:q(this.u,this)});this.s=a.google_iframe_oncopy},ac;var W="var i=this.id,s=window.google_iframe_oncopy,H=s&&s.handlers,h=H&&H[i],w=this.contentWindow,d;try{d=w.document}catch(e){}if(h&&d&&(!d.body||!d.body.firstChild)){if(h.call){setTimeout(h,0)}else if(h.match){try{h=s.upd(h,i)}catch(e){}w.location.replace(h)}}";
/[\x00&<>"']/.test(W)&&(-1!=W.indexOf("&")&&(W=W.replace(oa,"&amp;")),-1!=W.indexOf("<")&&(W=W.replace(pa,"&lt;")),-1!=W.indexOf(">")&&(W=W.replace(qa,"&gt;")),-1!=W.indexOf('"')&&(W=W.replace(ra,"&quot;")),-1!=W.indexOf("'")&&(W=W.replace(sa,"&#39;")),-1!=W.indexOf("\x00")&&(W=W.replace(ta,"&#0;")));ac=W;V.prototype.set=function(a,b){this.s.handlers[a]=b;this.j.addEventListener&&this.j.addEventListener("load",q(this.l,this,a),!1)};
V.prototype.l=function(a){a=this.j.document.getElementById(a);try{var b=a.contentWindow.document;if(a.onload&&b&&(!b.body||!b.body.firstChild))a.onload()}catch(c){}};V.prototype.u=function(a,b){var c=bc("rx",a),d;a:{if(a&&(d=a.match("dt=([^&]+)"))&&2==d.length){d=d[1];break a}d=""}d=(new Date).getTime()-d;c=c.replace(/&dtd=(\d+|-?M)/,"&dtd="+(1E5<=d?"M":0<=d?d:"-M"));this.set(b,c);return c};
var bc=function(a,b){var c=new RegExp("\\b"+a+"=(\\d+)"),d=c.exec(b);d&&(b=b.replace(c,a+"="+(+d[1]+1||1)));return b};I||Ba||H&&Ja(11);var cc=/MSIE [2-7]|PlayStation|Gecko\/20090226|Android 2\.|Opera/i,dc=!1;var ec=function(a){if(!a)return"";(a=a.toLowerCase())&&"ca-"!=a.substring(0,3)&&(a="ca-"+a);return a};var X=null;var fc={"120x90":!0,"160x90":!0,"180x90":!0,"200x90":!0,"468x15":!0,"728x15":!0};var Y,Z=function(a){this.u=[];this.l=a||window;this.j=0;this.s=null;this.B=0},gc=function(a,b){this.l=a;this.j=b};Z.prototype.C=function(a,b){0!=this.j||0!=this.u.length||b&&b!=window?this.v(a,b):(this.j=2,this.A(new gc(a,window)))};Z.prototype.v=function(a,b){this.u.push(new gc(a,b||this.l));hc(this)};Z.prototype.I=function(a){this.j=1;if(a){var b=yb("sjr::timeout",q(this.w,this,!0));this.s=this.l.setTimeout(b,a)}};
Z.prototype.w=function(a){a&&++this.B;1==this.j&&(null!=this.s&&(this.l.clearTimeout(this.s),this.s=null),this.j=0);hc(this)};Z.prototype.H=function(){return!(!window||!Array)};Z.prototype.J=function(){return this.B};Z.prototype.nq=Z.prototype.C;Z.prototype.nqa=Z.prototype.v;Z.prototype.al=Z.prototype.I;Z.prototype.rl=Z.prototype.w;Z.prototype.sz=Z.prototype.H;Z.prototype.tc=Z.prototype.J;var hc=function(a){var b=yb("sjr::tryrun",q(a.K,a));a.l.setTimeout(b,0)};
Z.prototype.K=function(){if(0==this.j&&this.u.length){var a=this.u.shift();this.j=2;var b=yb("sjr::run",q(this.A,this,a));a.j.setTimeout(b,0);hc(this)}};Z.prototype.A=function(a){this.j=0;a.l()};
var ic=function(a){try{return a.sz()}catch(b){return!1}},jc=function(a){return!!a&&("object"===typeof a||"function"===typeof a)&&ic(a)&&N(a.nq)&&N(a.nqa)&&N(a.al)&&N(a.rl)},kc=function(){if(Y&&ic(Y))return Y;var a=Cb(),b=a.google_jobrunner;return jc(b)?Y=b:a.google_jobrunner=Y=new Z(a)},lc=function(a,b){kc().nq(a,b)},mc=function(a,b){kc().nqa(a,b)};var nc=jb?1==ib(L):!ib(L),oc=function(){var a=ma?"https":"http",b=J("script"),c;a:{if(C)try{var d=L.google_cafe_host||L.top.google_cafe_host;if(d){c=d;break a}}catch(e){}c=ea("","pagead2.googlesyndication.com")}return["<",b,' src="',Ib(c,["/pagead/js/",B(),"/r20151006/show_ads_impl.js"].join(""),a),'"></',b,">"].join("")},pc=function(a,b,c,
d){return function(){var e=!1;d&&kc().al(3E4);try{var f=a.document.getElementById(b).contentWindow;if(Oa(f)){var g=a.document.getElementById(b).contentWindow,h=g.document;h.body&&h.body.firstChild||(/Firefox/.test(navigator.userAgent)?h.open("text/html","replace"):h.open(),g.google_async_iframe_close=!0,h.write(c))}else{for(var k=a.document.getElementById(b).contentWindow,f=c,f=String(f),g=['"'],h=0;h<f.length;h++){var l=f.charAt(h),m=l.charCodeAt(0),p=h+1,v;if(!(v=ua[l])){var x;if(31<m&&127>m)x=
l;else{var u=l;if(u in E)x=E[u];else if(u in ua)x=E[u]=ua[u];else{var z=void 0,w=u.charCodeAt(0);if(31<w&&127>w)z=u;else{if(256>w){if(z="\\x",16>w||256<w)z+="0"}else z="\\u",4096>w&&(z+="0");z+=w.toString(16).toUpperCase()}x=E[u]=z}}v=x}g[p]=v}g.push('"');k.location.replace("javascript:"+g.join(""))}e=!0}catch(Ub){k=Cb().google_jobrunner,jc(k)&&k.rl()}e&&(e=bc("google_async_rrc",c),(new V(a)).set(b,pc(a,b,e,!1)))}},qc=function(a){var b=["<iframe"];fb(a,function(a,d){null!=a&&b.push(" "+d+'="'+a+'"')});
b.push("></iframe>");return b.join("")},rc=function(a){if(!X)a:{for(var b=[n.top],c=[],d=0,e;e=b[d++];){c.push(e);try{if(e.frames)for(var f=e.frames.length,g=0;g<f&&1024>b.length;++g)b.push(e.frames[g])}catch(k){}}for(b=0;b<c.length;b++)try{var h=c[b].frames.google_esf;if(h){X=h;break a}}catch(k){}X=null}if(!X){c={style:"display:none"};if(/[^a-z0-9-]/.test(a))return"";c["data-ad-client"]=ec(a);c.id="google_esf";c.name="google_esf";a=Ib(ea("","googleads.g.doubleclick.net"),
["/pagead/html/",B(),"/r20151006/zrt_lookup.html"].join(""));c.src=a;return qc(c)}return""},sc=function(a,b){var c=b.google_ad_output,d=b.google_ad_format;d||"html"!=c&&null!=c||(d=b.google_ad_width+"x"+b.google_ad_height);c=!b.google_ad_slot||b.google_override_format||!fc[b.google_ad_width+"x"+b.google_ad_height]&&"aa"==b.google_loader_used;d&&c?d=d.toLowerCase():d="";b.google_ad_format=d;if("number"!=typeof b.google_reactive_sra_index||
!b.google_ad_unit_key){for(var d=[b.google_ad_slot,b.google_ad_format,b.google_ad_type,b.google_ad_width,b.google_ad_height],c=[],e=0,f=db.parentElement;f&&25>e;f=f.parentNode,++e)c.push(9!==f.nodeType&&f.id||"");(c=c.join())&&d.push(c);b.google_ad_unit_key=Sa(d.join(":")).toString();d=a.google_adk2_experiment=a.google_adk2_experiment||Qa(["C","E"],ia)||"N";if("E"==d){d=db;c=[];for(e=0;d&&25>e;++e){var f=(f=9!==d.nodeType&&d.id)?"/"+f:"",g;a:{if(d&&d.nodeName&&d.parentElement){g=d.nodeName.toString().toLowerCase();
for(var h=d.parentElement.childNodes,k=0,l=0;l<h.length;++l){var m=h[l];if(m.nodeName&&m.nodeName.toString().toLowerCase()===g){if(d===m){g="."+k;break a}++k}}}g=""}c.push((d.nodeName&&d.nodeName.toString().toLowerCase())+f+g);d=d.parentElement}d=c.join()+":";c=a;e=[];if(c)try{for(var p=c.parent,f=0;p&&p!==c&&25>f;++f){var v=p.frames;for(g=0;g<v.length;++g)if(c===v[g]){e.push(g);break}c=p;p=c.parent}}catch(x){}b.google_ad_dom_fingerprint=Sa(d+e.join()).toString()}else"C"==d&&(b.google_ad_dom_fingerprint=
"ctrl")}};(function(a){P.l=function(b){wa(a,function(a){a(b)})}})([function(a){a.shv=B()},function(a){Ra(zb,function(b,c){try{null!=n[b]&&(a[c]=n[b])}catch(d){}})}]);
xb("sa::main",function(){var a=window,b=a.google_ad_modifications=a.google_ad_modifications||{};if(!b.plle){b.plle=!0;var c=b.eids=b.eids||[],b=b.loeids=b.loeids||[],d,e,f;d=R.M;e=d.o;if(a.location&&a.location.hash=="#google_plle_"+e)d=e;else{d=[d.m,e];e=new Q(y,y+A-1);var g;(g=0>=A||A%d.length)||(g=Gb.j,g=!(g.l<=e.l&&g.j>=e.j));g?d=null:(g=Ab(a),d=null!==g&&e.l<=g&&e.j>=g?d[(g-y)%d.length]:null)}d&&b.push(d);d=Eb;(d=S(a,fa,d.m,d.o))&&c.push(d);d=Fb;(d=S(a,ga,d.m,d.o))&&c.push(d);d=R.N;(e=S(a,ha,
d.m,d.o))&&b.push(e);e==d.m?f=Db.m:e==d.o?f=Db.o:f="";f&&c.push(f);d=R.D;(c=S(a,ja,d.m,d.o))&&b.push(c);bb.body||(d=R.L,(c=S(a,ka,d.m,d.o))&&b.push(c))}f=a.google_ad_slot;b=a.google_ad_modifications;!b||mb(b.ad_whitelist,f,void 0)?b=null:(c=b.space_collapsing||"none",b=(f=mb(b.ad_blacklist,f))?{F:!0,O:f.space_collapsing||c}:b.remove_ads_by_default?{F:!0,O:c}:null);if(b&&b.F)$b(a);else if(hb(a),!1===window.google_enable_async||cc.test(navigator.userAgent)||window.google_container_id||window.google_ad_output&&
"html"!=window.google_ad_output)a.google_loader_used="sb",a.google_start_time=r,sc(a,a),document.write(rc(a.google_ad_client)+oc());else{nc&&(c=a.google_ad_client,b=navigator,a&&c&&b&&(b=a.document,c=ec(c),/[^a-z0-9-]/.test(c)||((f=D("r20160212"))&&(f+="/"),f=Ib("pagead2.googlesyndication.com","/pub-config/"+f+c+".js"),c=b.createElement("script"),c.src=f,(b=b.getElementsByTagName("script")[0])&&b.parentNode&&b.parentNode.insertBefore(c,b))));a.google_unique_id?++a.google_unique_id:
a.google_unique_id=1;c={};null==a.google_ad_client&&Xb(a)&&(c.google_loader_features_used=2048);Wb(a,c);c.google_loader_used="sa";$b(a);b=J("script");f={};d=c.google_ad_height;f.width='"'+c.google_ad_width+'"';f.height='"'+d+'"';f.frameborder='"0"';f.marginwidth='"0"';f.marginheight='"0"';f.vspace='"0"';f.hspace='"0"';f.allowtransparency='"true"';f.scrolling='"no"';f.allowfullscreen='"true"';f.onload='"'+ac+'"';var h;d=a.document;e=f.id;for(g=0;!e||d.getElementById(e);)e="aswift_"+g++;f.id=e;f.name=
e;e=c.google_ad_width;g=c.google_ad_height;var k=R.D,l=k.m,m=k.o,p=c.google_active_plles=c.google_active_plles||[];O(lb(a),l)||O(kb(a),l)?p.push(l):(O(lb(a),m)||O(kb(a),m))&&p.push(m);dc=O(lb(a),k.o);k=["<iframe"];for(h in f)f.hasOwnProperty(h)&&gb(k,h+"="+f[h]);h="left:0;position:absolute;top:0;";dc&&(h=h+"width:"+e+"px;height:"+g+"px;");k.push('style="'+h+'"');k.push("></iframe>");h=f.id;e="border:none;height:"+g+"px;margin:0;padding:0;position:relative;visibility:visible;width:"+e+"px;background-color:transparent";
d.write(['<ins id="',h+"_expand",'" style="display:inline-table;',e,'"><ins id="',h+"_anchor",'" style="display:block;',e,'">',k.join(" "),"</ins></ins>"].join(""));h=f.id;sc(a,c);f=Zb(c);d=Yb(c);c=rc(c.google_ad_client);e=(new Date).getTime();b=["<!doctype html><html><body>",c,"<",b,">",f,"google_show_ads_impl=true;google_unique_id=",ib(a),';google_async_iframe_id="',h,'";google_start_time=',r,";",d?'google_pub_vars = "'+d+'";':"","google_bpp=",e>r?e-r:1,";google_async_rrc=0;google_iframe_start_time=new Date().getTime();</",
b,">",oc(),"</body></html>"].join("");(a.document.getElementById(h)?lc:mc)(pc(a,h,b,!0))}});}).call(this);
