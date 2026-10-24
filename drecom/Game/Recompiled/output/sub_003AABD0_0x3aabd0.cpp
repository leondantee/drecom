#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AABD0
// Address: 0x3aabd0 - 0x3ac100
void sub_003AABD0_0x3aabd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AABD0_0x3aabd0");
#endif

    switch (ctx->pc) {
        case 0x3aabd0u: goto label_3aabd0;
        case 0x3aabd4u: goto label_3aabd4;
        case 0x3aabd8u: goto label_3aabd8;
        case 0x3aabdcu: goto label_3aabdc;
        case 0x3aabe0u: goto label_3aabe0;
        case 0x3aabe4u: goto label_3aabe4;
        case 0x3aabe8u: goto label_3aabe8;
        case 0x3aabecu: goto label_3aabec;
        case 0x3aabf0u: goto label_3aabf0;
        case 0x3aabf4u: goto label_3aabf4;
        case 0x3aabf8u: goto label_3aabf8;
        case 0x3aabfcu: goto label_3aabfc;
        case 0x3aac00u: goto label_3aac00;
        case 0x3aac04u: goto label_3aac04;
        case 0x3aac08u: goto label_3aac08;
        case 0x3aac0cu: goto label_3aac0c;
        case 0x3aac10u: goto label_3aac10;
        case 0x3aac14u: goto label_3aac14;
        case 0x3aac18u: goto label_3aac18;
        case 0x3aac1cu: goto label_3aac1c;
        case 0x3aac20u: goto label_3aac20;
        case 0x3aac24u: goto label_3aac24;
        case 0x3aac28u: goto label_3aac28;
        case 0x3aac2cu: goto label_3aac2c;
        case 0x3aac30u: goto label_3aac30;
        case 0x3aac34u: goto label_3aac34;
        case 0x3aac38u: goto label_3aac38;
        case 0x3aac3cu: goto label_3aac3c;
        case 0x3aac40u: goto label_3aac40;
        case 0x3aac44u: goto label_3aac44;
        case 0x3aac48u: goto label_3aac48;
        case 0x3aac4cu: goto label_3aac4c;
        case 0x3aac50u: goto label_3aac50;
        case 0x3aac54u: goto label_3aac54;
        case 0x3aac58u: goto label_3aac58;
        case 0x3aac5cu: goto label_3aac5c;
        case 0x3aac60u: goto label_3aac60;
        case 0x3aac64u: goto label_3aac64;
        case 0x3aac68u: goto label_3aac68;
        case 0x3aac6cu: goto label_3aac6c;
        case 0x3aac70u: goto label_3aac70;
        case 0x3aac74u: goto label_3aac74;
        case 0x3aac78u: goto label_3aac78;
        case 0x3aac7cu: goto label_3aac7c;
        case 0x3aac80u: goto label_3aac80;
        case 0x3aac84u: goto label_3aac84;
        case 0x3aac88u: goto label_3aac88;
        case 0x3aac8cu: goto label_3aac8c;
        case 0x3aac90u: goto label_3aac90;
        case 0x3aac94u: goto label_3aac94;
        case 0x3aac98u: goto label_3aac98;
        case 0x3aac9cu: goto label_3aac9c;
        case 0x3aaca0u: goto label_3aaca0;
        case 0x3aaca4u: goto label_3aaca4;
        case 0x3aaca8u: goto label_3aaca8;
        case 0x3aacacu: goto label_3aacac;
        case 0x3aacb0u: goto label_3aacb0;
        case 0x3aacb4u: goto label_3aacb4;
        case 0x3aacb8u: goto label_3aacb8;
        case 0x3aacbcu: goto label_3aacbc;
        case 0x3aacc0u: goto label_3aacc0;
        case 0x3aacc4u: goto label_3aacc4;
        case 0x3aacc8u: goto label_3aacc8;
        case 0x3aacccu: goto label_3aaccc;
        case 0x3aacd0u: goto label_3aacd0;
        case 0x3aacd4u: goto label_3aacd4;
        case 0x3aacd8u: goto label_3aacd8;
        case 0x3aacdcu: goto label_3aacdc;
        case 0x3aace0u: goto label_3aace0;
        case 0x3aace4u: goto label_3aace4;
        case 0x3aace8u: goto label_3aace8;
        case 0x3aacecu: goto label_3aacec;
        case 0x3aacf0u: goto label_3aacf0;
        case 0x3aacf4u: goto label_3aacf4;
        case 0x3aacf8u: goto label_3aacf8;
        case 0x3aacfcu: goto label_3aacfc;
        case 0x3aad00u: goto label_3aad00;
        case 0x3aad04u: goto label_3aad04;
        case 0x3aad08u: goto label_3aad08;
        case 0x3aad0cu: goto label_3aad0c;
        case 0x3aad10u: goto label_3aad10;
        case 0x3aad14u: goto label_3aad14;
        case 0x3aad18u: goto label_3aad18;
        case 0x3aad1cu: goto label_3aad1c;
        case 0x3aad20u: goto label_3aad20;
        case 0x3aad24u: goto label_3aad24;
        case 0x3aad28u: goto label_3aad28;
        case 0x3aad2cu: goto label_3aad2c;
        case 0x3aad30u: goto label_3aad30;
        case 0x3aad34u: goto label_3aad34;
        case 0x3aad38u: goto label_3aad38;
        case 0x3aad3cu: goto label_3aad3c;
        case 0x3aad40u: goto label_3aad40;
        case 0x3aad44u: goto label_3aad44;
        case 0x3aad48u: goto label_3aad48;
        case 0x3aad4cu: goto label_3aad4c;
        case 0x3aad50u: goto label_3aad50;
        case 0x3aad54u: goto label_3aad54;
        case 0x3aad58u: goto label_3aad58;
        case 0x3aad5cu: goto label_3aad5c;
        case 0x3aad60u: goto label_3aad60;
        case 0x3aad64u: goto label_3aad64;
        case 0x3aad68u: goto label_3aad68;
        case 0x3aad6cu: goto label_3aad6c;
        case 0x3aad70u: goto label_3aad70;
        case 0x3aad74u: goto label_3aad74;
        case 0x3aad78u: goto label_3aad78;
        case 0x3aad7cu: goto label_3aad7c;
        case 0x3aad80u: goto label_3aad80;
        case 0x3aad84u: goto label_3aad84;
        case 0x3aad88u: goto label_3aad88;
        case 0x3aad8cu: goto label_3aad8c;
        case 0x3aad90u: goto label_3aad90;
        case 0x3aad94u: goto label_3aad94;
        case 0x3aad98u: goto label_3aad98;
        case 0x3aad9cu: goto label_3aad9c;
        case 0x3aada0u: goto label_3aada0;
        case 0x3aada4u: goto label_3aada4;
        case 0x3aada8u: goto label_3aada8;
        case 0x3aadacu: goto label_3aadac;
        case 0x3aadb0u: goto label_3aadb0;
        case 0x3aadb4u: goto label_3aadb4;
        case 0x3aadb8u: goto label_3aadb8;
        case 0x3aadbcu: goto label_3aadbc;
        case 0x3aadc0u: goto label_3aadc0;
        case 0x3aadc4u: goto label_3aadc4;
        case 0x3aadc8u: goto label_3aadc8;
        case 0x3aadccu: goto label_3aadcc;
        case 0x3aadd0u: goto label_3aadd0;
        case 0x3aadd4u: goto label_3aadd4;
        case 0x3aadd8u: goto label_3aadd8;
        case 0x3aaddcu: goto label_3aaddc;
        case 0x3aade0u: goto label_3aade0;
        case 0x3aade4u: goto label_3aade4;
        case 0x3aade8u: goto label_3aade8;
        case 0x3aadecu: goto label_3aadec;
        case 0x3aadf0u: goto label_3aadf0;
        case 0x3aadf4u: goto label_3aadf4;
        case 0x3aadf8u: goto label_3aadf8;
        case 0x3aadfcu: goto label_3aadfc;
        case 0x3aae00u: goto label_3aae00;
        case 0x3aae04u: goto label_3aae04;
        case 0x3aae08u: goto label_3aae08;
        case 0x3aae0cu: goto label_3aae0c;
        case 0x3aae10u: goto label_3aae10;
        case 0x3aae14u: goto label_3aae14;
        case 0x3aae18u: goto label_3aae18;
        case 0x3aae1cu: goto label_3aae1c;
        case 0x3aae20u: goto label_3aae20;
        case 0x3aae24u: goto label_3aae24;
        case 0x3aae28u: goto label_3aae28;
        case 0x3aae2cu: goto label_3aae2c;
        case 0x3aae30u: goto label_3aae30;
        case 0x3aae34u: goto label_3aae34;
        case 0x3aae38u: goto label_3aae38;
        case 0x3aae3cu: goto label_3aae3c;
        case 0x3aae40u: goto label_3aae40;
        case 0x3aae44u: goto label_3aae44;
        case 0x3aae48u: goto label_3aae48;
        case 0x3aae4cu: goto label_3aae4c;
        case 0x3aae50u: goto label_3aae50;
        case 0x3aae54u: goto label_3aae54;
        case 0x3aae58u: goto label_3aae58;
        case 0x3aae5cu: goto label_3aae5c;
        case 0x3aae60u: goto label_3aae60;
        case 0x3aae64u: goto label_3aae64;
        case 0x3aae68u: goto label_3aae68;
        case 0x3aae6cu: goto label_3aae6c;
        case 0x3aae70u: goto label_3aae70;
        case 0x3aae74u: goto label_3aae74;
        case 0x3aae78u: goto label_3aae78;
        case 0x3aae7cu: goto label_3aae7c;
        case 0x3aae80u: goto label_3aae80;
        case 0x3aae84u: goto label_3aae84;
        case 0x3aae88u: goto label_3aae88;
        case 0x3aae8cu: goto label_3aae8c;
        case 0x3aae90u: goto label_3aae90;
        case 0x3aae94u: goto label_3aae94;
        case 0x3aae98u: goto label_3aae98;
        case 0x3aae9cu: goto label_3aae9c;
        case 0x3aaea0u: goto label_3aaea0;
        case 0x3aaea4u: goto label_3aaea4;
        case 0x3aaea8u: goto label_3aaea8;
        case 0x3aaeacu: goto label_3aaeac;
        case 0x3aaeb0u: goto label_3aaeb0;
        case 0x3aaeb4u: goto label_3aaeb4;
        case 0x3aaeb8u: goto label_3aaeb8;
        case 0x3aaebcu: goto label_3aaebc;
        case 0x3aaec0u: goto label_3aaec0;
        case 0x3aaec4u: goto label_3aaec4;
        case 0x3aaec8u: goto label_3aaec8;
        case 0x3aaeccu: goto label_3aaecc;
        case 0x3aaed0u: goto label_3aaed0;
        case 0x3aaed4u: goto label_3aaed4;
        case 0x3aaed8u: goto label_3aaed8;
        case 0x3aaedcu: goto label_3aaedc;
        case 0x3aaee0u: goto label_3aaee0;
        case 0x3aaee4u: goto label_3aaee4;
        case 0x3aaee8u: goto label_3aaee8;
        case 0x3aaeecu: goto label_3aaeec;
        case 0x3aaef0u: goto label_3aaef0;
        case 0x3aaef4u: goto label_3aaef4;
        case 0x3aaef8u: goto label_3aaef8;
        case 0x3aaefcu: goto label_3aaefc;
        case 0x3aaf00u: goto label_3aaf00;
        case 0x3aaf04u: goto label_3aaf04;
        case 0x3aaf08u: goto label_3aaf08;
        case 0x3aaf0cu: goto label_3aaf0c;
        case 0x3aaf10u: goto label_3aaf10;
        case 0x3aaf14u: goto label_3aaf14;
        case 0x3aaf18u: goto label_3aaf18;
        case 0x3aaf1cu: goto label_3aaf1c;
        case 0x3aaf20u: goto label_3aaf20;
        case 0x3aaf24u: goto label_3aaf24;
        case 0x3aaf28u: goto label_3aaf28;
        case 0x3aaf2cu: goto label_3aaf2c;
        case 0x3aaf30u: goto label_3aaf30;
        case 0x3aaf34u: goto label_3aaf34;
        case 0x3aaf38u: goto label_3aaf38;
        case 0x3aaf3cu: goto label_3aaf3c;
        case 0x3aaf40u: goto label_3aaf40;
        case 0x3aaf44u: goto label_3aaf44;
        case 0x3aaf48u: goto label_3aaf48;
        case 0x3aaf4cu: goto label_3aaf4c;
        case 0x3aaf50u: goto label_3aaf50;
        case 0x3aaf54u: goto label_3aaf54;
        case 0x3aaf58u: goto label_3aaf58;
        case 0x3aaf5cu: goto label_3aaf5c;
        case 0x3aaf60u: goto label_3aaf60;
        case 0x3aaf64u: goto label_3aaf64;
        case 0x3aaf68u: goto label_3aaf68;
        case 0x3aaf6cu: goto label_3aaf6c;
        case 0x3aaf70u: goto label_3aaf70;
        case 0x3aaf74u: goto label_3aaf74;
        case 0x3aaf78u: goto label_3aaf78;
        case 0x3aaf7cu: goto label_3aaf7c;
        case 0x3aaf80u: goto label_3aaf80;
        case 0x3aaf84u: goto label_3aaf84;
        case 0x3aaf88u: goto label_3aaf88;
        case 0x3aaf8cu: goto label_3aaf8c;
        case 0x3aaf90u: goto label_3aaf90;
        case 0x3aaf94u: goto label_3aaf94;
        case 0x3aaf98u: goto label_3aaf98;
        case 0x3aaf9cu: goto label_3aaf9c;
        case 0x3aafa0u: goto label_3aafa0;
        case 0x3aafa4u: goto label_3aafa4;
        case 0x3aafa8u: goto label_3aafa8;
        case 0x3aafacu: goto label_3aafac;
        case 0x3aafb0u: goto label_3aafb0;
        case 0x3aafb4u: goto label_3aafb4;
        case 0x3aafb8u: goto label_3aafb8;
        case 0x3aafbcu: goto label_3aafbc;
        case 0x3aafc0u: goto label_3aafc0;
        case 0x3aafc4u: goto label_3aafc4;
        case 0x3aafc8u: goto label_3aafc8;
        case 0x3aafccu: goto label_3aafcc;
        case 0x3aafd0u: goto label_3aafd0;
        case 0x3aafd4u: goto label_3aafd4;
        case 0x3aafd8u: goto label_3aafd8;
        case 0x3aafdcu: goto label_3aafdc;
        case 0x3aafe0u: goto label_3aafe0;
        case 0x3aafe4u: goto label_3aafe4;
        case 0x3aafe8u: goto label_3aafe8;
        case 0x3aafecu: goto label_3aafec;
        case 0x3aaff0u: goto label_3aaff0;
        case 0x3aaff4u: goto label_3aaff4;
        case 0x3aaff8u: goto label_3aaff8;
        case 0x3aaffcu: goto label_3aaffc;
        case 0x3ab000u: goto label_3ab000;
        case 0x3ab004u: goto label_3ab004;
        case 0x3ab008u: goto label_3ab008;
        case 0x3ab00cu: goto label_3ab00c;
        case 0x3ab010u: goto label_3ab010;
        case 0x3ab014u: goto label_3ab014;
        case 0x3ab018u: goto label_3ab018;
        case 0x3ab01cu: goto label_3ab01c;
        case 0x3ab020u: goto label_3ab020;
        case 0x3ab024u: goto label_3ab024;
        case 0x3ab028u: goto label_3ab028;
        case 0x3ab02cu: goto label_3ab02c;
        case 0x3ab030u: goto label_3ab030;
        case 0x3ab034u: goto label_3ab034;
        case 0x3ab038u: goto label_3ab038;
        case 0x3ab03cu: goto label_3ab03c;
        case 0x3ab040u: goto label_3ab040;
        case 0x3ab044u: goto label_3ab044;
        case 0x3ab048u: goto label_3ab048;
        case 0x3ab04cu: goto label_3ab04c;
        case 0x3ab050u: goto label_3ab050;
        case 0x3ab054u: goto label_3ab054;
        case 0x3ab058u: goto label_3ab058;
        case 0x3ab05cu: goto label_3ab05c;
        case 0x3ab060u: goto label_3ab060;
        case 0x3ab064u: goto label_3ab064;
        case 0x3ab068u: goto label_3ab068;
        case 0x3ab06cu: goto label_3ab06c;
        case 0x3ab070u: goto label_3ab070;
        case 0x3ab074u: goto label_3ab074;
        case 0x3ab078u: goto label_3ab078;
        case 0x3ab07cu: goto label_3ab07c;
        case 0x3ab080u: goto label_3ab080;
        case 0x3ab084u: goto label_3ab084;
        case 0x3ab088u: goto label_3ab088;
        case 0x3ab08cu: goto label_3ab08c;
        case 0x3ab090u: goto label_3ab090;
        case 0x3ab094u: goto label_3ab094;
        case 0x3ab098u: goto label_3ab098;
        case 0x3ab09cu: goto label_3ab09c;
        case 0x3ab0a0u: goto label_3ab0a0;
        case 0x3ab0a4u: goto label_3ab0a4;
        case 0x3ab0a8u: goto label_3ab0a8;
        case 0x3ab0acu: goto label_3ab0ac;
        case 0x3ab0b0u: goto label_3ab0b0;
        case 0x3ab0b4u: goto label_3ab0b4;
        case 0x3ab0b8u: goto label_3ab0b8;
        case 0x3ab0bcu: goto label_3ab0bc;
        case 0x3ab0c0u: goto label_3ab0c0;
        case 0x3ab0c4u: goto label_3ab0c4;
        case 0x3ab0c8u: goto label_3ab0c8;
        case 0x3ab0ccu: goto label_3ab0cc;
        case 0x3ab0d0u: goto label_3ab0d0;
        case 0x3ab0d4u: goto label_3ab0d4;
        case 0x3ab0d8u: goto label_3ab0d8;
        case 0x3ab0dcu: goto label_3ab0dc;
        case 0x3ab0e0u: goto label_3ab0e0;
        case 0x3ab0e4u: goto label_3ab0e4;
        case 0x3ab0e8u: goto label_3ab0e8;
        case 0x3ab0ecu: goto label_3ab0ec;
        case 0x3ab0f0u: goto label_3ab0f0;
        case 0x3ab0f4u: goto label_3ab0f4;
        case 0x3ab0f8u: goto label_3ab0f8;
        case 0x3ab0fcu: goto label_3ab0fc;
        case 0x3ab100u: goto label_3ab100;
        case 0x3ab104u: goto label_3ab104;
        case 0x3ab108u: goto label_3ab108;
        case 0x3ab10cu: goto label_3ab10c;
        case 0x3ab110u: goto label_3ab110;
        case 0x3ab114u: goto label_3ab114;
        case 0x3ab118u: goto label_3ab118;
        case 0x3ab11cu: goto label_3ab11c;
        case 0x3ab120u: goto label_3ab120;
        case 0x3ab124u: goto label_3ab124;
        case 0x3ab128u: goto label_3ab128;
        case 0x3ab12cu: goto label_3ab12c;
        case 0x3ab130u: goto label_3ab130;
        case 0x3ab134u: goto label_3ab134;
        case 0x3ab138u: goto label_3ab138;
        case 0x3ab13cu: goto label_3ab13c;
        case 0x3ab140u: goto label_3ab140;
        case 0x3ab144u: goto label_3ab144;
        case 0x3ab148u: goto label_3ab148;
        case 0x3ab14cu: goto label_3ab14c;
        case 0x3ab150u: goto label_3ab150;
        case 0x3ab154u: goto label_3ab154;
        case 0x3ab158u: goto label_3ab158;
        case 0x3ab15cu: goto label_3ab15c;
        case 0x3ab160u: goto label_3ab160;
        case 0x3ab164u: goto label_3ab164;
        case 0x3ab168u: goto label_3ab168;
        case 0x3ab16cu: goto label_3ab16c;
        case 0x3ab170u: goto label_3ab170;
        case 0x3ab174u: goto label_3ab174;
        case 0x3ab178u: goto label_3ab178;
        case 0x3ab17cu: goto label_3ab17c;
        case 0x3ab180u: goto label_3ab180;
        case 0x3ab184u: goto label_3ab184;
        case 0x3ab188u: goto label_3ab188;
        case 0x3ab18cu: goto label_3ab18c;
        case 0x3ab190u: goto label_3ab190;
        case 0x3ab194u: goto label_3ab194;
        case 0x3ab198u: goto label_3ab198;
        case 0x3ab19cu: goto label_3ab19c;
        case 0x3ab1a0u: goto label_3ab1a0;
        case 0x3ab1a4u: goto label_3ab1a4;
        case 0x3ab1a8u: goto label_3ab1a8;
        case 0x3ab1acu: goto label_3ab1ac;
        case 0x3ab1b0u: goto label_3ab1b0;
        case 0x3ab1b4u: goto label_3ab1b4;
        case 0x3ab1b8u: goto label_3ab1b8;
        case 0x3ab1bcu: goto label_3ab1bc;
        case 0x3ab1c0u: goto label_3ab1c0;
        case 0x3ab1c4u: goto label_3ab1c4;
        case 0x3ab1c8u: goto label_3ab1c8;
        case 0x3ab1ccu: goto label_3ab1cc;
        case 0x3ab1d0u: goto label_3ab1d0;
        case 0x3ab1d4u: goto label_3ab1d4;
        case 0x3ab1d8u: goto label_3ab1d8;
        case 0x3ab1dcu: goto label_3ab1dc;
        case 0x3ab1e0u: goto label_3ab1e0;
        case 0x3ab1e4u: goto label_3ab1e4;
        case 0x3ab1e8u: goto label_3ab1e8;
        case 0x3ab1ecu: goto label_3ab1ec;
        case 0x3ab1f0u: goto label_3ab1f0;
        case 0x3ab1f4u: goto label_3ab1f4;
        case 0x3ab1f8u: goto label_3ab1f8;
        case 0x3ab1fcu: goto label_3ab1fc;
        case 0x3ab200u: goto label_3ab200;
        case 0x3ab204u: goto label_3ab204;
        case 0x3ab208u: goto label_3ab208;
        case 0x3ab20cu: goto label_3ab20c;
        case 0x3ab210u: goto label_3ab210;
        case 0x3ab214u: goto label_3ab214;
        case 0x3ab218u: goto label_3ab218;
        case 0x3ab21cu: goto label_3ab21c;
        case 0x3ab220u: goto label_3ab220;
        case 0x3ab224u: goto label_3ab224;
        case 0x3ab228u: goto label_3ab228;
        case 0x3ab22cu: goto label_3ab22c;
        case 0x3ab230u: goto label_3ab230;
        case 0x3ab234u: goto label_3ab234;
        case 0x3ab238u: goto label_3ab238;
        case 0x3ab23cu: goto label_3ab23c;
        case 0x3ab240u: goto label_3ab240;
        case 0x3ab244u: goto label_3ab244;
        case 0x3ab248u: goto label_3ab248;
        case 0x3ab24cu: goto label_3ab24c;
        case 0x3ab250u: goto label_3ab250;
        case 0x3ab254u: goto label_3ab254;
        case 0x3ab258u: goto label_3ab258;
        case 0x3ab25cu: goto label_3ab25c;
        case 0x3ab260u: goto label_3ab260;
        case 0x3ab264u: goto label_3ab264;
        case 0x3ab268u: goto label_3ab268;
        case 0x3ab26cu: goto label_3ab26c;
        case 0x3ab270u: goto label_3ab270;
        case 0x3ab274u: goto label_3ab274;
        case 0x3ab278u: goto label_3ab278;
        case 0x3ab27cu: goto label_3ab27c;
        case 0x3ab280u: goto label_3ab280;
        case 0x3ab284u: goto label_3ab284;
        case 0x3ab288u: goto label_3ab288;
        case 0x3ab28cu: goto label_3ab28c;
        case 0x3ab290u: goto label_3ab290;
        case 0x3ab294u: goto label_3ab294;
        case 0x3ab298u: goto label_3ab298;
        case 0x3ab29cu: goto label_3ab29c;
        case 0x3ab2a0u: goto label_3ab2a0;
        case 0x3ab2a4u: goto label_3ab2a4;
        case 0x3ab2a8u: goto label_3ab2a8;
        case 0x3ab2acu: goto label_3ab2ac;
        case 0x3ab2b0u: goto label_3ab2b0;
        case 0x3ab2b4u: goto label_3ab2b4;
        case 0x3ab2b8u: goto label_3ab2b8;
        case 0x3ab2bcu: goto label_3ab2bc;
        case 0x3ab2c0u: goto label_3ab2c0;
        case 0x3ab2c4u: goto label_3ab2c4;
        case 0x3ab2c8u: goto label_3ab2c8;
        case 0x3ab2ccu: goto label_3ab2cc;
        case 0x3ab2d0u: goto label_3ab2d0;
        case 0x3ab2d4u: goto label_3ab2d4;
        case 0x3ab2d8u: goto label_3ab2d8;
        case 0x3ab2dcu: goto label_3ab2dc;
        case 0x3ab2e0u: goto label_3ab2e0;
        case 0x3ab2e4u: goto label_3ab2e4;
        case 0x3ab2e8u: goto label_3ab2e8;
        case 0x3ab2ecu: goto label_3ab2ec;
        case 0x3ab2f0u: goto label_3ab2f0;
        case 0x3ab2f4u: goto label_3ab2f4;
        case 0x3ab2f8u: goto label_3ab2f8;
        case 0x3ab2fcu: goto label_3ab2fc;
        case 0x3ab300u: goto label_3ab300;
        case 0x3ab304u: goto label_3ab304;
        case 0x3ab308u: goto label_3ab308;
        case 0x3ab30cu: goto label_3ab30c;
        case 0x3ab310u: goto label_3ab310;
        case 0x3ab314u: goto label_3ab314;
        case 0x3ab318u: goto label_3ab318;
        case 0x3ab31cu: goto label_3ab31c;
        case 0x3ab320u: goto label_3ab320;
        case 0x3ab324u: goto label_3ab324;
        case 0x3ab328u: goto label_3ab328;
        case 0x3ab32cu: goto label_3ab32c;
        case 0x3ab330u: goto label_3ab330;
        case 0x3ab334u: goto label_3ab334;
        case 0x3ab338u: goto label_3ab338;
        case 0x3ab33cu: goto label_3ab33c;
        case 0x3ab340u: goto label_3ab340;
        case 0x3ab344u: goto label_3ab344;
        case 0x3ab348u: goto label_3ab348;
        case 0x3ab34cu: goto label_3ab34c;
        case 0x3ab350u: goto label_3ab350;
        case 0x3ab354u: goto label_3ab354;
        case 0x3ab358u: goto label_3ab358;
        case 0x3ab35cu: goto label_3ab35c;
        case 0x3ab360u: goto label_3ab360;
        case 0x3ab364u: goto label_3ab364;
        case 0x3ab368u: goto label_3ab368;
        case 0x3ab36cu: goto label_3ab36c;
        case 0x3ab370u: goto label_3ab370;
        case 0x3ab374u: goto label_3ab374;
        case 0x3ab378u: goto label_3ab378;
        case 0x3ab37cu: goto label_3ab37c;
        case 0x3ab380u: goto label_3ab380;
        case 0x3ab384u: goto label_3ab384;
        case 0x3ab388u: goto label_3ab388;
        case 0x3ab38cu: goto label_3ab38c;
        case 0x3ab390u: goto label_3ab390;
        case 0x3ab394u: goto label_3ab394;
        case 0x3ab398u: goto label_3ab398;
        case 0x3ab39cu: goto label_3ab39c;
        case 0x3ab3a0u: goto label_3ab3a0;
        case 0x3ab3a4u: goto label_3ab3a4;
        case 0x3ab3a8u: goto label_3ab3a8;
        case 0x3ab3acu: goto label_3ab3ac;
        case 0x3ab3b0u: goto label_3ab3b0;
        case 0x3ab3b4u: goto label_3ab3b4;
        case 0x3ab3b8u: goto label_3ab3b8;
        case 0x3ab3bcu: goto label_3ab3bc;
        case 0x3ab3c0u: goto label_3ab3c0;
        case 0x3ab3c4u: goto label_3ab3c4;
        case 0x3ab3c8u: goto label_3ab3c8;
        case 0x3ab3ccu: goto label_3ab3cc;
        case 0x3ab3d0u: goto label_3ab3d0;
        case 0x3ab3d4u: goto label_3ab3d4;
        case 0x3ab3d8u: goto label_3ab3d8;
        case 0x3ab3dcu: goto label_3ab3dc;
        case 0x3ab3e0u: goto label_3ab3e0;
        case 0x3ab3e4u: goto label_3ab3e4;
        case 0x3ab3e8u: goto label_3ab3e8;
        case 0x3ab3ecu: goto label_3ab3ec;
        case 0x3ab3f0u: goto label_3ab3f0;
        case 0x3ab3f4u: goto label_3ab3f4;
        case 0x3ab3f8u: goto label_3ab3f8;
        case 0x3ab3fcu: goto label_3ab3fc;
        case 0x3ab400u: goto label_3ab400;
        case 0x3ab404u: goto label_3ab404;
        case 0x3ab408u: goto label_3ab408;
        case 0x3ab40cu: goto label_3ab40c;
        case 0x3ab410u: goto label_3ab410;
        case 0x3ab414u: goto label_3ab414;
        case 0x3ab418u: goto label_3ab418;
        case 0x3ab41cu: goto label_3ab41c;
        case 0x3ab420u: goto label_3ab420;
        case 0x3ab424u: goto label_3ab424;
        case 0x3ab428u: goto label_3ab428;
        case 0x3ab42cu: goto label_3ab42c;
        case 0x3ab430u: goto label_3ab430;
        case 0x3ab434u: goto label_3ab434;
        case 0x3ab438u: goto label_3ab438;
        case 0x3ab43cu: goto label_3ab43c;
        case 0x3ab440u: goto label_3ab440;
        case 0x3ab444u: goto label_3ab444;
        case 0x3ab448u: goto label_3ab448;
        case 0x3ab44cu: goto label_3ab44c;
        case 0x3ab450u: goto label_3ab450;
        case 0x3ab454u: goto label_3ab454;
        case 0x3ab458u: goto label_3ab458;
        case 0x3ab45cu: goto label_3ab45c;
        case 0x3ab460u: goto label_3ab460;
        case 0x3ab464u: goto label_3ab464;
        case 0x3ab468u: goto label_3ab468;
        case 0x3ab46cu: goto label_3ab46c;
        case 0x3ab470u: goto label_3ab470;
        case 0x3ab474u: goto label_3ab474;
        case 0x3ab478u: goto label_3ab478;
        case 0x3ab47cu: goto label_3ab47c;
        case 0x3ab480u: goto label_3ab480;
        case 0x3ab484u: goto label_3ab484;
        case 0x3ab488u: goto label_3ab488;
        case 0x3ab48cu: goto label_3ab48c;
        case 0x3ab490u: goto label_3ab490;
        case 0x3ab494u: goto label_3ab494;
        case 0x3ab498u: goto label_3ab498;
        case 0x3ab49cu: goto label_3ab49c;
        case 0x3ab4a0u: goto label_3ab4a0;
        case 0x3ab4a4u: goto label_3ab4a4;
        case 0x3ab4a8u: goto label_3ab4a8;
        case 0x3ab4acu: goto label_3ab4ac;
        case 0x3ab4b0u: goto label_3ab4b0;
        case 0x3ab4b4u: goto label_3ab4b4;
        case 0x3ab4b8u: goto label_3ab4b8;
        case 0x3ab4bcu: goto label_3ab4bc;
        case 0x3ab4c0u: goto label_3ab4c0;
        case 0x3ab4c4u: goto label_3ab4c4;
        case 0x3ab4c8u: goto label_3ab4c8;
        case 0x3ab4ccu: goto label_3ab4cc;
        case 0x3ab4d0u: goto label_3ab4d0;
        case 0x3ab4d4u: goto label_3ab4d4;
        case 0x3ab4d8u: goto label_3ab4d8;
        case 0x3ab4dcu: goto label_3ab4dc;
        case 0x3ab4e0u: goto label_3ab4e0;
        case 0x3ab4e4u: goto label_3ab4e4;
        case 0x3ab4e8u: goto label_3ab4e8;
        case 0x3ab4ecu: goto label_3ab4ec;
        case 0x3ab4f0u: goto label_3ab4f0;
        case 0x3ab4f4u: goto label_3ab4f4;
        case 0x3ab4f8u: goto label_3ab4f8;
        case 0x3ab4fcu: goto label_3ab4fc;
        case 0x3ab500u: goto label_3ab500;
        case 0x3ab504u: goto label_3ab504;
        case 0x3ab508u: goto label_3ab508;
        case 0x3ab50cu: goto label_3ab50c;
        case 0x3ab510u: goto label_3ab510;
        case 0x3ab514u: goto label_3ab514;
        case 0x3ab518u: goto label_3ab518;
        case 0x3ab51cu: goto label_3ab51c;
        case 0x3ab520u: goto label_3ab520;
        case 0x3ab524u: goto label_3ab524;
        case 0x3ab528u: goto label_3ab528;
        case 0x3ab52cu: goto label_3ab52c;
        case 0x3ab530u: goto label_3ab530;
        case 0x3ab534u: goto label_3ab534;
        case 0x3ab538u: goto label_3ab538;
        case 0x3ab53cu: goto label_3ab53c;
        case 0x3ab540u: goto label_3ab540;
        case 0x3ab544u: goto label_3ab544;
        case 0x3ab548u: goto label_3ab548;
        case 0x3ab54cu: goto label_3ab54c;
        case 0x3ab550u: goto label_3ab550;
        case 0x3ab554u: goto label_3ab554;
        case 0x3ab558u: goto label_3ab558;
        case 0x3ab55cu: goto label_3ab55c;
        case 0x3ab560u: goto label_3ab560;
        case 0x3ab564u: goto label_3ab564;
        case 0x3ab568u: goto label_3ab568;
        case 0x3ab56cu: goto label_3ab56c;
        case 0x3ab570u: goto label_3ab570;
        case 0x3ab574u: goto label_3ab574;
        case 0x3ab578u: goto label_3ab578;
        case 0x3ab57cu: goto label_3ab57c;
        case 0x3ab580u: goto label_3ab580;
        case 0x3ab584u: goto label_3ab584;
        case 0x3ab588u: goto label_3ab588;
        case 0x3ab58cu: goto label_3ab58c;
        case 0x3ab590u: goto label_3ab590;
        case 0x3ab594u: goto label_3ab594;
        case 0x3ab598u: goto label_3ab598;
        case 0x3ab59cu: goto label_3ab59c;
        case 0x3ab5a0u: goto label_3ab5a0;
        case 0x3ab5a4u: goto label_3ab5a4;
        case 0x3ab5a8u: goto label_3ab5a8;
        case 0x3ab5acu: goto label_3ab5ac;
        case 0x3ab5b0u: goto label_3ab5b0;
        case 0x3ab5b4u: goto label_3ab5b4;
        case 0x3ab5b8u: goto label_3ab5b8;
        case 0x3ab5bcu: goto label_3ab5bc;
        case 0x3ab5c0u: goto label_3ab5c0;
        case 0x3ab5c4u: goto label_3ab5c4;
        case 0x3ab5c8u: goto label_3ab5c8;
        case 0x3ab5ccu: goto label_3ab5cc;
        case 0x3ab5d0u: goto label_3ab5d0;
        case 0x3ab5d4u: goto label_3ab5d4;
        case 0x3ab5d8u: goto label_3ab5d8;
        case 0x3ab5dcu: goto label_3ab5dc;
        case 0x3ab5e0u: goto label_3ab5e0;
        case 0x3ab5e4u: goto label_3ab5e4;
        case 0x3ab5e8u: goto label_3ab5e8;
        case 0x3ab5ecu: goto label_3ab5ec;
        case 0x3ab5f0u: goto label_3ab5f0;
        case 0x3ab5f4u: goto label_3ab5f4;
        case 0x3ab5f8u: goto label_3ab5f8;
        case 0x3ab5fcu: goto label_3ab5fc;
        case 0x3ab600u: goto label_3ab600;
        case 0x3ab604u: goto label_3ab604;
        case 0x3ab608u: goto label_3ab608;
        case 0x3ab60cu: goto label_3ab60c;
        case 0x3ab610u: goto label_3ab610;
        case 0x3ab614u: goto label_3ab614;
        case 0x3ab618u: goto label_3ab618;
        case 0x3ab61cu: goto label_3ab61c;
        case 0x3ab620u: goto label_3ab620;
        case 0x3ab624u: goto label_3ab624;
        case 0x3ab628u: goto label_3ab628;
        case 0x3ab62cu: goto label_3ab62c;
        case 0x3ab630u: goto label_3ab630;
        case 0x3ab634u: goto label_3ab634;
        case 0x3ab638u: goto label_3ab638;
        case 0x3ab63cu: goto label_3ab63c;
        case 0x3ab640u: goto label_3ab640;
        case 0x3ab644u: goto label_3ab644;
        case 0x3ab648u: goto label_3ab648;
        case 0x3ab64cu: goto label_3ab64c;
        case 0x3ab650u: goto label_3ab650;
        case 0x3ab654u: goto label_3ab654;
        case 0x3ab658u: goto label_3ab658;
        case 0x3ab65cu: goto label_3ab65c;
        case 0x3ab660u: goto label_3ab660;
        case 0x3ab664u: goto label_3ab664;
        case 0x3ab668u: goto label_3ab668;
        case 0x3ab66cu: goto label_3ab66c;
        case 0x3ab670u: goto label_3ab670;
        case 0x3ab674u: goto label_3ab674;
        case 0x3ab678u: goto label_3ab678;
        case 0x3ab67cu: goto label_3ab67c;
        case 0x3ab680u: goto label_3ab680;
        case 0x3ab684u: goto label_3ab684;
        case 0x3ab688u: goto label_3ab688;
        case 0x3ab68cu: goto label_3ab68c;
        case 0x3ab690u: goto label_3ab690;
        case 0x3ab694u: goto label_3ab694;
        case 0x3ab698u: goto label_3ab698;
        case 0x3ab69cu: goto label_3ab69c;
        case 0x3ab6a0u: goto label_3ab6a0;
        case 0x3ab6a4u: goto label_3ab6a4;
        case 0x3ab6a8u: goto label_3ab6a8;
        case 0x3ab6acu: goto label_3ab6ac;
        case 0x3ab6b0u: goto label_3ab6b0;
        case 0x3ab6b4u: goto label_3ab6b4;
        case 0x3ab6b8u: goto label_3ab6b8;
        case 0x3ab6bcu: goto label_3ab6bc;
        case 0x3ab6c0u: goto label_3ab6c0;
        case 0x3ab6c4u: goto label_3ab6c4;
        case 0x3ab6c8u: goto label_3ab6c8;
        case 0x3ab6ccu: goto label_3ab6cc;
        case 0x3ab6d0u: goto label_3ab6d0;
        case 0x3ab6d4u: goto label_3ab6d4;
        case 0x3ab6d8u: goto label_3ab6d8;
        case 0x3ab6dcu: goto label_3ab6dc;
        case 0x3ab6e0u: goto label_3ab6e0;
        case 0x3ab6e4u: goto label_3ab6e4;
        case 0x3ab6e8u: goto label_3ab6e8;
        case 0x3ab6ecu: goto label_3ab6ec;
        case 0x3ab6f0u: goto label_3ab6f0;
        case 0x3ab6f4u: goto label_3ab6f4;
        case 0x3ab6f8u: goto label_3ab6f8;
        case 0x3ab6fcu: goto label_3ab6fc;
        case 0x3ab700u: goto label_3ab700;
        case 0x3ab704u: goto label_3ab704;
        case 0x3ab708u: goto label_3ab708;
        case 0x3ab70cu: goto label_3ab70c;
        case 0x3ab710u: goto label_3ab710;
        case 0x3ab714u: goto label_3ab714;
        case 0x3ab718u: goto label_3ab718;
        case 0x3ab71cu: goto label_3ab71c;
        case 0x3ab720u: goto label_3ab720;
        case 0x3ab724u: goto label_3ab724;
        case 0x3ab728u: goto label_3ab728;
        case 0x3ab72cu: goto label_3ab72c;
        case 0x3ab730u: goto label_3ab730;
        case 0x3ab734u: goto label_3ab734;
        case 0x3ab738u: goto label_3ab738;
        case 0x3ab73cu: goto label_3ab73c;
        case 0x3ab740u: goto label_3ab740;
        case 0x3ab744u: goto label_3ab744;
        case 0x3ab748u: goto label_3ab748;
        case 0x3ab74cu: goto label_3ab74c;
        case 0x3ab750u: goto label_3ab750;
        case 0x3ab754u: goto label_3ab754;
        case 0x3ab758u: goto label_3ab758;
        case 0x3ab75cu: goto label_3ab75c;
        case 0x3ab760u: goto label_3ab760;
        case 0x3ab764u: goto label_3ab764;
        case 0x3ab768u: goto label_3ab768;
        case 0x3ab76cu: goto label_3ab76c;
        case 0x3ab770u: goto label_3ab770;
        case 0x3ab774u: goto label_3ab774;
        case 0x3ab778u: goto label_3ab778;
        case 0x3ab77cu: goto label_3ab77c;
        case 0x3ab780u: goto label_3ab780;
        case 0x3ab784u: goto label_3ab784;
        case 0x3ab788u: goto label_3ab788;
        case 0x3ab78cu: goto label_3ab78c;
        case 0x3ab790u: goto label_3ab790;
        case 0x3ab794u: goto label_3ab794;
        case 0x3ab798u: goto label_3ab798;
        case 0x3ab79cu: goto label_3ab79c;
        case 0x3ab7a0u: goto label_3ab7a0;
        case 0x3ab7a4u: goto label_3ab7a4;
        case 0x3ab7a8u: goto label_3ab7a8;
        case 0x3ab7acu: goto label_3ab7ac;
        case 0x3ab7b0u: goto label_3ab7b0;
        case 0x3ab7b4u: goto label_3ab7b4;
        case 0x3ab7b8u: goto label_3ab7b8;
        case 0x3ab7bcu: goto label_3ab7bc;
        case 0x3ab7c0u: goto label_3ab7c0;
        case 0x3ab7c4u: goto label_3ab7c4;
        case 0x3ab7c8u: goto label_3ab7c8;
        case 0x3ab7ccu: goto label_3ab7cc;
        case 0x3ab7d0u: goto label_3ab7d0;
        case 0x3ab7d4u: goto label_3ab7d4;
        case 0x3ab7d8u: goto label_3ab7d8;
        case 0x3ab7dcu: goto label_3ab7dc;
        case 0x3ab7e0u: goto label_3ab7e0;
        case 0x3ab7e4u: goto label_3ab7e4;
        case 0x3ab7e8u: goto label_3ab7e8;
        case 0x3ab7ecu: goto label_3ab7ec;
        case 0x3ab7f0u: goto label_3ab7f0;
        case 0x3ab7f4u: goto label_3ab7f4;
        case 0x3ab7f8u: goto label_3ab7f8;
        case 0x3ab7fcu: goto label_3ab7fc;
        case 0x3ab800u: goto label_3ab800;
        case 0x3ab804u: goto label_3ab804;
        case 0x3ab808u: goto label_3ab808;
        case 0x3ab80cu: goto label_3ab80c;
        case 0x3ab810u: goto label_3ab810;
        case 0x3ab814u: goto label_3ab814;
        case 0x3ab818u: goto label_3ab818;
        case 0x3ab81cu: goto label_3ab81c;
        case 0x3ab820u: goto label_3ab820;
        case 0x3ab824u: goto label_3ab824;
        case 0x3ab828u: goto label_3ab828;
        case 0x3ab82cu: goto label_3ab82c;
        case 0x3ab830u: goto label_3ab830;
        case 0x3ab834u: goto label_3ab834;
        case 0x3ab838u: goto label_3ab838;
        case 0x3ab83cu: goto label_3ab83c;
        case 0x3ab840u: goto label_3ab840;
        case 0x3ab844u: goto label_3ab844;
        case 0x3ab848u: goto label_3ab848;
        case 0x3ab84cu: goto label_3ab84c;
        case 0x3ab850u: goto label_3ab850;
        case 0x3ab854u: goto label_3ab854;
        case 0x3ab858u: goto label_3ab858;
        case 0x3ab85cu: goto label_3ab85c;
        case 0x3ab860u: goto label_3ab860;
        case 0x3ab864u: goto label_3ab864;
        case 0x3ab868u: goto label_3ab868;
        case 0x3ab86cu: goto label_3ab86c;
        case 0x3ab870u: goto label_3ab870;
        case 0x3ab874u: goto label_3ab874;
        case 0x3ab878u: goto label_3ab878;
        case 0x3ab87cu: goto label_3ab87c;
        case 0x3ab880u: goto label_3ab880;
        case 0x3ab884u: goto label_3ab884;
        case 0x3ab888u: goto label_3ab888;
        case 0x3ab88cu: goto label_3ab88c;
        case 0x3ab890u: goto label_3ab890;
        case 0x3ab894u: goto label_3ab894;
        case 0x3ab898u: goto label_3ab898;
        case 0x3ab89cu: goto label_3ab89c;
        case 0x3ab8a0u: goto label_3ab8a0;
        case 0x3ab8a4u: goto label_3ab8a4;
        case 0x3ab8a8u: goto label_3ab8a8;
        case 0x3ab8acu: goto label_3ab8ac;
        case 0x3ab8b0u: goto label_3ab8b0;
        case 0x3ab8b4u: goto label_3ab8b4;
        case 0x3ab8b8u: goto label_3ab8b8;
        case 0x3ab8bcu: goto label_3ab8bc;
        case 0x3ab8c0u: goto label_3ab8c0;
        case 0x3ab8c4u: goto label_3ab8c4;
        case 0x3ab8c8u: goto label_3ab8c8;
        case 0x3ab8ccu: goto label_3ab8cc;
        case 0x3ab8d0u: goto label_3ab8d0;
        case 0x3ab8d4u: goto label_3ab8d4;
        case 0x3ab8d8u: goto label_3ab8d8;
        case 0x3ab8dcu: goto label_3ab8dc;
        case 0x3ab8e0u: goto label_3ab8e0;
        case 0x3ab8e4u: goto label_3ab8e4;
        case 0x3ab8e8u: goto label_3ab8e8;
        case 0x3ab8ecu: goto label_3ab8ec;
        case 0x3ab8f0u: goto label_3ab8f0;
        case 0x3ab8f4u: goto label_3ab8f4;
        case 0x3ab8f8u: goto label_3ab8f8;
        case 0x3ab8fcu: goto label_3ab8fc;
        case 0x3ab900u: goto label_3ab900;
        case 0x3ab904u: goto label_3ab904;
        case 0x3ab908u: goto label_3ab908;
        case 0x3ab90cu: goto label_3ab90c;
        case 0x3ab910u: goto label_3ab910;
        case 0x3ab914u: goto label_3ab914;
        case 0x3ab918u: goto label_3ab918;
        case 0x3ab91cu: goto label_3ab91c;
        case 0x3ab920u: goto label_3ab920;
        case 0x3ab924u: goto label_3ab924;
        case 0x3ab928u: goto label_3ab928;
        case 0x3ab92cu: goto label_3ab92c;
        case 0x3ab930u: goto label_3ab930;
        case 0x3ab934u: goto label_3ab934;
        case 0x3ab938u: goto label_3ab938;
        case 0x3ab93cu: goto label_3ab93c;
        case 0x3ab940u: goto label_3ab940;
        case 0x3ab944u: goto label_3ab944;
        case 0x3ab948u: goto label_3ab948;
        case 0x3ab94cu: goto label_3ab94c;
        case 0x3ab950u: goto label_3ab950;
        case 0x3ab954u: goto label_3ab954;
        case 0x3ab958u: goto label_3ab958;
        case 0x3ab95cu: goto label_3ab95c;
        case 0x3ab960u: goto label_3ab960;
        case 0x3ab964u: goto label_3ab964;
        case 0x3ab968u: goto label_3ab968;
        case 0x3ab96cu: goto label_3ab96c;
        case 0x3ab970u: goto label_3ab970;
        case 0x3ab974u: goto label_3ab974;
        case 0x3ab978u: goto label_3ab978;
        case 0x3ab97cu: goto label_3ab97c;
        case 0x3ab980u: goto label_3ab980;
        case 0x3ab984u: goto label_3ab984;
        case 0x3ab988u: goto label_3ab988;
        case 0x3ab98cu: goto label_3ab98c;
        case 0x3ab990u: goto label_3ab990;
        case 0x3ab994u: goto label_3ab994;
        case 0x3ab998u: goto label_3ab998;
        case 0x3ab99cu: goto label_3ab99c;
        case 0x3ab9a0u: goto label_3ab9a0;
        case 0x3ab9a4u: goto label_3ab9a4;
        case 0x3ab9a8u: goto label_3ab9a8;
        case 0x3ab9acu: goto label_3ab9ac;
        case 0x3ab9b0u: goto label_3ab9b0;
        case 0x3ab9b4u: goto label_3ab9b4;
        case 0x3ab9b8u: goto label_3ab9b8;
        case 0x3ab9bcu: goto label_3ab9bc;
        case 0x3ab9c0u: goto label_3ab9c0;
        case 0x3ab9c4u: goto label_3ab9c4;
        case 0x3ab9c8u: goto label_3ab9c8;
        case 0x3ab9ccu: goto label_3ab9cc;
        case 0x3ab9d0u: goto label_3ab9d0;
        case 0x3ab9d4u: goto label_3ab9d4;
        case 0x3ab9d8u: goto label_3ab9d8;
        case 0x3ab9dcu: goto label_3ab9dc;
        case 0x3ab9e0u: goto label_3ab9e0;
        case 0x3ab9e4u: goto label_3ab9e4;
        case 0x3ab9e8u: goto label_3ab9e8;
        case 0x3ab9ecu: goto label_3ab9ec;
        case 0x3ab9f0u: goto label_3ab9f0;
        case 0x3ab9f4u: goto label_3ab9f4;
        case 0x3ab9f8u: goto label_3ab9f8;
        case 0x3ab9fcu: goto label_3ab9fc;
        case 0x3aba00u: goto label_3aba00;
        case 0x3aba04u: goto label_3aba04;
        case 0x3aba08u: goto label_3aba08;
        case 0x3aba0cu: goto label_3aba0c;
        case 0x3aba10u: goto label_3aba10;
        case 0x3aba14u: goto label_3aba14;
        case 0x3aba18u: goto label_3aba18;
        case 0x3aba1cu: goto label_3aba1c;
        case 0x3aba20u: goto label_3aba20;
        case 0x3aba24u: goto label_3aba24;
        case 0x3aba28u: goto label_3aba28;
        case 0x3aba2cu: goto label_3aba2c;
        case 0x3aba30u: goto label_3aba30;
        case 0x3aba34u: goto label_3aba34;
        case 0x3aba38u: goto label_3aba38;
        case 0x3aba3cu: goto label_3aba3c;
        case 0x3aba40u: goto label_3aba40;
        case 0x3aba44u: goto label_3aba44;
        case 0x3aba48u: goto label_3aba48;
        case 0x3aba4cu: goto label_3aba4c;
        case 0x3aba50u: goto label_3aba50;
        case 0x3aba54u: goto label_3aba54;
        case 0x3aba58u: goto label_3aba58;
        case 0x3aba5cu: goto label_3aba5c;
        case 0x3aba60u: goto label_3aba60;
        case 0x3aba64u: goto label_3aba64;
        case 0x3aba68u: goto label_3aba68;
        case 0x3aba6cu: goto label_3aba6c;
        case 0x3aba70u: goto label_3aba70;
        case 0x3aba74u: goto label_3aba74;
        case 0x3aba78u: goto label_3aba78;
        case 0x3aba7cu: goto label_3aba7c;
        case 0x3aba80u: goto label_3aba80;
        case 0x3aba84u: goto label_3aba84;
        case 0x3aba88u: goto label_3aba88;
        case 0x3aba8cu: goto label_3aba8c;
        case 0x3aba90u: goto label_3aba90;
        case 0x3aba94u: goto label_3aba94;
        case 0x3aba98u: goto label_3aba98;
        case 0x3aba9cu: goto label_3aba9c;
        case 0x3abaa0u: goto label_3abaa0;
        case 0x3abaa4u: goto label_3abaa4;
        case 0x3abaa8u: goto label_3abaa8;
        case 0x3abaacu: goto label_3abaac;
        case 0x3abab0u: goto label_3abab0;
        case 0x3abab4u: goto label_3abab4;
        case 0x3abab8u: goto label_3abab8;
        case 0x3ababcu: goto label_3ababc;
        case 0x3abac0u: goto label_3abac0;
        case 0x3abac4u: goto label_3abac4;
        case 0x3abac8u: goto label_3abac8;
        case 0x3abaccu: goto label_3abacc;
        case 0x3abad0u: goto label_3abad0;
        case 0x3abad4u: goto label_3abad4;
        case 0x3abad8u: goto label_3abad8;
        case 0x3abadcu: goto label_3abadc;
        case 0x3abae0u: goto label_3abae0;
        case 0x3abae4u: goto label_3abae4;
        case 0x3abae8u: goto label_3abae8;
        case 0x3abaecu: goto label_3abaec;
        case 0x3abaf0u: goto label_3abaf0;
        case 0x3abaf4u: goto label_3abaf4;
        case 0x3abaf8u: goto label_3abaf8;
        case 0x3abafcu: goto label_3abafc;
        case 0x3abb00u: goto label_3abb00;
        case 0x3abb04u: goto label_3abb04;
        case 0x3abb08u: goto label_3abb08;
        case 0x3abb0cu: goto label_3abb0c;
        case 0x3abb10u: goto label_3abb10;
        case 0x3abb14u: goto label_3abb14;
        case 0x3abb18u: goto label_3abb18;
        case 0x3abb1cu: goto label_3abb1c;
        case 0x3abb20u: goto label_3abb20;
        case 0x3abb24u: goto label_3abb24;
        case 0x3abb28u: goto label_3abb28;
        case 0x3abb2cu: goto label_3abb2c;
        case 0x3abb30u: goto label_3abb30;
        case 0x3abb34u: goto label_3abb34;
        case 0x3abb38u: goto label_3abb38;
        case 0x3abb3cu: goto label_3abb3c;
        case 0x3abb40u: goto label_3abb40;
        case 0x3abb44u: goto label_3abb44;
        case 0x3abb48u: goto label_3abb48;
        case 0x3abb4cu: goto label_3abb4c;
        case 0x3abb50u: goto label_3abb50;
        case 0x3abb54u: goto label_3abb54;
        case 0x3abb58u: goto label_3abb58;
        case 0x3abb5cu: goto label_3abb5c;
        case 0x3abb60u: goto label_3abb60;
        case 0x3abb64u: goto label_3abb64;
        case 0x3abb68u: goto label_3abb68;
        case 0x3abb6cu: goto label_3abb6c;
        case 0x3abb70u: goto label_3abb70;
        case 0x3abb74u: goto label_3abb74;
        case 0x3abb78u: goto label_3abb78;
        case 0x3abb7cu: goto label_3abb7c;
        case 0x3abb80u: goto label_3abb80;
        case 0x3abb84u: goto label_3abb84;
        case 0x3abb88u: goto label_3abb88;
        case 0x3abb8cu: goto label_3abb8c;
        case 0x3abb90u: goto label_3abb90;
        case 0x3abb94u: goto label_3abb94;
        case 0x3abb98u: goto label_3abb98;
        case 0x3abb9cu: goto label_3abb9c;
        case 0x3abba0u: goto label_3abba0;
        case 0x3abba4u: goto label_3abba4;
        case 0x3abba8u: goto label_3abba8;
        case 0x3abbacu: goto label_3abbac;
        case 0x3abbb0u: goto label_3abbb0;
        case 0x3abbb4u: goto label_3abbb4;
        case 0x3abbb8u: goto label_3abbb8;
        case 0x3abbbcu: goto label_3abbbc;
        case 0x3abbc0u: goto label_3abbc0;
        case 0x3abbc4u: goto label_3abbc4;
        case 0x3abbc8u: goto label_3abbc8;
        case 0x3abbccu: goto label_3abbcc;
        case 0x3abbd0u: goto label_3abbd0;
        case 0x3abbd4u: goto label_3abbd4;
        case 0x3abbd8u: goto label_3abbd8;
        case 0x3abbdcu: goto label_3abbdc;
        case 0x3abbe0u: goto label_3abbe0;
        case 0x3abbe4u: goto label_3abbe4;
        case 0x3abbe8u: goto label_3abbe8;
        case 0x3abbecu: goto label_3abbec;
        case 0x3abbf0u: goto label_3abbf0;
        case 0x3abbf4u: goto label_3abbf4;
        case 0x3abbf8u: goto label_3abbf8;
        case 0x3abbfcu: goto label_3abbfc;
        case 0x3abc00u: goto label_3abc00;
        case 0x3abc04u: goto label_3abc04;
        case 0x3abc08u: goto label_3abc08;
        case 0x3abc0cu: goto label_3abc0c;
        case 0x3abc10u: goto label_3abc10;
        case 0x3abc14u: goto label_3abc14;
        case 0x3abc18u: goto label_3abc18;
        case 0x3abc1cu: goto label_3abc1c;
        case 0x3abc20u: goto label_3abc20;
        case 0x3abc24u: goto label_3abc24;
        case 0x3abc28u: goto label_3abc28;
        case 0x3abc2cu: goto label_3abc2c;
        case 0x3abc30u: goto label_3abc30;
        case 0x3abc34u: goto label_3abc34;
        case 0x3abc38u: goto label_3abc38;
        case 0x3abc3cu: goto label_3abc3c;
        case 0x3abc40u: goto label_3abc40;
        case 0x3abc44u: goto label_3abc44;
        case 0x3abc48u: goto label_3abc48;
        case 0x3abc4cu: goto label_3abc4c;
        case 0x3abc50u: goto label_3abc50;
        case 0x3abc54u: goto label_3abc54;
        case 0x3abc58u: goto label_3abc58;
        case 0x3abc5cu: goto label_3abc5c;
        case 0x3abc60u: goto label_3abc60;
        case 0x3abc64u: goto label_3abc64;
        case 0x3abc68u: goto label_3abc68;
        case 0x3abc6cu: goto label_3abc6c;
        case 0x3abc70u: goto label_3abc70;
        case 0x3abc74u: goto label_3abc74;
        case 0x3abc78u: goto label_3abc78;
        case 0x3abc7cu: goto label_3abc7c;
        case 0x3abc80u: goto label_3abc80;
        case 0x3abc84u: goto label_3abc84;
        case 0x3abc88u: goto label_3abc88;
        case 0x3abc8cu: goto label_3abc8c;
        case 0x3abc90u: goto label_3abc90;
        case 0x3abc94u: goto label_3abc94;
        case 0x3abc98u: goto label_3abc98;
        case 0x3abc9cu: goto label_3abc9c;
        case 0x3abca0u: goto label_3abca0;
        case 0x3abca4u: goto label_3abca4;
        case 0x3abca8u: goto label_3abca8;
        case 0x3abcacu: goto label_3abcac;
        case 0x3abcb0u: goto label_3abcb0;
        case 0x3abcb4u: goto label_3abcb4;
        case 0x3abcb8u: goto label_3abcb8;
        case 0x3abcbcu: goto label_3abcbc;
        case 0x3abcc0u: goto label_3abcc0;
        case 0x3abcc4u: goto label_3abcc4;
        case 0x3abcc8u: goto label_3abcc8;
        case 0x3abcccu: goto label_3abccc;
        case 0x3abcd0u: goto label_3abcd0;
        case 0x3abcd4u: goto label_3abcd4;
        case 0x3abcd8u: goto label_3abcd8;
        case 0x3abcdcu: goto label_3abcdc;
        case 0x3abce0u: goto label_3abce0;
        case 0x3abce4u: goto label_3abce4;
        case 0x3abce8u: goto label_3abce8;
        case 0x3abcecu: goto label_3abcec;
        case 0x3abcf0u: goto label_3abcf0;
        case 0x3abcf4u: goto label_3abcf4;
        case 0x3abcf8u: goto label_3abcf8;
        case 0x3abcfcu: goto label_3abcfc;
        case 0x3abd00u: goto label_3abd00;
        case 0x3abd04u: goto label_3abd04;
        case 0x3abd08u: goto label_3abd08;
        case 0x3abd0cu: goto label_3abd0c;
        case 0x3abd10u: goto label_3abd10;
        case 0x3abd14u: goto label_3abd14;
        case 0x3abd18u: goto label_3abd18;
        case 0x3abd1cu: goto label_3abd1c;
        case 0x3abd20u: goto label_3abd20;
        case 0x3abd24u: goto label_3abd24;
        case 0x3abd28u: goto label_3abd28;
        case 0x3abd2cu: goto label_3abd2c;
        case 0x3abd30u: goto label_3abd30;
        case 0x3abd34u: goto label_3abd34;
        case 0x3abd38u: goto label_3abd38;
        case 0x3abd3cu: goto label_3abd3c;
        case 0x3abd40u: goto label_3abd40;
        case 0x3abd44u: goto label_3abd44;
        case 0x3abd48u: goto label_3abd48;
        case 0x3abd4cu: goto label_3abd4c;
        case 0x3abd50u: goto label_3abd50;
        case 0x3abd54u: goto label_3abd54;
        case 0x3abd58u: goto label_3abd58;
        case 0x3abd5cu: goto label_3abd5c;
        case 0x3abd60u: goto label_3abd60;
        case 0x3abd64u: goto label_3abd64;
        case 0x3abd68u: goto label_3abd68;
        case 0x3abd6cu: goto label_3abd6c;
        case 0x3abd70u: goto label_3abd70;
        case 0x3abd74u: goto label_3abd74;
        case 0x3abd78u: goto label_3abd78;
        case 0x3abd7cu: goto label_3abd7c;
        case 0x3abd80u: goto label_3abd80;
        case 0x3abd84u: goto label_3abd84;
        case 0x3abd88u: goto label_3abd88;
        case 0x3abd8cu: goto label_3abd8c;
        case 0x3abd90u: goto label_3abd90;
        case 0x3abd94u: goto label_3abd94;
        case 0x3abd98u: goto label_3abd98;
        case 0x3abd9cu: goto label_3abd9c;
        case 0x3abda0u: goto label_3abda0;
        case 0x3abda4u: goto label_3abda4;
        case 0x3abda8u: goto label_3abda8;
        case 0x3abdacu: goto label_3abdac;
        case 0x3abdb0u: goto label_3abdb0;
        case 0x3abdb4u: goto label_3abdb4;
        case 0x3abdb8u: goto label_3abdb8;
        case 0x3abdbcu: goto label_3abdbc;
        case 0x3abdc0u: goto label_3abdc0;
        case 0x3abdc4u: goto label_3abdc4;
        case 0x3abdc8u: goto label_3abdc8;
        case 0x3abdccu: goto label_3abdcc;
        case 0x3abdd0u: goto label_3abdd0;
        case 0x3abdd4u: goto label_3abdd4;
        case 0x3abdd8u: goto label_3abdd8;
        case 0x3abddcu: goto label_3abddc;
        case 0x3abde0u: goto label_3abde0;
        case 0x3abde4u: goto label_3abde4;
        case 0x3abde8u: goto label_3abde8;
        case 0x3abdecu: goto label_3abdec;
        case 0x3abdf0u: goto label_3abdf0;
        case 0x3abdf4u: goto label_3abdf4;
        case 0x3abdf8u: goto label_3abdf8;
        case 0x3abdfcu: goto label_3abdfc;
        case 0x3abe00u: goto label_3abe00;
        case 0x3abe04u: goto label_3abe04;
        case 0x3abe08u: goto label_3abe08;
        case 0x3abe0cu: goto label_3abe0c;
        case 0x3abe10u: goto label_3abe10;
        case 0x3abe14u: goto label_3abe14;
        case 0x3abe18u: goto label_3abe18;
        case 0x3abe1cu: goto label_3abe1c;
        case 0x3abe20u: goto label_3abe20;
        case 0x3abe24u: goto label_3abe24;
        case 0x3abe28u: goto label_3abe28;
        case 0x3abe2cu: goto label_3abe2c;
        case 0x3abe30u: goto label_3abe30;
        case 0x3abe34u: goto label_3abe34;
        case 0x3abe38u: goto label_3abe38;
        case 0x3abe3cu: goto label_3abe3c;
        case 0x3abe40u: goto label_3abe40;
        case 0x3abe44u: goto label_3abe44;
        case 0x3abe48u: goto label_3abe48;
        case 0x3abe4cu: goto label_3abe4c;
        case 0x3abe50u: goto label_3abe50;
        case 0x3abe54u: goto label_3abe54;
        case 0x3abe58u: goto label_3abe58;
        case 0x3abe5cu: goto label_3abe5c;
        case 0x3abe60u: goto label_3abe60;
        case 0x3abe64u: goto label_3abe64;
        case 0x3abe68u: goto label_3abe68;
        case 0x3abe6cu: goto label_3abe6c;
        case 0x3abe70u: goto label_3abe70;
        case 0x3abe74u: goto label_3abe74;
        case 0x3abe78u: goto label_3abe78;
        case 0x3abe7cu: goto label_3abe7c;
        case 0x3abe80u: goto label_3abe80;
        case 0x3abe84u: goto label_3abe84;
        case 0x3abe88u: goto label_3abe88;
        case 0x3abe8cu: goto label_3abe8c;
        case 0x3abe90u: goto label_3abe90;
        case 0x3abe94u: goto label_3abe94;
        case 0x3abe98u: goto label_3abe98;
        case 0x3abe9cu: goto label_3abe9c;
        case 0x3abea0u: goto label_3abea0;
        case 0x3abea4u: goto label_3abea4;
        case 0x3abea8u: goto label_3abea8;
        case 0x3abeacu: goto label_3abeac;
        case 0x3abeb0u: goto label_3abeb0;
        case 0x3abeb4u: goto label_3abeb4;
        case 0x3abeb8u: goto label_3abeb8;
        case 0x3abebcu: goto label_3abebc;
        case 0x3abec0u: goto label_3abec0;
        case 0x3abec4u: goto label_3abec4;
        case 0x3abec8u: goto label_3abec8;
        case 0x3abeccu: goto label_3abecc;
        case 0x3abed0u: goto label_3abed0;
        case 0x3abed4u: goto label_3abed4;
        case 0x3abed8u: goto label_3abed8;
        case 0x3abedcu: goto label_3abedc;
        case 0x3abee0u: goto label_3abee0;
        case 0x3abee4u: goto label_3abee4;
        case 0x3abee8u: goto label_3abee8;
        case 0x3abeecu: goto label_3abeec;
        case 0x3abef0u: goto label_3abef0;
        case 0x3abef4u: goto label_3abef4;
        case 0x3abef8u: goto label_3abef8;
        case 0x3abefcu: goto label_3abefc;
        case 0x3abf00u: goto label_3abf00;
        case 0x3abf04u: goto label_3abf04;
        case 0x3abf08u: goto label_3abf08;
        case 0x3abf0cu: goto label_3abf0c;
        case 0x3abf10u: goto label_3abf10;
        case 0x3abf14u: goto label_3abf14;
        case 0x3abf18u: goto label_3abf18;
        case 0x3abf1cu: goto label_3abf1c;
        case 0x3abf20u: goto label_3abf20;
        case 0x3abf24u: goto label_3abf24;
        case 0x3abf28u: goto label_3abf28;
        case 0x3abf2cu: goto label_3abf2c;
        case 0x3abf30u: goto label_3abf30;
        case 0x3abf34u: goto label_3abf34;
        case 0x3abf38u: goto label_3abf38;
        case 0x3abf3cu: goto label_3abf3c;
        case 0x3abf40u: goto label_3abf40;
        case 0x3abf44u: goto label_3abf44;
        case 0x3abf48u: goto label_3abf48;
        case 0x3abf4cu: goto label_3abf4c;
        case 0x3abf50u: goto label_3abf50;
        case 0x3abf54u: goto label_3abf54;
        case 0x3abf58u: goto label_3abf58;
        case 0x3abf5cu: goto label_3abf5c;
        case 0x3abf60u: goto label_3abf60;
        case 0x3abf64u: goto label_3abf64;
        case 0x3abf68u: goto label_3abf68;
        case 0x3abf6cu: goto label_3abf6c;
        case 0x3abf70u: goto label_3abf70;
        case 0x3abf74u: goto label_3abf74;
        case 0x3abf78u: goto label_3abf78;
        case 0x3abf7cu: goto label_3abf7c;
        case 0x3abf80u: goto label_3abf80;
        case 0x3abf84u: goto label_3abf84;
        case 0x3abf88u: goto label_3abf88;
        case 0x3abf8cu: goto label_3abf8c;
        case 0x3abf90u: goto label_3abf90;
        case 0x3abf94u: goto label_3abf94;
        case 0x3abf98u: goto label_3abf98;
        case 0x3abf9cu: goto label_3abf9c;
        case 0x3abfa0u: goto label_3abfa0;
        case 0x3abfa4u: goto label_3abfa4;
        case 0x3abfa8u: goto label_3abfa8;
        case 0x3abfacu: goto label_3abfac;
        case 0x3abfb0u: goto label_3abfb0;
        case 0x3abfb4u: goto label_3abfb4;
        case 0x3abfb8u: goto label_3abfb8;
        case 0x3abfbcu: goto label_3abfbc;
        case 0x3abfc0u: goto label_3abfc0;
        case 0x3abfc4u: goto label_3abfc4;
        case 0x3abfc8u: goto label_3abfc8;
        case 0x3abfccu: goto label_3abfcc;
        case 0x3abfd0u: goto label_3abfd0;
        case 0x3abfd4u: goto label_3abfd4;
        case 0x3abfd8u: goto label_3abfd8;
        case 0x3abfdcu: goto label_3abfdc;
        case 0x3abfe0u: goto label_3abfe0;
        case 0x3abfe4u: goto label_3abfe4;
        case 0x3abfe8u: goto label_3abfe8;
        case 0x3abfecu: goto label_3abfec;
        case 0x3abff0u: goto label_3abff0;
        case 0x3abff4u: goto label_3abff4;
        case 0x3abff8u: goto label_3abff8;
        case 0x3abffcu: goto label_3abffc;
        case 0x3ac000u: goto label_3ac000;
        case 0x3ac004u: goto label_3ac004;
        case 0x3ac008u: goto label_3ac008;
        case 0x3ac00cu: goto label_3ac00c;
        case 0x3ac010u: goto label_3ac010;
        case 0x3ac014u: goto label_3ac014;
        case 0x3ac018u: goto label_3ac018;
        case 0x3ac01cu: goto label_3ac01c;
        case 0x3ac020u: goto label_3ac020;
        case 0x3ac024u: goto label_3ac024;
        case 0x3ac028u: goto label_3ac028;
        case 0x3ac02cu: goto label_3ac02c;
        case 0x3ac030u: goto label_3ac030;
        case 0x3ac034u: goto label_3ac034;
        case 0x3ac038u: goto label_3ac038;
        case 0x3ac03cu: goto label_3ac03c;
        case 0x3ac040u: goto label_3ac040;
        case 0x3ac044u: goto label_3ac044;
        case 0x3ac048u: goto label_3ac048;
        case 0x3ac04cu: goto label_3ac04c;
        case 0x3ac050u: goto label_3ac050;
        case 0x3ac054u: goto label_3ac054;
        case 0x3ac058u: goto label_3ac058;
        case 0x3ac05cu: goto label_3ac05c;
        case 0x3ac060u: goto label_3ac060;
        case 0x3ac064u: goto label_3ac064;
        case 0x3ac068u: goto label_3ac068;
        case 0x3ac06cu: goto label_3ac06c;
        case 0x3ac070u: goto label_3ac070;
        case 0x3ac074u: goto label_3ac074;
        case 0x3ac078u: goto label_3ac078;
        case 0x3ac07cu: goto label_3ac07c;
        case 0x3ac080u: goto label_3ac080;
        case 0x3ac084u: goto label_3ac084;
        case 0x3ac088u: goto label_3ac088;
        case 0x3ac08cu: goto label_3ac08c;
        case 0x3ac090u: goto label_3ac090;
        case 0x3ac094u: goto label_3ac094;
        case 0x3ac098u: goto label_3ac098;
        case 0x3ac09cu: goto label_3ac09c;
        case 0x3ac0a0u: goto label_3ac0a0;
        case 0x3ac0a4u: goto label_3ac0a4;
        case 0x3ac0a8u: goto label_3ac0a8;
        case 0x3ac0acu: goto label_3ac0ac;
        case 0x3ac0b0u: goto label_3ac0b0;
        case 0x3ac0b4u: goto label_3ac0b4;
        case 0x3ac0b8u: goto label_3ac0b8;
        case 0x3ac0bcu: goto label_3ac0bc;
        case 0x3ac0c0u: goto label_3ac0c0;
        case 0x3ac0c4u: goto label_3ac0c4;
        case 0x3ac0c8u: goto label_3ac0c8;
        case 0x3ac0ccu: goto label_3ac0cc;
        case 0x3ac0d0u: goto label_3ac0d0;
        case 0x3ac0d4u: goto label_3ac0d4;
        case 0x3ac0d8u: goto label_3ac0d8;
        case 0x3ac0dcu: goto label_3ac0dc;
        case 0x3ac0e0u: goto label_3ac0e0;
        case 0x3ac0e4u: goto label_3ac0e4;
        case 0x3ac0e8u: goto label_3ac0e8;
        case 0x3ac0ecu: goto label_3ac0ec;
        case 0x3ac0f0u: goto label_3ac0f0;
        case 0x3ac0f4u: goto label_3ac0f4;
        case 0x3ac0f8u: goto label_3ac0f8;
        case 0x3ac0fcu: goto label_3ac0fc;
        default: break;
    }

    ctx->pc = 0x3aabd0u;

label_3aabd0:
    // 0x3aabd0: 0x3020100  .word       0x03020100                   # sll         $zero, $v0, 4 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aabd0u;
    
label_3aabd4:
    // 0x3aabd4: 0xe0d0c04  jal         func_8343010
label_3aabd8:
    if (ctx->pc == 0x3AABD8u) {
        ctx->pc = 0x3AABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABD4u;
        // 0x3aabd8: 0x1211100f  beq         $s0, $s1, . + 4 + (0x100F << 2) (Delay Slot)
        // Likely branch instruction at 0x3AABD8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AABDCu;
        goto label_3aabdc;
    }
    ctx->pc = 0x3AABD4u;
    SET_GPR_U32(ctx, 31, 0x3AABDCu);
    ctx->pc = 0x3AABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AABD4u;
    // 0x3aabd8: 0x1211100f  beq         $s0, $s1, . + 4 + (0x100F << 2) (Delay Slot)
    // Likely branch instruction at 0x3AABD8 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8343010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8343010u, 0x3AABD4u, 0x3AABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AABDCu;
label_3aabdc:
    // 0x3aabdc: 0x8070605  j           func_1C1814
label_3aabe0:
    if (ctx->pc == 0x3AABE0u) {
        ctx->pc = 0x3AABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABDCu;
        // 0x3aabe0: 0x130b0a09  beq         $t8, $t3, . + 4 + (0xA09 << 2) (Delay Slot)
        // Likely branch instruction at 0x3AABE0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AABE4u;
        goto label_3aabe4;
    }
    ctx->pc = 0x3AABDCu;
    ctx->pc = 0x3AABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AABDCu;
    // 0x3aabe0: 0x130b0a09  beq         $t8, $t3, . + 4 + (0xA09 << 2) (Delay Slot)
    // Likely branch instruction at 0x3AABE0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1814u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1814u, 0x3AABDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AABE4u;
label_3aabe4:
    // 0x3aabe4: 0x1b1a1918  .word       0x1B1A1918                   # blez        $t8, . + 4 + (0x1918 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_3aabe8:
    if (ctx->pc == 0x3AABE8u) {
        ctx->pc = 0x3AABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABE4u;
        // 0x3aabe8: 0x17161514  bne         $t8, $s6, . + 4 + (0x1514 << 2) (Delay Slot)
        // Likely branch instruction at 0x3AABE8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AABECu;
        goto label_3aabec;
    }
    ctx->pc = 0x3AABE4u;
    {
        const bool branch_taken_0x3aabe4 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x3AABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABE4u;
        // 0x3aabe8: 0x17161514  bne         $t8, $s6, . + 4 + (0x1514 << 2) (Delay Slot)
        // Likely branch instruction at 0x3AABE8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aabe4) {
            ctx->pc = 0x3B1048u;
            return;
        }
    }
    ctx->pc = 0x3AABECu;
label_3aabec:
    // 0x3aabec: 0x1f1e1c1d  .word       0x1F1E1C1D                   # bgtz        $t8, . + 4 + (0x1C1D << 2) # 001E0000 <InstrIdType: CPU_NORMAL>
label_3aabf0:
    if (ctx->pc == 0x3AABF0u) {
        ctx->pc = 0x3AABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABECu;
        // 0x3aabf0: 0x23222120  addi        $v0, $t9, 0x2120 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 25), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AABF4u;
        goto label_3aabf4;
    }
    ctx->pc = 0x3AABECu;
    {
        const bool branch_taken_0x3aabec = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x3AABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABECu;
        // 0x3aabf0: 0x23222120  addi        $v0, $t9, 0x2120 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 25), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aabec) {
            ctx->pc = 0x3B1C64u;
            return;
        }
    }
    ctx->pc = 0x3AABF4u;
label_3aabf4:
    // 0x3aabf4: 0x27262524  addiu       $a2, $t9, 0x2524
    ctx->pc = 0x3aabf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), 9508));
label_3aabf8:
    // 0x3aabf8: 0x2928  .word       0x00002928                   # mfsa        $a1 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aabf8u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_3aabfc:
    // 0x3aabfc: 0x0  nop
    ctx->pc = 0x3aabfcu;
    // NOP
label_3aac00:
    // 0x3aac00: 0x0  nop
    ctx->pc = 0x3aac00u;
    // NOP
label_3aac04:
    // 0x3aac04: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aac04u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AAC04 raw=0x43FA0000");
label_3aac08:
    // 0x3aac08: 0x0  nop
    ctx->pc = 0x3aac08u;
    // NOP
label_3aac0c:
    // 0x3aac0c: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aac0cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AAC0C raw=0x43FA0000");
label_3aac10:
    // 0x3aac10: 0x0  nop
    ctx->pc = 0x3aac10u;
    // NOP
label_3aac14:
    // 0x3aac14: 0x0  nop
    ctx->pc = 0x3aac14u;
    // NOP
label_3aac18:
    // 0x3aac18: 0x0  nop
    ctx->pc = 0x3aac18u;
    // NOP
label_3aac1c:
    // 0x3aac1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aac1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aac20:
    // 0x3aac20: 0x360900  .word       0x00360900                   # sll         $at, $s6, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aac20u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_3aac24:
    // 0x3aac24: 0x360a10  .word       0x00360A10                   # mfhi        $at # 00360200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aac24u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_3aac28:
    // 0x3aac28: 0x360a90  .word       0x00360A90                   # mfhi        $at # 00360280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aac28u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_3aac2c:
    // 0x3aac2c: 0x360fa0  .word       0x00360FA0                   # add         $at, $at, $s6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aac2cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_3aac30:
    // 0x3aac30: 0x360a60  .word       0x00360A60                   # add         $at, $at, $s6 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aac30u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_3aac34:
    // 0x3aac34: 0x0  nop
    ctx->pc = 0x3aac34u;
    // NOP
label_3aac38:
    // 0x3aac38: 0x360ae0  .word       0x00360AE0                   # add         $at, $at, $s6 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aac38u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_3aac3c:
    // 0x3aac3c: 0x360bd0  .word       0x00360BD0                   # mfhi        $at # 003603C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aac3cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_3aac40:
    // 0x3aac40: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x3aac40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aac44:
    // 0x3aac44: 0x0  nop
    ctx->pc = 0x3aac44u;
    // NOP
label_3aac48:
    // 0x3aac48: 0x0  nop
    ctx->pc = 0x3aac48u;
    // NOP
label_3aac4c:
    // 0x3aac4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aac4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aac50:
    // 0x3aac50: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aac50u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x3AAC50 raw=0x41F00000");
label_3aac54:
    // 0x3aac54: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x3aac54u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x3AAC54 raw=0x40A00000");
label_3aac58:
    // 0x3aac58: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x3aac58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aac5c:
    // 0x3aac5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aac5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aac60:
    // 0x3aac60: 0x361100  .word       0x00361100                   # sll         $v0, $s6, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aac60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_3aac64:
    // 0x3aac64: 0x361140  .word       0x00361140                   # sll         $v0, $s6, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aac64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
label_3aac68:
    // 0x3aac68: 0x361330  tge         $at, $s6, 76
    ctx->pc = 0x3aac68u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3aac6c:
    // 0x3aac6c: 0x361390  .word       0x00361390                   # mfhi        $v0 # 00360380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aac6cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3aac70:
    // 0x3aac70: 0x361190  .word       0x00361190                   # mfhi        $v0 # 00360180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aac70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3aac74:
    // 0x3aac74: 0x0  nop
    ctx->pc = 0x3aac74u;
    // NOP
label_3aac78:
    // 0x3aac78: 0x0  nop
    ctx->pc = 0x3aac78u;
    // NOP
label_3aac7c:
    // 0x3aac7c: 0x0  nop
    ctx->pc = 0x3aac7cu;
    // NOP
label_3aac80:
    // 0x3aac80: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aac80u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAC80 raw=0x42C80000");
label_3aac84:
    // 0x3aac84: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aac84u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAC84 raw=0x42C80000");
label_3aac88:
    // 0x3aac88: 0x0  nop
    ctx->pc = 0x3aac88u;
    // NOP
label_3aac8c:
    // 0x3aac8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aac8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aac90:
    // 0x3aac90: 0x361380  .word       0x00361380                   # sll         $v0, $s6, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aac90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 14));
label_3aac94:
    // 0x3aac94: 0x0  nop
    ctx->pc = 0x3aac94u;
    // NOP
label_3aac98:
    // 0x3aac98: 0x0  nop
    ctx->pc = 0x3aac98u;
    // NOP
label_3aac9c:
    // 0x3aac9c: 0x0  nop
    ctx->pc = 0x3aac9cu;
    // NOP
label_3aaca0:
    // 0x3aaca0: 0x0  nop
    ctx->pc = 0x3aaca0u;
    // NOP
label_3aaca4:
    // 0x3aaca4: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aaca4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AACA4 raw=0x43FA0000");
label_3aaca8:
    // 0x3aaca8: 0x0  nop
    ctx->pc = 0x3aaca8u;
    // NOP
label_3aacac:
    // 0x3aacac: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aacacu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AACAC raw=0x43FA0000");
label_3aacb0:
    // 0x3aacb0: 0x0  nop
    ctx->pc = 0x3aacb0u;
    // NOP
label_3aacb4:
    // 0x3aacb4: 0x0  nop
    ctx->pc = 0x3aacb4u;
    // NOP
label_3aacb8:
    // 0x3aacb8: 0x0  nop
    ctx->pc = 0x3aacb8u;
    // NOP
label_3aacbc:
    // 0x3aacbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aacbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aacc0:
    // 0x3aacc0: 0x3624d0  .word       0x003624D0                   # mfhi        $a0 # 003604C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aacc0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3aacc4:
    // 0x3aacc4: 0x362590  .word       0x00362590                   # mfhi        $a0 # 00360580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aacc4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3aacc8:
    // 0x3aacc8: 0x362610  .word       0x00362610                   # mfhi        $a0 # 00360600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aacc8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3aaccc:
    // 0x3aaccc: 0x3628f0  tge         $at, $s6, 163
    ctx->pc = 0x3aacccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3aacd0:
    // 0x3aacd0: 0x3625e0  .word       0x003625E0                   # add         $a0, $at, $s6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aacd0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_3aacd4:
    // 0x3aacd4: 0x0  nop
    ctx->pc = 0x3aacd4u;
    // NOP
label_3aacd8:
    // 0x3aacd8: 0x362660  .word       0x00362660                   # add         $a0, $at, $s6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aacd8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_3aacdc:
    // 0x3aacdc: 0x362760  .word       0x00362760                   # add         $a0, $at, $s6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aacdcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_3aace0:
    // 0x3aace0: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x3aace0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aace4:
    // 0x3aace4: 0x0  nop
    ctx->pc = 0x3aace4u;
    // NOP
label_3aace8:
    // 0x3aace8: 0x0  nop
    ctx->pc = 0x3aace8u;
    // NOP
label_3aacec:
    // 0x3aacec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aacecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aacf0:
    // 0x3aacf0: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aacf0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x3AACF0 raw=0x41F00000");
label_3aacf4:
    // 0x3aacf4: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x3aacf4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x3AACF4 raw=0x40A00000");
label_3aacf8:
    // 0x3aacf8: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x3aacf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aacfc:
    // 0x3aacfc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aacfcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aad00:
    // 0x3aad00: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x3aad00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_3aad04:
    // 0x3aad04: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aad04u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3AAD04 raw=0x43960000");
label_3aad08:
    // 0x3aad08: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3aad08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aad0c:
    // 0x3aad0c: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aad0cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x3AAD0C raw=0x42F00000");
label_3aad10:
    // 0x3aad10: 0x0  nop
    ctx->pc = 0x3aad10u;
    // NOP
label_3aad14:
    // 0x3aad14: 0x0  nop
    ctx->pc = 0x3aad14u;
    // NOP
label_3aad18:
    // 0x3aad18: 0x0  nop
    ctx->pc = 0x3aad18u;
    // NOP
label_3aad1c:
    // 0x3aad1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aad1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aad20:
    // 0x3aad20: 0x362a50  .word       0x00362A50                   # mfhi        $a1 # 00360240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aad20u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3aad24:
    // 0x3aad24: 0x362b60  .word       0x00362B60                   # add         $a1, $at, $s6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aad24u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3aad28:
    // 0x3aad28: 0x362c00  .word       0x00362C00                   # sll         $a1, $s6, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aad28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
label_3aad2c:
    // 0x3aad2c: 0x362e00  .word       0x00362E00                   # sll         $a1, $s6, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 24));
label_3aad30:
    // 0x3aad30: 0x362bb0  tge         $at, $s6, 174
    ctx->pc = 0x3aad30u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3aad34:
    // 0x3aad34: 0x0  nop
    ctx->pc = 0x3aad34u;
    // NOP
label_3aad38:
    // 0x3aad38: 0x362c60  .word       0x00362C60                   # add         $a1, $at, $s6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aad38u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3aad3c:
    // 0x3aad3c: 0x362df0  tge         $at, $s6, 183
    ctx->pc = 0x3aad3cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3aad40:
    // 0x3aad40: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x3aad40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aad44:
    // 0x3aad44: 0x0  nop
    ctx->pc = 0x3aad44u;
    // NOP
label_3aad48:
    // 0x3aad48: 0x0  nop
    ctx->pc = 0x3aad48u;
    // NOP
label_3aad4c:
    // 0x3aad4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aad4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aad50:
    // 0x3aad50: 0x25  move        $zero, $zero
    ctx->pc = 0x3aad50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_3aad54:
    // 0x3aad54: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aad54u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAD54 raw=0x42C80000");
label_3aad58:
    // 0x3aad58: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x3aad58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aad5c:
    // 0x3aad5c: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aad5cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAD5C raw=0x42C80000");
label_3aad60:
    // 0x3aad60: 0x0  nop
    ctx->pc = 0x3aad60u;
    // NOP
label_3aad64:
    // 0x3aad64: 0x0  nop
    ctx->pc = 0x3aad64u;
    // NOP
label_3aad68:
    // 0x3aad68: 0x0  nop
    ctx->pc = 0x3aad68u;
    // NOP
label_3aad6c:
    // 0x3aad6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aad6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aad70:
    // 0x3aad70: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x3aad70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3aad74:
    // 0x3aad74: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aad74u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAD74 raw=0x42C80000");
label_3aad78:
    // 0x3aad78: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x3aad78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aad7c:
    // 0x3aad7c: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aad7cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAD7C raw=0x42C80000");
label_3aad80:
    // 0x3aad80: 0x0  nop
    ctx->pc = 0x3aad80u;
    // NOP
label_3aad84:
    // 0x3aad84: 0x0  nop
    ctx->pc = 0x3aad84u;
    // NOP
label_3aad88:
    // 0x3aad88: 0x0  nop
    ctx->pc = 0x3aad88u;
    // NOP
label_3aad8c:
    // 0x3aad8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aad8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aad90:
    // 0x3aad90: 0x27  not         $zero, $zero
    ctx->pc = 0x3aad90u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_3aad94:
    // 0x3aad94: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aad94u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAD94 raw=0x42C80000");
label_3aad98:
    // 0x3aad98: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x3aad98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aad9c:
    // 0x3aad9c: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aad9cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAD9C raw=0x42C80000");
label_3aada0:
    // 0x3aada0: 0x0  nop
    ctx->pc = 0x3aada0u;
    // NOP
label_3aada4:
    // 0x3aada4: 0x0  nop
    ctx->pc = 0x3aada4u;
    // NOP
label_3aada8:
    // 0x3aada8: 0x0  nop
    ctx->pc = 0x3aada8u;
    // NOP
label_3aadac:
    // 0x3aadac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aadacu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aadb0:
    // 0x3aadb0: 0x28  mfsa        $zero
    ctx->pc = 0x3aadb0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3aadb4:
    // 0x3aadb4: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aadb4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AADB4 raw=0x42C80000");
label_3aadb8:
    // 0x3aadb8: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x3aadb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aadbc:
    // 0x3aadbc: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aadbcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AADBC raw=0x42C80000");
label_3aadc0:
    // 0x3aadc0: 0x0  nop
    ctx->pc = 0x3aadc0u;
    // NOP
label_3aadc4:
    // 0x3aadc4: 0x0  nop
    ctx->pc = 0x3aadc4u;
    // NOP
label_3aadc8:
    // 0x3aadc8: 0x0  nop
    ctx->pc = 0x3aadc8u;
    // NOP
label_3aadcc:
    // 0x3aadcc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aadccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aadd0:
    // 0x3aadd0: 0x29  mtsa        $zero
    ctx->pc = 0x3aadd0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_3aadd4:
    // 0x3aadd4: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aadd4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x3AADD4 raw=0x42700000");
label_3aadd8:
    // 0x3aadd8: 0xc2700000  ll          $s0, 0x0($s3)
    ctx->pc = 0x3aadd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aaddc:
    // 0x3aaddc: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aaddcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3AADDC raw=0x42480000");
label_3aade0:
    // 0x3aade0: 0x0  nop
    ctx->pc = 0x3aade0u;
    // NOP
label_3aade4:
    // 0x3aade4: 0x0  nop
    ctx->pc = 0x3aade4u;
    // NOP
label_3aade8:
    // 0x3aade8: 0x0  nop
    ctx->pc = 0x3aade8u;
    // NOP
label_3aadec:
    // 0x3aadec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aadecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aadf0:
    // 0x3aadf0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x3aadf0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_3aadf4:
    // 0x3aadf4: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aadf4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x3AADF4 raw=0x42700000");
label_3aadf8:
    // 0x3aadf8: 0xc2700000  ll          $s0, 0x0($s3)
    ctx->pc = 0x3aadf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aadfc:
    // 0x3aadfc: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aadfcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3AADFC raw=0x42480000");
label_3aae00:
    // 0x3aae00: 0x0  nop
    ctx->pc = 0x3aae00u;
    // NOP
label_3aae04:
    // 0x3aae04: 0x0  nop
    ctx->pc = 0x3aae04u;
    // NOP
label_3aae08:
    // 0x3aae08: 0x0  nop
    ctx->pc = 0x3aae08u;
    // NOP
label_3aae0c:
    // 0x3aae0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aae0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aae10:
    // 0x3aae10: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aae10u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AAE10 raw=0x00000001");
label_3aae14:
    // 0x3aae14: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aae14u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x3AAE14 raw=0x42700000");
label_3aae18:
    // 0x3aae18: 0xc2700000  ll          $s0, 0x0($s3)
    ctx->pc = 0x3aae18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aae1c:
    // 0x3aae1c: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aae1cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3AAE1C raw=0x43160000");
label_3aae20:
    // 0x3aae20: 0x0  nop
    ctx->pc = 0x3aae20u;
    // NOP
label_3aae24:
    // 0x3aae24: 0x0  nop
    ctx->pc = 0x3aae24u;
    // NOP
label_3aae28:
    // 0x3aae28: 0x0  nop
    ctx->pc = 0x3aae28u;
    // NOP
label_3aae2c:
    // 0x3aae2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aae2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aae30:
    // 0x3aae30: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x3aae30u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AAE30 raw=0x0000001C");
label_3aae34:
    // 0x3aae34: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aae34u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x3AAE34 raw=0x42700000");
label_3aae38:
    // 0x3aae38: 0xc2700000  ll          $s0, 0x0($s3)
    ctx->pc = 0x3aae38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aae3c:
    // 0x3aae3c: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aae3cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3AAE3C raw=0x43160000");
label_3aae40:
    // 0x3aae40: 0x0  nop
    ctx->pc = 0x3aae40u;
    // NOP
label_3aae44:
    // 0x3aae44: 0x0  nop
    ctx->pc = 0x3aae44u;
    // NOP
label_3aae48:
    // 0x3aae48: 0x0  nop
    ctx->pc = 0x3aae48u;
    // NOP
label_3aae4c:
    // 0x3aae4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aae4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aae50:
    // 0x3aae50: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x3aae50u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3aae54:
    // 0x3aae54: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aae54u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3AAE54 raw=0x42480000");
label_3aae58:
    // 0x3aae58: 0xc2480000  ll          $t0, 0x0($s2)
    ctx->pc = 0x3aae58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aae5c:
    // 0x3aae5c: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aae5cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAE5C raw=0x42C80000");
label_3aae60:
    // 0x3aae60: 0x0  nop
    ctx->pc = 0x3aae60u;
    // NOP
label_3aae64:
    // 0x3aae64: 0x0  nop
    ctx->pc = 0x3aae64u;
    // NOP
label_3aae68:
    // 0x3aae68: 0x0  nop
    ctx->pc = 0x3aae68u;
    // NOP
label_3aae6c:
    // 0x3aae6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aae6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aae70:
    // 0x3aae70: 0x19  multu       $zero, $zero
    ctx->pc = 0x3aae70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3aae74:
    // 0x3aae74: 0x0  nop
    ctx->pc = 0x3aae74u;
    // NOP
label_3aae78:
    // 0x3aae78: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x3aae78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aae7c:
    // 0x3aae7c: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aae7cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3AAE7C raw=0x42480000");
label_3aae80:
    // 0x3aae80: 0x0  nop
    ctx->pc = 0x3aae80u;
    // NOP
label_3aae84:
    // 0x3aae84: 0x0  nop
    ctx->pc = 0x3aae84u;
    // NOP
label_3aae88:
    // 0x3aae88: 0x0  nop
    ctx->pc = 0x3aae88u;
    // NOP
label_3aae8c:
    // 0x3aae8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aae8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aae90:
    // 0x3aae90: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x3aae90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_3aae94:
    // 0x3aae94: 0x0  nop
    ctx->pc = 0x3aae94u;
    // NOP
label_3aae98:
    // 0x3aae98: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x3aae98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aae9c:
    // 0x3aae9c: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aae9cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3AAE9C raw=0x42480000");
label_3aaea0:
    // 0x3aaea0: 0x0  nop
    ctx->pc = 0x3aaea0u;
    // NOP
label_3aaea4:
    // 0x3aaea4: 0x0  nop
    ctx->pc = 0x3aaea4u;
    // NOP
label_3aaea8:
    // 0x3aaea8: 0x0  nop
    ctx->pc = 0x3aaea8u;
    // NOP
label_3aaeac:
    // 0x3aaeac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aaeacu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aaeb0:
    // 0x3aaeb0: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x3aaeb0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3AAEB0 raw=0x0000001E");
label_3aaeb4:
    // 0x3aaeb4: 0x0  nop
    ctx->pc = 0x3aaeb4u;
    // NOP
label_3aaeb8:
    // 0x3aaeb8: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x3aaeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aaebc:
    // 0x3aaebc: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aaebcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3AAEBC raw=0x42480000");
label_3aaec0:
    // 0x3aaec0: 0x0  nop
    ctx->pc = 0x3aaec0u;
    // NOP
label_3aaec4:
    // 0x3aaec4: 0x0  nop
    ctx->pc = 0x3aaec4u;
    // NOP
label_3aaec8:
    // 0x3aaec8: 0x0  nop
    ctx->pc = 0x3aaec8u;
    // NOP
label_3aaecc:
    // 0x3aaecc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aaeccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aaed0:
    // 0x3aaed0: 0x22  neg         $zero, $zero
    ctx->pc = 0x3aaed0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_3aaed4:
    // 0x3aaed4: 0x0  nop
    ctx->pc = 0x3aaed4u;
    // NOP
label_3aaed8:
    // 0x3aaed8: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x3aaed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aaedc:
    // 0x3aaedc: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aaedcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3AAEDC raw=0x42480000");
label_3aaee0:
    // 0x3aaee0: 0x0  nop
    ctx->pc = 0x3aaee0u;
    // NOP
label_3aaee4:
    // 0x3aaee4: 0x0  nop
    ctx->pc = 0x3aaee4u;
    // NOP
label_3aaee8:
    // 0x3aaee8: 0x0  nop
    ctx->pc = 0x3aaee8u;
    // NOP
label_3aaeec:
    // 0x3aaeec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aaeecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3aaef0:
    // 0x3aaef0: 0xc42f0000  lwc1        $f15, 0x0($at)
    ctx->pc = 0x3aaef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_3aaef4:
    // 0x3aaef4: 0xc37a0000  ll          $k0, 0x0($k1)
    ctx->pc = 0x3aaef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3aaef8:
    // 0x3aaef8: 0x0  nop
    ctx->pc = 0x3aaef8u;
    // NOP
label_3aaefc:
    // 0x3aaefc: 0x442f0000  dmfc1       $t7, $f0
    ctx->pc = 0x3aaefcu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x3AAEFC raw=0x442F0000");
label_3aaf00:
    // 0x3aaf00: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aaf00u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3AAF00 raw=0x437A0000");
label_3aaf04:
    // 0x3aaf04: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x3aaf04u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x3AAF04 raw=0x44AF0000");
label_3aaf08:
    // 0x3aaf08: 0x40004  sllv        $zero, $a0, $zero
    ctx->pc = 0x3aaf08u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 0) & 0x1F));
label_3aaf0c:
    // 0x3aaf0c: 0x0  nop
    ctx->pc = 0x3aaf0cu;
    // NOP
label_3aaf10:
    // 0x3aaf10: 0x25  move        $zero, $zero
    ctx->pc = 0x3aaf10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_3aaf14:
    // 0x3aaf14: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x3aaf14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3aaf18:
    // 0x3aaf18: 0x27  not         $zero, $zero
    ctx->pc = 0x3aaf18u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_3aaf1c:
    // 0x3aaf1c: 0x28  mfsa        $zero
    ctx->pc = 0x3aaf1cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3aaf20:
    // 0x3aaf20: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x3aaf20u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_3aaf24:
    // 0x3aaf24: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x3aaf24u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3aaf28:
    // 0x3aaf28: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf28u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3AAF28 raw=0x00000005");
label_3aaf2c:
    // 0x3aaf2c: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x3aaf2cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3aaf30:
    // 0x3aaf30: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x3aaf30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_3aaf34:
    // 0x3aaf34: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x3aaf34u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_3aaf38:
    // 0x3aaf38: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x3aaf38u;
    // NOP (addi to $zero)
label_3aaf3c:
    // 0x3aaf3c: 0x10000000  b           . + 4 + (0x0 << 2)
label_3aaf40:
    if (ctx->pc == 0x3AAF40u) {
        ctx->pc = 0x3AAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF3Cu;
        // 0x3aaf40: 0x363630  tge         $at, $s6, 216 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF44u;
        goto label_3aaf44;
    }
    ctx->pc = 0x3AAF3Cu;
    {
        const bool branch_taken_0x3aaf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF3Cu;
        // 0x3aaf40: 0x363630  tge         $at, $s6, 216 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf3c) {
            ctx->pc = 0x3AAF40u;
            goto label_3aaf40;
        }
    }
    ctx->pc = 0x3AAF44u;
label_3aaf44:
    // 0x3aaf44: 0x363980  .word       0x00363980                   # sll         $a3, $s6, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
label_3aaf48:
    // 0x3aaf48: 0x3670e0  .word       0x003670E0                   # add         $t6, $at, $s6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf48u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_3aaf4c:
    // 0x3aaf4c: 0x367700  .word       0x00367700                   # sll         $t6, $s6, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf4cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 28));
label_3aaf50:
    // 0x3aaf50: 0x0  nop
    ctx->pc = 0x3aaf50u;
    // NOP
label_3aaf54:
    // 0x3aaf54: 0x0  nop
    ctx->pc = 0x3aaf54u;
    // NOP
label_3aaf58:
    // 0x3aaf58: 0x0  nop
    ctx->pc = 0x3aaf58u;
    // NOP
label_3aaf5c:
    // 0x3aaf5c: 0x0  nop
    ctx->pc = 0x3aaf5cu;
    // NOP
label_3aaf60:
    // 0x3aaf60: 0x367e50  .word       0x00367E50                   # mfhi        $t7 # 00360640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf60u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_3aaf64:
    // 0x3aaf64: 0x175140  sll         $t2, $s7, 5
    ctx->pc = 0x3aaf64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_3aaf68:
    // 0x3aaf68: 0x0  nop
    ctx->pc = 0x3aaf68u;
    // NOP
label_3aaf6c:
    // 0x3aaf6c: 0x0  nop
    ctx->pc = 0x3aaf6cu;
    // NOP
label_3aaf70:
    // 0x3aaf70: 0x363a00  .word       0x00363A00                   # sll         $a3, $s6, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 8));
label_3aaf74:
    // 0x3aaf74: 0x363f00  .word       0x00363F00                   # sll         $a3, $s6, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 28));
label_3aaf78:
    // 0x3aaf78: 0x364590  .word       0x00364590                   # mfhi        $t0 # 00360580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf78u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_3aaf7c:
    // 0x3aaf7c: 0x364ca0  .word       0x00364CA0                   # add         $t1, $at, $s6 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf7cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_3aaf80:
    // 0x3aaf80: 0x365160  .word       0x00365160                   # add         $t2, $at, $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf80u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_3aaf84:
    // 0x3aaf84: 0x3654b0  tge         $at, $s6, 338
    ctx->pc = 0x3aaf84u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3aaf88:
    // 0x3aaf88: 0x365610  .word       0x00365610                   # mfhi        $t2 # 00360600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf88u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_3aaf8c:
    // 0x3aaf8c: 0x365770  tge         $at, $s6, 349
    ctx->pc = 0x3aaf8cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3aaf90:
    // 0x3aaf90: 0x365920  .word       0x00365920                   # add         $t3, $at, $s6 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf90u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_3aaf94:
    // 0x3aaf94: 0x365b60  .word       0x00365B60                   # add         $t3, $at, $s6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf94u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_3aaf98:
    // 0x3aaf98: 0x365e90  .word       0x00365E90                   # mfhi        $t3 # 00360680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaf98u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_3aaf9c:
    // 0x3aaf9c: 0x3661b0  tge         $at, $s6, 390
    ctx->pc = 0x3aaf9cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3aafa0:
    // 0x3aafa0: 0x366360  .word       0x00366360                   # add         $t4, $at, $s6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafa0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_3aafa4:
    // 0x3aafa4: 0x366510  .word       0x00366510                   # mfhi        $t4 # 00360500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafa4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_3aafa8:
    // 0x3aafa8: 0x3667f0  tge         $at, $s6, 415
    ctx->pc = 0x3aafa8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3aafac:
    // 0x3aafac: 0x3669c0  .word       0x003669C0                   # sll         $t5, $s6, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafacu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 22), 7));
label_3aafb0:
    // 0x3aafb0: 0x366b50  .word       0x00366B50                   # mfhi        $t5 # 00360340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafb0u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_3aafb4:
    // 0x3aafb4: 0x366ce0  .word       0x00366CE0                   # add         $t5, $at, $s6 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafb4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_3aafb8:
    // 0x3aafb8: 0x367060  .word       0x00367060                   # add         $t6, $at, $s6 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafb8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_3aafbc:
    // 0x3aafbc: 0x367080  .word       0x00367080                   # sll         $t6, $s6, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafbcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_3aafc0:
    // 0x3aafc0: 0x3670a0  .word       0x003670A0                   # add         $t6, $at, $s6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafc0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_3aafc4:
    // 0x3aafc4: 0x3670c0  .word       0x003670C0                   # sll         $t6, $s6, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafc4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_3aafc8:
    // 0x3aafc8: 0x0  nop
    ctx->pc = 0x3aafc8u;
    // NOP
label_3aafcc:
    // 0x3aafcc: 0x0  nop
    ctx->pc = 0x3aafccu;
    // NOP
label_3aafd0:
    // 0x3aafd0: 0x363df0  tge         $at, $s6, 247
    ctx->pc = 0x3aafd0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3aafd4:
    // 0x3aafd4: 0x364380  .word       0x00364380                   # sll         $t0, $s6, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 22), 14));
label_3aafd8:
    // 0x3aafd8: 0x364a90  .word       0x00364A90                   # mfhi        $t1 # 00360280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafd8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_3aafdc:
    // 0x3aafdc: 0x364cc0  .word       0x00364CC0                   # sll         $t1, $s6, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafdcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 22), 19));
label_3aafe0:
    // 0x3aafe0: 0x365180  .word       0x00365180                   # sll         $t2, $s6, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafe0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
label_3aafe4:
    // 0x3aafe4: 0x3654d0  .word       0x003654D0                   # mfhi        $t2 # 003604C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafe4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_3aafe8:
    // 0x3aafe8: 0x365630  tge         $at, $s6, 344
    ctx->pc = 0x3aafe8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3aafec:
    // 0x3aafec: 0x365790  .word       0x00365790                   # mfhi        $t2 # 00360780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aafecu;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_3aaff0:
    // 0x3aaff0: 0x365940  .word       0x00365940                   # sll         $t3, $s6, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaff0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
label_3aaff4:
    // 0x3aaff4: 0x365c00  .word       0x00365C00                   # sll         $t3, $s6, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaff4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
label_3aaff8:
    // 0x3aaff8: 0x365fd0  .word       0x00365FD0                   # mfhi        $t3 # 003607C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaff8u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_3aaffc:
    // 0x3aaffc: 0x3661d0  .word       0x003661D0                   # mfhi        $t4 # 003601C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaffcu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_3ab000:
    // 0x3ab000: 0x366380  .word       0x00366380                   # sll         $t4, $s6, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab000u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 22), 14));
label_3ab004:
    // 0x3ab004: 0x366530  tge         $at, $s6, 404
    ctx->pc = 0x3ab004u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab008:
    // 0x3ab008: 0x366810  .word       0x00366810                   # mfhi        $t5 # 00360000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab008u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_3ab00c:
    // 0x3ab00c: 0x3669e0  .word       0x003669E0                   # add         $t5, $at, $s6 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab00cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_3ab010:
    // 0x3ab010: 0x366b70  tge         $at, $s6, 429
    ctx->pc = 0x3ab010u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab014:
    // 0x3ab014: 0x366d00  .word       0x00366D00                   # sll         $t5, $s6, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab014u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 22), 20));
label_3ab018:
    // 0x3ab018: 0x367070  tge         $at, $s6, 449
    ctx->pc = 0x3ab018u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab01c:
    // 0x3ab01c: 0x367090  .word       0x00367090                   # mfhi        $t6 # 00360080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab01cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_3ab020:
    // 0x3ab020: 0x3670b0  tge         $at, $s6, 450
    ctx->pc = 0x3ab020u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab024:
    // 0x3ab024: 0x3670d0  .word       0x003670D0                   # mfhi        $t6 # 003600C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab024u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_3ab028:
    // 0x3ab028: 0x367780  .word       0x00367780                   # sll         $t6, $s6, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab028u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 30));
label_3ab02c:
    // 0x3ab02c: 0x367ae0  .word       0x00367AE0                   # add         $t7, $at, $s6 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab02cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_3ab030:
    // 0x3ab030: 0x3677a0  .word       0x003677A0                   # add         $t6, $at, $s6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab030u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_3ab034:
    // 0x3ab034: 0x367b00  .word       0x00367B00                   # sll         $t7, $s6, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab034u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 12));
label_3ab038:
    // 0x3ab038: 0x367160  .word       0x00367160                   # add         $t6, $at, $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab038u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_3ab03c:
    // 0x3ab03c: 0x3672c0  .word       0x003672C0                   # sll         $t6, $s6, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab03cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 11));
label_3ab040:
    // 0x3ab040: 0x3674d0  .word       0x003674D0                   # mfhi        $t6 # 003604C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab040u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_3ab044:
    // 0x3ab044: 0x0  nop
    ctx->pc = 0x3ab044u;
    // NOP
label_3ab048:
    // 0x3ab048: 0x367180  .word       0x00367180                   # sll         $t6, $s6, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab048u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
label_3ab04c:
    // 0x3ab04c: 0x3672e0  .word       0x003672E0                   # add         $t6, $at, $s6 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab04cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_3ab050:
    // 0x3ab050: 0x3674f0  tge         $at, $s6, 467
    ctx->pc = 0x3ab050u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab054:
    // 0x3ab054: 0x0  nop
    ctx->pc = 0x3ab054u;
    // NOP
label_3ab058:
    // 0x3ab058: 0x36a0a0  .word       0x0036A0A0                   # add         $s4, $at, $s6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab058u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_3ab05c:
    // 0x3ab05c: 0x0  nop
    ctx->pc = 0x3ab05cu;
    // NOP
label_3ab060:
    // 0x3ab060: 0x36a100  .word       0x0036A100                   # sll         $s4, $s6, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab060u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_3ab064:
    // 0x3ab064: 0x36a2b0  tge         $at, $s6, 650
    ctx->pc = 0x3ab064u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab068:
    // 0x3ab068: 0x36a740  .word       0x0036A740                   # sll         $s4, $s6, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab068u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 29));
label_3ab06c:
    // 0x3ab06c: 0x36a970  tge         $at, $s6, 677
    ctx->pc = 0x3ab06cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab070:
    // 0x3ab070: 0x367ea0  .word       0x00367EA0                   # add         $t7, $at, $s6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab070u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_3ab074:
    // 0x3ab074: 0x367ec0  .word       0x00367EC0                   # sll         $t7, $s6, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab074u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 27));
label_3ab078:
    // 0x3ab078: 0x367ee0  .word       0x00367EE0                   # add         $t7, $at, $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab078u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_3ab07c:
    // 0x3ab07c: 0x367f00  .word       0x00367F00                   # sll         $t7, $s6, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab07cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 28));
label_3ab080:
    // 0x3ab080: 0x3687e0  .word       0x003687E0                   # add         $s0, $at, $s6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab080u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_3ab084:
    // 0x3ab084: 0x368950  .word       0x00368950                   # mfhi        $s1 # 00360140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab084u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_3ab088:
    // 0x3ab088: 0x368a20  .word       0x00368A20                   # add         $s1, $at, $s6 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab088u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_3ab08c:
    // 0x3ab08c: 0x368bd0  .word       0x00368BD0                   # mfhi        $s1 # 003603C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab08cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_3ab090:
    // 0x3ab090: 0x368f20  .word       0x00368F20                   # add         $s1, $at, $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab090u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_3ab094:
    // 0x3ab094: 0x369010  .word       0x00369010                   # mfhi        $s2 # 00360000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab094u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_3ab098:
    // 0x3ab098: 0x3692d0  .word       0x003692D0                   # mfhi        $s2 # 003602C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab098u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_3ab09c:
    // 0x3ab09c: 0x369420  .word       0x00369420                   # add         $s2, $at, $s6 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab09cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_3ab0a0:
    // 0x3ab0a0: 0x369780  .word       0x00369780                   # sll         $s2, $s6, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab0a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 22), 30));
label_3ab0a4:
    // 0x3ab0a4: 0x369fa0  .word       0x00369FA0                   # add         $s3, $at, $s6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab0a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_3ab0a8:
    // 0x3ab0a8: 0x0  nop
    ctx->pc = 0x3ab0a8u;
    // NOP
label_3ab0ac:
    // 0x3ab0ac: 0x0  nop
    ctx->pc = 0x3ab0acu;
    // NOP
label_3ab0b0:
    // 0x3ab0b0: 0x0  nop
    ctx->pc = 0x3ab0b0u;
    // NOP
label_3ab0b4:
    // 0x3ab0b4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3ab0b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3ab0b8:
    // 0x3ab0b8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x3ab0b8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_3ab0bc:
    // 0x3ab0bc: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x3ab0bcu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_3ab0c0:
    // 0x3ab0c0: 0x0  nop
    ctx->pc = 0x3ab0c0u;
    // NOP
label_3ab0c4:
    // 0x3ab0c4: 0x0  nop
    ctx->pc = 0x3ab0c4u;
    // NOP
label_3ab0c8:
    // 0x3ab0c8: 0x0  nop
    ctx->pc = 0x3ab0c8u;
    // NOP
label_3ab0cc:
    // 0x3ab0cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab0ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab0d0:
    // 0x3ab0d0: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab0d0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x3AB0D0 raw=0x44FA0000");
label_3ab0d4:
    // 0x3ab0d4: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab0d4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x3AB0D4 raw=0x44FA0000");
label_3ab0d8:
    // 0x3ab0d8: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab0d8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x3AB0D8 raw=0x44FA0000");
label_3ab0dc:
    // 0x3ab0dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab0dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab0e0:
    // 0x3ab0e0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab0e0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab0e4:
    // 0x3ab0e4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab0e4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab0e8:
    // 0x3ab0e8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab0e8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab0ec:
    // 0x3ab0ec: 0x0  nop
    ctx->pc = 0x3ab0ecu;
    // NOP
label_3ab0f0:
    // 0x3ab0f0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab0f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AB0F0 raw=0x00000001");
label_3ab0f4:
    // 0x3ab0f4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3ab0f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3ab0f8:
    // 0x3ab0f8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x3ab0f8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_3ab0fc:
    // 0x3ab0fc: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x3ab0fcu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_3ab100:
    // 0x3ab100: 0x0  nop
    ctx->pc = 0x3ab100u;
    // NOP
label_3ab104:
    // 0x3ab104: 0x0  nop
    ctx->pc = 0x3ab104u;
    // NOP
label_3ab108:
    // 0x3ab108: 0x0  nop
    ctx->pc = 0x3ab108u;
    // NOP
label_3ab10c:
    // 0x3ab10c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab10cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab110:
    // 0x3ab110: 0x457a0000  .word       0x457A0000                   # INVALID     $t3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab110u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x0 at 0x3AB110 raw=0x457A0000");
label_3ab114:
    // 0x3ab114: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab114u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x3AB114 raw=0x44FA0000");
label_3ab118:
    // 0x3ab118: 0x457a0000  .word       0x457A0000                   # INVALID     $t3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab118u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x0 at 0x3AB118 raw=0x457A0000");
label_3ab11c:
    // 0x3ab11c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab11cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab120:
    // 0x3ab120: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab120u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab124:
    // 0x3ab124: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab124u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab128:
    // 0x3ab128: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab128u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab12c:
    // 0x3ab12c: 0x0  nop
    ctx->pc = 0x3ab12cu;
    // NOP
label_3ab130:
    // 0x3ab130: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x3ab130u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_3ab134:
    // 0x3ab134: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3ab134u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3ab138:
    // 0x3ab138: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x3ab138u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_3ab13c:
    // 0x3ab13c: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x3ab13cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_3ab140:
    // 0x3ab140: 0x0  nop
    ctx->pc = 0x3ab140u;
    // NOP
label_3ab144:
    // 0x3ab144: 0x0  nop
    ctx->pc = 0x3ab144u;
    // NOP
label_3ab148:
    // 0x3ab148: 0x0  nop
    ctx->pc = 0x3ab148u;
    // NOP
label_3ab14c:
    // 0x3ab14c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab14cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab150:
    // 0x3ab150: 0x45bb8000  .word       0x45BB8000                   # INVALID     $t5, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab150u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xD, function 0x0 at 0x3AB150 raw=0x45BB8000");
label_3ab154:
    // 0x3ab154: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab154u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x3AB154 raw=0x44FA0000");
label_3ab158:
    // 0x3ab158: 0x45bb8000  .word       0x45BB8000                   # INVALID     $t5, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab158u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xD, function 0x0 at 0x3AB158 raw=0x45BB8000");
label_3ab15c:
    // 0x3ab15c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab15cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab160:
    // 0x3ab160: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab160u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab164:
    // 0x3ab164: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab164u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab168:
    // 0x3ab168: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab168u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab16c:
    // 0x3ab16c: 0x0  nop
    ctx->pc = 0x3ab16cu;
    // NOP
label_3ab170:
    // 0x3ab170: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3ab170u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3ab174:
    // 0x3ab174: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3ab174u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3ab178:
    // 0x3ab178: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x3ab178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3ab17c:
    // 0x3ab17c: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x3ab17cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_3ab180:
    // 0x3ab180: 0x0  nop
    ctx->pc = 0x3ab180u;
    // NOP
label_3ab184:
    // 0x3ab184: 0x0  nop
    ctx->pc = 0x3ab184u;
    // NOP
label_3ab188:
    // 0x3ab188: 0x0  nop
    ctx->pc = 0x3ab188u;
    // NOP
label_3ab18c:
    // 0x3ab18c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab18cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab190:
    // 0x3ab190: 0x45bb8000  .word       0x45BB8000                   # INVALID     $t5, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab190u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xD, function 0x0 at 0x3AB190 raw=0x45BB8000");
label_3ab194:
    // 0x3ab194: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab194u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x3AB194 raw=0x44FA0000");
label_3ab198:
    // 0x3ab198: 0x45bb8000  .word       0x45BB8000                   # INVALID     $t5, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab198u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xD, function 0x0 at 0x3AB198 raw=0x45BB8000");
label_3ab19c:
    // 0x3ab19c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab19cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab1a0:
    // 0x3ab1a0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab1a0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab1a4:
    // 0x3ab1a4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab1a4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab1a8:
    // 0x3ab1a8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab1a8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab1ac:
    // 0x3ab1ac: 0x0  nop
    ctx->pc = 0x3ab1acu;
    // NOP
label_3ab1b0:
    // 0x3ab1b0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x3ab1b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ab1b4:
    // 0x3ab1b4: 0x3ab0b0  tge         $at, $k0, 706
    ctx->pc = 0x3ab1b4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_3ab1b8:
    // 0x3ab1b8: 0x0  nop
    ctx->pc = 0x3ab1b8u;
    // NOP
label_3ab1bc:
    // 0x3ab1bc: 0x0  nop
    ctx->pc = 0x3ab1bcu;
    // NOP
label_3ab1c0:
    // 0x3ab1c0: 0x0  nop
    ctx->pc = 0x3ab1c0u;
    // NOP
label_3ab1c4:
    // 0x3ab1c4: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab1c4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AB1C4 raw=0x43FA0000");
label_3ab1c8:
    // 0x3ab1c8: 0xc3fa0000  ll          $k0, 0x0($ra)
    ctx->pc = 0x3ab1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3ab1cc:
    // 0x3ab1cc: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab1ccu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3AB1CC raw=0x437A0000");
label_3ab1d0:
    // 0x3ab1d0: 0x0  nop
    ctx->pc = 0x3ab1d0u;
    // NOP
label_3ab1d4:
    // 0x3ab1d4: 0x0  nop
    ctx->pc = 0x3ab1d4u;
    // NOP
label_3ab1d8:
    // 0x3ab1d8: 0x0  nop
    ctx->pc = 0x3ab1d8u;
    // NOP
label_3ab1dc:
    // 0x3ab1dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab1dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab1e0:
    // 0x3ab1e0: 0x36ac40  .word       0x0036AC40                   # sll         $s5, $s6, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab1e0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 22), 17));
label_3ab1e4:
    // 0x3ab1e4: 0x36b220  .word       0x0036B220                   # add         $s6, $at, $s6 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab1e4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3ab1e8:
    // 0x3ab1e8: 0x36d200  .word       0x0036D200                   # sll         $k0, $s6, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab1e8u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 22), 8));
label_3ab1ec:
    // 0x3ab1ec: 0x36d250  .word       0x0036D250                   # mfhi        $k0 # 00360240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab1ecu;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_3ab1f0:
    // 0x3ab1f0: 0x36b680  .word       0x0036B680                   # sll         $s6, $s6, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab1f0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 26));
label_3ab1f4:
    // 0x3ab1f4: 0x36b760  .word       0x0036B760                   # add         $s6, $at, $s6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3ab1f8:
    // 0x3ab1f8: 0x36b850  .word       0x0036B850                   # mfhi        $s7 # 00360040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab1f8u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_3ab1fc:
    // 0x3ab1fc: 0x0  nop
    ctx->pc = 0x3ab1fcu;
    // NOP
label_3ab200:
    // 0x3ab200: 0x36ba20  .word       0x0036BA20                   # add         $s7, $at, $s6 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab200u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_3ab204:
    // 0x3ab204: 0x36bb20  .word       0x0036BB20                   # add         $s7, $at, $s6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab204u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_3ab208:
    // 0x3ab208: 0x36bed0  .word       0x0036BED0                   # mfhi        $s7 # 003606C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab208u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_3ab20c:
    // 0x3ab20c: 0x36c070  tge         $at, $s6, 769
    ctx->pc = 0x3ab20cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab210:
    // 0x3ab210: 0x36c330  tge         $at, $s6, 780
    ctx->pc = 0x3ab210u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab214:
    // 0x3ab214: 0x36c6a0  .word       0x0036C6A0                   # add         $t8, $at, $s6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab214u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_3ab218:
    // 0x3ab218: 0x0  nop
    ctx->pc = 0x3ab218u;
    // NOP
label_3ab21c:
    // 0x3ab21c: 0x0  nop
    ctx->pc = 0x3ab21cu;
    // NOP
label_3ab220:
    // 0x3ab220: 0x36ba30  tge         $at, $s6, 744
    ctx->pc = 0x3ab220u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab224:
    // 0x3ab224: 0x36bb30  tge         $at, $s6, 748
    ctx->pc = 0x3ab224u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab228:
    // 0x3ab228: 0x36bee0  .word       0x0036BEE0                   # add         $s7, $at, $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab228u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_3ab22c:
    // 0x3ab22c: 0x36c080  .word       0x0036C080                   # sll         $t8, $s6, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab22cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_3ab230:
    // 0x3ab230: 0x36c340  .word       0x0036C340                   # sll         $t8, $s6, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab230u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 22), 13));
label_3ab234:
    // 0x3ab234: 0x36c6b0  tge         $at, $s6, 794
    ctx->pc = 0x3ab234u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab238:
    // 0x3ab238: 0x0  nop
    ctx->pc = 0x3ab238u;
    // NOP
label_3ab23c:
    // 0x3ab23c: 0x0  nop
    ctx->pc = 0x3ab23cu;
    // NOP
label_3ab240:
    // 0x3ab240: 0x36b8d0  .word       0x0036B8D0                   # mfhi        $s7 # 003600C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab240u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_3ab244:
    // 0x3ab244: 0x36c7c0  .word       0x0036C7C0                   # sll         $t8, $s6, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab244u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 22), 31));
label_3ab248:
    // 0x3ab248: 0x36c970  tge         $at, $s6, 805
    ctx->pc = 0x3ab248u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab24c:
    // 0x3ab24c: 0x36cde0  .word       0x0036CDE0                   # add         $t9, $at, $s6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab24cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_3ab250:
    // 0x3ab250: 0x36cf20  .word       0x0036CF20                   # add         $t9, $at, $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab250u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_3ab254:
    // 0x3ab254: 0x36d060  .word       0x0036D060                   # add         $k0, $at, $s6 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab254u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_3ab258:
    // 0x3ab258: 0x0  nop
    ctx->pc = 0x3ab258u;
    // NOP
label_3ab25c:
    // 0x3ab25c: 0x0  nop
    ctx->pc = 0x3ab25cu;
    // NOP
label_3ab260:
    // 0x3ab260: 0x36b8e0  .word       0x0036B8E0                   # add         $s7, $at, $s6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab260u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_3ab264:
    // 0x3ab264: 0x36c7d0  .word       0x0036C7D0                   # mfhi        $t8 # 003607C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab264u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_3ab268:
    // 0x3ab268: 0x36c980  .word       0x0036C980                   # sll         $t9, $s6, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab268u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
label_3ab26c:
    // 0x3ab26c: 0x36cdf0  tge         $at, $s6, 823
    ctx->pc = 0x3ab26cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab270:
    // 0x3ab270: 0x36cf30  tge         $at, $s6, 828
    ctx->pc = 0x3ab270u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab274:
    // 0x3ab274: 0x36d070  tge         $at, $s6, 833
    ctx->pc = 0x3ab274u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab278:
    // 0x3ab278: 0x36d160  .word       0x0036D160                   # add         $k0, $at, $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab278u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_3ab27c:
    // 0x3ab27c: 0x0  nop
    ctx->pc = 0x3ab27cu;
    // NOP
label_3ab280:
    // 0x3ab280: 0x36d170  tge         $at, $s6, 837
    ctx->pc = 0x3ab280u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab284:
    // 0x3ab284: 0x0  nop
    ctx->pc = 0x3ab284u;
    // NOP
label_3ab288:
    // 0x3ab288: 0x0  nop
    ctx->pc = 0x3ab288u;
    // NOP
label_3ab28c:
    // 0x3ab28c: 0x0  nop
    ctx->pc = 0x3ab28cu;
    // NOP
label_3ab290:
    // 0x3ab290: 0x0  nop
    ctx->pc = 0x3ab290u;
    // NOP
label_3ab294:
    // 0x3ab294: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab294u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x3AB294 raw=0x43C80000");
label_3ab298:
    // 0x3ab298: 0x44228000  dmfc1       $v0, $f16
    ctx->pc = 0x3ab298u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x3AB298 raw=0x44228000");
label_3ab29c:
    // 0x3ab29c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab29cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab2a0:
    // 0x3ab2a0: 0x0  nop
    ctx->pc = 0x3ab2a0u;
    // NOP
label_3ab2a4:
    // 0x3ab2a4: 0x0  nop
    ctx->pc = 0x3ab2a4u;
    // NOP
label_3ab2a8:
    // 0x3ab2a8: 0x466a6000  .word       0x466A6000                   # INVALID     $s3, $t2, 0x6000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab2a8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x0 at 0x3AB2A8 raw=0x466A6000");
label_3ab2ac:
    // 0x3ab2ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab2acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab2b0:
    // 0x3ab2b0: 0x0  nop
    ctx->pc = 0x3ab2b0u;
    // NOP
label_3ab2b4:
    // 0x3ab2b4: 0x0  nop
    ctx->pc = 0x3ab2b4u;
    // NOP
label_3ab2b8:
    // 0x3ab2b8: 0x0  nop
    ctx->pc = 0x3ab2b8u;
    // NOP
label_3ab2bc:
    // 0x3ab2bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab2bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab2c0:
    // 0x3ab2c0: 0x0  nop
    ctx->pc = 0x3ab2c0u;
    // NOP
label_3ab2c4:
    // 0x3ab2c4: 0x43340000  .word       0x43340000                   # INVALID     $t9, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab2c4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x3AB2C4 raw=0x43340000");
label_3ab2c8:
    // 0x3ab2c8: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x3ab2c8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x3AB2C8 raw=0x44AF0000");
label_3ab2cc:
    // 0x3ab2cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab2ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab2d0:
    // 0x3ab2d0: 0x0  nop
    ctx->pc = 0x3ab2d0u;
    // NOP
label_3ab2d4:
    // 0x3ab2d4: 0x0  nop
    ctx->pc = 0x3ab2d4u;
    // NOP
label_3ab2d8:
    // 0x3ab2d8: 0x466a6000  .word       0x466A6000                   # INVALID     $s3, $t2, 0x6000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab2d8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x0 at 0x3AB2D8 raw=0x466A6000");
label_3ab2dc:
    // 0x3ab2dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab2dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab2e0:
    // 0x3ab2e0: 0x0  nop
    ctx->pc = 0x3ab2e0u;
    // NOP
label_3ab2e4:
    // 0x3ab2e4: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab2e4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AB2E4 raw=0x43FA0000");
label_3ab2e8:
    // 0x3ab2e8: 0x44228000  dmfc1       $v0, $f16
    ctx->pc = 0x3ab2e8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x3AB2E8 raw=0x44228000");
label_3ab2ec:
    // 0x3ab2ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab2ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab2f0:
    // 0x3ab2f0: 0x0  nop
    ctx->pc = 0x3ab2f0u;
    // NOP
label_3ab2f4:
    // 0x3ab2f4: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab2f4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AB2F4 raw=0x43FA0000");
label_3ab2f8:
    // 0x3ab2f8: 0xc3fa0000  ll          $k0, 0x0($ra)
    ctx->pc = 0x3ab2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3ab2fc:
    // 0x3ab2fc: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab2fcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3AB2FC raw=0x437A0000");
label_3ab300:
    // 0x3ab300: 0x0  nop
    ctx->pc = 0x3ab300u;
    // NOP
label_3ab304:
    // 0x3ab304: 0x0  nop
    ctx->pc = 0x3ab304u;
    // NOP
label_3ab308:
    // 0x3ab308: 0x0  nop
    ctx->pc = 0x3ab308u;
    // NOP
label_3ab30c:
    // 0x3ab30c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab30cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab310:
    // 0x3ab310: 0x36de70  tge         $at, $s6, 889
    ctx->pc = 0x3ab310u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab314:
    // 0x3ab314: 0x36df90  .word       0x0036DF90                   # mfhi        $k1 # 00360780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab314u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_3ab318:
    // 0x3ab318: 0x36ed10  .word       0x0036ED10                   # mfhi        $sp # 00360500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab318u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_3ab31c:
    // 0x3ab31c: 0x36ed30  tge         $at, $s6, 948
    ctx->pc = 0x3ab31cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab320:
    // 0x3ab320: 0x36dfe0  .word       0x0036DFE0                   # add         $k1, $at, $s6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab320u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_3ab324:
    // 0x3ab324: 0x36e060  .word       0x0036E060                   # add         $gp, $at, $s6 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab324u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_3ab328:
    // 0x3ab328: 0x36e0e0  .word       0x0036E0E0                   # add         $gp, $at, $s6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab328u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_3ab32c:
    // 0x3ab32c: 0x0  nop
    ctx->pc = 0x3ab32cu;
    // NOP
label_3ab330:
    // 0x3ab330: 0x36e260  .word       0x0036E260                   # add         $gp, $at, $s6 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab330u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_3ab334:
    // 0x3ab334: 0x36e310  .word       0x0036E310                   # mfhi        $gp # 00360300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab334u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_3ab338:
    // 0x3ab338: 0x36e3c0  .word       0x0036E3C0                   # sll         $gp, $s6, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab338u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 22), 15));
label_3ab33c:
    // 0x3ab33c: 0x36e470  tge         $at, $s6, 913
    ctx->pc = 0x3ab33cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab340:
    // 0x3ab340: 0x36e520  .word       0x0036E520                   # add         $gp, $at, $s6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab340u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_3ab344:
    // 0x3ab344: 0x36e5d0  .word       0x0036E5D0                   # mfhi        $gp # 003605C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab344u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_3ab348:
    // 0x3ab348: 0x0  nop
    ctx->pc = 0x3ab348u;
    // NOP
label_3ab34c:
    // 0x3ab34c: 0x0  nop
    ctx->pc = 0x3ab34cu;
    // NOP
label_3ab350:
    // 0x3ab350: 0x36e270  tge         $at, $s6, 905
    ctx->pc = 0x3ab350u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab354:
    // 0x3ab354: 0x36e320  .word       0x0036E320                   # add         $gp, $at, $s6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab354u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_3ab358:
    // 0x3ab358: 0x36e3d0  .word       0x0036E3D0                   # mfhi        $gp # 003603C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab358u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_3ab35c:
    // 0x3ab35c: 0x36e480  .word       0x0036E480                   # sll         $gp, $s6, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab35cu;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 22), 18));
label_3ab360:
    // 0x3ab360: 0x36e530  tge         $at, $s6, 916
    ctx->pc = 0x3ab360u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab364:
    // 0x3ab364: 0x36e5e0  .word       0x0036E5E0                   # add         $gp, $at, $s6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab364u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_3ab368:
    // 0x3ab368: 0x0  nop
    ctx->pc = 0x3ab368u;
    // NOP
label_3ab36c:
    // 0x3ab36c: 0x0  nop
    ctx->pc = 0x3ab36cu;
    // NOP
label_3ab370:
    // 0x3ab370: 0x36e160  .word       0x0036E160                   # add         $gp, $at, $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab370u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_3ab374:
    // 0x3ab374: 0x36e680  .word       0x0036E680                   # sll         $gp, $s6, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab374u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 22), 26));
label_3ab378:
    // 0x3ab378: 0x36e730  tge         $at, $s6, 924
    ctx->pc = 0x3ab378u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab37c:
    // 0x3ab37c: 0x36e830  tge         $at, $s6, 928
    ctx->pc = 0x3ab37cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab380:
    // 0x3ab380: 0x36e8f0  tge         $at, $s6, 931
    ctx->pc = 0x3ab380u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab384:
    // 0x3ab384: 0x36eab0  tge         $at, $s6, 938
    ctx->pc = 0x3ab384u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab388:
    // 0x3ab388: 0x0  nop
    ctx->pc = 0x3ab388u;
    // NOP
label_3ab38c:
    // 0x3ab38c: 0x0  nop
    ctx->pc = 0x3ab38cu;
    // NOP
label_3ab390:
    // 0x3ab390: 0x36e170  tge         $at, $s6, 901
    ctx->pc = 0x3ab390u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab394:
    // 0x3ab394: 0x36e690  .word       0x0036E690                   # mfhi        $gp # 00360680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab394u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_3ab398:
    // 0x3ab398: 0x36e740  .word       0x0036E740                   # sll         $gp, $s6, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab398u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 22), 29));
label_3ab39c:
    // 0x3ab39c: 0x36e840  .word       0x0036E840                   # sll         $sp, $s6, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab39cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_3ab3a0:
    // 0x3ab3a0: 0x36e900  .word       0x0036E900                   # sll         $sp, $s6, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_3ab3a4:
    // 0x3ab3a4: 0x36eac0  .word       0x0036EAC0                   # sll         $sp, $s6, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab3a4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 22), 11));
label_3ab3a8:
    // 0x3ab3a8: 0x36ec70  tge         $at, $s6, 945
    ctx->pc = 0x3ab3a8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab3ac:
    // 0x3ab3ac: 0x0  nop
    ctx->pc = 0x3ab3acu;
    // NOP
label_3ab3b0:
    // 0x3ab3b0: 0x36ec80  .word       0x0036EC80                   # sll         $sp, $s6, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 22), 18));
label_3ab3b4:
    // 0x3ab3b4: 0x0  nop
    ctx->pc = 0x3ab3b4u;
    // NOP
label_3ab3b8:
    // 0x3ab3b8: 0x0  nop
    ctx->pc = 0x3ab3b8u;
    // NOP
label_3ab3bc:
    // 0x3ab3bc: 0x0  nop
    ctx->pc = 0x3ab3bcu;
    // NOP
label_3ab3c0:
    // 0x3ab3c0: 0x0  nop
    ctx->pc = 0x3ab3c0u;
    // NOP
label_3ab3c4:
    // 0x3ab3c4: 0x0  nop
    ctx->pc = 0x3ab3c4u;
    // NOP
label_3ab3c8:
    // 0x3ab3c8: 0x0  nop
    ctx->pc = 0x3ab3c8u;
    // NOP
label_3ab3cc:
    // 0x3ab3cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab3ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab3d0:
    // 0x3ab3d0: 0x0  nop
    ctx->pc = 0x3ab3d0u;
    // NOP
label_3ab3d4:
    // 0x3ab3d4: 0x0  nop
    ctx->pc = 0x3ab3d4u;
    // NOP
label_3ab3d8:
    // 0x3ab3d8: 0x0  nop
    ctx->pc = 0x3ab3d8u;
    // NOP
label_3ab3dc:
    // 0x3ab3dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab3dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab3e0:
    // 0x3ab3e0: 0x102  srl         $zero, $zero, 4
    ctx->pc = 0x3ab3e0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_3ab3e4:
    // 0x3ab3e4: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab3e4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AB3E4 raw=0x43480000");
label_3ab3e8:
    // 0x3ab3e8: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3ab3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3ab3ec:
    // 0x3ab3ec: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab3ecu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3AB3EC raw=0x43960000");
label_3ab3f0:
    // 0x3ab3f0: 0x0  nop
    ctx->pc = 0x3ab3f0u;
    // NOP
label_3ab3f4:
    // 0x3ab3f4: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3ab3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3ab3f8:
    // 0x3ab3f8: 0x0  nop
    ctx->pc = 0x3ab3f8u;
    // NOP
label_3ab3fc:
    // 0x3ab3fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab3fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab400:
    // 0x3ab400: 0x105  .word       0x00000105                   # INVALID     $zero, $zero, 0x105 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab400u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3AB400 raw=0x00000105");
label_3ab404:
    // 0x3ab404: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab404u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AB404 raw=0x43480000");
label_3ab408:
    // 0x3ab408: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3ab408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3ab40c:
    // 0x3ab40c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x3ab40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_3ab410:
    // 0x3ab410: 0x0  nop
    ctx->pc = 0x3ab410u;
    // NOP
label_3ab414:
    // 0x3ab414: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3ab414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3ab418:
    // 0x3ab418: 0x0  nop
    ctx->pc = 0x3ab418u;
    // NOP
label_3ab41c:
    // 0x3ab41c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab41cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab420:
    // 0x3ab420: 0x106  .word       0x00000106                   # srlv        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab420u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ab424:
    // 0x3ab424: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab424u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AB424 raw=0x43480000");
label_3ab428:
    // 0x3ab428: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3ab428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3ab42c:
    // 0x3ab42c: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab42cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AB42C raw=0x43FA0000");
label_3ab430:
    // 0x3ab430: 0x0  nop
    ctx->pc = 0x3ab430u;
    // NOP
label_3ab434:
    // 0x3ab434: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3ab434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3ab438:
    // 0x3ab438: 0x0  nop
    ctx->pc = 0x3ab438u;
    // NOP
label_3ab43c:
    // 0x3ab43c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab43cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab440:
    // 0x3ab440: 0x107  .word       0x00000107                   # srav        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab440u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ab444:
    // 0x3ab444: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab444u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3AB444 raw=0x43160000");
label_3ab448:
    // 0x3ab448: 0xc3160000  ll          $s6, 0x0($t8)
    ctx->pc = 0x3ab448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3ab44c:
    // 0x3ab44c: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab44cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3AB44C raw=0x43960000");
label_3ab450:
    // 0x3ab450: 0x0  nop
    ctx->pc = 0x3ab450u;
    // NOP
label_3ab454:
    // 0x3ab454: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x3ab454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3ab458:
    // 0x3ab458: 0x0  nop
    ctx->pc = 0x3ab458u;
    // NOP
label_3ab45c:
    // 0x3ab45c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab45cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab460:
    // 0x3ab460: 0x0  nop
    ctx->pc = 0x3ab460u;
    // NOP
label_3ab464:
    // 0x3ab464: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3ab464u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3ab468:
    // 0x3ab468: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x3ab468u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_3ab46c:
    // 0x3ab46c: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x3ab46cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_3ab470:
    // 0x3ab470: 0x0  nop
    ctx->pc = 0x3ab470u;
    // NOP
label_3ab474:
    // 0x3ab474: 0x0  nop
    ctx->pc = 0x3ab474u;
    // NOP
label_3ab478:
    // 0x3ab478: 0x0  nop
    ctx->pc = 0x3ab478u;
    // NOP
label_3ab47c:
    // 0x3ab47c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab47cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab480:
    // 0x3ab480: 0x46435000  .word       0x46435000                   # INVALID     $s2, $v1, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab480u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x0 at 0x3AB480 raw=0x46435000");
label_3ab484:
    // 0x3ab484: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab484u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x3AB484 raw=0x44FA0000");
label_3ab488:
    // 0x3ab488: 0xc59c4000  lwc1        $f28, 0x4000($t4)
    ctx->pc = 0x3ab488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_3ab48c:
    // 0x3ab48c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab48cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab490:
    // 0x3ab490: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab490u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab494:
    // 0x3ab494: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab494u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab498:
    // 0x3ab498: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab498u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab49c:
    // 0x3ab49c: 0x0  nop
    ctx->pc = 0x3ab49cu;
    // NOP
label_3ab4a0:
    // 0x3ab4a0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab4a0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AB4A0 raw=0x00000001");
label_3ab4a4:
    // 0x3ab4a4: 0x3ab460  .word       0x003AB460                   # add         $s6, $at, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3ab4a8:
    // 0x3ab4a8: 0x0  nop
    ctx->pc = 0x3ab4a8u;
    // NOP
label_3ab4ac:
    // 0x3ab4ac: 0x0  nop
    ctx->pc = 0x3ab4acu;
    // NOP
label_3ab4b0:
    // 0x3ab4b0: 0x36f430  tge         $at, $s6, 976
    ctx->pc = 0x3ab4b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab4b4:
    // 0x3ab4b4: 0x36fbb0  tge         $at, $s6, 1006
    ctx->pc = 0x3ab4b4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab4b8:
    // 0x3ab4b8: 0x371180  .word       0x00371180                   # sll         $v0, $s7, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
label_3ab4bc:
    // 0x3ab4bc: 0x3712e0  .word       0x003712E0                   # add         $v0, $at, $s7 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab4bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3ab4c0:
    // 0x3ab4c0: 0x0  nop
    ctx->pc = 0x3ab4c0u;
    // NOP
label_3ab4c4:
    // 0x3ab4c4: 0x0  nop
    ctx->pc = 0x3ab4c4u;
    // NOP
label_3ab4c8:
    // 0x3ab4c8: 0x0  nop
    ctx->pc = 0x3ab4c8u;
    // NOP
label_3ab4cc:
    // 0x3ab4cc: 0x0  nop
    ctx->pc = 0x3ab4ccu;
    // NOP
label_3ab4d0:
    // 0x3ab4d0: 0x371350  .word       0x00371350                   # mfhi        $v0 # 00370340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab4d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3ab4d4:
    // 0x3ab4d4: 0x0  nop
    ctx->pc = 0x3ab4d4u;
    // NOP
label_3ab4d8:
    // 0x3ab4d8: 0x0  nop
    ctx->pc = 0x3ab4d8u;
    // NOP
label_3ab4dc:
    // 0x3ab4dc: 0x0  nop
    ctx->pc = 0x3ab4dcu;
    // NOP
label_3ab4e0:
    // 0x3ab4e0: 0x36fc30  tge         $at, $s6, 1008
    ctx->pc = 0x3ab4e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab4e4:
    // 0x3ab4e4: 0x36feb0  tge         $at, $s6, 1018
    ctx->pc = 0x3ab4e4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab4e8:
    // 0x3ab4e8: 0x3702d0  .word       0x003702D0                   # mfhi        $zero # 003702C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab4e8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_3ab4ec:
    // 0x3ab4ec: 0x3707e0  .word       0x003707E0                   # add         $zero, $at, $s7 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab4ecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3ab4f0:
    // 0x3ab4f0: 0x370cb0  tge         $at, $s7, 50
    ctx->pc = 0x3ab4f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab4f4:
    // 0x3ab4f4: 0x370f40  .word       0x00370F40                   # sll         $at, $s7, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 23), 29));
label_3ab4f8:
    // 0x3ab4f8: 0x0  nop
    ctx->pc = 0x3ab4f8u;
    // NOP
label_3ab4fc:
    // 0x3ab4fc: 0x0  nop
    ctx->pc = 0x3ab4fcu;
    // NOP
label_3ab500:
    // 0x3ab500: 0x36fca0  .word       0x0036FCA0                   # add         $ra, $at, $s6 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab500u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_3ab504:
    // 0x3ab504: 0x36fff0  tge         $at, $s6, 1023
    ctx->pc = 0x3ab504u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3ab508:
    // 0x3ab508: 0x3702f0  tge         $at, $s7, 11
    ctx->pc = 0x3ab508u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab50c:
    // 0x3ab50c: 0x370800  .word       0x00370800                   # sll         $at, $s7, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab50cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 23), 0));
label_3ab510:
    // 0x3ab510: 0x370cd0  .word       0x00370CD0                   # mfhi        $at # 003704C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab510u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_3ab514:
    // 0x3ab514: 0x370f60  .word       0x00370F60                   # add         $at, $at, $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab514u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_3ab518:
    // 0x3ab518: 0x3711d0  .word       0x003711D0                   # mfhi        $v0 # 003701C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab518u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3ab51c:
    // 0x3ab51c: 0x3712c0  .word       0x003712C0                   # sll         $v0, $s7, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 11));
label_3ab520:
    // 0x3ab520: 0x3712d0  .word       0x003712D0                   # mfhi        $v0 # 003702C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab520u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3ab524:
    // 0x3ab524: 0x0  nop
    ctx->pc = 0x3ab524u;
    // NOP
label_3ab528:
    // 0x3ab528: 0x371330  tge         $at, $s7, 76
    ctx->pc = 0x3ab528u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab52c:
    // 0x3ab52c: 0x371340  .word       0x00371340                   # sll         $v0, $s7, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 13));
label_3ab530:
    // 0x3ab530: 0x3713a0  .word       0x003713A0                   # add         $v0, $at, $s7 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab530u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3ab534:
    // 0x3ab534: 0x3713b0  tge         $at, $s7, 78
    ctx->pc = 0x3ab534u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab538:
    // 0x3ab538: 0x3713c0  .word       0x003713C0                   # sll         $v0, $s7, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 15));
label_3ab53c:
    // 0x3ab53c: 0x3713d0  .word       0x003713D0                   # mfhi        $v0 # 003703C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab53cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3ab540:
    // 0x3ab540: 0x3713e0  .word       0x003713E0                   # add         $v0, $at, $s7 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab540u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3ab544:
    // 0x3ab544: 0x371890  .word       0x00371890                   # mfhi        $v1 # 00370080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab544u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3ab548:
    // 0x3ab548: 0x0  nop
    ctx->pc = 0x3ab548u;
    // NOP
label_3ab54c:
    // 0x3ab54c: 0x0  nop
    ctx->pc = 0x3ab54cu;
    // NOP
label_3ab550:
    // 0x3ab550: 0xa070401  j           func_81C1004
label_3ab554:
    if (ctx->pc == 0x3AB554u) {
        ctx->pc = 0x3AB554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB550u;
        // 0x3ab554: 0x1613100d  bne         $s0, $s3, . + 4 + (0x100D << 2) (Delay Slot)
        // Likely branch instruction at 0x3AB554 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB558u;
        goto label_3ab558;
    }
    ctx->pc = 0x3AB550u;
    ctx->pc = 0x3AB554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB550u;
    // 0x3ab554: 0x1613100d  bne         $s0, $s3, . + 4 + (0x100D << 2) (Delay Slot)
    // Likely branch instruction at 0x3AB554 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x81C1004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x81C1004u, 0x3AB550u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AB558u;
label_3ab558:
    // 0x3ab558: 0x0  nop
    ctx->pc = 0x3ab558u;
    // NOP
label_3ab55c:
    // 0x3ab55c: 0x0  nop
    ctx->pc = 0x3ab55cu;
    // NOP
label_3ab560:
    // 0x3ab560: 0x0  nop
    ctx->pc = 0x3ab560u;
    // NOP
label_3ab564:
    // 0x3ab564: 0x0  nop
    ctx->pc = 0x3ab564u;
    // NOP
label_3ab568:
    // 0x3ab568: 0x0  nop
    ctx->pc = 0x3ab568u;
    // NOP
label_3ab56c:
    // 0x3ab56c: 0x0  nop
    ctx->pc = 0x3ab56cu;
    // NOP
label_3ab570:
    // 0x3ab570: 0x0  nop
    ctx->pc = 0x3ab570u;
    // NOP
label_3ab574:
    // 0x3ab574: 0x0  nop
    ctx->pc = 0x3ab574u;
    // NOP
label_3ab578:
    // 0x3ab578: 0x0  nop
    ctx->pc = 0x3ab578u;
    // NOP
label_3ab57c:
    // 0x3ab57c: 0x0  nop
    ctx->pc = 0x3ab57cu;
    // NOP
label_3ab580:
    // 0x3ab580: 0x1c1b1a19  .word       0x1C1B1A19                   # bgtz        $zero, . + 4 + (0x1A19 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
label_3ab584:
    if (ctx->pc == 0x3AB584u) {
        ctx->pc = 0x3AB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB580u;
        // 0x3ab584: 0x201f1e1d  addi        $ra, $zero, 0x1E1D (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)7709, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB588u;
        goto label_3ab588;
    }
    ctx->pc = 0x3AB580u;
    {
        const bool branch_taken_0x3ab580 = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x3AB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB580u;
        // 0x3ab584: 0x201f1e1d  addi        $ra, $zero, 0x1E1D (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)7709, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab580) {
            ctx->pc = 0x3B1DE8u;
            return;
        }
    }
    ctx->pc = 0x3AB588u;
label_3ab588:
    // 0x3ab588: 0x24232221  addiu       $v1, $at, 0x2221
    ctx->pc = 0x3ab588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), 8737));
label_3ab58c:
    // 0x3ab58c: 0x201e1c1a  addi        $fp, $zero, 0x1C1A
    ctx->pc = 0x3ab58cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)7194, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_3ab590:
    // 0x3ab590: 0x3721f0  tge         $at, $s7, 135
    ctx->pc = 0x3ab590u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab594:
    // 0x3ab594: 0x372420  .word       0x00372420                   # add         $a0, $at, $s7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab594u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_3ab598:
    // 0x3ab598: 0x372b10  .word       0x00372B10                   # mfhi        $a1 # 00370300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab598u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3ab59c:
    // 0x3ab59c: 0x372c60  .word       0x00372C60                   # add         $a1, $at, $s7 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab59cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3ab5a0:
    // 0x3ab5a0: 0x0  nop
    ctx->pc = 0x3ab5a0u;
    // NOP
label_3ab5a4:
    // 0x3ab5a4: 0x0  nop
    ctx->pc = 0x3ab5a4u;
    // NOP
label_3ab5a8:
    // 0x3ab5a8: 0x0  nop
    ctx->pc = 0x3ab5a8u;
    // NOP
label_3ab5ac:
    // 0x3ab5ac: 0x0  nop
    ctx->pc = 0x3ab5acu;
    // NOP
label_3ab5b0:
    // 0x3ab5b0: 0x372cd0  .word       0x00372CD0                   # mfhi        $a1 # 003704C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab5b0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3ab5b4:
    // 0x3ab5b4: 0x0  nop
    ctx->pc = 0x3ab5b4u;
    // NOP
label_3ab5b8:
    // 0x3ab5b8: 0x3724a0  .word       0x003724A0                   # add         $a0, $at, $s7 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab5b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_3ab5bc:
    // 0x3ab5bc: 0x3727d0  .word       0x003727D0                   # mfhi        $a0 # 003707C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab5bcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3ab5c0:
    // 0x3ab5c0: 0x3724b0  tge         $at, $s7, 146
    ctx->pc = 0x3ab5c0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab5c4:
    // 0x3ab5c4: 0x3727f0  tge         $at, $s7, 159
    ctx->pc = 0x3ab5c4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab5c8:
    // 0x3ab5c8: 0x372b60  .word       0x00372B60                   # add         $a1, $at, $s7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab5c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3ab5cc:
    // 0x3ab5cc: 0x372c40  .word       0x00372C40                   # sll         $a1, $s7, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 17));
label_3ab5d0:
    // 0x3ab5d0: 0x372c50  .word       0x00372C50                   # mfhi        $a1 # 00370440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab5d0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3ab5d4:
    // 0x3ab5d4: 0x0  nop
    ctx->pc = 0x3ab5d4u;
    // NOP
label_3ab5d8:
    // 0x3ab5d8: 0x372cb0  tge         $at, $s7, 178
    ctx->pc = 0x3ab5d8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab5dc:
    // 0x3ab5dc: 0x372cc0  .word       0x00372CC0                   # sll         $a1, $s7, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 19));
label_3ab5e0:
    // 0x3ab5e0: 0x372d20  .word       0x00372D20                   # add         $a1, $at, $s7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab5e0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3ab5e4:
    // 0x3ab5e4: 0x372d30  tge         $at, $s7, 180
    ctx->pc = 0x3ab5e4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab5e8:
    // 0x3ab5e8: 0x372d40  .word       0x00372D40                   # sll         $a1, $s7, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 21));
label_3ab5ec:
    // 0x3ab5ec: 0x372d50  .word       0x00372D50                   # mfhi        $a1 # 00370540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab5ecu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3ab5f0:
    // 0x3ab5f0: 0x3713e0  .word       0x003713E0                   # add         $v0, $at, $s7 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab5f0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3ab5f4:
    // 0x3ab5f4: 0x0  nop
    ctx->pc = 0x3ab5f4u;
    // NOP
label_3ab5f8:
    // 0x3ab5f8: 0x0  nop
    ctx->pc = 0x3ab5f8u;
    // NOP
label_3ab5fc:
    // 0x3ab5fc: 0x0  nop
    ctx->pc = 0x3ab5fcu;
    // NOP
label_3ab600:
    // 0x3ab600: 0x0  nop
    ctx->pc = 0x3ab600u;
    // NOP
label_3ab604:
    // 0x3ab604: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab604u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AB604 raw=0x42C80000");
label_3ab608:
    // 0x3ab608: 0xc3160000  ll          $s6, 0x0($t8)
    ctx->pc = 0x3ab608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3ab60c:
    // 0x3ab60c: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab60cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3AB60C raw=0x43160000");
label_3ab610:
    // 0x3ab610: 0x0  nop
    ctx->pc = 0x3ab610u;
    // NOP
label_3ab614:
    // 0x3ab614: 0x0  nop
    ctx->pc = 0x3ab614u;
    // NOP
label_3ab618:
    // 0x3ab618: 0x0  nop
    ctx->pc = 0x3ab618u;
    // NOP
label_3ab61c:
    // 0x3ab61c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab61cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab620:
    // 0x3ab620: 0x374b50  .word       0x00374B50                   # mfhi        $t1 # 00370340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab620u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_3ab624:
    // 0x3ab624: 0x374f30  tge         $at, $s7, 316
    ctx->pc = 0x3ab624u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab628:
    // 0x3ab628: 0x376c70  tge         $at, $s7, 433
    ctx->pc = 0x3ab628u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab62c:
    // 0x3ab62c: 0x376de0  .word       0x00376DE0                   # add         $t5, $at, $s7 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab62cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_3ab630:
    // 0x3ab630: 0x0  nop
    ctx->pc = 0x3ab630u;
    // NOP
label_3ab634:
    // 0x3ab634: 0x0  nop
    ctx->pc = 0x3ab634u;
    // NOP
label_3ab638:
    // 0x3ab638: 0x0  nop
    ctx->pc = 0x3ab638u;
    // NOP
label_3ab63c:
    // 0x3ab63c: 0x0  nop
    ctx->pc = 0x3ab63cu;
    // NOP
label_3ab640:
    // 0x3ab640: 0x377100  .word       0x00377100                   # sll         $t6, $s7, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab640u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_3ab644:
    // 0x3ab644: 0x0  nop
    ctx->pc = 0x3ab644u;
    // NOP
label_3ab648:
    // 0x3ab648: 0x0  nop
    ctx->pc = 0x3ab648u;
    // NOP
label_3ab64c:
    // 0x3ab64c: 0x0  nop
    ctx->pc = 0x3ab64cu;
    // NOP
label_3ab650:
    // 0x3ab650: 0x374ff0  tge         $at, $s7, 319
    ctx->pc = 0x3ab650u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab654:
    // 0x3ab654: 0x375610  .word       0x00375610                   # mfhi        $t2 # 00370600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab654u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_3ab658:
    // 0x3ab658: 0x375910  .word       0x00375910                   # mfhi        $t3 # 00370100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab658u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_3ab65c:
    // 0x3ab65c: 0x375f30  tge         $at, $s7, 380
    ctx->pc = 0x3ab65cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab660:
    // 0x3ab660: 0x376500  .word       0x00376500                   # sll         $t4, $s7, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab660u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 23), 20));
label_3ab664:
    // 0x3ab664: 0x0  nop
    ctx->pc = 0x3ab664u;
    // NOP
label_3ab668:
    // 0x3ab668: 0x0  nop
    ctx->pc = 0x3ab668u;
    // NOP
label_3ab66c:
    // 0x3ab66c: 0x0  nop
    ctx->pc = 0x3ab66cu;
    // NOP
label_3ab670:
    // 0x3ab670: 0x3750b0  tge         $at, $s7, 322
    ctx->pc = 0x3ab670u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab674:
    // 0x3ab674: 0x375610  .word       0x00375610                   # mfhi        $t2 # 00370600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab674u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_3ab678:
    // 0x3ab678: 0x375910  .word       0x00375910                   # mfhi        $t3 # 00370100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab678u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_3ab67c:
    // 0x3ab67c: 0x375f30  tge         $at, $s7, 380
    ctx->pc = 0x3ab67cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab680:
    // 0x3ab680: 0x376500  .word       0x00376500                   # sll         $t4, $s7, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab680u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 23), 20));
label_3ab684:
    // 0x3ab684: 0x0  nop
    ctx->pc = 0x3ab684u;
    // NOP
label_3ab688:
    // 0x3ab688: 0x0  nop
    ctx->pc = 0x3ab688u;
    // NOP
label_3ab68c:
    // 0x3ab68c: 0x0  nop
    ctx->pc = 0x3ab68cu;
    // NOP
label_3ab690:
    // 0x3ab690: 0x375120  .word       0x00375120                   # add         $t2, $at, $s7 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab690u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_3ab694:
    // 0x3ab694: 0x375630  tge         $at, $s7, 344
    ctx->pc = 0x3ab694u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab698:
    // 0x3ab698: 0x3759d0  .word       0x003759D0                   # mfhi        $t3 # 003701C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab698u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_3ab69c:
    // 0x3ab69c: 0x375fa0  .word       0x00375FA0                   # add         $t3, $at, $s7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab69cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_3ab6a0:
    // 0x3ab6a0: 0x376510  .word       0x00376510                   # mfhi        $t4 # 00370500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab6a0u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_3ab6a4:
    // 0x3ab6a4: 0x0  nop
    ctx->pc = 0x3ab6a4u;
    // NOP
label_3ab6a8:
    // 0x3ab6a8: 0x376cc0  .word       0x00376CC0                   # sll         $t5, $s7, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab6a8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 23), 19));
label_3ab6ac:
    // 0x3ab6ac: 0x376dc0  .word       0x00376DC0                   # sll         $t5, $s7, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab6acu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 23), 23));
label_3ab6b0:
    // 0x3ab6b0: 0x376dd0  .word       0x00376DD0                   # mfhi        $t5 # 003705C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab6b0u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_3ab6b4:
    // 0x3ab6b4: 0x0  nop
    ctx->pc = 0x3ab6b4u;
    // NOP
label_3ab6b8:
    // 0x3ab6b8: 0x376e30  tge         $at, $s7, 440
    ctx->pc = 0x3ab6b8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab6bc:
    // 0x3ab6bc: 0x3770f0  tge         $at, $s7, 451
    ctx->pc = 0x3ab6bcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab6c0:
    // 0x3ab6c0: 0x377150  .word       0x00377150                   # mfhi        $t6 # 00370140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab6c0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_3ab6c4:
    // 0x3ab6c4: 0x377160  .word       0x00377160                   # add         $t6, $at, $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab6c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_3ab6c8:
    // 0x3ab6c8: 0x377170  tge         $at, $s7, 453
    ctx->pc = 0x3ab6c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab6cc:
    // 0x3ab6cc: 0x377180  .word       0x00377180                   # sll         $t6, $s7, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab6ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
label_3ab6d0:
    // 0x3ab6d0: 0x3713e0  .word       0x003713E0                   # add         $v0, $at, $s7 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab6d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3ab6d4:
    // 0x3ab6d4: 0x0  nop
    ctx->pc = 0x3ab6d4u;
    // NOP
label_3ab6d8:
    // 0x3ab6d8: 0x0  nop
    ctx->pc = 0x3ab6d8u;
    // NOP
label_3ab6dc:
    // 0x3ab6dc: 0x0  nop
    ctx->pc = 0x3ab6dcu;
    // NOP
label_3ab6e0:
    // 0x3ab6e0: 0x378630  tge         $at, $s7, 536
    ctx->pc = 0x3ab6e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab6e4:
    // 0x3ab6e4: 0x378700  .word       0x00378700                   # sll         $s0, $s7, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 23), 28));
label_3ab6e8:
    // 0x3ab6e8: 0x378d20  .word       0x00378D20                   # add         $s1, $at, $s7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab6e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_3ab6ec:
    // 0x3ab6ec: 0x378d90  .word       0x00378D90                   # mfhi        $s1 # 00370580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab6ecu;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_3ab6f0:
    // 0x3ab6f0: 0x3788c0  .word       0x003788C0                   # sll         $s1, $s7, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
label_3ab6f4:
    // 0x3ab6f4: 0x378930  tge         $at, $s7, 548
    ctx->pc = 0x3ab6f4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab6f8:
    // 0x3ab6f8: 0x378a20  .word       0x00378A20                   # add         $s1, $at, $s7 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab6f8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_3ab6fc:
    // 0x3ab6fc: 0x0  nop
    ctx->pc = 0x3ab6fcu;
    // NOP
label_3ab700:
    // 0x3ab700: 0x0  nop
    ctx->pc = 0x3ab700u;
    // NOP
label_3ab704:
    // 0x3ab704: 0x0  nop
    ctx->pc = 0x3ab704u;
    // NOP
label_3ab708:
    // 0x3ab708: 0x0  nop
    ctx->pc = 0x3ab708u;
    // NOP
label_3ab70c:
    // 0x3ab70c: 0x3f99999a  .word       0x3F99999A                   # lui         $t9, 0x999A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab70cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_3ab710:
    // 0x3ab710: 0x378d70  tge         $at, $s7, 565
    ctx->pc = 0x3ab710u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab714:
    // 0x3ab714: 0x378d80  .word       0x00378D80                   # sll         $s1, $s7, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab714u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 23), 22));
label_3ab718:
    // 0x3ab718: 0x0  nop
    ctx->pc = 0x3ab718u;
    // NOP
label_3ab71c:
    // 0x3ab71c: 0x0  nop
    ctx->pc = 0x3ab71cu;
    // NOP
label_3ab720:
    // 0x3ab720: 0x0  nop
    ctx->pc = 0x3ab720u;
    // NOP
label_3ab724:
    // 0x3ab724: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab724u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AB724 raw=0x43FA0000");
label_3ab728:
    // 0x3ab728: 0x0  nop
    ctx->pc = 0x3ab728u;
    // NOP
label_3ab72c:
    // 0x3ab72c: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab72cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x3AB72C raw=0x447A0000");
label_3ab730:
    // 0x3ab730: 0x0  nop
    ctx->pc = 0x3ab730u;
    // NOP
label_3ab734:
    // 0x3ab734: 0x0  nop
    ctx->pc = 0x3ab734u;
    // NOP
label_3ab738:
    // 0x3ab738: 0x0  nop
    ctx->pc = 0x3ab738u;
    // NOP
label_3ab73c:
    // 0x3ab73c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab73cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab740:
    // 0x3ab740: 0x0  nop
    ctx->pc = 0x3ab740u;
    // NOP
label_3ab744:
    // 0x3ab744: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab744u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AB744 raw=0x43FA0000");
label_3ab748:
    // 0x3ab748: 0x0  nop
    ctx->pc = 0x3ab748u;
    // NOP
label_3ab74c:
    // 0x3ab74c: 0x443b8000  dmfc1       $k1, $f16
    ctx->pc = 0x3ab74cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x3AB74C raw=0x443B8000");
label_3ab750:
    // 0x3ab750: 0x0  nop
    ctx->pc = 0x3ab750u;
    // NOP
label_3ab754:
    // 0x3ab754: 0x0  nop
    ctx->pc = 0x3ab754u;
    // NOP
label_3ab758:
    // 0x3ab758: 0x0  nop
    ctx->pc = 0x3ab758u;
    // NOP
label_3ab75c:
    // 0x3ab75c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab75cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab760:
    // 0x3ab760: 0x0  nop
    ctx->pc = 0x3ab760u;
    // NOP
label_3ab764:
    // 0x3ab764: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab764u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AB764 raw=0x43FA0000");
label_3ab768:
    // 0x3ab768: 0x0  nop
    ctx->pc = 0x3ab768u;
    // NOP
label_3ab76c:
    // 0x3ab76c: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab76cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AB76C raw=0x43FA0000");
label_3ab770:
    // 0x3ab770: 0x0  nop
    ctx->pc = 0x3ab770u;
    // NOP
label_3ab774:
    // 0x3ab774: 0x0  nop
    ctx->pc = 0x3ab774u;
    // NOP
label_3ab778:
    // 0x3ab778: 0x0  nop
    ctx->pc = 0x3ab778u;
    // NOP
label_3ab77c:
    // 0x3ab77c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab77cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab780:
    // 0x3ab780: 0x378e00  .word       0x00378E00                   # sll         $s1, $s7, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab780u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 23), 24));
label_3ab784:
    // 0x3ab784: 0x3791f0  tge         $at, $s7, 583
    ctx->pc = 0x3ab784u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab788:
    // 0x3ab788: 0x379450  .word       0x00379450                   # mfhi        $s2 # 00370440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab788u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_3ab78c:
    // 0x3ab78c: 0x3795a0  .word       0x003795A0                   # add         $s2, $at, $s7 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab78cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_3ab790:
    // 0x3ab790: 0x379240  .word       0x00379240                   # sll         $s2, $s7, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab790u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 9));
label_3ab794:
    // 0x3ab794: 0x0  nop
    ctx->pc = 0x3ab794u;
    // NOP
label_3ab798:
    // 0x3ab798: 0x3794a0  .word       0x003794A0                   # add         $s2, $at, $s7 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab798u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_3ab79c:
    // 0x3ab79c: 0x0  nop
    ctx->pc = 0x3ab79cu;
    // NOP
label_3ab7a0:
    // 0x3ab7a0: 0x379680  .word       0x00379680                   # sll         $s2, $s7, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab7a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 26));
label_3ab7a4:
    // 0x3ab7a4: 0x3797a0  .word       0x003797A0                   # add         $s2, $at, $s7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab7a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_3ab7a8:
    // 0x3ab7a8: 0x379900  .word       0x00379900                   # sll         $s3, $s7, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab7a8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_3ab7ac:
    // 0x3ab7ac: 0x379960  .word       0x00379960                   # add         $s3, $at, $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab7acu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_3ab7b0:
    // 0x3ab7b0: 0x3797f0  tge         $at, $s7, 607
    ctx->pc = 0x3ab7b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab7b4:
    // 0x3ab7b4: 0x0  nop
    ctx->pc = 0x3ab7b4u;
    // NOP
label_3ab7b8:
    // 0x3ab7b8: 0x379950  .word       0x00379950                   # mfhi        $s3 # 00370140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab7b8u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_3ab7bc:
    // 0x3ab7bc: 0x0  nop
    ctx->pc = 0x3ab7bcu;
    // NOP
label_3ab7c0:
    // 0x3ab7c0: 0x0  nop
    ctx->pc = 0x3ab7c0u;
    // NOP
label_3ab7c4:
    // 0x3ab7c4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3ab7c4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3ab7c8:
    // 0x3ab7c8: 0x8  jr          $zero
label_3ab7cc:
    if (ctx->pc == 0x3AB7CCu) {
        ctx->pc = 0x3AB7D0u;
        goto label_3ab7d0;
    }
    ctx->pc = 0x3AB7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB7C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AB7D0u;
label_3ab7d0:
    // 0x3ab7d0: 0xbff5c28f  cache       0x15, -0x3D71($ra)
    ctx->pc = 0x3ab7d0u;
    // CACHE instruction (ignored)
label_3ab7d4:
    // 0x3ab7d4: 0x0  nop
    ctx->pc = 0x3ab7d4u;
    // NOP
label_3ab7d8:
    // 0x3ab7d8: 0x0  nop
    ctx->pc = 0x3ab7d8u;
    // NOP
label_3ab7dc:
    // 0x3ab7dc: 0x0  nop
    ctx->pc = 0x3ab7dcu;
    // NOP
label_3ab7e0:
    // 0x3ab7e0: 0x44c7e000  ctc1        $a3, $28
    ctx->pc = 0x3ab7e0u;
    // CTC1 to FCR28 ignored
label_3ab7e4:
    // 0x3ab7e4: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab7e4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AB7E4 raw=0x42C80000");
label_3ab7e8:
    // 0x3ab7e8: 0xc4958000  lwc1        $f21, -0x8000($a0)
    ctx->pc = 0x3ab7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294934528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ab7ec:
    // 0x3ab7ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab7ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab7f0:
    // 0x3ab7f0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab7f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AB7F0 raw=0x00000001");
label_3ab7f4:
    // 0x3ab7f4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3ab7f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3ab7f8:
    // 0x3ab7f8: 0x8  jr          $zero
label_3ab7fc:
    if (ctx->pc == 0x3AB7FCu) {
        ctx->pc = 0x3AB800u;
        goto label_3ab800;
    }
    ctx->pc = 0x3AB7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB7F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AB800u;
label_3ab800:
    // 0x3ab800: 0x400ccccd  .word       0x400CCCCD                   # mfc0        $t4, Reserved25 # 000004CD <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab800u;
    SET_GPR_S32(ctx, 12, (int32_t)ctx->cop0_perf);
label_3ab804:
    // 0x3ab804: 0x0  nop
    ctx->pc = 0x3ab804u;
    // NOP
label_3ab808:
    // 0x3ab808: 0x0  nop
    ctx->pc = 0x3ab808u;
    // NOP
label_3ab80c:
    // 0x3ab80c: 0x0  nop
    ctx->pc = 0x3ab80cu;
    // NOP
label_3ab810:
    // 0x3ab810: 0xc4926000  lwc1        $f18, 0x6000($a0)
    ctx->pc = 0x3ab810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_3ab814:
    // 0x3ab814: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab814u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x3AB814 raw=0x447A0000");
label_3ab818:
    // 0x3ab818: 0x44ac2000  dmtc1       $t4, $f4
    ctx->pc = 0x3ab818u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x3AB818 raw=0x44AC2000");
label_3ab81c:
    // 0x3ab81c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab81cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab820:
    // 0x3ab820: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x3ab820u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_3ab824:
    // 0x3ab824: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3ab824u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3ab828:
    // 0x3ab828: 0x8  jr          $zero
label_3ab82c:
    if (ctx->pc == 0x3AB82Cu) {
        ctx->pc = 0x3AB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB828u;
        // 0x3ab82c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AB82C raw=0x00000001");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB830u;
        goto label_3ab830;
    }
    ctx->pc = 0x3AB828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB828u;
        // 0x3ab82c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AB82C raw=0x00000001");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB828u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AB830u;
label_3ab830:
    // 0x3ab830: 0x400ccccd  .word       0x400CCCCD                   # mfc0        $t4, Reserved25 # 000004CD <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ab830u;
    SET_GPR_S32(ctx, 12, (int32_t)ctx->cop0_perf);
label_3ab834:
    // 0x3ab834: 0x0  nop
    ctx->pc = 0x3ab834u;
    // NOP
label_3ab838:
    // 0x3ab838: 0x0  nop
    ctx->pc = 0x3ab838u;
    // NOP
label_3ab83c:
    // 0x3ab83c: 0x0  nop
    ctx->pc = 0x3ab83cu;
    // NOP
label_3ab840:
    // 0x3ab840: 0xc51b2000  lwc1        $f27, 0x2000($t0)
    ctx->pc = 0x3ab840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3ab844:
    // 0x3ab844: 0x45674000  .word       0x45674000                   # INVALID     $t3, $a3, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ab844u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x0 at 0x3AB844 raw=0x45674000");
label_3ab848:
    // 0x3ab848: 0xc4c4a000  lwc1        $f4, -0x6000($a2)
    ctx->pc = 0x3ab848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294942720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3ab84c:
    // 0x3ab84c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ab84cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ab850:
    // 0x3ab850: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3ab850u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3ab854:
    // 0x3ab854: 0x3ab7c0  .word       0x003AB7C0                   # sll         $s6, $k0, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab854u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 26), 31));
label_3ab858:
    // 0x3ab858: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3ab858u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3ab85c:
    // 0x3ab85c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x3ab85cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_3ab860:
    // 0x3ab860: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab860u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AB860 raw=0x00000001");
label_3ab864:
    // 0x3ab864: 0x0  nop
    ctx->pc = 0x3ab864u;
    // NOP
label_3ab868:
    // 0x3ab868: 0x0  nop
    ctx->pc = 0x3ab868u;
    // NOP
label_3ab86c:
    // 0x3ab86c: 0x0  nop
    ctx->pc = 0x3ab86cu;
    // NOP
label_3ab870:
    // 0x3ab870: 0x0  nop
    ctx->pc = 0x3ab870u;
    // NOP
label_3ab874:
    // 0x3ab874: 0x0  nop
    ctx->pc = 0x3ab874u;
    // NOP
label_3ab878:
    // 0x3ab878: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab878u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ab87c:
    // 0x3ab87c: 0xca  .word       0x000000CA                   # movz        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab87cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3ab880:
    // 0x3ab880: 0x8c  syscall     2
    ctx->pc = 0x3ab880u;
    ctx->pc = 0x3AB884u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_3ab884:
    // 0x3ab884: 0x0  nop
    ctx->pc = 0x3ab884u;
    // NOP
label_3ab888:
    // 0x3ab888: 0x0  nop
    ctx->pc = 0x3ab888u;
    // NOP
label_3ab88c:
    // 0x3ab88c: 0x8c  syscall     2
    ctx->pc = 0x3ab88cu;
    ctx->pc = 0x3AB890u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_3ab890:
    // 0x3ab890: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab890u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3ab894:
    // 0x3ab894: 0xd2  .word       0x000000D2                   # mflo        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab894u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_3ab898:
    // 0x3ab898: 0x0  nop
    ctx->pc = 0x3ab898u;
    // NOP
label_3ab89c:
    // 0x3ab89c: 0x0  nop
    ctx->pc = 0x3ab89cu;
    // NOP
label_3ab8a0:
    // 0x3ab8a0: 0x0  nop
    ctx->pc = 0x3ab8a0u;
    // NOP
label_3ab8a4:
    // 0x3ab8a4: 0xeb  .word       0x000000EB                   # sltu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab8a4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_3ab8a8:
    // 0x3ab8a8: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab8a8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ab8ac:
    // 0x3ab8ac: 0x0  nop
    ctx->pc = 0x3ab8acu;
    // NOP
label_3ab8b0:
    // 0x3ab8b0: 0x0  nop
    ctx->pc = 0x3ab8b0u;
    // NOP
label_3ab8b4:
    // 0x3ab8b4: 0x84  .word       0x00000084                   # sllv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab8b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ab8b8:
    // 0x3ab8b8: 0x92  .word       0x00000092                   # mflo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab8b8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_3ab8bc:
    // 0x3ab8bc: 0xfd  .word       0x000000FD                   # INVALID     $zero, $zero, 0xFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab8bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3AB8BC raw=0x000000FD");
label_3ab8c0:
    // 0x3ab8c0: 0xc2  srl         $zero, $zero, 3
    ctx->pc = 0x3ab8c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 3));
label_3ab8c4:
    // 0x3ab8c4: 0x0  nop
    ctx->pc = 0x3ab8c4u;
    // NOP
label_3ab8c8:
    // 0x3ab8c8: 0x0  nop
    ctx->pc = 0x3ab8c8u;
    // NOP
label_3ab8cc:
    // 0x3ab8cc: 0x0  nop
    ctx->pc = 0x3ab8ccu;
    // NOP
label_3ab8d0:
    // 0x3ab8d0: 0xb5  .word       0x000000B5                   # INVALID     $zero, $zero, 0xB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab8d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x3AB8D0 raw=0x000000B5");
label_3ab8d4:
    // 0x3ab8d4: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x3ab8d4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ab8d8:
    // 0x3ab8d8: 0x0  nop
    ctx->pc = 0x3ab8d8u;
    // NOP
label_3ab8dc:
    // 0x3ab8dc: 0x0  nop
    ctx->pc = 0x3ab8dcu;
    // NOP
label_3ab8e0:
    // 0x3ab8e0: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab8e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_3ab8e4:
    // 0x3ab8e4: 0x8d  break       0, 2
    ctx->pc = 0x3ab8e4u;
    runtime->handleBreak(rdram, ctx);
label_3ab8e8:
    // 0x3ab8e8: 0x92  .word       0x00000092                   # mflo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab8e8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_3ab8ec:
    // 0x3ab8ec: 0x0  nop
    ctx->pc = 0x3ab8ecu;
    // NOP
label_3ab8f0:
    // 0x3ab8f0: 0x8e  .word       0x0000008E                   # INVALID     $zero, $zero, 0x8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab8f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x3AB8F0 raw=0x0000008E");
label_3ab8f4:
    // 0x3ab8f4: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x3ab8f4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ab8f8:
    // 0x3ab8f8: 0xdc  .word       0x000000DC                   # dmult       $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab8f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AB8F8 raw=0x000000DC");
label_3ab8fc:
    // 0x3ab8fc: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab8fcu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_3ab900:
    // 0x3ab900: 0x0  nop
    ctx->pc = 0x3ab900u;
    // NOP
label_3ab904:
    // 0x3ab904: 0x0  nop
    ctx->pc = 0x3ab904u;
    // NOP
label_3ab908:
    // 0x3ab908: 0x92  .word       0x00000092                   # mflo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab908u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_3ab90c:
    // 0x3ab90c: 0x84  .word       0x00000084                   # sllv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab90cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ab910:
    // 0x3ab910: 0xc2  srl         $zero, $zero, 3
    ctx->pc = 0x3ab910u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 3));
label_3ab914:
    // 0x3ab914: 0x0  nop
    ctx->pc = 0x3ab914u;
    // NOP
label_3ab918:
    // 0x3ab918: 0x0  nop
    ctx->pc = 0x3ab918u;
    // NOP
label_3ab91c:
    // 0x3ab91c: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x3ab91cu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ab920:
    // 0x3ab920: 0x8e  .word       0x0000008E                   # INVALID     $zero, $zero, 0x8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab920u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x3AB920 raw=0x0000008E");
label_3ab924:
    // 0x3ab924: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab924u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_3ab928:
    // 0x3ab928: 0x0  nop
    ctx->pc = 0x3ab928u;
    // NOP
label_3ab92c:
    // 0x3ab92c: 0x0  nop
    ctx->pc = 0x3ab92cu;
    // NOP
label_3ab930:
    // 0x3ab930: 0x0  nop
    ctx->pc = 0x3ab930u;
    // NOP
label_3ab934:
    // 0x3ab934: 0x0  nop
    ctx->pc = 0x3ab934u;
    // NOP
label_3ab938:
    // 0x3ab938: 0x0  nop
    ctx->pc = 0x3ab938u;
    // NOP
label_3ab93c:
    // 0x3ab93c: 0x14a  .word       0x0000014A                   # movz        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab93cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3ab940:
    // 0x3ab940: 0x1a7  .word       0x000001A7                   # not         $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab940u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_3ab944:
    // 0x3ab944: 0x0  nop
    ctx->pc = 0x3ab944u;
    // NOP
label_3ab948:
    // 0x3ab948: 0x0  nop
    ctx->pc = 0x3ab948u;
    // NOP
label_3ab94c:
    // 0x3ab94c: 0x0  nop
    ctx->pc = 0x3ab94cu;
    // NOP
label_3ab950:
    // 0x3ab950: 0x153  .word       0x00000153                   # mtlo        $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab950u;
    ctx->lo = GPR_U64(ctx, 0);
label_3ab954:
    // 0x3ab954: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x3ab954u;
    
label_3ab958:
    // 0x3ab958: 0x0  nop
    ctx->pc = 0x3ab958u;
    // NOP
label_3ab95c:
    // 0x3ab95c: 0x0  nop
    ctx->pc = 0x3ab95cu;
    // NOP
label_3ab960:
    // 0x3ab960: 0x0  nop
    ctx->pc = 0x3ab960u;
    // NOP
label_3ab964:
    // 0x3ab964: 0x16b  .word       0x0000016B                   # sltu        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab964u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_3ab968:
    // 0x3ab968: 0x15f  .word       0x0000015F                   # ddivu       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab968u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x3AB968 raw=0x0000015F");
label_3ab96c:
    // 0x3ab96c: 0x0  nop
    ctx->pc = 0x3ab96cu;
    // NOP
label_3ab970:
    // 0x3ab970: 0x0  nop
    ctx->pc = 0x3ab970u;
    // NOP
label_3ab974:
    // 0x3ab974: 0x0  nop
    ctx->pc = 0x3ab974u;
    // NOP
label_3ab978:
    // 0x3ab978: 0x18c  syscall     6
    ctx->pc = 0x3ab978u;
    ctx->pc = 0x3AB97Cu;
runtime->handleSyscall(rdram, ctx, 0x6u);
label_3ab97c:
    // 0x3ab97c: 0x15a  .word       0x0000015A                   # div         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab97cu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3ab980:
    // 0x3ab980: 0x0  nop
    ctx->pc = 0x3ab980u;
    // NOP
label_3ab984:
    // 0x3ab984: 0x0  nop
    ctx->pc = 0x3ab984u;
    // NOP
label_3ab988:
    // 0x3ab988: 0x0  nop
    ctx->pc = 0x3ab988u;
    // NOP
label_3ab98c:
    // 0x3ab98c: 0x166  .word       0x00000166                   # xor         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab98cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3ab990:
    // 0x3ab990: 0x1aa  .word       0x000001AA                   # slt         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab990u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_3ab994:
    // 0x3ab994: 0x0  nop
    ctx->pc = 0x3ab994u;
    // NOP
label_3ab998:
    // 0x3ab998: 0x0  nop
    ctx->pc = 0x3ab998u;
    // NOP
label_3ab99c:
    // 0x3ab99c: 0x0  nop
    ctx->pc = 0x3ab99cu;
    // NOP
label_3ab9a0:
    // 0x3ab9a0: 0x16d  .word       0x0000016D                   # daddu       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab9a0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ab9a4:
    // 0x3ab9a4: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab9a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_3ab9a8:
    // 0x3ab9a8: 0x0  nop
    ctx->pc = 0x3ab9a8u;
    // NOP
label_3ab9ac:
    // 0x3ab9ac: 0x0  nop
    ctx->pc = 0x3ab9acu;
    // NOP
label_3ab9b0:
    // 0x3ab9b0: 0x37bc30  tge         $at, $s7, 752
    ctx->pc = 0x3ab9b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3ab9b4:
    // 0x3ab9b4: 0x37b2e0  .word       0x0037B2E0                   # add         $s6, $at, $s7 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab9b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3ab9b8:
    // 0x3ab9b8: 0x37b750  .word       0x0037B750                   # mfhi        $s6 # 00370740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab9b8u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_3ab9bc:
    // 0x3ab9bc: 0x292ce0  .word       0x00292CE0                   # add         $a1, $at, $t1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab9bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3ab9c0:
    // 0x3ab9c0: 0x292ce0  .word       0x00292CE0                   # add         $a1, $at, $t1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab9c0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3ab9c4:
    // 0x3ab9c4: 0x292ce0  .word       0x00292CE0                   # add         $a1, $at, $t1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab9c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3ab9c8:
    // 0x3ab9c8: 0x292ce0  .word       0x00292CE0                   # add         $a1, $at, $t1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab9c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3ab9cc:
    // 0x3ab9cc: 0x292ce0  .word       0x00292CE0                   # add         $a1, $at, $t1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab9ccu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3ab9d0:
    // 0x3ab9d0: 0x292ce0  .word       0x00292CE0                   # add         $a1, $at, $t1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab9d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3ab9d4:
    // 0x3ab9d4: 0x379c50  .word       0x00379C50                   # mfhi        $s3 # 00370440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab9d4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_3ab9d8:
    // 0x3ab9d8: 0x0  nop
    ctx->pc = 0x3ab9d8u;
    // NOP
label_3ab9dc:
    // 0x3ab9dc: 0x0  nop
    ctx->pc = 0x3ab9dcu;
    // NOP
label_3ab9e0:
    // 0x3ab9e0: 0x10  mfhi        $zero
    ctx->pc = 0x3ab9e0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_3ab9e4:
    // 0x3ab9e4: 0x7a  dsrl        $zero, $zero, 1
    ctx->pc = 0x3ab9e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 1);
label_3ab9e8:
    // 0x3ab9e8: 0x10  mfhi        $zero
    ctx->pc = 0x3ab9e8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_3ab9ec:
    // 0x3ab9ec: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x3ab9ecu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ab9f0:
    // 0x3ab9f0: 0x10  mfhi        $zero
    ctx->pc = 0x3ab9f0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_3ab9f4:
    // 0x3ab9f4: 0xee  .word       0x000000EE                   # dsub        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab9f4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_3ab9f8:
    // 0x3ab9f8: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x3ab9f8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3ab9fc:
    // 0x3ab9fc: 0xab  .word       0x000000AB                   # sltu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ab9fcu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_3aba00:
    // 0x3aba00: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x3aba00u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3aba04:
    // 0x3aba04: 0xd3  .word       0x000000D3                   # mtlo        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba04u;
    ctx->lo = GPR_U64(ctx, 0);
label_3aba08:
    // 0x3aba08: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x3aba08u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3aba0c:
    // 0x3aba0c: 0xfb  dsra        $zero, $zero, 3
    ctx->pc = 0x3aba0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 3);
label_3aba10:
    // 0x3aba10: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x3aba10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3aba14:
    // 0x3aba14: 0x123  .word       0x00000123                   # negu        $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba14u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3aba18:
    // 0x3aba18: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x3aba18u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3aba1c:
    // 0x3aba1c: 0x97  .word       0x00000097                   # dsrav       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_3aba20:
    // 0x3aba20: 0xfffffffc  sd          $ra, -0x4($ra)
    ctx->pc = 0x3aba20u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967292), GPR_U64(ctx, 31));
label_3aba24:
    // 0x3aba24: 0xd1  .word       0x000000D1                   # mthi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba24u;
    ctx->hi = GPR_U64(ctx, 0);
label_3aba28:
    // 0x3aba28: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x3aba28u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3aba2c:
    // 0x3aba2c: 0x10b  .word       0x0000010B                   # movn        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba2cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3aba30:
    // 0x3aba30: 0x10  mfhi        $zero
    ctx->pc = 0x3aba30u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_3aba34:
    // 0x3aba34: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aba34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3aba38:
    // 0x3aba38: 0x0  nop
    ctx->pc = 0x3aba38u;
    // NOP
label_3aba3c:
    // 0x3aba3c: 0x0  nop
    ctx->pc = 0x3aba3cu;
    // NOP
label_3aba40:
    // 0x3aba40: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x3aba40u;
    
label_3aba44:
    // 0x3aba44: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x3aba44u;
    
label_3aba48:
    // 0x3aba48: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x3aba48u;
    
label_3aba4c:
    // 0x3aba4c: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x3aba4cu;
    
label_3aba50:
    // 0x3aba50: 0x37c130  tge         $at, $s7, 772
    ctx->pc = 0x3aba50u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3aba54:
    // 0x3aba54: 0x37c200  .word       0x0037C200                   # sll         $t8, $s7, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba54u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 23), 8));
label_3aba58:
    // 0x3aba58: 0x0  nop
    ctx->pc = 0x3aba58u;
    // NOP
label_3aba5c:
    // 0x3aba5c: 0x0  nop
    ctx->pc = 0x3aba5cu;
    // NOP
label_3aba60:
    // 0x3aba60: 0x37c4c0  .word       0x0037C4C0                   # sll         $t8, $s7, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba60u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 23), 19));
label_3aba64:
    // 0x3aba64: 0x37c750  .word       0x0037C750                   # mfhi        $t8 # 00370740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba64u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_3aba68:
    // 0x3aba68: 0x37c760  .word       0x0037C760                   # add         $t8, $at, $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba68u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_3aba6c:
    // 0x3aba6c: 0x37c940  .word       0x0037C940                   # sll         $t9, $s7, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba6cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_3aba70:
    // 0x3aba70: 0x37c7b0  tge         $at, $s7, 798
    ctx->pc = 0x3aba70u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3aba74:
    // 0x3aba74: 0x37c8c0  .word       0x0037C8C0                   # sll         $t9, $s7, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba74u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
label_3aba78:
    // 0x3aba78: 0x37c990  .word       0x0037C990                   # mfhi        $t9 # 00370180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba78u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_3aba7c:
    // 0x3aba7c: 0x37c9a0  .word       0x0037C9A0                   # add         $t9, $at, $s7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba7cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_3aba80:
    // 0x3aba80: 0x37cc80  .word       0x0037CC80                   # sll         $t9, $s7, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba80u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 23), 18));
label_3aba84:
    // 0x3aba84: 0x37cd30  tge         $at, $s7, 820
    ctx->pc = 0x3aba84u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3aba88:
    // 0x3aba88: 0x37cea0  .word       0x0037CEA0                   # add         $t9, $at, $s7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba88u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_3aba8c:
    // 0x3aba8c: 0x37cf00  .word       0x0037CF00                   # sll         $t9, $s7, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba8cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 23), 28));
label_3aba90:
    // 0x3aba90: 0x37cd80  .word       0x0037CD80                   # sll         $t9, $s7, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aba90u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 23), 22));
label_3aba94:
    // 0x3aba94: 0x0  nop
    ctx->pc = 0x3aba94u;
    // NOP
label_3aba98:
    // 0x3aba98: 0x37cef0  tge         $at, $s7, 827
    ctx->pc = 0x3aba98u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_3aba9c:
    // 0x3aba9c: 0x0  nop
    ctx->pc = 0x3aba9cu;
    // NOP
label_3abaa0:
    // 0x3abaa0: 0x0  nop
    ctx->pc = 0x3abaa0u;
    // NOP
label_3abaa4:
    // 0x3abaa4: 0x0  nop
    ctx->pc = 0x3abaa4u;
    // NOP
label_3abaa8:
    // 0x3abaa8: 0x0  nop
    ctx->pc = 0x3abaa8u;
    // NOP
label_3abaac:
    // 0x3abaac: 0x0  nop
    ctx->pc = 0x3abaacu;
    // NOP
label_3abab0:
    // 0x3abab0: 0x0  nop
    ctx->pc = 0x3abab0u;
    // NOP
label_3abab4:
    // 0x3abab4: 0x0  nop
    ctx->pc = 0x3abab4u;
    // NOP
label_3abab8:
    // 0x3abab8: 0x0  nop
    ctx->pc = 0x3abab8u;
    // NOP
label_3ababc:
    // 0x3ababc: 0x0  nop
    ctx->pc = 0x3ababcu;
    // NOP
label_3abac0:
    // 0x3abac0: 0x0  nop
    ctx->pc = 0x3abac0u;
    // NOP
label_3abac4:
    // 0x3abac4: 0x0  nop
    ctx->pc = 0x3abac4u;
    // NOP
label_3abac8:
    // 0x3abac8: 0x0  nop
    ctx->pc = 0x3abac8u;
    // NOP
label_3abacc:
    // 0x3abacc: 0x0  nop
    ctx->pc = 0x3abaccu;
    // NOP
label_3abad0:
    // 0x3abad0: 0x0  nop
    ctx->pc = 0x3abad0u;
    // NOP
label_3abad4:
    // 0x3abad4: 0x0  nop
    ctx->pc = 0x3abad4u;
    // NOP
label_3abad8:
    // 0x3abad8: 0x0  nop
    ctx->pc = 0x3abad8u;
    // NOP
label_3abadc:
    // 0x3abadc: 0x0  nop
    ctx->pc = 0x3abadcu;
    // NOP
label_3abae0:
    // 0x3abae0: 0x0  nop
    ctx->pc = 0x3abae0u;
    // NOP
label_3abae4:
    // 0x3abae4: 0x0  nop
    ctx->pc = 0x3abae4u;
    // NOP
label_3abae8:
    // 0x3abae8: 0x0  nop
    ctx->pc = 0x3abae8u;
    // NOP
label_3abaec:
    // 0x3abaec: 0x0  nop
    ctx->pc = 0x3abaecu;
    // NOP
label_3abaf0:
    // 0x3abaf0: 0x0  nop
    ctx->pc = 0x3abaf0u;
    // NOP
label_3abaf4:
    // 0x3abaf4: 0x0  nop
    ctx->pc = 0x3abaf4u;
    // NOP
label_3abaf8:
    // 0x3abaf8: 0x0  nop
    ctx->pc = 0x3abaf8u;
    // NOP
label_3abafc:
    // 0x3abafc: 0x0  nop
    ctx->pc = 0x3abafcu;
    // NOP
label_3abb00:
    // 0x3abb00: 0x10000049  b           . + 4 + (0x49 << 2)
label_3abb04:
    if (ctx->pc == 0x3ABB04u) {
        ctx->pc = 0x3ABB08u;
        goto label_3abb08;
    }
    ctx->pc = 0x3ABB00u;
    {
        const bool branch_taken_0x3abb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abb00) {
            ctx->pc = 0x3ABC28u;
            goto label_3abc28;
        }
    }
    ctx->pc = 0x3ABB08u;
label_3abb08:
    // 0x3abb08: 0x0  nop
    ctx->pc = 0x3abb08u;
    // NOP
label_3abb0c:
    // 0x3abb0c: 0x0  nop
    ctx->pc = 0x3abb0cu;
    // NOP
label_3abb10:
    // 0x3abb10: 0x0  nop
    ctx->pc = 0x3abb10u;
    // NOP
label_3abb14:
    // 0x3abb14: 0x4a900000  vaddx.y     $vf0, $vf0, $vf16x
    ctx->pc = 0x3abb14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_3abb18:
    // 0x3abb18: 0x10010074  beq         $zero, $at, . + 4 + (0x74 << 2)
label_3abb1c:
    if (ctx->pc == 0x3ABB1Cu) {
        ctx->pc = 0x3ABB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB18u;
        // 0x3abb1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB20u;
        goto label_3abb20;
    }
    ctx->pc = 0x3ABB18u;
    {
        const bool branch_taken_0x3abb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x3ABB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB18u;
        // 0x3abb1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb18) {
            ctx->pc = 0x3ABCECu;
            goto label_3abcec;
        }
    }
    ctx->pc = 0x3ABB20u;
label_3abb20:
    // 0x3abb20: 0x81fa0b7c  lb          $k0, 0xB7C($t7)
    ctx->pc = 0x3abb20u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_3abb24:
    // 0x3abb24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abb24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abb28:
    // 0x3abb28: 0x81fb0b7c  lb          $k1, 0xB7C($t7)
    ctx->pc = 0x3abb28u;
    SET_GPR_S32(ctx, 27, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_3abb2c:
    // 0x3abb2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abb2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abb30:
    // 0x3abb30: 0x81fc0b7c  lb          $gp, 0xB7C($t7)
    ctx->pc = 0x3abb30u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_3abb34:
    // 0x3abb34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abb34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abb38:
    // 0x3abb38: 0x81fd0b7c  lb          $sp, 0xB7C($t7)
    ctx->pc = 0x3abb38u;
    SET_GPR_S32(ctx, 29, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_3abb3c:
    // 0x3abb3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abb3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abb40:
    // 0x3abb40: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x3abb40u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_3abb44:
    // 0x3abb44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abb44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abb48:
    // 0x3abb48: 0x81e20b7c  lb          $v0, 0xB7C($t7)
    ctx->pc = 0x3abb48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_3abb4c:
    // 0x3abb4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abb4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abb50:
    // 0x3abb50: 0x81e30b7c  lb          $v1, 0xB7C($t7)
    ctx->pc = 0x3abb50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_3abb54:
    // 0x3abb54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abb54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abb58:
    // 0x3abb58: 0x81e40b7c  lb          $a0, 0xB7C($t7)
    ctx->pc = 0x3abb58u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_3abb5c:
    // 0x3abb5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abb5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abb60:
    // 0x3abb60: 0x10010804  beq         $zero, $at, . + 4 + (0x804 << 2)
label_3abb64:
    if (ctx->pc == 0x3ABB64u) {
        ctx->pc = 0x3ABB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB60u;
        // 0x3abb64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB68u;
        goto label_3abb68;
    }
    ctx->pc = 0x3ABB60u;
    {
        const bool branch_taken_0x3abb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x3ABB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB60u;
        // 0x3abb64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb60) {
            ctx->pc = 0x3ADB74u;
            return;
        }
    }
    ctx->pc = 0x3ABB68u;
label_3abb68:
    // 0x3abb68: 0x81e50b7c  lb          $a1, 0xB7C($t7)
    ctx->pc = 0x3abb68u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_3abb6c:
    // 0x3abb6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abb6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abb70:
    // 0x3abb70: 0x81e60b7c  lb          $a2, 0xB7C($t7)
    ctx->pc = 0x3abb70u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_3abb74:
    // 0x3abb74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abb74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abb78:
    // 0x3abb78: 0x81e70b7c  lb          $a3, 0xB7C($t7)
    ctx->pc = 0x3abb78u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_3abb7c:
    // 0x3abb7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abb7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abb80:
    // 0x3abb80: 0x81e80b7c  lb          $t0, 0xB7C($t7)
    ctx->pc = 0x3abb80u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_3abb84:
    // 0x3abb84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abb84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abb88:
    // 0x3abb88: 0x100f0080  beq         $zero, $t7, . + 4 + (0x80 << 2)
label_3abb8c:
    if (ctx->pc == 0x3ABB8Cu) {
        ctx->pc = 0x3ABB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB88u;
        // 0x3abb8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB90u;
        goto label_3abb90;
    }
    ctx->pc = 0x3ABB88u;
    {
        const bool branch_taken_0x3abb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x3ABB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB88u;
        // 0x3abb8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb88) {
            ctx->pc = 0x3ABD8Cu;
            goto label_3abd8c;
        }
    }
    ctx->pc = 0x3ABB90u;
label_3abb90:
    // 0x3abb90: 0x11ee07ff  beq         $t7, $t6, . + 4 + (0x7FF << 2)
label_3abb94:
    if (ctx->pc == 0x3ABB94u) {
        ctx->pc = 0x3ABB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB90u;
        // 0x3abb94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB98u;
        goto label_3abb98;
    }
    ctx->pc = 0x3ABB90u;
    {
        const bool branch_taken_0x3abb90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x3ABB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB90u;
        // 0x3abb94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb90) {
            ctx->pc = 0x3ADB90u;
            return;
        }
    }
    ctx->pc = 0x3ABB98u;
label_3abb98:
    // 0x3abb98: 0x11090000  beq         $t0, $t1, . + 4 + (0x0 << 2)
label_3abb9c:
    if (ctx->pc == 0x3ABB9Cu) {
        ctx->pc = 0x3ABB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB98u;
        // 0x3abb9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABBA0u;
        goto label_3abba0;
    }
    ctx->pc = 0x3ABB98u;
    {
        const bool branch_taken_0x3abb98 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x3ABB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB98u;
        // 0x3abb9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb98) {
            ctx->pc = 0x3ABB9Cu;
            goto label_3abb9c;
        }
    }
    ctx->pc = 0x3ABBA0u;
label_3abba0:
    // 0x3abba0: 0x11094800  beq         $t0, $t1, . + 4 + (0x4800 << 2)
label_3abba4:
    if (ctx->pc == 0x3ABBA4u) {
        ctx->pc = 0x3ABBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBA0u;
        // 0x3abba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABBA8u;
        goto label_3abba8;
    }
    ctx->pc = 0x3ABBA0u;
    {
        const bool branch_taken_0x3abba0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x3ABBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBA0u;
        // 0x3abba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abba0) {
            ctx->pc = 0x3BDBA4u;
            return;
        }
    }
    ctx->pc = 0x3ABBA8u;
label_3abba8:
    // 0x3abba8: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3abba8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3ABBA8 raw=0x437F0000");
label_3abbac:
    // 0x3abbac: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x3abbacu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_3abbb0:
    // 0x3abbb0: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3abbb0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3ABBB0 raw=0x43000000");
label_3abbb4:
    // 0x3abbb4: 0x802007de  lb          $zero, 0x7DE($at)
    ctx->pc = 0x3abbb4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 2014)));
label_3abbb8:
    // 0x3abbb8: 0x3b842108  xori        $a0, $gp, 0x2108
    ctx->pc = 0x3abbb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)8456);
label_3abbbc:
    // 0x3abbbc: 0x8020045e  lb          $zero, 0x45E($at)
    ctx->pc = 0x3abbbcu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 1118)));
label_3abbc0:
    // 0x3abbc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abbc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abbc4:
    // 0x3abbc4: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x3abbc4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_3abbc8:
    // 0x3abbc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abbc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abbcc:
    // 0x3abbcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abbccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abbd0:
    // 0x3abbd0: 0x10030084  beq         $zero, $v1, . + 4 + (0x84 << 2)
label_3abbd4:
    if (ctx->pc == 0x3ABBD4u) {
        ctx->pc = 0x3ABBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBD0u;
        // 0x3abbd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABBD8u;
        goto label_3abbd8;
    }
    ctx->pc = 0x3ABBD0u;
    {
        const bool branch_taken_0x3abbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x3ABBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBD0u;
        // 0x3abbd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abbd0) {
            ctx->pc = 0x3ABDE4u;
            goto label_3abde4;
        }
    }
    ctx->pc = 0x3ABBD8u;
label_3abbd8:
    // 0x3abbd8: 0x810a1bfe  lb          $t2, 0x1BFE($t0)
    ctx->pc = 0x3abbd8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 7166)));
label_3abbdc:
    // 0x3abbdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abbdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abbe0:
    // 0x3abbe0: 0x800a72b4  lb          $t2, 0x72B4($zero)
    ctx->pc = 0x3abbe0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x72B4u));
label_3abbe4:
    // 0x3abbe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abbe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abbe8:
    // 0x3abbe8: 0x81fe1b7c  lb          $fp, 0x1B7C($t7)
    ctx->pc = 0x3abbe8u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_3abbec:
    // 0x3abbec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abbecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abbf0:
    // 0x3abbf0: 0x82600fe  j           func_9803F8
label_3abbf4:
    if (ctx->pc == 0x3ABBF4u) {
        ctx->pc = 0x3ABBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBF0u;
        // 0x3abbf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABBF8u;
        goto label_3abbf8;
    }
    ctx->pc = 0x3ABBF0u;
    ctx->pc = 0x3ABBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABBF0u;
    // 0x3abbf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9803F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9803F8u, 0x3ABBF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ABBF8u;
label_3abbf8:
    // 0x3abbf8: 0x1d100fe  .word       0x01D100FE                   # dsrl32      $zero, $s1, 3 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abbf8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) >> (32 + 3));
label_3abbfc:
    // 0x3abbfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abbfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abc00:
    // 0x3abc00: 0x80031872  lb          $v1, 0x1872($zero)
    ctx->pc = 0x3abc00u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x1872u));
label_3abc04:
    // 0x3abc04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abc04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abc08:
    // 0x3abc08: 0x10020084  beq         $zero, $v0, . + 4 + (0x84 << 2)
label_3abc0c:
    if (ctx->pc == 0x3ABC0Cu) {
        ctx->pc = 0x3ABC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC08u;
        // 0x3abc0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC10u;
        goto label_3abc10;
    }
    ctx->pc = 0x3ABC08u;
    {
        const bool branch_taken_0x3abc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ABC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC08u;
        // 0x3abc0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abc08) {
            ctx->pc = 0x3ABE1Cu;
            goto label_3abe1c;
        }
    }
    ctx->pc = 0x3ABC10u;
label_3abc10:
    // 0x3abc10: 0x3e2f000  .word       0x03E2F000                   # sll         $fp, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc10u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_3abc14:
    // 0x3abc14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abc14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abc18:
    // 0x3abc18: 0x10081001  beq         $zero, $t0, . + 4 + (0x1001 << 2)
label_3abc1c:
    if (ctx->pc == 0x3ABC1Cu) {
        ctx->pc = 0x3ABC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC18u;
        // 0x3abc1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC20u;
        goto label_3abc20;
    }
    ctx->pc = 0x3ABC18u;
    {
        const bool branch_taken_0x3abc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x3ABC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC18u;
        // 0x3abc1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abc18) {
            ctx->pc = 0x3AFC20u;
            return;
        }
    }
    ctx->pc = 0x3ABC20u;
label_3abc20:
    // 0x3abc20: 0x80093130  lb          $t1, 0x3130($zero)
    ctx->pc = 0x3abc20u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x3130u));
label_3abc24:
    // 0x3abc24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abc24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abc28:
    // 0x3abc28: 0x88b1803  j           func_22C600C
label_3abc2c:
    if (ctx->pc == 0x3ABC2Cu) {
        ctx->pc = 0x3ABC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC28u;
        // 0x3abc2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC30u;
        goto label_3abc30;
    }
    ctx->pc = 0x3ABC28u;
    ctx->pc = 0x3ABC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABC28u;
    // 0x3abc2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C600Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C600Cu, 0x3ABC28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ABC30u;
label_3abc30:
    // 0x3abc30: 0x1e9007c  .word       0x01E9007C                   # dsll32      $zero, $t1, 1 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc30u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 9) << (32 + 1));
label_3abc34:
    // 0x3abc34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abc34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abc38:
    // 0x3abc38: 0x1ea007d  .word       0x01EA007D                   # INVALID     $t7, $t2, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc38u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABC38 raw=0x01EA007D");
label_3abc3c:
    // 0x3abc3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abc3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abc40:
    // 0x3abc40: 0x1eb007e  .word       0x01EB007E                   # dsrl32      $zero, $t3, 1 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 11) >> (32 + 1));
label_3abc44:
    // 0x3abc44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abc44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abc48:
    // 0x3abc48: 0x1ec007f  .word       0x01EC007F                   # dsra32      $zero, $t4, 1 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc48u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 12) >> (32 + 1));
label_3abc4c:
    // 0x3abc4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abc4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abc50:
    // 0x3abc50: 0x1ed5800  .word       0x01ED5800                   # sll         $t3, $t5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc50u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 0));
label_3abc54:
    // 0x3abc54: 0x1f14a6a  .word       0x01F14A6A                   # slt         $t1, $t7, $s1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc54u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3abc58:
    // 0x3abc58: 0x1ee5801  .word       0x01EE5801                   # INVALID     $t7, $t6, 0x5801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc58u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3ABC58 raw=0x01EE5801");
label_3abc5c:
    // 0x3abc5c: 0x1f152aa  .word       0x01F152AA                   # slt         $t2, $t7, $s1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc5cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3abc60:
    // 0x3abc60: 0x1ef5802  .word       0x01EF5802                   # srl         $t3, $t7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc60u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_3abc64:
    // 0x3abc64: 0x1f15aea  .word       0x01F15AEA                   # slt         $t3, $t7, $s1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc64u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3abc68:
    // 0x3abc68: 0x1f05803  .word       0x01F05803                   # sra         $t3, $s0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc68u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 16), 0));
label_3abc6c:
    // 0x3abc6c: 0x1f1632a  .word       0x01F1632A                   # slt         $t4, $t7, $s1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc6cu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3abc70:
    // 0x3abc70: 0x1df1804  sllv        $v1, $ra, $t6
    ctx->pc = 0x3abc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 31), GPR_U32(ctx, 14) & 0x1F));
label_3abc74:
    // 0x3abc74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abc74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abc78:
    // 0x3abc78: 0x1f31802  .word       0x01F31802                   # srl         $v1, $s3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 0));
label_3abc7c:
    // 0x3abc7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abc7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abc80:
    // 0x3abc80: 0x1f11800  .word       0x01F11800                   # sll         $v1, $s1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 0));
label_3abc84:
    // 0x3abc84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abc84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abc88:
    // 0x3abc88: 0x1f21801  .word       0x01F21801                   # INVALID     $t7, $s2, 0x1801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abc88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3ABC88 raw=0x01F21801");
label_3abc8c:
    // 0x3abc8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abc8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abc90:
    // 0x3abc90: 0x84c1803  j           func_130600C
label_3abc94:
    if (ctx->pc == 0x3ABC94u) {
        ctx->pc = 0x3ABC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC90u;
        // 0x3abc94: 0x1dff93c  .word       0x01DFF93C                   # dsll32      $ra, $ra, 4 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 31, GPR_U64(ctx, 31) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC98u;
        goto label_3abc98;
    }
    ctx->pc = 0x3ABC90u;
    ctx->pc = 0x3ABC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABC90u;
    // 0x3abc94: 0x1dff93c  .word       0x01DFF93C                   # dsll32      $ra, $ra, 4 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 31) << (32 + 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130600Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130600Cu, 0x3ABC90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ABC98u;
label_3abc98:
    // 0x3abc98: 0x88b1808  j           func_22C6020
label_3abc9c:
    if (ctx->pc == 0x3ABC9Cu) {
        ctx->pc = 0x3ABC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC98u;
        // 0x3abc9c: 0x193993d  .word       0x0193993D                   # INVALID     $t4, $s3, -0x66C3 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABC9C raw=0x0193993D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCA0u;
        goto label_3abca0;
    }
    ctx->pc = 0x3ABC98u;
    ctx->pc = 0x3ABC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABC98u;
    // 0x3abc9c: 0x193993d  .word       0x0193993D                   # INVALID     $t4, $s3, -0x66C3 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABC9C raw=0x0193993D");
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C6020u, 0x3ABC98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ABCA0u;
label_3abca0:
    // 0x3abca0: 0x82d1803  j           func_B4600C
label_3abca4:
    if (ctx->pc == 0x3ABCA4u) {
        ctx->pc = 0x3ABCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCA0u;
        // 0x3abca4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCA8u;
        goto label_3abca8;
    }
    ctx->pc = 0x3ABCA0u;
    ctx->pc = 0x3ABCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABCA0u;
    // 0x3abca4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xB4600Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB4600Cu, 0x3ABCA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ABCA8u;
label_3abca8:
    // 0x3abca8: 0x8271804  j           func_9C6010
label_3abcac:
    if (ctx->pc == 0x3ABCACu) {
        ctx->pc = 0x3ABCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCA8u;
        // 0x3abcac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCB0u;
        goto label_3abcb0;
    }
    ctx->pc = 0x3ABCA8u;
    ctx->pc = 0x3ABCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABCA8u;
    // 0x3abcac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9C6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9C6010u, 0x3ABCA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ABCB0u;
label_3abcb0:
    // 0x3abcb0: 0x500c0010  beql        $zero, $t4, . + 4 + (0x10 << 2)
label_3abcb4:
    if (ctx->pc == 0x3ABCB4u) {
        ctx->pc = 0x3ABCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCB0u;
        // 0x3abcb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCB8u;
        goto label_3abcb8;
    }
    ctx->pc = 0x3ABCB0u;
    {
        const bool branch_taken_0x3abcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x3abcb0) {
            ctx->pc = 0x3ABCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABCB0u;
            // 0x3abcb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABCF4u;
            goto label_3abcf4;
        }
    }
    ctx->pc = 0x3ABCB8u;
label_3abcb8:
    // 0x3abcb8: 0x10031805  beq         $zero, $v1, . + 4 + (0x1805 << 2)
label_3abcbc:
    if (ctx->pc == 0x3ABCBCu) {
        ctx->pc = 0x3ABCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCB8u;
        // 0x3abcbc: 0x1c0ffde  .word       0x01C0FFDE                   # ddiv        $ra, $t6, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3ABCBC raw=0x01C0FFDE");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCC0u;
        goto label_3abcc0;
    }
    ctx->pc = 0x3ABCB8u;
    {
        const bool branch_taken_0x3abcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x3ABCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCB8u;
        // 0x3abcbc: 0x1c0ffde  .word       0x01C0FFDE                   # ddiv        $ra, $t6, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3ABCBC raw=0x01C0FFDE");
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abcb8) {
            ctx->pc = 0x3B1CD0u;
            return;
        }
    }
    ctx->pc = 0x3ABCC0u;
label_3abcc0:
    // 0x3abcc0: 0x1fa6000  .word       0x01FA6000                   # sll         $t4, $k0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abcc0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 26), 0));
label_3abcc4:
    // 0x3abcc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abcc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abcc8:
    // 0x3abcc8: 0x1fb6800  .word       0x01FB6800                   # sll         $t5, $k1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abcc8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 27), 0));
label_3abccc:
    // 0x3abccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abcccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abcd0:
    // 0x3abcd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abcd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abcd4:
    // 0x3abcd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abcd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abcd8:
    // 0x3abcd8: 0x1fc6001  .word       0x01FC6001                   # INVALID     $t7, $gp, 0x6001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abcd8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3ABCD8 raw=0x01FC6001");
label_3abcdc:
    // 0x3abcdc: 0x1ff69bc  .word       0x01FF69BC                   # dsll32      $t5, $ra, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abcdcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 31) << (32 + 6));
label_3abce0:
    // 0x3abce0: 0x1fd6801  .word       0x01FD6801                   # INVALID     $t7, $sp, 0x6801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abce0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3ABCE0 raw=0x01FD6801");
label_3abce4:
    // 0x3abce4: 0x1ffd0bd  .word       0x01FFD0BD                   # INVALID     $t7, $ra, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abce4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABCE4 raw=0x01FFD0BD");
label_3abce8:
    // 0x3abce8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abce8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abcec:
    // 0x3abcec: 0x1ffdb4a  .word       0x01FFDB4A                   # movz        $k1, $t7, $ra # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abcecu;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 15));
label_3abcf0:
    // 0x3abcf0: 0x1fa6002  .word       0x01FA6002                   # srl         $t4, $k0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abcf0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 26), 0));
label_3abcf4:
    // 0x3abcf4: 0x1ff71bc  .word       0x01FF71BC                   # dsll32      $t6, $ra, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abcf4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 31) << (32 + 6));
label_3abcf8:
    // 0x3abcf8: 0x1fb6802  .word       0x01FB6802                   # srl         $t5, $k1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abcf8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 27), 0));
label_3abcfc:
    // 0x3abcfc: 0x1ffe0bd  .word       0x01FFE0BD                   # INVALID     $t7, $ra, -0x1F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abcfcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABCFC raw=0x01FFE0BD");
label_3abd00:
    // 0x3abd00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abd00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abd04:
    // 0x3abd04: 0x1ffeb8a  .word       0x01FFEB8A                   # movz        $sp, $t7, $ra # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd04u;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 29, GPR_VEC(ctx, 15));
label_3abd08:
    // 0x3abd08: 0x1fc6003  .word       0x01FC6003                   # sra         $t4, $gp, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd08u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 28), 0));
label_3abd0c:
    // 0x3abd0c: 0x1ff79bc  .word       0x01FF79BC                   # dsll32      $t7, $ra, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd0cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 31) << (32 + 6));
label_3abd10:
    // 0x3abd10: 0x1fd6803  .word       0x01FD6803                   # sra         $t5, $sp, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd10u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 29), 0));
label_3abd14:
    // 0x3abd14: 0x1ffd0bd  .word       0x01FFD0BD                   # INVALID     $t7, $ra, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd14u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABD14 raw=0x01FFD0BD");
label_3abd18:
    // 0x3abd18: 0x1fa0074  teq         $t7, $k0, 1
    ctx->pc = 0x3abd18u;
    if (GPR_U64(ctx, 15) == GPR_U64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_3abd1c:
    // 0x3abd1c: 0x1ffdbca  .word       0x01FFDBCA                   # movz        $k1, $t7, $ra # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd1cu;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 15));
label_3abd20:
    // 0x3abd20: 0x1fb0075  .word       0x01FB0075                   # INVALID     $t7, $k1, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd20u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x3ABD20 raw=0x01FB0075");
label_3abd24:
    // 0x3abd24: 0x1ff81bc  .word       0x01FF81BC                   # dsll32      $s0, $ra, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 31) << (32 + 6));
label_3abd28:
    // 0x3abd28: 0x1fc0076  tne         $t7, $gp, 1
    ctx->pc = 0x3abd28u;
    if (GPR_U64(ctx, 15) != GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3abd2c:
    // 0x3abd2c: 0x1ffe0bd  .word       0x01FFE0BD                   # INVALID     $t7, $ra, -0x1F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABD2C raw=0x01FFE0BD");
label_3abd30:
    // 0x3abd30: 0x1fd0077  .word       0x01FD0077                   # INVALID     $t7, $sp, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd30u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3ABD30 raw=0x01FD0077");
label_3abd34:
    // 0x3abd34: 0x1ffec0a  .word       0x01FFEC0A                   # movz        $sp, $t7, $ra # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd34u;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 29, GPR_VEC(ctx, 15));
label_3abd38:
    // 0x3abd38: 0x80070170  lb          $a3, 0x170($zero)
    ctx->pc = 0x3abd38u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x170u));
label_3abd3c:
    // 0x3abd3c: 0x1f269bc  .word       0x01F269BC                   # dsll32      $t5, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd3cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) << (32 + 6));
label_3abd40:
    // 0x3abd40: 0x3b00401f  xori        $zero, $t8, 0x401F
    ctx->pc = 0x3abd40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)16415);
label_3abd44:
    // 0x3abd44: 0x81f270bd  lb          $s2, 0x70BD($t7)
    ctx->pc = 0x3abd44u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 28861)));
label_3abd48:
    // 0x3abd48: 0x3b842108  xori        $a0, $gp, 0x2108
    ctx->pc = 0x3abd48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)8456);
label_3abd4c:
    // 0x3abd4c: 0x81809e5e  lb          $zero, -0x61A2($t4)
    ctx->pc = 0x3abd4cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294942302)));
label_3abd50:
    // 0x3abd50: 0x8059033d  lb          $t9, 0x33D($v0)
    ctx->pc = 0x3abd50u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_3abd54:
    // 0x3abd54: 0x1f27c8a  .word       0x01F27C8A                   # movz        $t7, $t7, $s2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd54u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_3abd58:
    // 0x3abd58: 0x1ed5800  .word       0x01ED5800                   # sll         $t3, $t5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd58u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 0));
label_3abd5c:
    // 0x3abd5c: 0x1f169bc  .word       0x01F169BC                   # dsll32      $t5, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd5cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 17) << (32 + 6));
label_3abd60:
    // 0x3abd60: 0x1ee5801  .word       0x01EE5801                   # INVALID     $t7, $t6, 0x5801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd60u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3ABD60 raw=0x01EE5801");
label_3abd64:
    // 0x3abd64: 0x1f170bd  .word       0x01F170BD                   # INVALID     $t7, $s1, 0x70BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABD64 raw=0x01F170BD");
label_3abd68:
    // 0x3abd68: 0x1ef5802  .word       0x01EF5802                   # srl         $t3, $t7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd68u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_3abd6c:
    // 0x3abd6c: 0x1f178be  .word       0x01F178BE                   # dsrl32      $t7, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> (32 + 2));
label_3abd70:
    // 0x3abd70: 0x1f05803  .word       0x01F05803                   # sra         $t3, $s0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd70u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 16), 0));
label_3abd74:
    // 0x3abd74: 0x1e0844b  .word       0x01E0844B                   # movn        $s0, $t7, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd74u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 15));
label_3abd78:
    // 0x3abd78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abd78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abd7c:
    // 0x3abd7c: 0x1f229bc  .word       0x01F229BC                   # dsll32      $a1, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 6));
label_3abd80:
    // 0x3abd80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abd80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abd84:
    // 0x3abd84: 0x1f230bd  .word       0x01F230BD                   # INVALID     $t7, $s2, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd84u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABD84 raw=0x01F230BD");
label_3abd88:
    // 0x3abd88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abd88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abd8c:
    // 0x3abd8c: 0x1f238be  .word       0x01F238BE                   # dsrl32      $a3, $s2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) >> (32 + 2));
label_3abd90:
    // 0x3abd90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abd90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abd94:
    // 0x3abd94: 0x1e0478b  .word       0x01E0478B                   # movn        $t0, $t7, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd94u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
label_3abd98:
    // 0x3abd98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abd98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abd9c:
    // 0x3abd9c: 0x1f109bc  .word       0x01F109BC                   # dsll32      $at, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abd9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 17) << (32 + 6));
label_3abda0:
    // 0x3abda0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abda0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abda4:
    // 0x3abda4: 0x1f110bd  .word       0x01F110BD                   # INVALID     $t7, $s1, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abda4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABDA4 raw=0x01F110BD");
label_3abda8:
    // 0x3abda8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abda8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abdac:
    // 0x3abdac: 0x1f118be  .word       0x01F118BE                   # dsrl32      $v1, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) >> (32 + 2));
label_3abdb0:
    // 0x3abdb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abdb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abdb4:
    // 0x3abdb4: 0x1e0250b  .word       0x01E0250B                   # movn        $a0, $t7, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abdb4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_3abdb8:
    // 0x3abdb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abdb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abdbc:
    // 0x3abdbc: 0x1e0f790  .word       0x01E0F790                   # mfhi        $fp # 01E00780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abdbcu;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_3abdc0:
    // 0x3abdc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abdc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abdc4:
    // 0x3abdc4: 0x1f1d1bc  .word       0x01F1D1BC                   # dsll32      $k0, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abdc4u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) << (32 + 6));
label_3abdc8:
    // 0x3abdc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abdc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abdcc:
    // 0x3abdcc: 0x1f1d8bd  .word       0x01F1D8BD                   # INVALID     $t7, $s1, -0x2743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abdccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABDCC raw=0x01F1D8BD");
label_3abdd0:
    // 0x3abdd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abdd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abdd4:
    // 0x3abdd4: 0x1f1e0be  .word       0x01F1E0BE                   # dsrl32      $gp, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abdd4u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 17) >> (32 + 2));
label_3abdd8:
    // 0x3abdd8: 0x81f403bc  lb          $s4, 0x3BC($t7)
    ctx->pc = 0x3abdd8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_3abddc:
    // 0x3abddc: 0x1e0ed4b  .word       0x01E0ED4B                   # movn        $sp, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abddcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 29, GPR_VEC(ctx, 15));
label_3abde0:
    // 0x3abde0: 0x1df1804  sllv        $v1, $ra, $t6
    ctx->pc = 0x3abde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 31), GPR_U32(ctx, 14) & 0x1F));
label_3abde4:
    // 0x3abde4: 0x1fe49bc  .word       0x01FE49BC                   # dsll32      $t1, $fp, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abde4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 30) << (32 + 6));
label_3abde8:
    // 0x3abde8: 0x8059033d  lb          $t9, 0x33D($v0)
    ctx->pc = 0x3abde8u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_3abdec:
    // 0x3abdec: 0x1fe50bd  .word       0x01FE50BD                   # INVALID     $t7, $fp, 0x50BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abdecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABDEC raw=0x01FE50BD");
label_3abdf0:
    // 0x3abdf0: 0x1f11800  .word       0x01F11800                   # sll         $v1, $s1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 0));
label_3abdf4:
    // 0x3abdf4: 0x1fe58be  .word       0x01FE58BE                   # dsrl32      $t3, $fp, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abdf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 30) >> (32 + 2));
label_3abdf8:
    // 0x3abdf8: 0x1f21801  .word       0x01F21801                   # INVALID     $t7, $s2, 0x1801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abdf8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3ABDF8 raw=0x01F21801");
label_3abdfc:
    // 0x3abdfc: 0x1e0658b  .word       0x01E0658B                   # movn        $t4, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abdfcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 15));
label_3abe00:
    // 0x3abe00: 0x1f31802  .word       0x01F31802                   # srl         $v1, $s3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 0));
label_3abe04:
    // 0x3abe04: 0x1dff93c  .word       0x01DFF93C                   # dsll32      $ra, $ra, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe04u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 31) << (32 + 4));
label_3abe08:
    // 0x3abe08: 0x84c1803  j           func_130600C
label_3abe0c:
    if (ctx->pc == 0x3ABE0Cu) {
        ctx->pc = 0x3ABE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE08u;
        // 0x3abe0c: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE10u;
        goto label_3abe10;
    }
    ctx->pc = 0x3ABE08u;
    ctx->pc = 0x3ABE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE08u;
    // 0x3abe0c: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130600Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130600Cu, 0x3ABE08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ABE10u;
label_3abe10:
    // 0x3abe10: 0x88b1808  j           func_22C6020
label_3abe14:
    if (ctx->pc == 0x3ABE14u) {
        ctx->pc = 0x3ABE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE10u;
        // 0x3abe14: 0x1e0a61c  .word       0x01E0A61C                   # dmult       $t7, $zero # 0000A600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3ABE14 raw=0x01E0A61C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE18u;
        goto label_3abe18;
    }
    ctx->pc = 0x3ABE10u;
    ctx->pc = 0x3ABE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE10u;
    // 0x3abe14: 0x1e0a61c  .word       0x01E0A61C                   # dmult       $t7, $zero # 0000A600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3ABE14 raw=0x01E0A61C");
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C6020u, 0x3ABE10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ABE18u;
label_3abe18:
    // 0x3abe18: 0x82d1803  j           func_B4600C
label_3abe1c:
    if (ctx->pc == 0x3ABE1Cu) {
        ctx->pc = 0x3ABE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE18u;
        // 0x3abe1c: 0x1ffb5d7  .word       0x01FFB5D7                   # dsrav       $s6, $ra, $t7 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 31) >> (GPR_U32(ctx, 15) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE20u;
        goto label_3abe20;
    }
    ctx->pc = 0x3ABE18u;
    ctx->pc = 0x3ABE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE18u;
    // 0x3abe1c: 0x1ffb5d7  .word       0x01FFB5D7                   # dsrav       $s6, $ra, $t7 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 31) >> (GPR_U32(ctx, 15) & 0x3F));
    ctx->in_delay_slot = false;
    ctx->pc = 0xB4600Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB4600Cu, 0x3ABE18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ABE20u;
label_3abe20:
    // 0x3abe20: 0x8271804  j           func_9C6010
label_3abe24:
    if (ctx->pc == 0x3ABE24u) {
        ctx->pc = 0x3ABE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE20u;
        // 0x3abe24: 0x1c0ffde  .word       0x01C0FFDE                   # ddiv        $ra, $t6, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3ABE24 raw=0x01C0FFDE");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE28u;
        goto label_3abe28;
    }
    ctx->pc = 0x3ABE20u;
    ctx->pc = 0x3ABE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE20u;
    // 0x3abe24: 0x1c0ffde  .word       0x01C0FFDE                   # ddiv        $ra, $t6, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3ABE24 raw=0x01C0FFDE");
    ctx->in_delay_slot = false;
    ctx->pc = 0x9C6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9C6010u, 0x3ABE20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ABE28u;
label_3abe28:
    // 0x3abe28: 0x3b00401f  xori        $zero, $t8, 0x401F
    ctx->pc = 0x3abe28u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)16415);
label_3abe2c:
    // 0x3abe2c: 0x8193993d  lb          $s3, -0x66C3($t4)
    ctx->pc = 0x3abe2cu;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294940989)));
label_3abe30:
    // 0x3abe30: 0x10031805  beq         $zero, $v1, . + 4 + (0x1805 << 2)
label_3abe34:
    if (ctx->pc == 0x3ABE34u) {
        ctx->pc = 0x3ABE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE30u;
        // 0x3abe34: 0x1e0ce5c  .word       0x01E0CE5C                   # dmult       $t7, $zero # 0000CE40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3ABE34 raw=0x01E0CE5C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE38u;
        goto label_3abe38;
    }
    ctx->pc = 0x3ABE30u;
    {
        const bool branch_taken_0x3abe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x3ABE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE30u;
        // 0x3abe34: 0x1e0ce5c  .word       0x01E0CE5C                   # dmult       $t7, $zero # 0000CE40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3ABE34 raw=0x01E0CE5C");
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe30) {
            ctx->pc = 0x3B1E48u;
            return;
        }
    }
    ctx->pc = 0x3ABE38u;
label_3abe38:
    // 0x3abe38: 0x500c0010  beql        $zero, $t4, . + 4 + (0x10 << 2)
label_3abe3c:
    if (ctx->pc == 0x3ABE3Cu) {
        ctx->pc = 0x3ABE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE38u;
        // 0x3abe3c: 0x1f8c17d  .word       0x01F8C17D                   # INVALID     $t7, $t8, -0x3E83 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABE3C raw=0x01F8C17D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE40u;
        goto label_3abe40;
    }
    ctx->pc = 0x3ABE38u;
    {
        const bool branch_taken_0x3abe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x3abe38) {
            ctx->pc = 0x3ABE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABE38u;
            // 0x3abe3c: 0x1f8c17d  .word       0x01F8C17D                   # INVALID     $t7, $t8, -0x3E83 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABE3C raw=0x01F8C17D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABE7Cu;
            goto label_3abe7c;
        }
    }
    ctx->pc = 0x3ABE40u;
label_3abe40:
    // 0x3abe40: 0xa2f4001  j           func_8BD0004
label_3abe44:
    if (ctx->pc == 0x3ABE44u) {
        ctx->pc = 0x3ABE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE40u;
        // 0x3abe44: 0x1f7b97c  .word       0x01F7B97C                   # dsll32      $s7, $s7, 5 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE48u;
        goto label_3abe48;
    }
    ctx->pc = 0x3ABE40u;
    ctx->pc = 0x3ABE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE40u;
    // 0x3abe44: 0x1f7b97c  .word       0x01F7B97C                   # dsll32      $s7, $s7, 5 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8BD0004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8BD0004u, 0x3ABE40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ABE48u;
label_3abe48:
    // 0x3abe48: 0x1fa6000  .word       0x01FA6000                   # sll         $t4, $k0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe48u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 26), 0));
label_3abe4c:
    // 0x3abe4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abe4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abe50:
    // 0x3abe50: 0x1fb6800  .word       0x01FB6800                   # sll         $t5, $k1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe50u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 27), 0));
label_3abe54:
    // 0x3abe54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abe54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abe58:
    // 0x3abe58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abe58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abe5c:
    // 0x3abe5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abe5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abe60:
    // 0x3abe60: 0x1fc6001  .word       0x01FC6001                   # INVALID     $t7, $gp, 0x6001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe60u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3ABE60 raw=0x01FC6001");
label_3abe64:
    // 0x3abe64: 0x1ff69bc  .word       0x01FF69BC                   # dsll32      $t5, $ra, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe64u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 31) << (32 + 6));
label_3abe68:
    // 0x3abe68: 0x1fd6801  .word       0x01FD6801                   # INVALID     $t7, $sp, 0x6801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe68u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3ABE68 raw=0x01FD6801");
label_3abe6c:
    // 0x3abe6c: 0x1ffd0bd  .word       0x01FFD0BD                   # INVALID     $t7, $ra, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABE6C raw=0x01FFD0BD");
label_3abe70:
    // 0x3abe70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abe70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abe74:
    // 0x3abe74: 0x1ffdb4a  .word       0x01FFDB4A                   # movz        $k1, $t7, $ra # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe74u;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 15));
label_3abe78:
    // 0x3abe78: 0x1fa6002  .word       0x01FA6002                   # srl         $t4, $k0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe78u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 26), 0));
label_3abe7c:
    // 0x3abe7c: 0x1ff71bc  .word       0x01FF71BC                   # dsll32      $t6, $ra, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe7cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 31) << (32 + 6));
label_3abe80:
    // 0x3abe80: 0x1fb6802  .word       0x01FB6802                   # srl         $t5, $k1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe80u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 27), 0));
label_3abe84:
    // 0x3abe84: 0x1ffe0bd  .word       0x01FFE0BD                   # INVALID     $t7, $ra, -0x1F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe84u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABE84 raw=0x01FFE0BD");
label_3abe88:
    // 0x3abe88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abe88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abe8c:
    // 0x3abe8c: 0x1ffeb8a  .word       0x01FFEB8A                   # movz        $sp, $t7, $ra # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe8cu;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 29, GPR_VEC(ctx, 15));
label_3abe90:
    // 0x3abe90: 0x1fc6003  .word       0x01FC6003                   # sra         $t4, $gp, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe90u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 28), 0));
label_3abe94:
    // 0x3abe94: 0x1ff79bc  .word       0x01FF79BC                   # dsll32      $t7, $ra, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 31) << (32 + 6));
label_3abe98:
    // 0x3abe98: 0x1fd6803  .word       0x01FD6803                   # sra         $t5, $sp, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe98u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 29), 0));
label_3abe9c:
    // 0x3abe9c: 0x1ffd0bd  .word       0x01FFD0BD                   # INVALID     $t7, $ra, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abe9cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABE9C raw=0x01FFD0BD");
label_3abea0:
    // 0x3abea0: 0x1fa0074  teq         $t7, $k0, 1
    ctx->pc = 0x3abea0u;
    if (GPR_U64(ctx, 15) == GPR_U64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_3abea4:
    // 0x3abea4: 0x1ffdbca  .word       0x01FFDBCA                   # movz        $k1, $t7, $ra # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abea4u;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 15));
label_3abea8:
    // 0x3abea8: 0x1fb0075  .word       0x01FB0075                   # INVALID     $t7, $k1, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abea8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x3ABEA8 raw=0x01FB0075");
label_3abeac:
    // 0x3abeac: 0x1ff81bc  .word       0x01FF81BC                   # dsll32      $s0, $ra, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abeacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 31) << (32 + 6));
label_3abeb0:
    // 0x3abeb0: 0x1fc0076  tne         $t7, $gp, 1
    ctx->pc = 0x3abeb0u;
    if (GPR_U64(ctx, 15) != GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3abeb4:
    // 0x3abeb4: 0x1ffe0bd  .word       0x01FFE0BD                   # INVALID     $t7, $ra, -0x1F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abeb4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABEB4 raw=0x01FFE0BD");
label_3abeb8:
    // 0x3abeb8: 0x1fd0077  .word       0x01FD0077                   # INVALID     $t7, $sp, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abeb8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3ABEB8 raw=0x01FD0077");
label_3abebc:
    // 0x3abebc: 0x1ffec0a  .word       0x01FFEC0A                   # movz        $sp, $t7, $ra # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abebcu;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 29, GPR_VEC(ctx, 15));
label_3abec0:
    // 0x3abec0: 0x3e8c800  .word       0x03E8C800                   # sll         $t9, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abec0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_3abec4:
    // 0x3abec4: 0x1f269bc  .word       0x01F269BC                   # dsll32      $t5, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abec4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) << (32 + 6));
label_3abec8:
    // 0x3abec8: 0x3b842108  xori        $a0, $gp, 0x2108
    ctx->pc = 0x3abec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)8456);
label_3abecc:
    // 0x3abecc: 0x81809e5e  lb          $zero, -0x61A2($t4)
    ctx->pc = 0x3abeccu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294942302)));
label_3abed0:
    // 0x3abed0: 0xa264002  j           func_8990008
label_3abed4:
    if (ctx->pc == 0x3ABED4u) {
        ctx->pc = 0x3ABED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABED0u;
        // 0x3abed4: 0x1f270bd  .word       0x01F270BD                   # INVALID     $t7, $s2, 0x70BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABED4 raw=0x01F270BD");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABED8u;
        goto label_3abed8;
    }
    ctx->pc = 0x3ABED0u;
    ctx->pc = 0x3ABED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABED0u;
    // 0x3abed4: 0x1f270bd  .word       0x01F270BD                   # INVALID     $t7, $s2, 0x70BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABED4 raw=0x01F270BD");
    ctx->in_delay_slot = false;
    ctx->pc = 0x8990008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8990008u, 0x3ABED0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ABED8u;
label_3abed8:
    // 0x3abed8: 0x3c8c002  .word       0x03C8C002                   # srl         $t8, $t0, 0 # 03C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abed8u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_3abedc:
    // 0x3abedc: 0x1f27c8a  .word       0x01F27C8A                   # movz        $t7, $t7, $s2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abedcu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_3abee0:
    // 0x3abee0: 0x1ed5800  .word       0x01ED5800                   # sll         $t3, $t5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abee0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 0));
label_3abee4:
    // 0x3abee4: 0x1f169bc  .word       0x01F169BC                   # dsll32      $t5, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abee4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 17) << (32 + 6));
label_3abee8:
    // 0x3abee8: 0x1ee5801  .word       0x01EE5801                   # INVALID     $t7, $t6, 0x5801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abee8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3ABEE8 raw=0x01EE5801");
label_3abeec:
    // 0x3abeec: 0x1f170bd  .word       0x01F170BD                   # INVALID     $t7, $s1, 0x70BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abeecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABEEC raw=0x01F170BD");
label_3abef0:
    // 0x3abef0: 0x1ef5802  .word       0x01EF5802                   # srl         $t3, $t7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abef0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_3abef4:
    // 0x3abef4: 0x1f178be  .word       0x01F178BE                   # dsrl32      $t7, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abef4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> (32 + 2));
label_3abef8:
    // 0x3abef8: 0x1f05803  .word       0x01F05803                   # sra         $t3, $s0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abef8u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 16), 0));
label_3abefc:
    // 0x3abefc: 0x1e0844b  .word       0x01E0844B                   # movn        $s0, $t7, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abefcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 15));
label_3abf00:
    // 0x3abf00: 0x3c8b801  .word       0x03C8B801                   # INVALID     $fp, $t0, -0x47FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abf00u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3ABF00 raw=0x03C8B801");
label_3abf04:
    // 0x3abf04: 0x1f229bc  .word       0x01F229BC                   # dsll32      $a1, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abf04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 6));
label_3abf08:
    // 0x3abf08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3abf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3abf0c:
    // 0x3abf0c: 0x1f230bd  .word       0x01F230BD                   # INVALID     $t7, $s2, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abf0cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABF0C raw=0x01F230BD");
label_3abf10:
    // 0x3abf10: 0x80050875  lb          $a1, 0x875($zero)
    ctx->pc = 0x3abf10u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x875u));
label_3abf14:
    // 0x3abf14: 0x1f238be  .word       0x01F238BE                   # dsrl32      $a3, $s2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abf14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) >> (32 + 2));
label_3abf18:
    // 0x3abf18: 0x80070170  lb          $a3, 0x170($zero)
    ctx->pc = 0x3abf18u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x170u));
label_3abf1c:
    // 0x3abf1c: 0x1e0478b  .word       0x01E0478B                   # movn        $t0, $t7, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abf1cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
label_3abf20:
    // 0x3abf20: 0x50010002  beql        $zero, $at, . + 4 + (0x2 << 2)
label_3abf24:
    if (ctx->pc == 0x3ABF24u) {
        ctx->pc = 0x3ABF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF20u;
        // 0x3abf24: 0x1f109bc  .word       0x01F109BC                   # dsll32      $at, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 17) << (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF28u;
        goto label_3abf28;
    }
    ctx->pc = 0x3ABF20u;
    {
        const bool branch_taken_0x3abf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x3abf20) {
            ctx->pc = 0x3ABF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABF20u;
            // 0x3abf24: 0x1f109bc  .word       0x01F109BC                   # dsll32      $at, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 1, GPR_U64(ctx, 17) << (32 + 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABF2Cu;
            goto label_3abf2c;
        }
    }
    ctx->pc = 0x3ABF28u;
label_3abf28:
    // 0x3abf28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abf28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abf2c:
    // 0x3abf2c: 0x1f110bd  .word       0x01F110BD                   # INVALID     $t7, $s1, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abf2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABF2C raw=0x01F110BD");
label_3abf30:
    // 0x3abf30: 0xa244002  j           func_8910008
label_3abf34:
    if (ctx->pc == 0x3ABF34u) {
        ctx->pc = 0x3ABF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF30u;
        // 0x3abf34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF38u;
        goto label_3abf38;
    }
    ctx->pc = 0x3ABF30u;
    ctx->pc = 0x3ABF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF30u;
    // 0x3abf34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8910008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8910008u, 0x3ABF30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ABF38u;
label_3abf38:
    // 0x3abf38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abf38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abf3c:
    // 0x3abf3c: 0x1f118be  .word       0x01F118BE                   # dsrl32      $v1, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) >> (32 + 2));
label_3abf40:
    // 0x3abf40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abf40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abf44:
    // 0x3abf44: 0x1e0250b  .word       0x01E0250B                   # movn        $a0, $t7, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abf44u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_3abf48:
    // 0x3abf48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abf48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abf4c:
    // 0x3abf4c: 0x1e0f790  .word       0x01E0F790                   # mfhi        $fp # 01E00780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abf4cu;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_3abf50:
    // 0x3abf50: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x3abf50u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_3abf54:
    // 0x3abf54: 0x1f1d1bc  .word       0x01F1D1BC                   # dsll32      $k0, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abf54u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) << (32 + 6));
label_3abf58:
    // 0x3abf58: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_3abf5c:
    if (ctx->pc == 0x3ABF5Cu) {
        ctx->pc = 0x3ABF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF58u;
        // 0x3abf5c: 0x1f1d8bd  .word       0x01F1D8BD                   # INVALID     $t7, $s1, -0x2743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABF5C raw=0x01F1D8BD");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF60u;
        goto label_3abf60;
    }
    ctx->pc = 0x3ABF58u;
    {
        const bool branch_taken_0x3abf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x3ABF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF58u;
        // 0x3abf5c: 0x1f1d8bd  .word       0x01F1D8BD                   # INVALID     $t7, $s1, -0x2743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ABF5C raw=0x01F1D8BD");
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf58) {
            ctx->pc = 0x3BBF68u;
            return;
        }
    }
    ctx->pc = 0x3ABF60u;
label_3abf60:
    // 0x3abf60: 0x520a07cf  beql        $s0, $t2, . + 4 + (0x7CF << 2)
label_3abf64:
    if (ctx->pc == 0x3ABF64u) {
        ctx->pc = 0x3ABF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF60u;
        // 0x3abf64: 0x1f1e0be  .word       0x01F1E0BE                   # dsrl32      $gp, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 28, GPR_U64(ctx, 17) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF68u;
        goto label_3abf68;
    }
    ctx->pc = 0x3ABF60u;
    {
        const bool branch_taken_0x3abf60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x3abf60) {
            ctx->pc = 0x3ABF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABF60u;
            // 0x3abf64: 0x1f1e0be  .word       0x01F1E0BE                   # dsrl32      $gp, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 28, GPR_U64(ctx, 17) >> (32 + 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADEA0u;
            return;
        }
    }
    ctx->pc = 0x3ABF68u;
label_3abf68:
    // 0x3abf68: 0x81f403bc  lb          $s4, 0x3BC($t7)
    ctx->pc = 0x3abf68u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_3abf6c:
    // 0x3abf6c: 0x1e0ed4b  .word       0x01E0ED4B                   # movn        $sp, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3abf6cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 29, GPR_VEC(ctx, 15));
label_3abf70:
    // 0x3abf70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abf70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abf74:
    // 0x3abf74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abf74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abf78:
    // 0x3abf78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abf78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abf7c:
    // 0x3abf7c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x3abf7cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_3abf80:
    // 0x3abf80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abf80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abf84:
    // 0x3abf84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abf84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abf88:
    // 0x3abf88: 0x40000788  .word       0x40000788                   # mfc0        $zero, Index # 00000788 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3abf88u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_3abf8c:
    // 0x3abf8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abf8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abf90:
    // 0x3abf90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3abf90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3abf94:
    // 0x3abf94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3abf94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3abf98:
    // 0x3abf98: 0x14000000  bnez        $zero, . + 4 + (0x0 << 2)
label_3abf9c:
    if (ctx->pc == 0x3ABF9Cu) {
        ctx->pc = 0x3ABFA0u;
        goto label_3abfa0;
    }
    ctx->pc = 0x3ABF98u;
    {
        const bool branch_taken_0x3abf98 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abf98) {
            ctx->pc = 0x3ABF9Cu;
            goto label_3abf9c;
        }
    }
    ctx->pc = 0x3ABFA0u;
label_3abfa0:
    // 0x3abfa0: 0x70000000  madd        $zero, $zero, $zero
    ctx->pc = 0x3abfa0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_3abfa4:
    // 0x3abfa4: 0x0  nop
    ctx->pc = 0x3abfa4u;
    // NOP
label_3abfa8:
    // 0x3abfa8: 0x0  nop
    ctx->pc = 0x3abfa8u;
    // NOP
label_3abfac:
    // 0x3abfac: 0x0  nop
    ctx->pc = 0x3abfacu;
    // NOP
label_3abfb0:
    // 0x3abfb0: 0x0  nop
    ctx->pc = 0x3abfb0u;
    // NOP
label_3abfb4:
    // 0x3abfb4: 0x0  nop
    ctx->pc = 0x3abfb4u;
    // NOP
label_3abfb8:
    // 0x3abfb8: 0x0  nop
    ctx->pc = 0x3abfb8u;
    // NOP
label_3abfbc:
    // 0x3abfbc: 0x0  nop
    ctx->pc = 0x3abfbcu;
    // NOP
label_3abfc0:
    // 0x3abfc0: 0x0  nop
    ctx->pc = 0x3abfc0u;
    // NOP
label_3abfc4:
    // 0x3abfc4: 0x0  nop
    ctx->pc = 0x3abfc4u;
    // NOP
label_3abfc8:
    // 0x3abfc8: 0x0  nop
    ctx->pc = 0x3abfc8u;
    // NOP
label_3abfcc:
    // 0x3abfcc: 0x0  nop
    ctx->pc = 0x3abfccu;
    // NOP
label_3abfd0:
    // 0x3abfd0: 0x0  nop
    ctx->pc = 0x3abfd0u;
    // NOP
label_3abfd4:
    // 0x3abfd4: 0x0  nop
    ctx->pc = 0x3abfd4u;
    // NOP
label_3abfd8:
    // 0x3abfd8: 0x0  nop
    ctx->pc = 0x3abfd8u;
    // NOP
label_3abfdc:
    // 0x3abfdc: 0x0  nop
    ctx->pc = 0x3abfdcu;
    // NOP
label_3abfe0:
    // 0x3abfe0: 0x0  nop
    ctx->pc = 0x3abfe0u;
    // NOP
label_3abfe4:
    // 0x3abfe4: 0x0  nop
    ctx->pc = 0x3abfe4u;
    // NOP
label_3abfe8:
    // 0x3abfe8: 0x0  nop
    ctx->pc = 0x3abfe8u;
    // NOP
label_3abfec:
    // 0x3abfec: 0x0  nop
    ctx->pc = 0x3abfecu;
    // NOP
label_3abff0:
    // 0x3abff0: 0x0  nop
    ctx->pc = 0x3abff0u;
    // NOP
label_3abff4:
    // 0x3abff4: 0x0  nop
    ctx->pc = 0x3abff4u;
    // NOP
label_3abff8:
    // 0x3abff8: 0x0  nop
    ctx->pc = 0x3abff8u;
    // NOP
label_3abffc:
    // 0x3abffc: 0x0  nop
    ctx->pc = 0x3abffcu;
    // NOP
label_3ac000:
    // 0x3ac000: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac000u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x3AC000 raw=0x47656373");
label_3ac004:
    // 0x3ac004: 0x66654473  daddiu      $a1, $s3, 0x4473
    ctx->pc = 0x3ac004u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)17523);
label_3ac008:
    // 0x3ac008: 0x70736944  .word       0x70736944                   # plzcw       $t5, $v1 # 00130140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac008u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 13, out); }
label_3ac00c:
    // 0x3ac00c: 0x3a766e45  xori        $s6, $s3, 0x6E45
    ctx->pc = 0x3ac00cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28229);
label_3ac010:
    // 0x3ac010: 0x20746f4e  addi        $s4, $v1, 0x6F4E
    ctx->pc = 0x3ac010u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28494, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_3ac014:
    // 0x3ac014: 0x70707573  .word       0x70707573                   # INVALID     $v1, $s0, 0x7573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac014u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x3AC014 raw=0x70707573");
label_3ac018:
    // 0x3ac018: 0x2074726f  addi        $s4, $v1, 0x726F
    ctx->pc = 0x3ac018u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_3ac01c:
    // 0x3ac01c: 0x70736964  .word       0x70736964                   # INVALID     $v1, $s3, 0x6964 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac01cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x3AC01C raw=0x70736964");
label_3ac020:
    // 0x3ac020: 0x6d79616c  ldr         $t9, 0x616C($t3)
    ctx->pc = 0x3ac020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_3ac024:
    // 0x3ac024: 0x2065646f  addi        $a1, $v1, 0x646F
    ctx->pc = 0x3ac024u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25711, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_3ac028:
    // 0x3ac028: 0x20726f66  addi        $s2, $v1, 0x6F66
    ctx->pc = 0x3ac028u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28518, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_3ac02c:
    // 0x3ac02c: 0x21216425  addi        $at, $t1, 0x6425
    ctx->pc = 0x3ac02cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)25637, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_3ac030:
    // 0x3ac030: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3ac030u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3ac034:
    // 0x3ac034: 0x0  nop
    ctx->pc = 0x3ac034u;
    // NOP
label_3ac038:
    // 0x3ac038: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac038u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x3AC038 raw=0x47656373");
label_3ac03c:
    // 0x3ac03c: 0x6e795373  ldr         $t9, 0x5373($s3)
    ctx->pc = 0x3ac03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_3ac040:
    // 0x3ac040: 0x74615063  .word       0x74615063                   # INVALID     $v1, $at, 0x5063 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac040u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC040 raw=0x74615063");
label_3ac044:
    // 0x3ac044: 0x44203a68  .word       0x44203A68                   # dmfc1       $zero, $f7 # 00000268 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac044u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x28 at 0x3AC044 raw=0x44203A68");
label_3ac048:
    // 0x3ac048: 0x4320414d  .word       0x4320414D                   # INVALID     $t9, $zero, 0x414D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ac048u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x3AC048 raw=0x4320414D");
label_3ac04c:
    // 0x3ac04c: 0x20312e68  addi        $s1, $at, 0x2E68
    ctx->pc = 0x3ac04cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11880, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_3ac050:
    // 0x3ac050: 0x73656f64  .word       0x73656F64                   # INVALID     $k1, $a1, 0x6F64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac050u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x3AC050 raw=0x73656F64");
label_3ac054:
    // 0x3ac054: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac054u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC054 raw=0x746F6E20");
label_3ac058:
    // 0x3ac058: 0x72657420  .word       0x72657420                   # madd1       $t6, $s3, $a1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac058u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_3ac05c:
    // 0x3ac05c: 0x616e696d  daddi       $t6, $t3, 0x696D
    ctx->pc = 0x3ac05cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26989; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_3ac060:
    // 0x3ac060: 0xa0d6574  j           func_83595D0
label_3ac064:
    if (ctx->pc == 0x3AC064u) {
        ctx->pc = 0x3AC068u;
        goto label_3ac068;
    }
    ctx->pc = 0x3AC060u;
    ctx->pc = 0x83595D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x83595D0u, 0x3AC060u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AC068u;
label_3ac068:
    // 0x3ac068: 0x31443c09  andi        $a0, $t2, 0x3C09
    ctx->pc = 0x3ac068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15369);
label_3ac06c:
    // 0x3ac06c: 0x4348435f  .word       0x4348435F                   # INVALID     $k0, $t0, 0x435F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ac06cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AC06C raw=0x4348435F");
label_3ac070:
    // 0x3ac070: 0x30253d52  andi        $a1, $at, 0x3D52
    ctx->pc = 0x3ac070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)15698);
label_3ac074:
    // 0x3ac074: 0x3a7838  .word       0x003A7838                   # dsll        $t7, $k0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac074u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 26) << 0);
label_3ac078:
    // 0x3ac078: 0x545f3144  bnel        $v0, $ra, . + 4 + (0x3144 << 2)
label_3ac07c:
    if (ctx->pc == 0x3AC07Cu) {
        ctx->pc = 0x3AC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC078u;
        // 0x3ac07c: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC080u;
        goto label_3ac080;
    }
    ctx->pc = 0x3AC078u;
    {
        const bool branch_taken_0x3ac078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 31));
        if (branch_taken_0x3ac078) {
            ctx->pc = 0x3AC07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC078u;
            // 0x3ac07c: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B858Cu;
            return;
        }
    }
    ctx->pc = 0x3AC080u;
label_3ac080:
    // 0x3ac080: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x3ac080u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_3ac084:
    // 0x3ac084: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x3ac084u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_3ac088:
    // 0x3ac088: 0x4d5f3144  .word       0x4D5F3144                   # INVALID     $t2, $ra, 0x3144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac088u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AC088 raw=0x4D5F3144");
label_3ac08c:
    // 0x3ac08c: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac08cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
label_3ac090:
    // 0x3ac090: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x3ac090u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_3ac094:
    // 0x3ac094: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x3ac094u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_3ac098:
    // 0x3ac098: 0x515f3144  beql        $t2, $ra, . + 4 + (0x3144 << 2)
label_3ac09c:
    if (ctx->pc == 0x3AC09Cu) {
        ctx->pc = 0x3AC09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC098u;
        // 0x3ac09c: 0x253d4357  addiu       $sp, $t1, 0x4357 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 17239));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC0A0u;
        goto label_3ac0a0;
    }
    ctx->pc = 0x3AC098u;
    {
        const bool branch_taken_0x3ac098 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 31));
        if (branch_taken_0x3ac098) {
            ctx->pc = 0x3AC09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC098u;
            // 0x3ac09c: 0x253d4357  addiu       $sp, $t1, 0x4357 (Delay Slot)
            SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 17239));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B85ACu;
            return;
        }
    }
    ctx->pc = 0x3AC0A0u;
label_3ac0a0:
    // 0x3ac0a0: 0x3e783830  .word       0x3E783830                   # lui         $t8, 0x3830 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac0a0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)14384 << 16));
label_3ac0a4:
    // 0x3ac0a4: 0xa0d  break       0, 40
    ctx->pc = 0x3ac0a4u;
    runtime->handleBreak(rdram, ctx);
label_3ac0a8:
    // 0x3ac0a8: 0x32443c09  andi        $a0, $s2, 0x3C09
    ctx->pc = 0x3ac0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15369);
label_3ac0ac:
    // 0x3ac0ac: 0x4348435f  .word       0x4348435F                   # INVALID     $k0, $t0, 0x435F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ac0acu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AC0AC raw=0x4348435F");
label_3ac0b0:
    // 0x3ac0b0: 0x30253d52  andi        $a1, $at, 0x3D52
    ctx->pc = 0x3ac0b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)15698);
label_3ac0b4:
    // 0x3ac0b4: 0x3a7838  .word       0x003A7838                   # dsll        $t7, $k0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac0b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 26) << 0);
label_3ac0b8:
    // 0x3ac0b8: 0x545f3244  bnel        $v0, $ra, . + 4 + (0x3244 << 2)
label_3ac0bc:
    if (ctx->pc == 0x3AC0BCu) {
        ctx->pc = 0x3AC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC0B8u;
        // 0x3ac0bc: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC0C0u;
        goto label_3ac0c0;
    }
    ctx->pc = 0x3AC0B8u;
    {
        const bool branch_taken_0x3ac0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 31));
        if (branch_taken_0x3ac0b8) {
            ctx->pc = 0x3AC0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC0B8u;
            // 0x3ac0bc: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B89CCu;
            return;
        }
    }
    ctx->pc = 0x3AC0C0u;
label_3ac0c0:
    // 0x3ac0c0: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x3ac0c0u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_3ac0c4:
    // 0x3ac0c4: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x3ac0c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_3ac0c8:
    // 0x3ac0c8: 0x4d5f3244  .word       0x4D5F3244                   # INVALID     $t2, $ra, 0x3244 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac0c8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AC0C8 raw=0x4D5F3244");
label_3ac0cc:
    // 0x3ac0cc: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
label_3ac0d0:
    // 0x3ac0d0: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x3ac0d0u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_3ac0d4:
    // 0x3ac0d4: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x3ac0d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_3ac0d8:
    // 0x3ac0d8: 0x515f3244  beql        $t2, $ra, . + 4 + (0x3244 << 2)
label_3ac0dc:
    if (ctx->pc == 0x3AC0DCu) {
        ctx->pc = 0x3AC0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC0D8u;
        // 0x3ac0dc: 0x253d4357  addiu       $sp, $t1, 0x4357 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 17239));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC0E0u;
        goto label_3ac0e0;
    }
    ctx->pc = 0x3AC0D8u;
    {
        const bool branch_taken_0x3ac0d8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 31));
        if (branch_taken_0x3ac0d8) {
            ctx->pc = 0x3AC0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC0D8u;
            // 0x3ac0dc: 0x253d4357  addiu       $sp, $t1, 0x4357 (Delay Slot)
            SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 17239));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B89ECu;
            return;
        }
    }
    ctx->pc = 0x3AC0E0u;
label_3ac0e0:
    // 0x3ac0e0: 0x3e783830  .word       0x3E783830                   # lui         $t8, 0x3830 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac0e0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)14384 << 16));
label_3ac0e4:
    // 0x3ac0e4: 0xa0d  break       0, 40
    ctx->pc = 0x3ac0e4u;
    runtime->handleBreak(rdram, ctx);
label_3ac0e8:
    // 0x3ac0e8: 0x49563c09  .word       0x49563C09                   # INVALID     $t2, $s6, 0x3C09 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3ac0e8u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x3AC0E8 raw=0x49563C09");
label_3ac0ec:
    // 0x3ac0ec: 0x535f3146  beql        $k0, $ra, . + 4 + (0x3146 << 2)
label_3ac0f0:
    if (ctx->pc == 0x3AC0F0u) {
        ctx->pc = 0x3AC0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC0ECu;
        // 0x3ac0f0: 0x3d544154  .word       0x3D544154                   # lui         $s4, 0x4154 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16724 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC0F4u;
        goto label_3ac0f4;
    }
    ctx->pc = 0x3AC0ECu;
    {
        const bool branch_taken_0x3ac0ec = (GPR_U64(ctx, 26) == GPR_U64(ctx, 31));
        if (branch_taken_0x3ac0ec) {
            ctx->pc = 0x3AC0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC0ECu;
            // 0x3ac0f0: 0x3d544154  .word       0x3D544154                   # lui         $s4, 0x4154 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16724 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8608u;
            return;
        }
    }
    ctx->pc = 0x3AC0F4u;
label_3ac0f4:
    // 0x3ac0f4: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x3ac0f4u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_3ac0f8:
    // 0x3ac0f8: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x3ac0f8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_3ac0fc:
    // 0x3ac0fc: 0x0  nop
    ctx->pc = 0x3ac0fcu;
    // NOP
    ctx->pc = 0x3ac100u;
}
