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

// Function: Pl_r1_dp_sword
// Address: 0x1ce8d0 - 0x1cffb0
void Pl_r1_dp_sword_0x1ce8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_dp_sword_0x1ce8d0");
#endif

    switch (ctx->pc) {
        case 0x1ce8d0u: goto label_1ce8d0;
        case 0x1ce8d4u: goto label_1ce8d4;
        case 0x1ce8d8u: goto label_1ce8d8;
        case 0x1ce8dcu: goto label_1ce8dc;
        case 0x1ce8e0u: goto label_1ce8e0;
        case 0x1ce8e4u: goto label_1ce8e4;
        case 0x1ce8e8u: goto label_1ce8e8;
        case 0x1ce8ecu: goto label_1ce8ec;
        case 0x1ce8f0u: goto label_1ce8f0;
        case 0x1ce8f4u: goto label_1ce8f4;
        case 0x1ce8f8u: goto label_1ce8f8;
        case 0x1ce8fcu: goto label_1ce8fc;
        case 0x1ce900u: goto label_1ce900;
        case 0x1ce904u: goto label_1ce904;
        case 0x1ce908u: goto label_1ce908;
        case 0x1ce90cu: goto label_1ce90c;
        case 0x1ce910u: goto label_1ce910;
        case 0x1ce914u: goto label_1ce914;
        case 0x1ce918u: goto label_1ce918;
        case 0x1ce91cu: goto label_1ce91c;
        case 0x1ce920u: goto label_1ce920;
        case 0x1ce924u: goto label_1ce924;
        case 0x1ce928u: goto label_1ce928;
        case 0x1ce92cu: goto label_1ce92c;
        case 0x1ce930u: goto label_1ce930;
        case 0x1ce934u: goto label_1ce934;
        case 0x1ce938u: goto label_1ce938;
        case 0x1ce93cu: goto label_1ce93c;
        case 0x1ce940u: goto label_1ce940;
        case 0x1ce944u: goto label_1ce944;
        case 0x1ce948u: goto label_1ce948;
        case 0x1ce94cu: goto label_1ce94c;
        case 0x1ce950u: goto label_1ce950;
        case 0x1ce954u: goto label_1ce954;
        case 0x1ce958u: goto label_1ce958;
        case 0x1ce95cu: goto label_1ce95c;
        case 0x1ce960u: goto label_1ce960;
        case 0x1ce964u: goto label_1ce964;
        case 0x1ce968u: goto label_1ce968;
        case 0x1ce96cu: goto label_1ce96c;
        case 0x1ce970u: goto label_1ce970;
        case 0x1ce974u: goto label_1ce974;
        case 0x1ce978u: goto label_1ce978;
        case 0x1ce97cu: goto label_1ce97c;
        case 0x1ce980u: goto label_1ce980;
        case 0x1ce984u: goto label_1ce984;
        case 0x1ce988u: goto label_1ce988;
        case 0x1ce98cu: goto label_1ce98c;
        case 0x1ce990u: goto label_1ce990;
        case 0x1ce994u: goto label_1ce994;
        case 0x1ce998u: goto label_1ce998;
        case 0x1ce99cu: goto label_1ce99c;
        case 0x1ce9a0u: goto label_1ce9a0;
        case 0x1ce9a4u: goto label_1ce9a4;
        case 0x1ce9a8u: goto label_1ce9a8;
        case 0x1ce9acu: goto label_1ce9ac;
        case 0x1ce9b0u: goto label_1ce9b0;
        case 0x1ce9b4u: goto label_1ce9b4;
        case 0x1ce9b8u: goto label_1ce9b8;
        case 0x1ce9bcu: goto label_1ce9bc;
        case 0x1ce9c0u: goto label_1ce9c0;
        case 0x1ce9c4u: goto label_1ce9c4;
        case 0x1ce9c8u: goto label_1ce9c8;
        case 0x1ce9ccu: goto label_1ce9cc;
        case 0x1ce9d0u: goto label_1ce9d0;
        case 0x1ce9d4u: goto label_1ce9d4;
        case 0x1ce9d8u: goto label_1ce9d8;
        case 0x1ce9dcu: goto label_1ce9dc;
        case 0x1ce9e0u: goto label_1ce9e0;
        case 0x1ce9e4u: goto label_1ce9e4;
        case 0x1ce9e8u: goto label_1ce9e8;
        case 0x1ce9ecu: goto label_1ce9ec;
        case 0x1ce9f0u: goto label_1ce9f0;
        case 0x1ce9f4u: goto label_1ce9f4;
        case 0x1ce9f8u: goto label_1ce9f8;
        case 0x1ce9fcu: goto label_1ce9fc;
        case 0x1cea00u: goto label_1cea00;
        case 0x1cea04u: goto label_1cea04;
        case 0x1cea08u: goto label_1cea08;
        case 0x1cea0cu: goto label_1cea0c;
        case 0x1cea10u: goto label_1cea10;
        case 0x1cea14u: goto label_1cea14;
        case 0x1cea18u: goto label_1cea18;
        case 0x1cea1cu: goto label_1cea1c;
        case 0x1cea20u: goto label_1cea20;
        case 0x1cea24u: goto label_1cea24;
        case 0x1cea28u: goto label_1cea28;
        case 0x1cea2cu: goto label_1cea2c;
        case 0x1cea30u: goto label_1cea30;
        case 0x1cea34u: goto label_1cea34;
        case 0x1cea38u: goto label_1cea38;
        case 0x1cea3cu: goto label_1cea3c;
        case 0x1cea40u: goto label_1cea40;
        case 0x1cea44u: goto label_1cea44;
        case 0x1cea48u: goto label_1cea48;
        case 0x1cea4cu: goto label_1cea4c;
        case 0x1cea50u: goto label_1cea50;
        case 0x1cea54u: goto label_1cea54;
        case 0x1cea58u: goto label_1cea58;
        case 0x1cea5cu: goto label_1cea5c;
        case 0x1cea60u: goto label_1cea60;
        case 0x1cea64u: goto label_1cea64;
        case 0x1cea68u: goto label_1cea68;
        case 0x1cea6cu: goto label_1cea6c;
        case 0x1cea70u: goto label_1cea70;
        case 0x1cea74u: goto label_1cea74;
        case 0x1cea78u: goto label_1cea78;
        case 0x1cea7cu: goto label_1cea7c;
        case 0x1cea80u: goto label_1cea80;
        case 0x1cea84u: goto label_1cea84;
        case 0x1cea88u: goto label_1cea88;
        case 0x1cea8cu: goto label_1cea8c;
        case 0x1cea90u: goto label_1cea90;
        case 0x1cea94u: goto label_1cea94;
        case 0x1cea98u: goto label_1cea98;
        case 0x1cea9cu: goto label_1cea9c;
        case 0x1ceaa0u: goto label_1ceaa0;
        case 0x1ceaa4u: goto label_1ceaa4;
        case 0x1ceaa8u: goto label_1ceaa8;
        case 0x1ceaacu: goto label_1ceaac;
        case 0x1ceab0u: goto label_1ceab0;
        case 0x1ceab4u: goto label_1ceab4;
        case 0x1ceab8u: goto label_1ceab8;
        case 0x1ceabcu: goto label_1ceabc;
        case 0x1ceac0u: goto label_1ceac0;
        case 0x1ceac4u: goto label_1ceac4;
        case 0x1ceac8u: goto label_1ceac8;
        case 0x1ceaccu: goto label_1ceacc;
        case 0x1cead0u: goto label_1cead0;
        case 0x1cead4u: goto label_1cead4;
        case 0x1cead8u: goto label_1cead8;
        case 0x1ceadcu: goto label_1ceadc;
        case 0x1ceae0u: goto label_1ceae0;
        case 0x1ceae4u: goto label_1ceae4;
        case 0x1ceae8u: goto label_1ceae8;
        case 0x1ceaecu: goto label_1ceaec;
        case 0x1ceaf0u: goto label_1ceaf0;
        case 0x1ceaf4u: goto label_1ceaf4;
        case 0x1ceaf8u: goto label_1ceaf8;
        case 0x1ceafcu: goto label_1ceafc;
        case 0x1ceb00u: goto label_1ceb00;
        case 0x1ceb04u: goto label_1ceb04;
        case 0x1ceb08u: goto label_1ceb08;
        case 0x1ceb0cu: goto label_1ceb0c;
        case 0x1ceb10u: goto label_1ceb10;
        case 0x1ceb14u: goto label_1ceb14;
        case 0x1ceb18u: goto label_1ceb18;
        case 0x1ceb1cu: goto label_1ceb1c;
        case 0x1ceb20u: goto label_1ceb20;
        case 0x1ceb24u: goto label_1ceb24;
        case 0x1ceb28u: goto label_1ceb28;
        case 0x1ceb2cu: goto label_1ceb2c;
        case 0x1ceb30u: goto label_1ceb30;
        case 0x1ceb34u: goto label_1ceb34;
        case 0x1ceb38u: goto label_1ceb38;
        case 0x1ceb3cu: goto label_1ceb3c;
        case 0x1ceb40u: goto label_1ceb40;
        case 0x1ceb44u: goto label_1ceb44;
        case 0x1ceb48u: goto label_1ceb48;
        case 0x1ceb4cu: goto label_1ceb4c;
        case 0x1ceb50u: goto label_1ceb50;
        case 0x1ceb54u: goto label_1ceb54;
        case 0x1ceb58u: goto label_1ceb58;
        case 0x1ceb5cu: goto label_1ceb5c;
        case 0x1ceb60u: goto label_1ceb60;
        case 0x1ceb64u: goto label_1ceb64;
        case 0x1ceb68u: goto label_1ceb68;
        case 0x1ceb6cu: goto label_1ceb6c;
        case 0x1ceb70u: goto label_1ceb70;
        case 0x1ceb74u: goto label_1ceb74;
        case 0x1ceb78u: goto label_1ceb78;
        case 0x1ceb7cu: goto label_1ceb7c;
        case 0x1ceb80u: goto label_1ceb80;
        case 0x1ceb84u: goto label_1ceb84;
        case 0x1ceb88u: goto label_1ceb88;
        case 0x1ceb8cu: goto label_1ceb8c;
        case 0x1ceb90u: goto label_1ceb90;
        case 0x1ceb94u: goto label_1ceb94;
        case 0x1ceb98u: goto label_1ceb98;
        case 0x1ceb9cu: goto label_1ceb9c;
        case 0x1ceba0u: goto label_1ceba0;
        case 0x1ceba4u: goto label_1ceba4;
        case 0x1ceba8u: goto label_1ceba8;
        case 0x1cebacu: goto label_1cebac;
        case 0x1cebb0u: goto label_1cebb0;
        case 0x1cebb4u: goto label_1cebb4;
        case 0x1cebb8u: goto label_1cebb8;
        case 0x1cebbcu: goto label_1cebbc;
        case 0x1cebc0u: goto label_1cebc0;
        case 0x1cebc4u: goto label_1cebc4;
        case 0x1cebc8u: goto label_1cebc8;
        case 0x1cebccu: goto label_1cebcc;
        case 0x1cebd0u: goto label_1cebd0;
        case 0x1cebd4u: goto label_1cebd4;
        case 0x1cebd8u: goto label_1cebd8;
        case 0x1cebdcu: goto label_1cebdc;
        case 0x1cebe0u: goto label_1cebe0;
        case 0x1cebe4u: goto label_1cebe4;
        case 0x1cebe8u: goto label_1cebe8;
        case 0x1cebecu: goto label_1cebec;
        case 0x1cebf0u: goto label_1cebf0;
        case 0x1cebf4u: goto label_1cebf4;
        case 0x1cebf8u: goto label_1cebf8;
        case 0x1cebfcu: goto label_1cebfc;
        case 0x1cec00u: goto label_1cec00;
        case 0x1cec04u: goto label_1cec04;
        case 0x1cec08u: goto label_1cec08;
        case 0x1cec0cu: goto label_1cec0c;
        case 0x1cec10u: goto label_1cec10;
        case 0x1cec14u: goto label_1cec14;
        case 0x1cec18u: goto label_1cec18;
        case 0x1cec1cu: goto label_1cec1c;
        case 0x1cec20u: goto label_1cec20;
        case 0x1cec24u: goto label_1cec24;
        case 0x1cec28u: goto label_1cec28;
        case 0x1cec2cu: goto label_1cec2c;
        case 0x1cec30u: goto label_1cec30;
        case 0x1cec34u: goto label_1cec34;
        case 0x1cec38u: goto label_1cec38;
        case 0x1cec3cu: goto label_1cec3c;
        case 0x1cec40u: goto label_1cec40;
        case 0x1cec44u: goto label_1cec44;
        case 0x1cec48u: goto label_1cec48;
        case 0x1cec4cu: goto label_1cec4c;
        case 0x1cec50u: goto label_1cec50;
        case 0x1cec54u: goto label_1cec54;
        case 0x1cec58u: goto label_1cec58;
        case 0x1cec5cu: goto label_1cec5c;
        case 0x1cec60u: goto label_1cec60;
        case 0x1cec64u: goto label_1cec64;
        case 0x1cec68u: goto label_1cec68;
        case 0x1cec6cu: goto label_1cec6c;
        case 0x1cec70u: goto label_1cec70;
        case 0x1cec74u: goto label_1cec74;
        case 0x1cec78u: goto label_1cec78;
        case 0x1cec7cu: goto label_1cec7c;
        case 0x1cec80u: goto label_1cec80;
        case 0x1cec84u: goto label_1cec84;
        case 0x1cec88u: goto label_1cec88;
        case 0x1cec8cu: goto label_1cec8c;
        case 0x1cec90u: goto label_1cec90;
        case 0x1cec94u: goto label_1cec94;
        case 0x1cec98u: goto label_1cec98;
        case 0x1cec9cu: goto label_1cec9c;
        case 0x1ceca0u: goto label_1ceca0;
        case 0x1ceca4u: goto label_1ceca4;
        case 0x1ceca8u: goto label_1ceca8;
        case 0x1cecacu: goto label_1cecac;
        case 0x1cecb0u: goto label_1cecb0;
        case 0x1cecb4u: goto label_1cecb4;
        case 0x1cecb8u: goto label_1cecb8;
        case 0x1cecbcu: goto label_1cecbc;
        case 0x1cecc0u: goto label_1cecc0;
        case 0x1cecc4u: goto label_1cecc4;
        case 0x1cecc8u: goto label_1cecc8;
        case 0x1cecccu: goto label_1ceccc;
        case 0x1cecd0u: goto label_1cecd0;
        case 0x1cecd4u: goto label_1cecd4;
        case 0x1cecd8u: goto label_1cecd8;
        case 0x1cecdcu: goto label_1cecdc;
        case 0x1cece0u: goto label_1cece0;
        case 0x1cece4u: goto label_1cece4;
        case 0x1cece8u: goto label_1cece8;
        case 0x1cececu: goto label_1cecec;
        case 0x1cecf0u: goto label_1cecf0;
        case 0x1cecf4u: goto label_1cecf4;
        case 0x1cecf8u: goto label_1cecf8;
        case 0x1cecfcu: goto label_1cecfc;
        case 0x1ced00u: goto label_1ced00;
        case 0x1ced04u: goto label_1ced04;
        case 0x1ced08u: goto label_1ced08;
        case 0x1ced0cu: goto label_1ced0c;
        case 0x1ced10u: goto label_1ced10;
        case 0x1ced14u: goto label_1ced14;
        case 0x1ced18u: goto label_1ced18;
        case 0x1ced1cu: goto label_1ced1c;
        case 0x1ced20u: goto label_1ced20;
        case 0x1ced24u: goto label_1ced24;
        case 0x1ced28u: goto label_1ced28;
        case 0x1ced2cu: goto label_1ced2c;
        case 0x1ced30u: goto label_1ced30;
        case 0x1ced34u: goto label_1ced34;
        case 0x1ced38u: goto label_1ced38;
        case 0x1ced3cu: goto label_1ced3c;
        case 0x1ced40u: goto label_1ced40;
        case 0x1ced44u: goto label_1ced44;
        case 0x1ced48u: goto label_1ced48;
        case 0x1ced4cu: goto label_1ced4c;
        case 0x1ced50u: goto label_1ced50;
        case 0x1ced54u: goto label_1ced54;
        case 0x1ced58u: goto label_1ced58;
        case 0x1ced5cu: goto label_1ced5c;
        case 0x1ced60u: goto label_1ced60;
        case 0x1ced64u: goto label_1ced64;
        case 0x1ced68u: goto label_1ced68;
        case 0x1ced6cu: goto label_1ced6c;
        case 0x1ced70u: goto label_1ced70;
        case 0x1ced74u: goto label_1ced74;
        case 0x1ced78u: goto label_1ced78;
        case 0x1ced7cu: goto label_1ced7c;
        case 0x1ced80u: goto label_1ced80;
        case 0x1ced84u: goto label_1ced84;
        case 0x1ced88u: goto label_1ced88;
        case 0x1ced8cu: goto label_1ced8c;
        case 0x1ced90u: goto label_1ced90;
        case 0x1ced94u: goto label_1ced94;
        case 0x1ced98u: goto label_1ced98;
        case 0x1ced9cu: goto label_1ced9c;
        case 0x1ceda0u: goto label_1ceda0;
        case 0x1ceda4u: goto label_1ceda4;
        case 0x1ceda8u: goto label_1ceda8;
        case 0x1cedacu: goto label_1cedac;
        case 0x1cedb0u: goto label_1cedb0;
        case 0x1cedb4u: goto label_1cedb4;
        case 0x1cedb8u: goto label_1cedb8;
        case 0x1cedbcu: goto label_1cedbc;
        case 0x1cedc0u: goto label_1cedc0;
        case 0x1cedc4u: goto label_1cedc4;
        case 0x1cedc8u: goto label_1cedc8;
        case 0x1cedccu: goto label_1cedcc;
        case 0x1cedd0u: goto label_1cedd0;
        case 0x1cedd4u: goto label_1cedd4;
        case 0x1cedd8u: goto label_1cedd8;
        case 0x1ceddcu: goto label_1ceddc;
        case 0x1cede0u: goto label_1cede0;
        case 0x1cede4u: goto label_1cede4;
        case 0x1cede8u: goto label_1cede8;
        case 0x1cedecu: goto label_1cedec;
        case 0x1cedf0u: goto label_1cedf0;
        case 0x1cedf4u: goto label_1cedf4;
        case 0x1cedf8u: goto label_1cedf8;
        case 0x1cedfcu: goto label_1cedfc;
        case 0x1cee00u: goto label_1cee00;
        case 0x1cee04u: goto label_1cee04;
        case 0x1cee08u: goto label_1cee08;
        case 0x1cee0cu: goto label_1cee0c;
        case 0x1cee10u: goto label_1cee10;
        case 0x1cee14u: goto label_1cee14;
        case 0x1cee18u: goto label_1cee18;
        case 0x1cee1cu: goto label_1cee1c;
        case 0x1cee20u: goto label_1cee20;
        case 0x1cee24u: goto label_1cee24;
        case 0x1cee28u: goto label_1cee28;
        case 0x1cee2cu: goto label_1cee2c;
        case 0x1cee30u: goto label_1cee30;
        case 0x1cee34u: goto label_1cee34;
        case 0x1cee38u: goto label_1cee38;
        case 0x1cee3cu: goto label_1cee3c;
        case 0x1cee40u: goto label_1cee40;
        case 0x1cee44u: goto label_1cee44;
        case 0x1cee48u: goto label_1cee48;
        case 0x1cee4cu: goto label_1cee4c;
        case 0x1cee50u: goto label_1cee50;
        case 0x1cee54u: goto label_1cee54;
        case 0x1cee58u: goto label_1cee58;
        case 0x1cee5cu: goto label_1cee5c;
        case 0x1cee60u: goto label_1cee60;
        case 0x1cee64u: goto label_1cee64;
        case 0x1cee68u: goto label_1cee68;
        case 0x1cee6cu: goto label_1cee6c;
        case 0x1cee70u: goto label_1cee70;
        case 0x1cee74u: goto label_1cee74;
        case 0x1cee78u: goto label_1cee78;
        case 0x1cee7cu: goto label_1cee7c;
        case 0x1cee80u: goto label_1cee80;
        case 0x1cee84u: goto label_1cee84;
        case 0x1cee88u: goto label_1cee88;
        case 0x1cee8cu: goto label_1cee8c;
        case 0x1cee90u: goto label_1cee90;
        case 0x1cee94u: goto label_1cee94;
        case 0x1cee98u: goto label_1cee98;
        case 0x1cee9cu: goto label_1cee9c;
        case 0x1ceea0u: goto label_1ceea0;
        case 0x1ceea4u: goto label_1ceea4;
        case 0x1ceea8u: goto label_1ceea8;
        case 0x1ceeacu: goto label_1ceeac;
        case 0x1ceeb0u: goto label_1ceeb0;
        case 0x1ceeb4u: goto label_1ceeb4;
        case 0x1ceeb8u: goto label_1ceeb8;
        case 0x1ceebcu: goto label_1ceebc;
        case 0x1ceec0u: goto label_1ceec0;
        case 0x1ceec4u: goto label_1ceec4;
        case 0x1ceec8u: goto label_1ceec8;
        case 0x1ceeccu: goto label_1ceecc;
        case 0x1ceed0u: goto label_1ceed0;
        case 0x1ceed4u: goto label_1ceed4;
        case 0x1ceed8u: goto label_1ceed8;
        case 0x1ceedcu: goto label_1ceedc;
        case 0x1ceee0u: goto label_1ceee0;
        case 0x1ceee4u: goto label_1ceee4;
        case 0x1ceee8u: goto label_1ceee8;
        case 0x1ceeecu: goto label_1ceeec;
        case 0x1ceef0u: goto label_1ceef0;
        case 0x1ceef4u: goto label_1ceef4;
        case 0x1ceef8u: goto label_1ceef8;
        case 0x1ceefcu: goto label_1ceefc;
        case 0x1cef00u: goto label_1cef00;
        case 0x1cef04u: goto label_1cef04;
        case 0x1cef08u: goto label_1cef08;
        case 0x1cef0cu: goto label_1cef0c;
        case 0x1cef10u: goto label_1cef10;
        case 0x1cef14u: goto label_1cef14;
        case 0x1cef18u: goto label_1cef18;
        case 0x1cef1cu: goto label_1cef1c;
        case 0x1cef20u: goto label_1cef20;
        case 0x1cef24u: goto label_1cef24;
        case 0x1cef28u: goto label_1cef28;
        case 0x1cef2cu: goto label_1cef2c;
        case 0x1cef30u: goto label_1cef30;
        case 0x1cef34u: goto label_1cef34;
        case 0x1cef38u: goto label_1cef38;
        case 0x1cef3cu: goto label_1cef3c;
        case 0x1cef40u: goto label_1cef40;
        case 0x1cef44u: goto label_1cef44;
        case 0x1cef48u: goto label_1cef48;
        case 0x1cef4cu: goto label_1cef4c;
        case 0x1cef50u: goto label_1cef50;
        case 0x1cef54u: goto label_1cef54;
        case 0x1cef58u: goto label_1cef58;
        case 0x1cef5cu: goto label_1cef5c;
        case 0x1cef60u: goto label_1cef60;
        case 0x1cef64u: goto label_1cef64;
        case 0x1cef68u: goto label_1cef68;
        case 0x1cef6cu: goto label_1cef6c;
        case 0x1cef70u: goto label_1cef70;
        case 0x1cef74u: goto label_1cef74;
        case 0x1cef78u: goto label_1cef78;
        case 0x1cef7cu: goto label_1cef7c;
        case 0x1cef80u: goto label_1cef80;
        case 0x1cef84u: goto label_1cef84;
        case 0x1cef88u: goto label_1cef88;
        case 0x1cef8cu: goto label_1cef8c;
        case 0x1cef90u: goto label_1cef90;
        case 0x1cef94u: goto label_1cef94;
        case 0x1cef98u: goto label_1cef98;
        case 0x1cef9cu: goto label_1cef9c;
        case 0x1cefa0u: goto label_1cefa0;
        case 0x1cefa4u: goto label_1cefa4;
        case 0x1cefa8u: goto label_1cefa8;
        case 0x1cefacu: goto label_1cefac;
        case 0x1cefb0u: goto label_1cefb0;
        case 0x1cefb4u: goto label_1cefb4;
        case 0x1cefb8u: goto label_1cefb8;
        case 0x1cefbcu: goto label_1cefbc;
        case 0x1cefc0u: goto label_1cefc0;
        case 0x1cefc4u: goto label_1cefc4;
        case 0x1cefc8u: goto label_1cefc8;
        case 0x1cefccu: goto label_1cefcc;
        case 0x1cefd0u: goto label_1cefd0;
        case 0x1cefd4u: goto label_1cefd4;
        case 0x1cefd8u: goto label_1cefd8;
        case 0x1cefdcu: goto label_1cefdc;
        case 0x1cefe0u: goto label_1cefe0;
        case 0x1cefe4u: goto label_1cefe4;
        case 0x1cefe8u: goto label_1cefe8;
        case 0x1cefecu: goto label_1cefec;
        case 0x1ceff0u: goto label_1ceff0;
        case 0x1ceff4u: goto label_1ceff4;
        case 0x1ceff8u: goto label_1ceff8;
        case 0x1ceffcu: goto label_1ceffc;
        case 0x1cf000u: goto label_1cf000;
        case 0x1cf004u: goto label_1cf004;
        case 0x1cf008u: goto label_1cf008;
        case 0x1cf00cu: goto label_1cf00c;
        case 0x1cf010u: goto label_1cf010;
        case 0x1cf014u: goto label_1cf014;
        case 0x1cf018u: goto label_1cf018;
        case 0x1cf01cu: goto label_1cf01c;
        case 0x1cf020u: goto label_1cf020;
        case 0x1cf024u: goto label_1cf024;
        case 0x1cf028u: goto label_1cf028;
        case 0x1cf02cu: goto label_1cf02c;
        case 0x1cf030u: goto label_1cf030;
        case 0x1cf034u: goto label_1cf034;
        case 0x1cf038u: goto label_1cf038;
        case 0x1cf03cu: goto label_1cf03c;
        case 0x1cf040u: goto label_1cf040;
        case 0x1cf044u: goto label_1cf044;
        case 0x1cf048u: goto label_1cf048;
        case 0x1cf04cu: goto label_1cf04c;
        case 0x1cf050u: goto label_1cf050;
        case 0x1cf054u: goto label_1cf054;
        case 0x1cf058u: goto label_1cf058;
        case 0x1cf05cu: goto label_1cf05c;
        case 0x1cf060u: goto label_1cf060;
        case 0x1cf064u: goto label_1cf064;
        case 0x1cf068u: goto label_1cf068;
        case 0x1cf06cu: goto label_1cf06c;
        case 0x1cf070u: goto label_1cf070;
        case 0x1cf074u: goto label_1cf074;
        case 0x1cf078u: goto label_1cf078;
        case 0x1cf07cu: goto label_1cf07c;
        case 0x1cf080u: goto label_1cf080;
        case 0x1cf084u: goto label_1cf084;
        case 0x1cf088u: goto label_1cf088;
        case 0x1cf08cu: goto label_1cf08c;
        case 0x1cf090u: goto label_1cf090;
        case 0x1cf094u: goto label_1cf094;
        case 0x1cf098u: goto label_1cf098;
        case 0x1cf09cu: goto label_1cf09c;
        case 0x1cf0a0u: goto label_1cf0a0;
        case 0x1cf0a4u: goto label_1cf0a4;
        case 0x1cf0a8u: goto label_1cf0a8;
        case 0x1cf0acu: goto label_1cf0ac;
        case 0x1cf0b0u: goto label_1cf0b0;
        case 0x1cf0b4u: goto label_1cf0b4;
        case 0x1cf0b8u: goto label_1cf0b8;
        case 0x1cf0bcu: goto label_1cf0bc;
        case 0x1cf0c0u: goto label_1cf0c0;
        case 0x1cf0c4u: goto label_1cf0c4;
        case 0x1cf0c8u: goto label_1cf0c8;
        case 0x1cf0ccu: goto label_1cf0cc;
        case 0x1cf0d0u: goto label_1cf0d0;
        case 0x1cf0d4u: goto label_1cf0d4;
        case 0x1cf0d8u: goto label_1cf0d8;
        case 0x1cf0dcu: goto label_1cf0dc;
        case 0x1cf0e0u: goto label_1cf0e0;
        case 0x1cf0e4u: goto label_1cf0e4;
        case 0x1cf0e8u: goto label_1cf0e8;
        case 0x1cf0ecu: goto label_1cf0ec;
        case 0x1cf0f0u: goto label_1cf0f0;
        case 0x1cf0f4u: goto label_1cf0f4;
        case 0x1cf0f8u: goto label_1cf0f8;
        case 0x1cf0fcu: goto label_1cf0fc;
        case 0x1cf100u: goto label_1cf100;
        case 0x1cf104u: goto label_1cf104;
        case 0x1cf108u: goto label_1cf108;
        case 0x1cf10cu: goto label_1cf10c;
        case 0x1cf110u: goto label_1cf110;
        case 0x1cf114u: goto label_1cf114;
        case 0x1cf118u: goto label_1cf118;
        case 0x1cf11cu: goto label_1cf11c;
        case 0x1cf120u: goto label_1cf120;
        case 0x1cf124u: goto label_1cf124;
        case 0x1cf128u: goto label_1cf128;
        case 0x1cf12cu: goto label_1cf12c;
        case 0x1cf130u: goto label_1cf130;
        case 0x1cf134u: goto label_1cf134;
        case 0x1cf138u: goto label_1cf138;
        case 0x1cf13cu: goto label_1cf13c;
        case 0x1cf140u: goto label_1cf140;
        case 0x1cf144u: goto label_1cf144;
        case 0x1cf148u: goto label_1cf148;
        case 0x1cf14cu: goto label_1cf14c;
        case 0x1cf150u: goto label_1cf150;
        case 0x1cf154u: goto label_1cf154;
        case 0x1cf158u: goto label_1cf158;
        case 0x1cf15cu: goto label_1cf15c;
        case 0x1cf160u: goto label_1cf160;
        case 0x1cf164u: goto label_1cf164;
        case 0x1cf168u: goto label_1cf168;
        case 0x1cf16cu: goto label_1cf16c;
        case 0x1cf170u: goto label_1cf170;
        case 0x1cf174u: goto label_1cf174;
        case 0x1cf178u: goto label_1cf178;
        case 0x1cf17cu: goto label_1cf17c;
        case 0x1cf180u: goto label_1cf180;
        case 0x1cf184u: goto label_1cf184;
        case 0x1cf188u: goto label_1cf188;
        case 0x1cf18cu: goto label_1cf18c;
        case 0x1cf190u: goto label_1cf190;
        case 0x1cf194u: goto label_1cf194;
        case 0x1cf198u: goto label_1cf198;
        case 0x1cf19cu: goto label_1cf19c;
        case 0x1cf1a0u: goto label_1cf1a0;
        case 0x1cf1a4u: goto label_1cf1a4;
        case 0x1cf1a8u: goto label_1cf1a8;
        case 0x1cf1acu: goto label_1cf1ac;
        case 0x1cf1b0u: goto label_1cf1b0;
        case 0x1cf1b4u: goto label_1cf1b4;
        case 0x1cf1b8u: goto label_1cf1b8;
        case 0x1cf1bcu: goto label_1cf1bc;
        case 0x1cf1c0u: goto label_1cf1c0;
        case 0x1cf1c4u: goto label_1cf1c4;
        case 0x1cf1c8u: goto label_1cf1c8;
        case 0x1cf1ccu: goto label_1cf1cc;
        case 0x1cf1d0u: goto label_1cf1d0;
        case 0x1cf1d4u: goto label_1cf1d4;
        case 0x1cf1d8u: goto label_1cf1d8;
        case 0x1cf1dcu: goto label_1cf1dc;
        case 0x1cf1e0u: goto label_1cf1e0;
        case 0x1cf1e4u: goto label_1cf1e4;
        case 0x1cf1e8u: goto label_1cf1e8;
        case 0x1cf1ecu: goto label_1cf1ec;
        case 0x1cf1f0u: goto label_1cf1f0;
        case 0x1cf1f4u: goto label_1cf1f4;
        case 0x1cf1f8u: goto label_1cf1f8;
        case 0x1cf1fcu: goto label_1cf1fc;
        case 0x1cf200u: goto label_1cf200;
        case 0x1cf204u: goto label_1cf204;
        case 0x1cf208u: goto label_1cf208;
        case 0x1cf20cu: goto label_1cf20c;
        case 0x1cf210u: goto label_1cf210;
        case 0x1cf214u: goto label_1cf214;
        case 0x1cf218u: goto label_1cf218;
        case 0x1cf21cu: goto label_1cf21c;
        case 0x1cf220u: goto label_1cf220;
        case 0x1cf224u: goto label_1cf224;
        case 0x1cf228u: goto label_1cf228;
        case 0x1cf22cu: goto label_1cf22c;
        case 0x1cf230u: goto label_1cf230;
        case 0x1cf234u: goto label_1cf234;
        case 0x1cf238u: goto label_1cf238;
        case 0x1cf23cu: goto label_1cf23c;
        case 0x1cf240u: goto label_1cf240;
        case 0x1cf244u: goto label_1cf244;
        case 0x1cf248u: goto label_1cf248;
        case 0x1cf24cu: goto label_1cf24c;
        case 0x1cf250u: goto label_1cf250;
        case 0x1cf254u: goto label_1cf254;
        case 0x1cf258u: goto label_1cf258;
        case 0x1cf25cu: goto label_1cf25c;
        case 0x1cf260u: goto label_1cf260;
        case 0x1cf264u: goto label_1cf264;
        case 0x1cf268u: goto label_1cf268;
        case 0x1cf26cu: goto label_1cf26c;
        case 0x1cf270u: goto label_1cf270;
        case 0x1cf274u: goto label_1cf274;
        case 0x1cf278u: goto label_1cf278;
        case 0x1cf27cu: goto label_1cf27c;
        case 0x1cf280u: goto label_1cf280;
        case 0x1cf284u: goto label_1cf284;
        case 0x1cf288u: goto label_1cf288;
        case 0x1cf28cu: goto label_1cf28c;
        case 0x1cf290u: goto label_1cf290;
        case 0x1cf294u: goto label_1cf294;
        case 0x1cf298u: goto label_1cf298;
        case 0x1cf29cu: goto label_1cf29c;
        case 0x1cf2a0u: goto label_1cf2a0;
        case 0x1cf2a4u: goto label_1cf2a4;
        case 0x1cf2a8u: goto label_1cf2a8;
        case 0x1cf2acu: goto label_1cf2ac;
        case 0x1cf2b0u: goto label_1cf2b0;
        case 0x1cf2b4u: goto label_1cf2b4;
        case 0x1cf2b8u: goto label_1cf2b8;
        case 0x1cf2bcu: goto label_1cf2bc;
        case 0x1cf2c0u: goto label_1cf2c0;
        case 0x1cf2c4u: goto label_1cf2c4;
        case 0x1cf2c8u: goto label_1cf2c8;
        case 0x1cf2ccu: goto label_1cf2cc;
        case 0x1cf2d0u: goto label_1cf2d0;
        case 0x1cf2d4u: goto label_1cf2d4;
        case 0x1cf2d8u: goto label_1cf2d8;
        case 0x1cf2dcu: goto label_1cf2dc;
        case 0x1cf2e0u: goto label_1cf2e0;
        case 0x1cf2e4u: goto label_1cf2e4;
        case 0x1cf2e8u: goto label_1cf2e8;
        case 0x1cf2ecu: goto label_1cf2ec;
        case 0x1cf2f0u: goto label_1cf2f0;
        case 0x1cf2f4u: goto label_1cf2f4;
        case 0x1cf2f8u: goto label_1cf2f8;
        case 0x1cf2fcu: goto label_1cf2fc;
        case 0x1cf300u: goto label_1cf300;
        case 0x1cf304u: goto label_1cf304;
        case 0x1cf308u: goto label_1cf308;
        case 0x1cf30cu: goto label_1cf30c;
        case 0x1cf310u: goto label_1cf310;
        case 0x1cf314u: goto label_1cf314;
        case 0x1cf318u: goto label_1cf318;
        case 0x1cf31cu: goto label_1cf31c;
        case 0x1cf320u: goto label_1cf320;
        case 0x1cf324u: goto label_1cf324;
        case 0x1cf328u: goto label_1cf328;
        case 0x1cf32cu: goto label_1cf32c;
        case 0x1cf330u: goto label_1cf330;
        case 0x1cf334u: goto label_1cf334;
        case 0x1cf338u: goto label_1cf338;
        case 0x1cf33cu: goto label_1cf33c;
        case 0x1cf340u: goto label_1cf340;
        case 0x1cf344u: goto label_1cf344;
        case 0x1cf348u: goto label_1cf348;
        case 0x1cf34cu: goto label_1cf34c;
        case 0x1cf350u: goto label_1cf350;
        case 0x1cf354u: goto label_1cf354;
        case 0x1cf358u: goto label_1cf358;
        case 0x1cf35cu: goto label_1cf35c;
        case 0x1cf360u: goto label_1cf360;
        case 0x1cf364u: goto label_1cf364;
        case 0x1cf368u: goto label_1cf368;
        case 0x1cf36cu: goto label_1cf36c;
        case 0x1cf370u: goto label_1cf370;
        case 0x1cf374u: goto label_1cf374;
        case 0x1cf378u: goto label_1cf378;
        case 0x1cf37cu: goto label_1cf37c;
        case 0x1cf380u: goto label_1cf380;
        case 0x1cf384u: goto label_1cf384;
        case 0x1cf388u: goto label_1cf388;
        case 0x1cf38cu: goto label_1cf38c;
        case 0x1cf390u: goto label_1cf390;
        case 0x1cf394u: goto label_1cf394;
        case 0x1cf398u: goto label_1cf398;
        case 0x1cf39cu: goto label_1cf39c;
        case 0x1cf3a0u: goto label_1cf3a0;
        case 0x1cf3a4u: goto label_1cf3a4;
        case 0x1cf3a8u: goto label_1cf3a8;
        case 0x1cf3acu: goto label_1cf3ac;
        case 0x1cf3b0u: goto label_1cf3b0;
        case 0x1cf3b4u: goto label_1cf3b4;
        case 0x1cf3b8u: goto label_1cf3b8;
        case 0x1cf3bcu: goto label_1cf3bc;
        case 0x1cf3c0u: goto label_1cf3c0;
        case 0x1cf3c4u: goto label_1cf3c4;
        case 0x1cf3c8u: goto label_1cf3c8;
        case 0x1cf3ccu: goto label_1cf3cc;
        case 0x1cf3d0u: goto label_1cf3d0;
        case 0x1cf3d4u: goto label_1cf3d4;
        case 0x1cf3d8u: goto label_1cf3d8;
        case 0x1cf3dcu: goto label_1cf3dc;
        case 0x1cf3e0u: goto label_1cf3e0;
        case 0x1cf3e4u: goto label_1cf3e4;
        case 0x1cf3e8u: goto label_1cf3e8;
        case 0x1cf3ecu: goto label_1cf3ec;
        case 0x1cf3f0u: goto label_1cf3f0;
        case 0x1cf3f4u: goto label_1cf3f4;
        case 0x1cf3f8u: goto label_1cf3f8;
        case 0x1cf3fcu: goto label_1cf3fc;
        case 0x1cf400u: goto label_1cf400;
        case 0x1cf404u: goto label_1cf404;
        case 0x1cf408u: goto label_1cf408;
        case 0x1cf40cu: goto label_1cf40c;
        case 0x1cf410u: goto label_1cf410;
        case 0x1cf414u: goto label_1cf414;
        case 0x1cf418u: goto label_1cf418;
        case 0x1cf41cu: goto label_1cf41c;
        case 0x1cf420u: goto label_1cf420;
        case 0x1cf424u: goto label_1cf424;
        case 0x1cf428u: goto label_1cf428;
        case 0x1cf42cu: goto label_1cf42c;
        case 0x1cf430u: goto label_1cf430;
        case 0x1cf434u: goto label_1cf434;
        case 0x1cf438u: goto label_1cf438;
        case 0x1cf43cu: goto label_1cf43c;
        case 0x1cf440u: goto label_1cf440;
        case 0x1cf444u: goto label_1cf444;
        case 0x1cf448u: goto label_1cf448;
        case 0x1cf44cu: goto label_1cf44c;
        case 0x1cf450u: goto label_1cf450;
        case 0x1cf454u: goto label_1cf454;
        case 0x1cf458u: goto label_1cf458;
        case 0x1cf45cu: goto label_1cf45c;
        case 0x1cf460u: goto label_1cf460;
        case 0x1cf464u: goto label_1cf464;
        case 0x1cf468u: goto label_1cf468;
        case 0x1cf46cu: goto label_1cf46c;
        case 0x1cf470u: goto label_1cf470;
        case 0x1cf474u: goto label_1cf474;
        case 0x1cf478u: goto label_1cf478;
        case 0x1cf47cu: goto label_1cf47c;
        case 0x1cf480u: goto label_1cf480;
        case 0x1cf484u: goto label_1cf484;
        case 0x1cf488u: goto label_1cf488;
        case 0x1cf48cu: goto label_1cf48c;
        case 0x1cf490u: goto label_1cf490;
        case 0x1cf494u: goto label_1cf494;
        case 0x1cf498u: goto label_1cf498;
        case 0x1cf49cu: goto label_1cf49c;
        case 0x1cf4a0u: goto label_1cf4a0;
        case 0x1cf4a4u: goto label_1cf4a4;
        case 0x1cf4a8u: goto label_1cf4a8;
        case 0x1cf4acu: goto label_1cf4ac;
        case 0x1cf4b0u: goto label_1cf4b0;
        case 0x1cf4b4u: goto label_1cf4b4;
        case 0x1cf4b8u: goto label_1cf4b8;
        case 0x1cf4bcu: goto label_1cf4bc;
        case 0x1cf4c0u: goto label_1cf4c0;
        case 0x1cf4c4u: goto label_1cf4c4;
        case 0x1cf4c8u: goto label_1cf4c8;
        case 0x1cf4ccu: goto label_1cf4cc;
        case 0x1cf4d0u: goto label_1cf4d0;
        case 0x1cf4d4u: goto label_1cf4d4;
        case 0x1cf4d8u: goto label_1cf4d8;
        case 0x1cf4dcu: goto label_1cf4dc;
        case 0x1cf4e0u: goto label_1cf4e0;
        case 0x1cf4e4u: goto label_1cf4e4;
        case 0x1cf4e8u: goto label_1cf4e8;
        case 0x1cf4ecu: goto label_1cf4ec;
        case 0x1cf4f0u: goto label_1cf4f0;
        case 0x1cf4f4u: goto label_1cf4f4;
        case 0x1cf4f8u: goto label_1cf4f8;
        case 0x1cf4fcu: goto label_1cf4fc;
        case 0x1cf500u: goto label_1cf500;
        case 0x1cf504u: goto label_1cf504;
        case 0x1cf508u: goto label_1cf508;
        case 0x1cf50cu: goto label_1cf50c;
        case 0x1cf510u: goto label_1cf510;
        case 0x1cf514u: goto label_1cf514;
        case 0x1cf518u: goto label_1cf518;
        case 0x1cf51cu: goto label_1cf51c;
        case 0x1cf520u: goto label_1cf520;
        case 0x1cf524u: goto label_1cf524;
        case 0x1cf528u: goto label_1cf528;
        case 0x1cf52cu: goto label_1cf52c;
        case 0x1cf530u: goto label_1cf530;
        case 0x1cf534u: goto label_1cf534;
        case 0x1cf538u: goto label_1cf538;
        case 0x1cf53cu: goto label_1cf53c;
        case 0x1cf540u: goto label_1cf540;
        case 0x1cf544u: goto label_1cf544;
        case 0x1cf548u: goto label_1cf548;
        case 0x1cf54cu: goto label_1cf54c;
        case 0x1cf550u: goto label_1cf550;
        case 0x1cf554u: goto label_1cf554;
        case 0x1cf558u: goto label_1cf558;
        case 0x1cf55cu: goto label_1cf55c;
        case 0x1cf560u: goto label_1cf560;
        case 0x1cf564u: goto label_1cf564;
        case 0x1cf568u: goto label_1cf568;
        case 0x1cf56cu: goto label_1cf56c;
        case 0x1cf570u: goto label_1cf570;
        case 0x1cf574u: goto label_1cf574;
        case 0x1cf578u: goto label_1cf578;
        case 0x1cf57cu: goto label_1cf57c;
        case 0x1cf580u: goto label_1cf580;
        case 0x1cf584u: goto label_1cf584;
        case 0x1cf588u: goto label_1cf588;
        case 0x1cf58cu: goto label_1cf58c;
        case 0x1cf590u: goto label_1cf590;
        case 0x1cf594u: goto label_1cf594;
        case 0x1cf598u: goto label_1cf598;
        case 0x1cf59cu: goto label_1cf59c;
        case 0x1cf5a0u: goto label_1cf5a0;
        case 0x1cf5a4u: goto label_1cf5a4;
        case 0x1cf5a8u: goto label_1cf5a8;
        case 0x1cf5acu: goto label_1cf5ac;
        case 0x1cf5b0u: goto label_1cf5b0;
        case 0x1cf5b4u: goto label_1cf5b4;
        case 0x1cf5b8u: goto label_1cf5b8;
        case 0x1cf5bcu: goto label_1cf5bc;
        case 0x1cf5c0u: goto label_1cf5c0;
        case 0x1cf5c4u: goto label_1cf5c4;
        case 0x1cf5c8u: goto label_1cf5c8;
        case 0x1cf5ccu: goto label_1cf5cc;
        case 0x1cf5d0u: goto label_1cf5d0;
        case 0x1cf5d4u: goto label_1cf5d4;
        case 0x1cf5d8u: goto label_1cf5d8;
        case 0x1cf5dcu: goto label_1cf5dc;
        case 0x1cf5e0u: goto label_1cf5e0;
        case 0x1cf5e4u: goto label_1cf5e4;
        case 0x1cf5e8u: goto label_1cf5e8;
        case 0x1cf5ecu: goto label_1cf5ec;
        case 0x1cf5f0u: goto label_1cf5f0;
        case 0x1cf5f4u: goto label_1cf5f4;
        case 0x1cf5f8u: goto label_1cf5f8;
        case 0x1cf5fcu: goto label_1cf5fc;
        case 0x1cf600u: goto label_1cf600;
        case 0x1cf604u: goto label_1cf604;
        case 0x1cf608u: goto label_1cf608;
        case 0x1cf60cu: goto label_1cf60c;
        case 0x1cf610u: goto label_1cf610;
        case 0x1cf614u: goto label_1cf614;
        case 0x1cf618u: goto label_1cf618;
        case 0x1cf61cu: goto label_1cf61c;
        case 0x1cf620u: goto label_1cf620;
        case 0x1cf624u: goto label_1cf624;
        case 0x1cf628u: goto label_1cf628;
        case 0x1cf62cu: goto label_1cf62c;
        case 0x1cf630u: goto label_1cf630;
        case 0x1cf634u: goto label_1cf634;
        case 0x1cf638u: goto label_1cf638;
        case 0x1cf63cu: goto label_1cf63c;
        case 0x1cf640u: goto label_1cf640;
        case 0x1cf644u: goto label_1cf644;
        case 0x1cf648u: goto label_1cf648;
        case 0x1cf64cu: goto label_1cf64c;
        case 0x1cf650u: goto label_1cf650;
        case 0x1cf654u: goto label_1cf654;
        case 0x1cf658u: goto label_1cf658;
        case 0x1cf65cu: goto label_1cf65c;
        case 0x1cf660u: goto label_1cf660;
        case 0x1cf664u: goto label_1cf664;
        case 0x1cf668u: goto label_1cf668;
        case 0x1cf66cu: goto label_1cf66c;
        case 0x1cf670u: goto label_1cf670;
        case 0x1cf674u: goto label_1cf674;
        case 0x1cf678u: goto label_1cf678;
        case 0x1cf67cu: goto label_1cf67c;
        case 0x1cf680u: goto label_1cf680;
        case 0x1cf684u: goto label_1cf684;
        case 0x1cf688u: goto label_1cf688;
        case 0x1cf68cu: goto label_1cf68c;
        case 0x1cf690u: goto label_1cf690;
        case 0x1cf694u: goto label_1cf694;
        case 0x1cf698u: goto label_1cf698;
        case 0x1cf69cu: goto label_1cf69c;
        case 0x1cf6a0u: goto label_1cf6a0;
        case 0x1cf6a4u: goto label_1cf6a4;
        case 0x1cf6a8u: goto label_1cf6a8;
        case 0x1cf6acu: goto label_1cf6ac;
        case 0x1cf6b0u: goto label_1cf6b0;
        case 0x1cf6b4u: goto label_1cf6b4;
        case 0x1cf6b8u: goto label_1cf6b8;
        case 0x1cf6bcu: goto label_1cf6bc;
        case 0x1cf6c0u: goto label_1cf6c0;
        case 0x1cf6c4u: goto label_1cf6c4;
        case 0x1cf6c8u: goto label_1cf6c8;
        case 0x1cf6ccu: goto label_1cf6cc;
        case 0x1cf6d0u: goto label_1cf6d0;
        case 0x1cf6d4u: goto label_1cf6d4;
        case 0x1cf6d8u: goto label_1cf6d8;
        case 0x1cf6dcu: goto label_1cf6dc;
        case 0x1cf6e0u: goto label_1cf6e0;
        case 0x1cf6e4u: goto label_1cf6e4;
        case 0x1cf6e8u: goto label_1cf6e8;
        case 0x1cf6ecu: goto label_1cf6ec;
        case 0x1cf6f0u: goto label_1cf6f0;
        case 0x1cf6f4u: goto label_1cf6f4;
        case 0x1cf6f8u: goto label_1cf6f8;
        case 0x1cf6fcu: goto label_1cf6fc;
        case 0x1cf700u: goto label_1cf700;
        case 0x1cf704u: goto label_1cf704;
        case 0x1cf708u: goto label_1cf708;
        case 0x1cf70cu: goto label_1cf70c;
        case 0x1cf710u: goto label_1cf710;
        case 0x1cf714u: goto label_1cf714;
        case 0x1cf718u: goto label_1cf718;
        case 0x1cf71cu: goto label_1cf71c;
        case 0x1cf720u: goto label_1cf720;
        case 0x1cf724u: goto label_1cf724;
        case 0x1cf728u: goto label_1cf728;
        case 0x1cf72cu: goto label_1cf72c;
        case 0x1cf730u: goto label_1cf730;
        case 0x1cf734u: goto label_1cf734;
        case 0x1cf738u: goto label_1cf738;
        case 0x1cf73cu: goto label_1cf73c;
        case 0x1cf740u: goto label_1cf740;
        case 0x1cf744u: goto label_1cf744;
        case 0x1cf748u: goto label_1cf748;
        case 0x1cf74cu: goto label_1cf74c;
        case 0x1cf750u: goto label_1cf750;
        case 0x1cf754u: goto label_1cf754;
        case 0x1cf758u: goto label_1cf758;
        case 0x1cf75cu: goto label_1cf75c;
        case 0x1cf760u: goto label_1cf760;
        case 0x1cf764u: goto label_1cf764;
        case 0x1cf768u: goto label_1cf768;
        case 0x1cf76cu: goto label_1cf76c;
        case 0x1cf770u: goto label_1cf770;
        case 0x1cf774u: goto label_1cf774;
        case 0x1cf778u: goto label_1cf778;
        case 0x1cf77cu: goto label_1cf77c;
        case 0x1cf780u: goto label_1cf780;
        case 0x1cf784u: goto label_1cf784;
        case 0x1cf788u: goto label_1cf788;
        case 0x1cf78cu: goto label_1cf78c;
        case 0x1cf790u: goto label_1cf790;
        case 0x1cf794u: goto label_1cf794;
        case 0x1cf798u: goto label_1cf798;
        case 0x1cf79cu: goto label_1cf79c;
        case 0x1cf7a0u: goto label_1cf7a0;
        case 0x1cf7a4u: goto label_1cf7a4;
        case 0x1cf7a8u: goto label_1cf7a8;
        case 0x1cf7acu: goto label_1cf7ac;
        case 0x1cf7b0u: goto label_1cf7b0;
        case 0x1cf7b4u: goto label_1cf7b4;
        case 0x1cf7b8u: goto label_1cf7b8;
        case 0x1cf7bcu: goto label_1cf7bc;
        case 0x1cf7c0u: goto label_1cf7c0;
        case 0x1cf7c4u: goto label_1cf7c4;
        case 0x1cf7c8u: goto label_1cf7c8;
        case 0x1cf7ccu: goto label_1cf7cc;
        case 0x1cf7d0u: goto label_1cf7d0;
        case 0x1cf7d4u: goto label_1cf7d4;
        case 0x1cf7d8u: goto label_1cf7d8;
        case 0x1cf7dcu: goto label_1cf7dc;
        case 0x1cf7e0u: goto label_1cf7e0;
        case 0x1cf7e4u: goto label_1cf7e4;
        case 0x1cf7e8u: goto label_1cf7e8;
        case 0x1cf7ecu: goto label_1cf7ec;
        case 0x1cf7f0u: goto label_1cf7f0;
        case 0x1cf7f4u: goto label_1cf7f4;
        case 0x1cf7f8u: goto label_1cf7f8;
        case 0x1cf7fcu: goto label_1cf7fc;
        case 0x1cf800u: goto label_1cf800;
        case 0x1cf804u: goto label_1cf804;
        case 0x1cf808u: goto label_1cf808;
        case 0x1cf80cu: goto label_1cf80c;
        case 0x1cf810u: goto label_1cf810;
        case 0x1cf814u: goto label_1cf814;
        case 0x1cf818u: goto label_1cf818;
        case 0x1cf81cu: goto label_1cf81c;
        case 0x1cf820u: goto label_1cf820;
        case 0x1cf824u: goto label_1cf824;
        case 0x1cf828u: goto label_1cf828;
        case 0x1cf82cu: goto label_1cf82c;
        case 0x1cf830u: goto label_1cf830;
        case 0x1cf834u: goto label_1cf834;
        case 0x1cf838u: goto label_1cf838;
        case 0x1cf83cu: goto label_1cf83c;
        case 0x1cf840u: goto label_1cf840;
        case 0x1cf844u: goto label_1cf844;
        case 0x1cf848u: goto label_1cf848;
        case 0x1cf84cu: goto label_1cf84c;
        case 0x1cf850u: goto label_1cf850;
        case 0x1cf854u: goto label_1cf854;
        case 0x1cf858u: goto label_1cf858;
        case 0x1cf85cu: goto label_1cf85c;
        case 0x1cf860u: goto label_1cf860;
        case 0x1cf864u: goto label_1cf864;
        case 0x1cf868u: goto label_1cf868;
        case 0x1cf86cu: goto label_1cf86c;
        case 0x1cf870u: goto label_1cf870;
        case 0x1cf874u: goto label_1cf874;
        case 0x1cf878u: goto label_1cf878;
        case 0x1cf87cu: goto label_1cf87c;
        case 0x1cf880u: goto label_1cf880;
        case 0x1cf884u: goto label_1cf884;
        case 0x1cf888u: goto label_1cf888;
        case 0x1cf88cu: goto label_1cf88c;
        case 0x1cf890u: goto label_1cf890;
        case 0x1cf894u: goto label_1cf894;
        case 0x1cf898u: goto label_1cf898;
        case 0x1cf89cu: goto label_1cf89c;
        case 0x1cf8a0u: goto label_1cf8a0;
        case 0x1cf8a4u: goto label_1cf8a4;
        case 0x1cf8a8u: goto label_1cf8a8;
        case 0x1cf8acu: goto label_1cf8ac;
        case 0x1cf8b0u: goto label_1cf8b0;
        case 0x1cf8b4u: goto label_1cf8b4;
        case 0x1cf8b8u: goto label_1cf8b8;
        case 0x1cf8bcu: goto label_1cf8bc;
        case 0x1cf8c0u: goto label_1cf8c0;
        case 0x1cf8c4u: goto label_1cf8c4;
        case 0x1cf8c8u: goto label_1cf8c8;
        case 0x1cf8ccu: goto label_1cf8cc;
        case 0x1cf8d0u: goto label_1cf8d0;
        case 0x1cf8d4u: goto label_1cf8d4;
        case 0x1cf8d8u: goto label_1cf8d8;
        case 0x1cf8dcu: goto label_1cf8dc;
        case 0x1cf8e0u: goto label_1cf8e0;
        case 0x1cf8e4u: goto label_1cf8e4;
        case 0x1cf8e8u: goto label_1cf8e8;
        case 0x1cf8ecu: goto label_1cf8ec;
        case 0x1cf8f0u: goto label_1cf8f0;
        case 0x1cf8f4u: goto label_1cf8f4;
        case 0x1cf8f8u: goto label_1cf8f8;
        case 0x1cf8fcu: goto label_1cf8fc;
        case 0x1cf900u: goto label_1cf900;
        case 0x1cf904u: goto label_1cf904;
        case 0x1cf908u: goto label_1cf908;
        case 0x1cf90cu: goto label_1cf90c;
        case 0x1cf910u: goto label_1cf910;
        case 0x1cf914u: goto label_1cf914;
        case 0x1cf918u: goto label_1cf918;
        case 0x1cf91cu: goto label_1cf91c;
        case 0x1cf920u: goto label_1cf920;
        case 0x1cf924u: goto label_1cf924;
        case 0x1cf928u: goto label_1cf928;
        case 0x1cf92cu: goto label_1cf92c;
        case 0x1cf930u: goto label_1cf930;
        case 0x1cf934u: goto label_1cf934;
        case 0x1cf938u: goto label_1cf938;
        case 0x1cf93cu: goto label_1cf93c;
        case 0x1cf940u: goto label_1cf940;
        case 0x1cf944u: goto label_1cf944;
        case 0x1cf948u: goto label_1cf948;
        case 0x1cf94cu: goto label_1cf94c;
        case 0x1cf950u: goto label_1cf950;
        case 0x1cf954u: goto label_1cf954;
        case 0x1cf958u: goto label_1cf958;
        case 0x1cf95cu: goto label_1cf95c;
        case 0x1cf960u: goto label_1cf960;
        case 0x1cf964u: goto label_1cf964;
        case 0x1cf968u: goto label_1cf968;
        case 0x1cf96cu: goto label_1cf96c;
        case 0x1cf970u: goto label_1cf970;
        case 0x1cf974u: goto label_1cf974;
        case 0x1cf978u: goto label_1cf978;
        case 0x1cf97cu: goto label_1cf97c;
        case 0x1cf980u: goto label_1cf980;
        case 0x1cf984u: goto label_1cf984;
        case 0x1cf988u: goto label_1cf988;
        case 0x1cf98cu: goto label_1cf98c;
        case 0x1cf990u: goto label_1cf990;
        case 0x1cf994u: goto label_1cf994;
        case 0x1cf998u: goto label_1cf998;
        case 0x1cf99cu: goto label_1cf99c;
        case 0x1cf9a0u: goto label_1cf9a0;
        case 0x1cf9a4u: goto label_1cf9a4;
        case 0x1cf9a8u: goto label_1cf9a8;
        case 0x1cf9acu: goto label_1cf9ac;
        case 0x1cf9b0u: goto label_1cf9b0;
        case 0x1cf9b4u: goto label_1cf9b4;
        case 0x1cf9b8u: goto label_1cf9b8;
        case 0x1cf9bcu: goto label_1cf9bc;
        case 0x1cf9c0u: goto label_1cf9c0;
        case 0x1cf9c4u: goto label_1cf9c4;
        case 0x1cf9c8u: goto label_1cf9c8;
        case 0x1cf9ccu: goto label_1cf9cc;
        case 0x1cf9d0u: goto label_1cf9d0;
        case 0x1cf9d4u: goto label_1cf9d4;
        case 0x1cf9d8u: goto label_1cf9d8;
        case 0x1cf9dcu: goto label_1cf9dc;
        case 0x1cf9e0u: goto label_1cf9e0;
        case 0x1cf9e4u: goto label_1cf9e4;
        case 0x1cf9e8u: goto label_1cf9e8;
        case 0x1cf9ecu: goto label_1cf9ec;
        case 0x1cf9f0u: goto label_1cf9f0;
        case 0x1cf9f4u: goto label_1cf9f4;
        case 0x1cf9f8u: goto label_1cf9f8;
        case 0x1cf9fcu: goto label_1cf9fc;
        case 0x1cfa00u: goto label_1cfa00;
        case 0x1cfa04u: goto label_1cfa04;
        case 0x1cfa08u: goto label_1cfa08;
        case 0x1cfa0cu: goto label_1cfa0c;
        case 0x1cfa10u: goto label_1cfa10;
        case 0x1cfa14u: goto label_1cfa14;
        case 0x1cfa18u: goto label_1cfa18;
        case 0x1cfa1cu: goto label_1cfa1c;
        case 0x1cfa20u: goto label_1cfa20;
        case 0x1cfa24u: goto label_1cfa24;
        case 0x1cfa28u: goto label_1cfa28;
        case 0x1cfa2cu: goto label_1cfa2c;
        case 0x1cfa30u: goto label_1cfa30;
        case 0x1cfa34u: goto label_1cfa34;
        case 0x1cfa38u: goto label_1cfa38;
        case 0x1cfa3cu: goto label_1cfa3c;
        case 0x1cfa40u: goto label_1cfa40;
        case 0x1cfa44u: goto label_1cfa44;
        case 0x1cfa48u: goto label_1cfa48;
        case 0x1cfa4cu: goto label_1cfa4c;
        case 0x1cfa50u: goto label_1cfa50;
        case 0x1cfa54u: goto label_1cfa54;
        case 0x1cfa58u: goto label_1cfa58;
        case 0x1cfa5cu: goto label_1cfa5c;
        case 0x1cfa60u: goto label_1cfa60;
        case 0x1cfa64u: goto label_1cfa64;
        case 0x1cfa68u: goto label_1cfa68;
        case 0x1cfa6cu: goto label_1cfa6c;
        case 0x1cfa70u: goto label_1cfa70;
        case 0x1cfa74u: goto label_1cfa74;
        case 0x1cfa78u: goto label_1cfa78;
        case 0x1cfa7cu: goto label_1cfa7c;
        case 0x1cfa80u: goto label_1cfa80;
        case 0x1cfa84u: goto label_1cfa84;
        case 0x1cfa88u: goto label_1cfa88;
        case 0x1cfa8cu: goto label_1cfa8c;
        case 0x1cfa90u: goto label_1cfa90;
        case 0x1cfa94u: goto label_1cfa94;
        case 0x1cfa98u: goto label_1cfa98;
        case 0x1cfa9cu: goto label_1cfa9c;
        case 0x1cfaa0u: goto label_1cfaa0;
        case 0x1cfaa4u: goto label_1cfaa4;
        case 0x1cfaa8u: goto label_1cfaa8;
        case 0x1cfaacu: goto label_1cfaac;
        case 0x1cfab0u: goto label_1cfab0;
        case 0x1cfab4u: goto label_1cfab4;
        case 0x1cfab8u: goto label_1cfab8;
        case 0x1cfabcu: goto label_1cfabc;
        case 0x1cfac0u: goto label_1cfac0;
        case 0x1cfac4u: goto label_1cfac4;
        case 0x1cfac8u: goto label_1cfac8;
        case 0x1cfaccu: goto label_1cfacc;
        case 0x1cfad0u: goto label_1cfad0;
        case 0x1cfad4u: goto label_1cfad4;
        case 0x1cfad8u: goto label_1cfad8;
        case 0x1cfadcu: goto label_1cfadc;
        case 0x1cfae0u: goto label_1cfae0;
        case 0x1cfae4u: goto label_1cfae4;
        case 0x1cfae8u: goto label_1cfae8;
        case 0x1cfaecu: goto label_1cfaec;
        case 0x1cfaf0u: goto label_1cfaf0;
        case 0x1cfaf4u: goto label_1cfaf4;
        case 0x1cfaf8u: goto label_1cfaf8;
        case 0x1cfafcu: goto label_1cfafc;
        case 0x1cfb00u: goto label_1cfb00;
        case 0x1cfb04u: goto label_1cfb04;
        case 0x1cfb08u: goto label_1cfb08;
        case 0x1cfb0cu: goto label_1cfb0c;
        case 0x1cfb10u: goto label_1cfb10;
        case 0x1cfb14u: goto label_1cfb14;
        case 0x1cfb18u: goto label_1cfb18;
        case 0x1cfb1cu: goto label_1cfb1c;
        case 0x1cfb20u: goto label_1cfb20;
        case 0x1cfb24u: goto label_1cfb24;
        case 0x1cfb28u: goto label_1cfb28;
        case 0x1cfb2cu: goto label_1cfb2c;
        case 0x1cfb30u: goto label_1cfb30;
        case 0x1cfb34u: goto label_1cfb34;
        case 0x1cfb38u: goto label_1cfb38;
        case 0x1cfb3cu: goto label_1cfb3c;
        case 0x1cfb40u: goto label_1cfb40;
        case 0x1cfb44u: goto label_1cfb44;
        case 0x1cfb48u: goto label_1cfb48;
        case 0x1cfb4cu: goto label_1cfb4c;
        case 0x1cfb50u: goto label_1cfb50;
        case 0x1cfb54u: goto label_1cfb54;
        case 0x1cfb58u: goto label_1cfb58;
        case 0x1cfb5cu: goto label_1cfb5c;
        case 0x1cfb60u: goto label_1cfb60;
        case 0x1cfb64u: goto label_1cfb64;
        case 0x1cfb68u: goto label_1cfb68;
        case 0x1cfb6cu: goto label_1cfb6c;
        case 0x1cfb70u: goto label_1cfb70;
        case 0x1cfb74u: goto label_1cfb74;
        case 0x1cfb78u: goto label_1cfb78;
        case 0x1cfb7cu: goto label_1cfb7c;
        case 0x1cfb80u: goto label_1cfb80;
        case 0x1cfb84u: goto label_1cfb84;
        case 0x1cfb88u: goto label_1cfb88;
        case 0x1cfb8cu: goto label_1cfb8c;
        case 0x1cfb90u: goto label_1cfb90;
        case 0x1cfb94u: goto label_1cfb94;
        case 0x1cfb98u: goto label_1cfb98;
        case 0x1cfb9cu: goto label_1cfb9c;
        case 0x1cfba0u: goto label_1cfba0;
        case 0x1cfba4u: goto label_1cfba4;
        case 0x1cfba8u: goto label_1cfba8;
        case 0x1cfbacu: goto label_1cfbac;
        case 0x1cfbb0u: goto label_1cfbb0;
        case 0x1cfbb4u: goto label_1cfbb4;
        case 0x1cfbb8u: goto label_1cfbb8;
        case 0x1cfbbcu: goto label_1cfbbc;
        case 0x1cfbc0u: goto label_1cfbc0;
        case 0x1cfbc4u: goto label_1cfbc4;
        case 0x1cfbc8u: goto label_1cfbc8;
        case 0x1cfbccu: goto label_1cfbcc;
        case 0x1cfbd0u: goto label_1cfbd0;
        case 0x1cfbd4u: goto label_1cfbd4;
        case 0x1cfbd8u: goto label_1cfbd8;
        case 0x1cfbdcu: goto label_1cfbdc;
        case 0x1cfbe0u: goto label_1cfbe0;
        case 0x1cfbe4u: goto label_1cfbe4;
        case 0x1cfbe8u: goto label_1cfbe8;
        case 0x1cfbecu: goto label_1cfbec;
        case 0x1cfbf0u: goto label_1cfbf0;
        case 0x1cfbf4u: goto label_1cfbf4;
        case 0x1cfbf8u: goto label_1cfbf8;
        case 0x1cfbfcu: goto label_1cfbfc;
        case 0x1cfc00u: goto label_1cfc00;
        case 0x1cfc04u: goto label_1cfc04;
        case 0x1cfc08u: goto label_1cfc08;
        case 0x1cfc0cu: goto label_1cfc0c;
        case 0x1cfc10u: goto label_1cfc10;
        case 0x1cfc14u: goto label_1cfc14;
        case 0x1cfc18u: goto label_1cfc18;
        case 0x1cfc1cu: goto label_1cfc1c;
        case 0x1cfc20u: goto label_1cfc20;
        case 0x1cfc24u: goto label_1cfc24;
        case 0x1cfc28u: goto label_1cfc28;
        case 0x1cfc2cu: goto label_1cfc2c;
        case 0x1cfc30u: goto label_1cfc30;
        case 0x1cfc34u: goto label_1cfc34;
        case 0x1cfc38u: goto label_1cfc38;
        case 0x1cfc3cu: goto label_1cfc3c;
        case 0x1cfc40u: goto label_1cfc40;
        case 0x1cfc44u: goto label_1cfc44;
        case 0x1cfc48u: goto label_1cfc48;
        case 0x1cfc4cu: goto label_1cfc4c;
        case 0x1cfc50u: goto label_1cfc50;
        case 0x1cfc54u: goto label_1cfc54;
        case 0x1cfc58u: goto label_1cfc58;
        case 0x1cfc5cu: goto label_1cfc5c;
        case 0x1cfc60u: goto label_1cfc60;
        case 0x1cfc64u: goto label_1cfc64;
        case 0x1cfc68u: goto label_1cfc68;
        case 0x1cfc6cu: goto label_1cfc6c;
        case 0x1cfc70u: goto label_1cfc70;
        case 0x1cfc74u: goto label_1cfc74;
        case 0x1cfc78u: goto label_1cfc78;
        case 0x1cfc7cu: goto label_1cfc7c;
        case 0x1cfc80u: goto label_1cfc80;
        case 0x1cfc84u: goto label_1cfc84;
        case 0x1cfc88u: goto label_1cfc88;
        case 0x1cfc8cu: goto label_1cfc8c;
        case 0x1cfc90u: goto label_1cfc90;
        case 0x1cfc94u: goto label_1cfc94;
        case 0x1cfc98u: goto label_1cfc98;
        case 0x1cfc9cu: goto label_1cfc9c;
        case 0x1cfca0u: goto label_1cfca0;
        case 0x1cfca4u: goto label_1cfca4;
        case 0x1cfca8u: goto label_1cfca8;
        case 0x1cfcacu: goto label_1cfcac;
        case 0x1cfcb0u: goto label_1cfcb0;
        case 0x1cfcb4u: goto label_1cfcb4;
        case 0x1cfcb8u: goto label_1cfcb8;
        case 0x1cfcbcu: goto label_1cfcbc;
        case 0x1cfcc0u: goto label_1cfcc0;
        case 0x1cfcc4u: goto label_1cfcc4;
        case 0x1cfcc8u: goto label_1cfcc8;
        case 0x1cfcccu: goto label_1cfccc;
        case 0x1cfcd0u: goto label_1cfcd0;
        case 0x1cfcd4u: goto label_1cfcd4;
        case 0x1cfcd8u: goto label_1cfcd8;
        case 0x1cfcdcu: goto label_1cfcdc;
        case 0x1cfce0u: goto label_1cfce0;
        case 0x1cfce4u: goto label_1cfce4;
        case 0x1cfce8u: goto label_1cfce8;
        case 0x1cfcecu: goto label_1cfcec;
        case 0x1cfcf0u: goto label_1cfcf0;
        case 0x1cfcf4u: goto label_1cfcf4;
        case 0x1cfcf8u: goto label_1cfcf8;
        case 0x1cfcfcu: goto label_1cfcfc;
        case 0x1cfd00u: goto label_1cfd00;
        case 0x1cfd04u: goto label_1cfd04;
        case 0x1cfd08u: goto label_1cfd08;
        case 0x1cfd0cu: goto label_1cfd0c;
        case 0x1cfd10u: goto label_1cfd10;
        case 0x1cfd14u: goto label_1cfd14;
        case 0x1cfd18u: goto label_1cfd18;
        case 0x1cfd1cu: goto label_1cfd1c;
        case 0x1cfd20u: goto label_1cfd20;
        case 0x1cfd24u: goto label_1cfd24;
        case 0x1cfd28u: goto label_1cfd28;
        case 0x1cfd2cu: goto label_1cfd2c;
        case 0x1cfd30u: goto label_1cfd30;
        case 0x1cfd34u: goto label_1cfd34;
        case 0x1cfd38u: goto label_1cfd38;
        case 0x1cfd3cu: goto label_1cfd3c;
        case 0x1cfd40u: goto label_1cfd40;
        case 0x1cfd44u: goto label_1cfd44;
        case 0x1cfd48u: goto label_1cfd48;
        case 0x1cfd4cu: goto label_1cfd4c;
        case 0x1cfd50u: goto label_1cfd50;
        case 0x1cfd54u: goto label_1cfd54;
        case 0x1cfd58u: goto label_1cfd58;
        case 0x1cfd5cu: goto label_1cfd5c;
        case 0x1cfd60u: goto label_1cfd60;
        case 0x1cfd64u: goto label_1cfd64;
        case 0x1cfd68u: goto label_1cfd68;
        case 0x1cfd6cu: goto label_1cfd6c;
        case 0x1cfd70u: goto label_1cfd70;
        case 0x1cfd74u: goto label_1cfd74;
        case 0x1cfd78u: goto label_1cfd78;
        case 0x1cfd7cu: goto label_1cfd7c;
        case 0x1cfd80u: goto label_1cfd80;
        case 0x1cfd84u: goto label_1cfd84;
        case 0x1cfd88u: goto label_1cfd88;
        case 0x1cfd8cu: goto label_1cfd8c;
        case 0x1cfd90u: goto label_1cfd90;
        case 0x1cfd94u: goto label_1cfd94;
        case 0x1cfd98u: goto label_1cfd98;
        case 0x1cfd9cu: goto label_1cfd9c;
        case 0x1cfda0u: goto label_1cfda0;
        case 0x1cfda4u: goto label_1cfda4;
        case 0x1cfda8u: goto label_1cfda8;
        case 0x1cfdacu: goto label_1cfdac;
        case 0x1cfdb0u: goto label_1cfdb0;
        case 0x1cfdb4u: goto label_1cfdb4;
        case 0x1cfdb8u: goto label_1cfdb8;
        case 0x1cfdbcu: goto label_1cfdbc;
        case 0x1cfdc0u: goto label_1cfdc0;
        case 0x1cfdc4u: goto label_1cfdc4;
        case 0x1cfdc8u: goto label_1cfdc8;
        case 0x1cfdccu: goto label_1cfdcc;
        case 0x1cfdd0u: goto label_1cfdd0;
        case 0x1cfdd4u: goto label_1cfdd4;
        case 0x1cfdd8u: goto label_1cfdd8;
        case 0x1cfddcu: goto label_1cfddc;
        case 0x1cfde0u: goto label_1cfde0;
        case 0x1cfde4u: goto label_1cfde4;
        case 0x1cfde8u: goto label_1cfde8;
        case 0x1cfdecu: goto label_1cfdec;
        case 0x1cfdf0u: goto label_1cfdf0;
        case 0x1cfdf4u: goto label_1cfdf4;
        case 0x1cfdf8u: goto label_1cfdf8;
        case 0x1cfdfcu: goto label_1cfdfc;
        case 0x1cfe00u: goto label_1cfe00;
        case 0x1cfe04u: goto label_1cfe04;
        case 0x1cfe08u: goto label_1cfe08;
        case 0x1cfe0cu: goto label_1cfe0c;
        case 0x1cfe10u: goto label_1cfe10;
        case 0x1cfe14u: goto label_1cfe14;
        case 0x1cfe18u: goto label_1cfe18;
        case 0x1cfe1cu: goto label_1cfe1c;
        case 0x1cfe20u: goto label_1cfe20;
        case 0x1cfe24u: goto label_1cfe24;
        case 0x1cfe28u: goto label_1cfe28;
        case 0x1cfe2cu: goto label_1cfe2c;
        case 0x1cfe30u: goto label_1cfe30;
        case 0x1cfe34u: goto label_1cfe34;
        case 0x1cfe38u: goto label_1cfe38;
        case 0x1cfe3cu: goto label_1cfe3c;
        case 0x1cfe40u: goto label_1cfe40;
        case 0x1cfe44u: goto label_1cfe44;
        case 0x1cfe48u: goto label_1cfe48;
        case 0x1cfe4cu: goto label_1cfe4c;
        case 0x1cfe50u: goto label_1cfe50;
        case 0x1cfe54u: goto label_1cfe54;
        case 0x1cfe58u: goto label_1cfe58;
        case 0x1cfe5cu: goto label_1cfe5c;
        case 0x1cfe60u: goto label_1cfe60;
        case 0x1cfe64u: goto label_1cfe64;
        case 0x1cfe68u: goto label_1cfe68;
        case 0x1cfe6cu: goto label_1cfe6c;
        case 0x1cfe70u: goto label_1cfe70;
        case 0x1cfe74u: goto label_1cfe74;
        case 0x1cfe78u: goto label_1cfe78;
        case 0x1cfe7cu: goto label_1cfe7c;
        case 0x1cfe80u: goto label_1cfe80;
        case 0x1cfe84u: goto label_1cfe84;
        case 0x1cfe88u: goto label_1cfe88;
        case 0x1cfe8cu: goto label_1cfe8c;
        case 0x1cfe90u: goto label_1cfe90;
        case 0x1cfe94u: goto label_1cfe94;
        case 0x1cfe98u: goto label_1cfe98;
        case 0x1cfe9cu: goto label_1cfe9c;
        case 0x1cfea0u: goto label_1cfea0;
        case 0x1cfea4u: goto label_1cfea4;
        case 0x1cfea8u: goto label_1cfea8;
        case 0x1cfeacu: goto label_1cfeac;
        case 0x1cfeb0u: goto label_1cfeb0;
        case 0x1cfeb4u: goto label_1cfeb4;
        case 0x1cfeb8u: goto label_1cfeb8;
        case 0x1cfebcu: goto label_1cfebc;
        case 0x1cfec0u: goto label_1cfec0;
        case 0x1cfec4u: goto label_1cfec4;
        case 0x1cfec8u: goto label_1cfec8;
        case 0x1cfeccu: goto label_1cfecc;
        case 0x1cfed0u: goto label_1cfed0;
        case 0x1cfed4u: goto label_1cfed4;
        case 0x1cfed8u: goto label_1cfed8;
        case 0x1cfedcu: goto label_1cfedc;
        case 0x1cfee0u: goto label_1cfee0;
        case 0x1cfee4u: goto label_1cfee4;
        case 0x1cfee8u: goto label_1cfee8;
        case 0x1cfeecu: goto label_1cfeec;
        case 0x1cfef0u: goto label_1cfef0;
        case 0x1cfef4u: goto label_1cfef4;
        case 0x1cfef8u: goto label_1cfef8;
        case 0x1cfefcu: goto label_1cfefc;
        case 0x1cff00u: goto label_1cff00;
        case 0x1cff04u: goto label_1cff04;
        case 0x1cff08u: goto label_1cff08;
        case 0x1cff0cu: goto label_1cff0c;
        case 0x1cff10u: goto label_1cff10;
        case 0x1cff14u: goto label_1cff14;
        case 0x1cff18u: goto label_1cff18;
        case 0x1cff1cu: goto label_1cff1c;
        case 0x1cff20u: goto label_1cff20;
        case 0x1cff24u: goto label_1cff24;
        case 0x1cff28u: goto label_1cff28;
        case 0x1cff2cu: goto label_1cff2c;
        case 0x1cff30u: goto label_1cff30;
        case 0x1cff34u: goto label_1cff34;
        case 0x1cff38u: goto label_1cff38;
        case 0x1cff3cu: goto label_1cff3c;
        case 0x1cff40u: goto label_1cff40;
        case 0x1cff44u: goto label_1cff44;
        case 0x1cff48u: goto label_1cff48;
        case 0x1cff4cu: goto label_1cff4c;
        case 0x1cff50u: goto label_1cff50;
        case 0x1cff54u: goto label_1cff54;
        case 0x1cff58u: goto label_1cff58;
        case 0x1cff5cu: goto label_1cff5c;
        case 0x1cff60u: goto label_1cff60;
        case 0x1cff64u: goto label_1cff64;
        case 0x1cff68u: goto label_1cff68;
        case 0x1cff6cu: goto label_1cff6c;
        case 0x1cff70u: goto label_1cff70;
        case 0x1cff74u: goto label_1cff74;
        case 0x1cff78u: goto label_1cff78;
        case 0x1cff7cu: goto label_1cff7c;
        case 0x1cff80u: goto label_1cff80;
        case 0x1cff84u: goto label_1cff84;
        case 0x1cff88u: goto label_1cff88;
        case 0x1cff8cu: goto label_1cff8c;
        case 0x1cff90u: goto label_1cff90;
        case 0x1cff94u: goto label_1cff94;
        case 0x1cff98u: goto label_1cff98;
        case 0x1cff9cu: goto label_1cff9c;
        case 0x1cffa0u: goto label_1cffa0;
        case 0x1cffa4u: goto label_1cffa4;
        case 0x1cffa8u: goto label_1cffa8;
        case 0x1cffacu: goto label_1cffac;
        default: break;
    }

    ctx->pc = 0x1ce8d0u;

label_1ce8d0:
    // 0x1ce8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ce8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ce8d4:
    // 0x1ce8d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1ce8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1ce8d8:
    // 0x1ce8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ce8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ce8dc:
    // 0x1ce8dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ce8e0:
    // 0x1ce8e0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1ce8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_1ce8e4:
    // 0x1ce8e4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1ce8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1ce8e8:
    // 0x1ce8e8: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x1ce8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1ce8ec:
    // 0x1ce8ec: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1ce8ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1ce8f0:
    // 0x1ce8f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ce8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ce8f4:
    // 0x1ce8f4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1ce8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1ce8f8:
    // 0x1ce8f8: 0x30640200  andi        $a0, $v1, 0x200
    ctx->pc = 0x1ce8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1ce8fc:
    // 0x1ce8fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1ce900:
    if (ctx->pc == 0x1CE900u) {
        ctx->pc = 0x1CE904u;
        goto label_1ce904;
    }
    ctx->pc = 0x1CE8FCu;
    {
        const bool branch_taken_0x1ce8fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce8fc) {
            ctx->pc = 0x1CE910u;
            goto label_1ce910;
        }
    }
    ctx->pc = 0x1CE904u;
label_1ce904:
    // 0x1ce904: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ce904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ce908:
    // 0x1ce908: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ce908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce90c:
    // 0x1ce90c: 0xa08313a7  sb          $v1, 0x13A7($a0)
    ctx->pc = 0x1ce90cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5031), (uint8_t)GPR_U32(ctx, 3));
label_1ce910:
    // 0x1ce910: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ce910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ce914:
    // 0x1ce914: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1ce914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1ce918:
    // 0x1ce918: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x1ce918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_1ce91c:
    // 0x1ce91c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ce91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ce920:
    // 0x1ce920: 0xac251a64  sw          $a1, 0x1A64($at)
    ctx->pc = 0x1ce920u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 5));
label_1ce924:
    // 0x1ce924: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1ce924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce928:
    // 0x1ce928: 0x8cc713e8  lw          $a3, 0x13E8($a2)
    ctx->pc = 0x1ce928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5096)));
label_1ce92c:
    // 0x1ce92c: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_1ce930:
    if (ctx->pc == 0x1CE930u) {
        ctx->pc = 0x1CE934u;
        goto label_1ce934;
    }
    ctx->pc = 0x1CE92Cu;
    {
        const bool branch_taken_0x1ce92c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce92c) {
            ctx->pc = 0x1CE954u;
            goto label_1ce954;
        }
    }
    ctx->pc = 0x1CE934u;
label_1ce934:
    // 0x1ce934: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ce934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ce938:
    // 0x1ce938: 0x8c281a98  lw          $t0, 0x1A98($at)
    ctx->pc = 0x1ce938u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1ce93c:
    // 0x1ce93c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1ce93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_1ce940:
    // 0x1ce940: 0x1032825  or          $a1, $t0, $v1
    ctx->pc = 0x1ce940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_1ce944:
    // 0x1ce944: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ce944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ce948:
    // 0x1ce948: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1ce948u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 5));
label_1ce94c:
    // 0x1ce94c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ce94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce950:
    // 0x1ce950: 0xa0601921  sb          $zero, 0x1921($v1)
    ctx->pc = 0x1ce950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6433), (uint8_t)GPR_U32(ctx, 0));
label_1ce954:
    // 0x1ce954: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ce954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce958:
    // 0x1ce958: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1ce958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1ce95c:
    // 0x1ce95c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1ce95cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1ce960:
    // 0x1ce960: 0x2ca10012  sltiu       $at, $a1, 0x12
    ctx->pc = 0x1ce960u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_1ce964:
    // 0x1ce964: 0x1020058c  beqz        $at, . + 4 + (0x58C << 2)
label_1ce968:
    if (ctx->pc == 0x1CE968u) {
        ctx->pc = 0x1CE96Cu;
        goto label_1ce96c;
    }
    ctx->pc = 0x1CE964u;
    {
        const bool branch_taken_0x1ce964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce964) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CE96Cu;
label_1ce96c:
    // 0x1ce96c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1ce96cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
label_1ce970:
    // 0x1ce970: 0x2607f530  addiu       $a3, $s0, -0xAD0
    ctx->pc = 0x1ce970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964528));
label_1ce974:
    // 0x1ce974: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x1ce974u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ce978:
    // 0x1ce978: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x1ce978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1ce97c:
    // 0x1ce97c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ce97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ce980:
    // 0x1ce980: 0x600008  jr          $v1
label_1ce984:
    if (ctx->pc == 0x1CE984u) {
        ctx->pc = 0x1CE988u;
        goto label_1ce988;
    }
    ctx->pc = 0x1CE980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE980u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CE988u;
label_1ce988:
    // 0x1ce988: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1ce988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce98c:
    // 0x1ce98c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1ce98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1ce990:
    // 0x1ce990: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1ce990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_1ce994:
    // 0x1ce994: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x1ce994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1ce998:
    // 0x1ce998: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x1ce998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1ce99c:
    // 0x1ce99c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1ce99cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_1ce9a0:
    // 0x1ce9a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ce9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce9a4:
    // 0x1ce9a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ce9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce9a8:
    // 0x1ce9a8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ce9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1ce9ac:
    // 0x1ce9ac: 0x24061e32  addiu       $a2, $zero, 0x1E32
    ctx->pc = 0x1ce9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7730));
label_1ce9b0:
    // 0x1ce9b0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1ce9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ce9b4:
    // 0x1ce9b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ce9b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ce9b8:
    // 0x1ce9b8: 0xc0965d0  jal         func_259740
label_1ce9bc:
    if (ctx->pc == 0x1CE9BCu) {
        ctx->pc = 0x1CE9C0u;
        goto label_1ce9c0;
    }
    ctx->pc = 0x1CE9B8u;
    SET_GPR_U32(ctx, 31, 0x1CE9C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CE9B8u, 0x1CE9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9C0u;
label_1ce9c0:
    // 0x1ce9c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ce9c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ce9c4:
    // 0x1ce9c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ce9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce9c8:
    // 0x1ce9c8: 0xa0601576  sb          $zero, 0x1576($v1)
    ctx->pc = 0x1ce9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5494), (uint8_t)GPR_U32(ctx, 0));
label_1ce9cc:
    // 0x1ce9cc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1ce9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ce9d0:
    // 0x1ce9d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ce9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce9d4:
    // 0x1ce9d4: 0xa0831577  sb          $v1, 0x1577($a0)
    ctx->pc = 0x1ce9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5495), (uint8_t)GPR_U32(ctx, 3));
label_1ce9d8:
    // 0x1ce9d8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ce9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ce9dc:
    // 0x1ce9dc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1ce9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce9e0:
    // 0x1ce9e0: 0xa4c51278  sh          $a1, 0x1278($a2)
    ctx->pc = 0x1ce9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4728), (uint16_t)GPR_U32(ctx, 5));
label_1ce9e4:
    // 0x1ce9e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ce9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce9e8:
    // 0x1ce9e8: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1ce9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
label_1ce9ec:
    // 0x1ce9ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ce9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce9f0:
    // 0x1ce9f0: 0xac601b6c  sw          $zero, 0x1B6C($v1)
    ctx->pc = 0x1ce9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 0));
label_1ce9f4:
    // 0x1ce9f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ce9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce9f8:
    // 0x1ce9f8: 0x906313a5  lbu         $v1, 0x13A5($v1)
    ctx->pc = 0x1ce9f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5029)));
label_1ce9fc:
    // 0x1ce9fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ce9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1cea00:
    // 0x1cea00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cea00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cea04:
    // 0x1cea04: 0xc0c50a4  jal         func_314290
label_1cea08:
    if (ctx->pc == 0x1CEA08u) {
        ctx->pc = 0x1CEA0Cu;
        goto label_1cea0c;
    }
    ctx->pc = 0x1CEA04u;
    SET_GPR_U32(ctx, 31, 0x1CEA0Cu);
    ctx->pc = 0x314290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314290u, 0x1CEA04u, 0x1CEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA0Cu;
label_1cea0c:
    // 0x1cea0c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cea0cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cea10:
    // 0x1cea10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cea14:
    // 0x1cea14: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x1cea14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1cea18:
    // 0x1cea18: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1cea18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cea1c:
    // 0x1cea1c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cea1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1cea20:
    // 0x1cea20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cea24:
    // 0x1cea24: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1cea24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_1cea28:
    // 0x1cea28: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_1cea2c:
    if (ctx->pc == 0x1CEA2Cu) {
        ctx->pc = 0x1CEA30u;
        goto label_1cea30;
    }
    ctx->pc = 0x1CEA28u;
    {
        const bool branch_taken_0x1cea28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cea28) {
            ctx->pc = 0x1CEAA0u;
            goto label_1ceaa0;
        }
    }
    ctx->pc = 0x1CEA30u;
label_1cea30:
    // 0x1cea30: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cea30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cea34:
    // 0x1cea34: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x1cea34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_1cea38:
    // 0x1cea38: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1cea38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1cea3c:
    // 0x1cea3c: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x1cea3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1cea40:
    // 0x1cea40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cea44:
    // 0x1cea44: 0x8c6513e8  lw          $a1, 0x13E8($v1)
    ctx->pc = 0x1cea44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1cea48:
    // 0x1cea48: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_1cea4c:
    if (ctx->pc == 0x1CEA4Cu) {
        ctx->pc = 0x1CEA50u;
        goto label_1cea50;
    }
    ctx->pc = 0x1CEA48u;
    {
        const bool branch_taken_0x1cea48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cea48) {
            ctx->pc = 0x1CEAA0u;
            goto label_1ceaa0;
        }
    }
    ctx->pc = 0x1CEA50u;
label_1cea50:
    // 0x1cea50: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cea50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cea54:
    // 0x1cea54: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1cea54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cea58:
    // 0x1cea58: 0x8ce813e8  lw          $t0, 0x13E8($a3)
    ctx->pc = 0x1cea58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 5096)));
label_1cea5c:
    // 0x1cea5c: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x1cea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_1cea60:
    // 0x1cea60: 0x25050120  addiu       $a1, $t0, 0x120
    ctx->pc = 0x1cea60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
label_1cea64:
    // 0x1cea64: 0xc05ccfc  jal         func_1733F0
label_1cea68:
    if (ctx->pc == 0x1CEA68u) {
        ctx->pc = 0x1CEA6Cu;
        goto label_1cea6c;
    }
    ctx->pc = 0x1CEA64u;
    SET_GPR_U32(ctx, 31, 0x1CEA6Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CEA64u, 0x1CEA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA6Cu;
label_1cea6c:
    // 0x1cea6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cea70:
    // 0x1cea70: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1cea70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1cea74:
    // 0x1cea74: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cea74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cea78:
    // 0x1cea78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cea7c:
    // 0x1cea7c: 0x3c043e49  lui         $a0, 0x3E49
    ctx->pc = 0x1cea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15945 << 16));
label_1cea80:
    // 0x1cea80: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x1cea80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1cea84:
    // 0x1cea84: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1cea84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1cea88:
    // 0x1cea88: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1cea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cea8c:
    // 0x1cea8c: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1cea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cea90:
    // 0x1cea90: 0xc058f50  jal         func_163D40
label_1cea94:
    if (ctx->pc == 0x1CEA94u) {
        ctx->pc = 0x1CEA98u;
        goto label_1cea98;
    }
    ctx->pc = 0x1CEA90u;
    SET_GPR_U32(ctx, 31, 0x1CEA98u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CEA90u, 0x1CEA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA98u;
label_1cea98:
    // 0x1cea98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cea9c:
    // 0x1cea9c: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_1ceaa0:
    // 0x1ceaa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceaa4:
    // 0x1ceaa4: 0x907009db  lbu         $s0, 0x9DB($v1)
    ctx->pc = 0x1ceaa4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1ceaa8:
    // 0x1ceaa8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1ceaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1ceaac:
    // 0x1ceaac: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1ceaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1ceab0:
    // 0x1ceab0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ceab4:
    if (ctx->pc == 0x1CEAB4u) {
        ctx->pc = 0x1CEAB8u;
        goto label_1ceab8;
    }
    ctx->pc = 0x1CEAB0u;
    {
        const bool branch_taken_0x1ceab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceab0) {
            ctx->pc = 0x1CEAC4u;
            goto label_1ceac4;
        }
    }
    ctx->pc = 0x1CEAB8u;
label_1ceab8:
    // 0x1ceab8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ceab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ceabc:
    // 0x1ceabc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceac0:
    // 0x1ceac0: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1ceac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
label_1ceac4:
    // 0x1ceac4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1ceac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceac8:
    // 0x1ceac8: 0x90a609da  lbu         $a2, 0x9DA($a1)
    ctx->pc = 0x1ceac8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2522)));
label_1ceacc:
    // 0x1ceacc: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x1ceaccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1cead0:
    // 0x1cead0: 0x30a3003f  andi        $v1, $a1, 0x3F
    ctx->pc = 0x1cead0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_1cead4:
    // 0x1cead4: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1cead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1cead8:
    // 0x1cead8: 0x14640015  bne         $v1, $a0, . + 4 + (0x15 << 2)
label_1ceadc:
    if (ctx->pc == 0x1CEADCu) {
        ctx->pc = 0x1CEAE0u;
        goto label_1ceae0;
    }
    ctx->pc = 0x1CEAD8u;
    {
        const bool branch_taken_0x1cead8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cead8) {
            ctx->pc = 0x1CEB30u;
            goto label_1ceb30;
        }
    }
    ctx->pc = 0x1CEAE0u;
label_1ceae0:
    // 0x1ceae0: 0xc067694  jal         func_19DA50
label_1ceae4:
    if (ctx->pc == 0x1CEAE4u) {
        ctx->pc = 0x1CEAE8u;
        goto label_1ceae8;
    }
    ctx->pc = 0x1CEAE0u;
    SET_GPR_U32(ctx, 31, 0x1CEAE8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CEAE0u, 0x1CEAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEAE8u;
label_1ceae8:
    // 0x1ceae8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ceae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ceaec:
    // 0x1ceaec: 0x30650003  andi        $a1, $v1, 0x3
    ctx->pc = 0x1ceaecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1ceaf0:
    // 0x1ceaf0: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x1ceaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1ceaf4:
    // 0x1ceaf4: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1ceaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
label_1ceaf8:
    // 0x1ceaf8: 0x24e89228  addiu       $t0, $a3, -0x6DD8
    ctx->pc = 0x1ceaf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939176));
label_1ceafc:
    // 0x1ceafc: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1ceafcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1ceb00:
    // 0x1ceb00: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x1ceb00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_1ceb04:
    // 0x1ceb04: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1ceb04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1ceb08:
    // 0x1ceb08: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1ceb08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_1ceb0c:
    // 0x1ceb0c: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1ceb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_1ceb10:
    // 0x1ceb10: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1ceb10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ceb14:
    // 0x1ceb14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceb18:
    // 0x1ceb18: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x1ceb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1ceb1c:
    // 0x1ceb1c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ceb1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1ceb20:
    // 0x1ceb20: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1ceb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1ceb24:
    // 0x1ceb24: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ceb24u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ceb28:
    // 0x1ceb28: 0xc067b18  jal         func_19EC60
label_1ceb2c:
    if (ctx->pc == 0x1CEB2Cu) {
        ctx->pc = 0x1CEB30u;
        goto label_1ceb30;
    }
    ctx->pc = 0x1CEB28u;
    SET_GPR_U32(ctx, 31, 0x1CEB30u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CEB28u, 0x1CEB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB30u;
label_1ceb30:
    // 0x1ceb30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ceb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceb34:
    // 0x1ceb34: 0x8c441b60  lw          $a0, 0x1B60($v0)
    ctx->pc = 0x1ceb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_1ceb38:
    // 0x1ceb38: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1ceb3c:
    if (ctx->pc == 0x1CEB3Cu) {
        ctx->pc = 0x1CEB40u;
        goto label_1ceb40;
    }
    ctx->pc = 0x1CEB38u;
    {
        const bool branch_taken_0x1ceb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceb38) {
            ctx->pc = 0x1CEB6Cu;
            goto label_1ceb6c;
        }
    }
    ctx->pc = 0x1CEB40u;
label_1ceb40:
    // 0x1ceb40: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ceb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceb44:
    // 0x1ceb44: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1ceb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ceb48:
    // 0x1ceb48: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1ceb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
label_1ceb4c:
    // 0x1ceb4c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ceb4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1ceb50:
    // 0x1ceb50: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1ceb50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_1ceb54:
    // 0x1ceb54: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1ceb54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceb58:
    // 0x1ceb58: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1ceb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ceb5c:
    // 0x1ceb5c: 0x3c04fdff  lui         $a0, 0xFDFF
    ctx->pc = 0x1ceb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65023 << 16));
label_1ceb60:
    // 0x1ceb60: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x1ceb60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1ceb64:
    // 0x1ceb64: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1ceb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1ceb68:
    // 0x1ceb68: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1ceb68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1ceb6c:
    // 0x1ceb6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceb70:
    // 0x1ceb70: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1ceb70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1ceb74:
    // 0x1ceb74: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1ceb74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1ceb78:
    // 0x1ceb78: 0x30c50080  andi        $a1, $a2, 0x80
    ctx->pc = 0x1ceb78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_1ceb7c:
    // 0x1ceb7c: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_1ceb80:
    if (ctx->pc == 0x1CEB80u) {
        ctx->pc = 0x1CEB84u;
        goto label_1ceb84;
    }
    ctx->pc = 0x1CEB7Cu;
    {
        const bool branch_taken_0x1ceb7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceb7c) {
            ctx->pc = 0x1CEC04u;
            goto label_1cec04;
        }
    }
    ctx->pc = 0x1CEB84u;
label_1ceb84:
    // 0x1ceb84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ceb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ceb88:
    // 0x1ceb88: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1ceb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1ceb8c:
    // 0x1ceb8c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ceb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1ceb90:
    // 0x1ceb90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ceb90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1ceb94:
    // 0x1ceb94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ceb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ceb98:
    // 0x1ceb98: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1ceb98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 4));
label_1ceb9c:
    // 0x1ceb9c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ceb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ceba0:
    // 0x1ceba0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ceba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceba4:
    // 0x1ceba4: 0xa083157d  sb          $v1, 0x157D($a0)
    ctx->pc = 0x1ceba4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5501), (uint8_t)GPR_U32(ctx, 3));
label_1ceba8:
    // 0x1ceba8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1ceba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cebac:
    // 0x1cebac: 0x8cc31b6c  lw          $v1, 0x1B6C($a2)
    ctx->pc = 0x1cebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7020)));
label_1cebb0:
    // 0x1cebb0: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_1cebb4:
    if (ctx->pc == 0x1CEBB4u) {
        ctx->pc = 0x1CEBB8u;
        goto label_1cebb8;
    }
    ctx->pc = 0x1CEBB0u;
    {
        const bool branch_taken_0x1cebb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cebb0) {
            ctx->pc = 0x1CEC04u;
            goto label_1cec04;
        }
    }
    ctx->pc = 0x1CEBB8u;
label_1cebb8:
    // 0x1cebb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cebbc:
    // 0x1cebbc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cebc0:
    // 0x1cebc0: 0xaca41b6c  sw          $a0, 0x1B6C($a1)
    ctx->pc = 0x1cebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7020), GPR_U32(ctx, 4));
label_1cebc4:
    // 0x1cebc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cebc8:
    // 0x1cebc8: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1cebc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1cebcc:
    // 0x1cebcc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1cebd0:
    if (ctx->pc == 0x1CEBD0u) {
        ctx->pc = 0x1CEBD4u;
        goto label_1cebd4;
    }
    ctx->pc = 0x1CEBCCu;
    {
        const bool branch_taken_0x1cebcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cebcc) {
            ctx->pc = 0x1CEC04u;
            goto label_1cec04;
        }
    }
    ctx->pc = 0x1CEBD4u;
label_1cebd4:
    // 0x1cebd4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cebd8:
    // 0x1cebd8: 0x84a415ec  lh          $a0, 0x15EC($a1)
    ctx->pc = 0x1cebd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
label_1cebdc:
    // 0x1cebdc: 0x2483ff6a  addiu       $v1, $a0, -0x96
    ctx->pc = 0x1cebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967146));
label_1cebe0:
    // 0x1cebe0: 0xa4a315ec  sh          $v1, 0x15EC($a1)
    ctx->pc = 0x1cebe0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 3));
label_1cebe4:
    // 0x1cebe4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cebe8:
    // 0x1cebe8: 0x848315ec  lh          $v1, 0x15EC($a0)
    ctx->pc = 0x1cebe8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
label_1cebec:
    // 0x1cebec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1cebecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1cebf0:
    // 0x1cebf0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1cebf0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1cebf4:
    // 0x1cebf4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1cebf8:
    if (ctx->pc == 0x1CEBF8u) {
        ctx->pc = 0x1CEBFCu;
        goto label_1cebfc;
    }
    ctx->pc = 0x1CEBF4u;
    {
        const bool branch_taken_0x1cebf4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1cebf4) {
            ctx->pc = 0x1CEC04u;
            goto label_1cec04;
        }
    }
    ctx->pc = 0x1CEBFCu;
label_1cebfc:
    // 0x1cebfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cec00:
    // 0x1cec00: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x1cec00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1cec04:
    // 0x1cec04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cec04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cec08:
    // 0x1cec08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cec08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cec0c:
    // 0x1cec0c: 0xc096b40  jal         func_25AD00
label_1cec10:
    if (ctx->pc == 0x1CEC10u) {
        ctx->pc = 0x1CEC14u;
        goto label_1cec14;
    }
    ctx->pc = 0x1CEC0Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC14u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CEC0Cu, 0x1CEC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC14u;
label_1cec14:
    // 0x1cec14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cec14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cec18:
    // 0x1cec18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cec1c:
    // 0x1cec1c: 0xc05cd10  jal         func_173440
label_1cec20:
    if (ctx->pc == 0x1CEC20u) {
        ctx->pc = 0x1CEC24u;
        goto label_1cec24;
    }
    ctx->pc = 0x1CEC1Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC24u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CEC1Cu, 0x1CEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC24u;
label_1cec24:
    // 0x1cec24: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cec24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cec28:
    // 0x1cec28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cec28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cec2c:
    // 0x1cec2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cec30:
    // 0x1cec30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cec30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cec34:
    // 0x1cec34: 0xc0573d8  jal         func_15CF60
label_1cec38:
    if (ctx->pc == 0x1CEC38u) {
        ctx->pc = 0x1CEC3Cu;
        goto label_1cec3c;
    }
    ctx->pc = 0x1CEC34u;
    SET_GPR_U32(ctx, 31, 0x1CEC3Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CEC34u, 0x1CEC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC3Cu;
label_1cec3c:
    // 0x1cec3c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cec3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cec40:
    // 0x1cec40: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cec40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cec44:
    // 0x1cec44: 0xc097530  jal         func_25D4C0
label_1cec48:
    if (ctx->pc == 0x1CEC48u) {
        ctx->pc = 0x1CEC4Cu;
        goto label_1cec4c;
    }
    ctx->pc = 0x1CEC44u;
    SET_GPR_U32(ctx, 31, 0x1CEC4Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CEC44u, 0x1CEC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC4Cu;
label_1cec4c:
    // 0x1cec4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cec4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cec50:
    // 0x1cec50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cec54:
    // 0x1cec54: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1cec54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1cec58:
    // 0x1cec58: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_1cec5c:
    if (ctx->pc == 0x1CEC5Cu) {
        ctx->pc = 0x1CEC60u;
        goto label_1cec60;
    }
    ctx->pc = 0x1CEC58u;
    {
        const bool branch_taken_0x1cec58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec58) {
            ctx->pc = 0x1CECA4u;
            goto label_1ceca4;
        }
    }
    ctx->pc = 0x1CEC60u;
label_1cec60:
    // 0x1cec60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cec64:
    // 0x1cec64: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cec64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cec68:
    // 0x1cec68: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1cec6c:
    // 0x1cec6c: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1cec6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1cec70:
    // 0x1cec70: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1cec74:
    if (ctx->pc == 0x1CEC74u) {
        ctx->pc = 0x1CEC78u;
        goto label_1cec78;
    }
    ctx->pc = 0x1CEC70u;
    {
        const bool branch_taken_0x1cec70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec70) {
            ctx->pc = 0x1CEC90u;
            goto label_1cec90;
        }
    }
    ctx->pc = 0x1CEC78u;
label_1cec78:
    // 0x1cec78: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cec78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cec7c:
    // 0x1cec7c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1cec7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1cec80:
    // 0x1cec80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cec80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1cec84:
    // 0x1cec84: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cec84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1cec88:
    // 0x1cec88: 0x100004c3  b           . + 4 + (0x4C3 << 2)
label_1cec8c:
    if (ctx->pc == 0x1CEC8Cu) {
        ctx->pc = 0x1CEC90u;
        goto label_1cec90;
    }
    ctx->pc = 0x1CEC88u;
    {
        const bool branch_taken_0x1cec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec88) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CEC90u;
label_1cec90:
    // 0x1cec90: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1cec90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cec94:
    // 0x1cec94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cec98:
    // 0x1cec98: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cec98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1cec9c:
    // 0x1cec9c: 0x100004be  b           . + 4 + (0x4BE << 2)
label_1ceca0:
    if (ctx->pc == 0x1CECA0u) {
        ctx->pc = 0x1CECA4u;
        goto label_1ceca4;
    }
    ctx->pc = 0x1CEC9Cu;
    {
        const bool branch_taken_0x1cec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec9c) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CECA4u;
label_1ceca4:
    // 0x1ceca4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceca8:
    // 0x1ceca8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ceca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cecac:
    // 0x1cecac: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1cecacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1cecb0:
    // 0x1cecb0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cecb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1cecb4:
    // 0x1cecb4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1cecb8:
    if (ctx->pc == 0x1CECB8u) {
        ctx->pc = 0x1CECBCu;
        goto label_1cecbc;
    }
    ctx->pc = 0x1CECB4u;
    {
        const bool branch_taken_0x1cecb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cecb4) {
            ctx->pc = 0x1CECD0u;
            goto label_1cecd0;
        }
    }
    ctx->pc = 0x1CECBCu;
label_1cecbc:
    // 0x1cecbc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1cecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1cecc0:
    // 0x1cecc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cecc4:
    // 0x1cecc4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cecc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1cecc8:
    // 0x1cecc8: 0x100004b3  b           . + 4 + (0x4B3 << 2)
label_1ceccc:
    if (ctx->pc == 0x1CECCCu) {
        ctx->pc = 0x1CECD0u;
        goto label_1cecd0;
    }
    ctx->pc = 0x1CECC8u;
    {
        const bool branch_taken_0x1cecc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cecc8) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CECD0u;
label_1cecd0:
    // 0x1cecd0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cecd4:
    // 0x1cecd4: 0x94830a00  lhu         $v1, 0xA00($a0)
    ctx->pc = 0x1cecd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2560)));
label_1cecd8:
    // 0x1cecd8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1cecd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1cecdc:
    // 0x1cecdc: 0x2883000f  slti        $v1, $a0, 0xF
    ctx->pc = 0x1cecdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
label_1cece0:
    // 0x1cece0: 0x146004ad  bnez        $v1, . + 4 + (0x4AD << 2)
label_1cece4:
    if (ctx->pc == 0x1CECE4u) {
        ctx->pc = 0x1CECE8u;
        goto label_1cece8;
    }
    ctx->pc = 0x1CECE0u;
    {
        const bool branch_taken_0x1cece0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cece0) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CECE8u;
label_1cece8:
    // 0x1cece8: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x1cece8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1cecec:
    // 0x1cecec: 0x30a60040  andi        $a2, $a1, 0x40
    ctx->pc = 0x1cececu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_1cecf0:
    // 0x1cecf0: 0x10c004a9  beqz        $a2, . + 4 + (0x4A9 << 2)
label_1cecf4:
    if (ctx->pc == 0x1CECF4u) {
        ctx->pc = 0x1CECF8u;
        goto label_1cecf8;
    }
    ctx->pc = 0x1CECF0u;
    {
        const bool branch_taken_0x1cecf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cecf0) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CECF8u;
label_1cecf8:
    // 0x1cecf8: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1cecf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cecfc:
    // 0x1cecfc: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x1cecfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1ced00:
    // 0x1ced00: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x1ced00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
label_1ced04:
    // 0x1ced04: 0x1101825  or          $v1, $t0, $s0
    ctx->pc = 0x1ced04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
label_1ced08:
    // 0x1ced08: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1ced08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_1ced0c:
    // 0x1ced0c: 0x100004a2  b           . + 4 + (0x4A2 << 2)
label_1ced10:
    if (ctx->pc == 0x1CED10u) {
        ctx->pc = 0x1CED14u;
        goto label_1ced14;
    }
    ctx->pc = 0x1CED0Cu;
    {
        const bool branch_taken_0x1ced0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ced0c) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CED14u;
label_1ced14:
    // 0x1ced14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ced14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ced18:
    // 0x1ced18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ced18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ced1c:
    // 0x1ced1c: 0x3c05dfff  lui         $a1, 0xDFFF
    ctx->pc = 0x1ced1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57343 << 16));
label_1ced20:
    // 0x1ced20: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x1ced20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_1ced24:
    // 0x1ced24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ced24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1ced28:
    // 0x1ced28: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ced28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1ced2c:
    // 0x1ced2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ced2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ced30:
    // 0x1ced30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ced30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ced34:
    // 0x1ced34: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ced34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1ced38:
    // 0x1ced38: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1ced38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1ced3c:
    // 0x1ced3c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1ced3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ced40:
    // 0x1ced40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ced40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ced44:
    // 0x1ced44: 0xc0965d0  jal         func_259740
label_1ced48:
    if (ctx->pc == 0x1CED48u) {
        ctx->pc = 0x1CED4Cu;
        goto label_1ced4c;
    }
    ctx->pc = 0x1CED44u;
    SET_GPR_U32(ctx, 31, 0x1CED4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CED44u, 0x1CED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED4Cu;
label_1ced4c:
    // 0x1ced4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ced4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ced50:
    // 0x1ced50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ced50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ced54:
    // 0x1ced54: 0xa4651278  sh          $a1, 0x1278($v1)
    ctx->pc = 0x1ced54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 5));
label_1ced58:
    // 0x1ced58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ced58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ced5c:
    // 0x1ced5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ced5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ced60:
    // 0x1ced60: 0xa0641576  sb          $a0, 0x1576($v1)
    ctx->pc = 0x1ced60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5494), (uint8_t)GPR_U32(ctx, 4));
label_1ced64:
    // 0x1ced64: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1ced64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ced68:
    // 0x1ced68: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ced68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ced6c:
    // 0x1ced6c: 0xa0851577  sb          $a1, 0x1577($a0)
    ctx->pc = 0x1ced6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5495), (uint8_t)GPR_U32(ctx, 5));
label_1ced70:
    // 0x1ced70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ced70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ced74:
    // 0x1ced74: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1ced74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1ced78:
    // 0x1ced78: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1ced78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ced7c:
    // 0x1ced7c: 0xaca01b6c  sw          $zero, 0x1B6C($a1)
    ctx->pc = 0x1ced7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7020), GPR_U32(ctx, 0));
label_1ced80:
    // 0x1ced80: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ced80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ced84:
    // 0x1ced84: 0x908313a5  lbu         $v1, 0x13A5($a0)
    ctx->pc = 0x1ced84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5029)));
label_1ced88:
    // 0x1ced88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ced88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1ced8c:
    // 0x1ced8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ced8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ced90:
    // 0x1ced90: 0xc0c50a4  jal         func_314290
label_1ced94:
    if (ctx->pc == 0x1CED94u) {
        ctx->pc = 0x1CED98u;
        goto label_1ced98;
    }
    ctx->pc = 0x1CED90u;
    SET_GPR_U32(ctx, 31, 0x1CED98u);
    ctx->pc = 0x314290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314290u, 0x1CED90u, 0x1CED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED98u;
label_1ced98:
    // 0x1ced98: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1ced98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ced9c:
    // 0x1ced9c: 0x90c70002  lbu         $a3, 0x2($a2)
    ctx->pc = 0x1ced9cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_1ceda0:
    // 0x1ceda0: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x1ceda0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1ceda4:
    // 0x1ceda4: 0xa0c80002  sb          $t0, 0x2($a2)
    ctx->pc = 0x1ceda4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
label_1ceda8:
    // 0x1ceda8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ceda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cedac:
    // 0x1cedac: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1cedacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cedb0:
    // 0x1cedb0: 0x3c048040  lui         $a0, 0x8040
    ctx->pc = 0x1cedb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32832 << 16));
label_1cedb4:
    // 0x1cedb4: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x1cedb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1cedb8:
    // 0x1cedb8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1cedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1cedbc:
    // 0x1cedbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cedbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cedc0:
    // 0x1cedc0: 0x84821278  lh          $v0, 0x1278($a0)
    ctx->pc = 0x1cedc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_1cedc4:
    // 0x1cedc4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1cedc8:
    if (ctx->pc == 0x1CEDC8u) {
        ctx->pc = 0x1CEDCCu;
        goto label_1cedcc;
    }
    ctx->pc = 0x1CEDC4u;
    {
        const bool branch_taken_0x1cedc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cedc4) {
            ctx->pc = 0x1CEE3Cu;
            goto label_1cee3c;
        }
    }
    ctx->pc = 0x1CEDCCu;
label_1cedcc:
    // 0x1cedcc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cedccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cedd0:
    // 0x1cedd0: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x1cedd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_1cedd4:
    // 0x1cedd4: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1cedd8:
    // 0x1cedd8: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x1cedd8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1ceddc:
    // 0x1ceddc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cede0:
    // 0x1cede0: 0x8c6413e8  lw          $a0, 0x13E8($v1)
    ctx->pc = 0x1cede0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1cede4:
    // 0x1cede4: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_1cede8:
    if (ctx->pc == 0x1CEDE8u) {
        ctx->pc = 0x1CEDECu;
        goto label_1cedec;
    }
    ctx->pc = 0x1CEDE4u;
    {
        const bool branch_taken_0x1cede4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cede4) {
            ctx->pc = 0x1CEE3Cu;
            goto label_1cee3c;
        }
    }
    ctx->pc = 0x1CEDECu;
label_1cedec:
    // 0x1cedec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cedecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cedf0:
    // 0x1cedf0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cedf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cedf4:
    // 0x1cedf4: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1cedf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
label_1cedf8:
    // 0x1cedf8: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1cedf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1cedfc:
    // 0x1cedfc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1cedfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1cee00:
    // 0x1cee00: 0xc05ccfc  jal         func_1733F0
label_1cee04:
    if (ctx->pc == 0x1CEE04u) {
        ctx->pc = 0x1CEE08u;
        goto label_1cee08;
    }
    ctx->pc = 0x1CEE00u;
    SET_GPR_U32(ctx, 31, 0x1CEE08u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CEE00u, 0x1CEE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE08u;
label_1cee08:
    // 0x1cee08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cee0c:
    // 0x1cee0c: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1cee0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1cee10:
    // 0x1cee10: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cee10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cee14:
    // 0x1cee14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cee14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cee18:
    // 0x1cee18: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x1cee18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
label_1cee1c:
    // 0x1cee1c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1cee1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1cee20:
    // 0x1cee20: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1cee20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1cee24:
    // 0x1cee24: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1cee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cee28:
    // 0x1cee28: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1cee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cee2c:
    // 0x1cee2c: 0xc058f50  jal         func_163D40
label_1cee30:
    if (ctx->pc == 0x1CEE30u) {
        ctx->pc = 0x1CEE34u;
        goto label_1cee34;
    }
    ctx->pc = 0x1CEE2Cu;
    SET_GPR_U32(ctx, 31, 0x1CEE34u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CEE2Cu, 0x1CEE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE34u;
label_1cee34:
    // 0x1cee34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cee34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cee38:
    // 0x1cee38: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cee38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_1cee3c:
    // 0x1cee3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cee40:
    // 0x1cee40: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x1cee40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1cee44:
    // 0x1cee44: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1cee44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1cee48:
    // 0x1cee48: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1cee48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1cee4c:
    // 0x1cee4c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_1cee50:
    if (ctx->pc == 0x1CEE50u) {
        ctx->pc = 0x1CEE54u;
        goto label_1cee54;
    }
    ctx->pc = 0x1CEE4Cu;
    {
        const bool branch_taken_0x1cee4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cee4c) {
            ctx->pc = 0x1CEED4u;
            goto label_1ceed4;
        }
    }
    ctx->pc = 0x1CEE54u;
label_1cee54:
    // 0x1cee54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cee54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cee58:
    // 0x1cee58: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1cee58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1cee5c:
    // 0x1cee5c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1cee60:
    // 0x1cee60: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cee60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1cee64:
    // 0x1cee64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cee64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cee68:
    // 0x1cee68: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1cee68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1cee6c:
    // 0x1cee6c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1cee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cee70:
    // 0x1cee70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cee70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cee74:
    // 0x1cee74: 0xa064157d  sb          $a0, 0x157D($v1)
    ctx->pc = 0x1cee74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5501), (uint8_t)GPR_U32(ctx, 4));
label_1cee78:
    // 0x1cee78: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cee78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cee7c:
    // 0x1cee7c: 0x8c831b6c  lw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1cee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
label_1cee80:
    // 0x1cee80: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_1cee84:
    if (ctx->pc == 0x1CEE84u) {
        ctx->pc = 0x1CEE88u;
        goto label_1cee88;
    }
    ctx->pc = 0x1CEE80u;
    {
        const bool branch_taken_0x1cee80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cee80) {
            ctx->pc = 0x1CEED4u;
            goto label_1ceed4;
        }
    }
    ctx->pc = 0x1CEE88u;
label_1cee88:
    // 0x1cee88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cee88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cee8c:
    // 0x1cee8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cee90:
    // 0x1cee90: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1cee90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
label_1cee94:
    // 0x1cee94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cee98:
    // 0x1cee98: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1cee98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1cee9c:
    // 0x1cee9c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1ceea0:
    if (ctx->pc == 0x1CEEA0u) {
        ctx->pc = 0x1CEEA4u;
        goto label_1ceea4;
    }
    ctx->pc = 0x1CEE9Cu;
    {
        const bool branch_taken_0x1cee9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cee9c) {
            ctx->pc = 0x1CEED4u;
            goto label_1ceed4;
        }
    }
    ctx->pc = 0x1CEEA4u;
label_1ceea4:
    // 0x1ceea4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ceea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceea8:
    // 0x1ceea8: 0x848315ec  lh          $v1, 0x15EC($a0)
    ctx->pc = 0x1ceea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
label_1ceeac:
    // 0x1ceeac: 0x2462ff6a  addiu       $v0, $v1, -0x96
    ctx->pc = 0x1ceeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967146));
label_1ceeb0:
    // 0x1ceeb0: 0xa48215ec  sh          $v0, 0x15EC($a0)
    ctx->pc = 0x1ceeb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 2));
label_1ceeb4:
    // 0x1ceeb4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ceeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceeb8:
    // 0x1ceeb8: 0x848315ec  lh          $v1, 0x15EC($a0)
    ctx->pc = 0x1ceeb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
label_1ceebc:
    // 0x1ceebc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ceebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1ceec0:
    // 0x1ceec0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ceec0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1ceec4:
    // 0x1ceec4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ceec8:
    if (ctx->pc == 0x1CEEC8u) {
        ctx->pc = 0x1CEECCu;
        goto label_1ceecc;
    }
    ctx->pc = 0x1CEEC4u;
    {
        const bool branch_taken_0x1ceec4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ceec4) {
            ctx->pc = 0x1CEED4u;
            goto label_1ceed4;
        }
    }
    ctx->pc = 0x1CEECCu;
label_1ceecc:
    // 0x1ceecc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ceeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceed0:
    // 0x1ceed0: 0xa48015ec  sh          $zero, 0x15EC($a0)
    ctx->pc = 0x1ceed0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1ceed4:
    // 0x1ceed4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceed8:
    // 0x1ceed8: 0x906409da  lbu         $a0, 0x9DA($v1)
    ctx->pc = 0x1ceed8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
label_1ceedc:
    // 0x1ceedc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ceedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1ceee0:
    // 0x1ceee0: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x1ceee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_1ceee4:
    // 0x1ceee4: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1ceee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1ceee8:
    // 0x1ceee8: 0x14a60016  bne         $a1, $a2, . + 4 + (0x16 << 2)
label_1ceeec:
    if (ctx->pc == 0x1CEEECu) {
        ctx->pc = 0x1CEEF0u;
        goto label_1ceef0;
    }
    ctx->pc = 0x1CEEE8u;
    {
        const bool branch_taken_0x1ceee8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1ceee8) {
            ctx->pc = 0x1CEF44u;
            goto label_1cef44;
        }
    }
    ctx->pc = 0x1CEEF0u;
label_1ceef0:
    // 0x1ceef0: 0xc067694  jal         func_19DA50
label_1ceef4:
    if (ctx->pc == 0x1CEEF4u) {
        ctx->pc = 0x1CEEF8u;
        goto label_1ceef8;
    }
    ctx->pc = 0x1CEEF0u;
    SET_GPR_U32(ctx, 31, 0x1CEEF8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CEEF0u, 0x1CEEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEEF8u;
label_1ceef8:
    // 0x1ceef8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1ceef8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ceefc:
    // 0x1ceefc: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x1ceefcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1cef00:
    // 0x1cef00: 0x31030003  andi        $v1, $t0, 0x3
    ctx->pc = 0x1cef00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_1cef04:
    // 0x1cef04: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1cef04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1cef08:
    // 0x1cef08: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1cef08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1cef0c:
    // 0x1cef0c: 0x24649228  addiu       $a0, $v1, -0x6DD8
    ctx->pc = 0x1cef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939176));
label_1cef10:
    // 0x1cef10: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1cef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1cef14:
    // 0x1cef14: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x1cef14u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cef18:
    // 0x1cef18: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x1cef18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1cef1c:
    // 0x1cef1c: 0x3c08469c  lui         $t0, 0x469C
    ctx->pc = 0x1cef1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)18076 << 16));
label_1cef20:
    // 0x1cef20: 0x35074000  ori         $a3, $t0, 0x4000
    ctx->pc = 0x1cef20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
label_1cef24:
    // 0x1cef24: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1cef24u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cef28:
    // 0x1cef28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cef2c:
    // 0x1cef2c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1cef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1cef30:
    // 0x1cef30: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1cef30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1cef34:
    // 0x1cef34: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1cef34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1cef38:
    // 0x1cef38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1cef38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cef3c:
    // 0x1cef3c: 0xc067b18  jal         func_19EC60
label_1cef40:
    if (ctx->pc == 0x1CEF40u) {
        ctx->pc = 0x1CEF44u;
        goto label_1cef44;
    }
    ctx->pc = 0x1CEF3Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF44u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CEF3Cu, 0x1CEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF44u;
label_1cef44:
    // 0x1cef44: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cef44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cef48:
    // 0x1cef48: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1cef48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1cef4c:
    // 0x1cef4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cef4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cef50:
    // 0x1cef50: 0xc096b40  jal         func_25AD00
label_1cef54:
    if (ctx->pc == 0x1CEF54u) {
        ctx->pc = 0x1CEF58u;
        goto label_1cef58;
    }
    ctx->pc = 0x1CEF50u;
    SET_GPR_U32(ctx, 31, 0x1CEF58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CEF50u, 0x1CEF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF58u;
label_1cef58:
    // 0x1cef58: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cef58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cef5c:
    // 0x1cef5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cef60:
    // 0x1cef60: 0xc05cd10  jal         func_173440
label_1cef64:
    if (ctx->pc == 0x1CEF64u) {
        ctx->pc = 0x1CEF68u;
        goto label_1cef68;
    }
    ctx->pc = 0x1CEF60u;
    SET_GPR_U32(ctx, 31, 0x1CEF68u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CEF60u, 0x1CEF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF68u;
label_1cef68:
    // 0x1cef68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cef68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cef6c:
    // 0x1cef6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cef6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cef70:
    // 0x1cef70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cef74:
    // 0x1cef74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cef74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cef78:
    // 0x1cef78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cef78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cef7c:
    // 0x1cef7c: 0xc0573d8  jal         func_15CF60
label_1cef80:
    if (ctx->pc == 0x1CEF80u) {
        ctx->pc = 0x1CEF84u;
        goto label_1cef84;
    }
    ctx->pc = 0x1CEF7Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF84u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CEF7Cu, 0x1CEF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF84u;
label_1cef84:
    // 0x1cef84: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cef84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cef88:
    // 0x1cef88: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cef88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cef8c:
    // 0x1cef8c: 0xc097530  jal         func_25D4C0
label_1cef90:
    if (ctx->pc == 0x1CEF90u) {
        ctx->pc = 0x1CEF94u;
        goto label_1cef94;
    }
    ctx->pc = 0x1CEF8Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF94u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CEF8Cu, 0x1CEF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF94u;
label_1cef94:
    // 0x1cef94: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cef94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cef98:
    // 0x1cef98: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1cef98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cef9c:
    // 0x1cef9c: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x1cef9cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
label_1cefa0:
    // 0x1cefa0: 0x11000024  beqz        $t0, . + 4 + (0x24 << 2)
label_1cefa4:
    if (ctx->pc == 0x1CEFA4u) {
        ctx->pc = 0x1CEFA8u;
        goto label_1cefa8;
    }
    ctx->pc = 0x1CEFA0u;
    {
        const bool branch_taken_0x1cefa0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cefa0) {
            ctx->pc = 0x1CF034u;
            goto label_1cf034;
        }
    }
    ctx->pc = 0x1CEFA8u;
label_1cefa8:
    // 0x1cefa8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cefa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cefac:
    // 0x1cefac: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x1cefacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
label_1cefb0:
    // 0x1cefb0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1cefb4:
    if (ctx->pc == 0x1CEFB4u) {
        ctx->pc = 0x1CEFB8u;
        goto label_1cefb8;
    }
    ctx->pc = 0x1CEFB0u;
    {
        const bool branch_taken_0x1cefb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cefb0) {
            ctx->pc = 0x1CEFF0u;
            goto label_1ceff0;
        }
    }
    ctx->pc = 0x1CEFB8u;
label_1cefb8:
    // 0x1cefb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cefb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cefbc:
    // 0x1cefbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cefbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cefc0:
    // 0x1cefc0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1cefc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1cefc4:
    // 0x1cefc4: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1cefc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1cefc8:
    // 0x1cefc8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cefc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cefcc:
    // 0x1cefcc: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x1cefccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
label_1cefd0:
    // 0x1cefd0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cefd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cefd4:
    // 0x1cefd4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cefd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cefd8:
    // 0x1cefd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cefd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cefdc:
    // 0x1cefdc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cefdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cefe0:
    // 0x1cefe0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cefe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cefe4:
    // 0x1cefe4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cefe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1cefe8:
    // 0x1cefe8: 0x100003eb  b           . + 4 + (0x3EB << 2)
label_1cefec:
    if (ctx->pc == 0x1CEFECu) {
        ctx->pc = 0x1CEFF0u;
        goto label_1ceff0;
    }
    ctx->pc = 0x1CEFE8u;
    {
        const bool branch_taken_0x1cefe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cefe8) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CEFF0u;
label_1ceff0:
    // 0x1ceff0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ceff4:
    // 0x1ceff4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ceff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ceff8:
    // 0x1ceff8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ceff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1ceffc:
    // 0x1ceffc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1ceffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1cf000:
    // 0x1cf000: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1cf004:
    if (ctx->pc == 0x1CF004u) {
        ctx->pc = 0x1CF008u;
        goto label_1cf008;
    }
    ctx->pc = 0x1CF000u;
    {
        const bool branch_taken_0x1cf000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf000) {
            ctx->pc = 0x1CF020u;
            goto label_1cf020;
        }
    }
    ctx->pc = 0x1CF008u;
label_1cf008:
    // 0x1cf008: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf00c:
    // 0x1cf00c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1cf00cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1cf010:
    // 0x1cf010: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cf010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1cf014:
    // 0x1cf014: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cf014u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1cf018:
    // 0x1cf018: 0x100003df  b           . + 4 + (0x3DF << 2)
label_1cf01c:
    if (ctx->pc == 0x1CF01Cu) {
        ctx->pc = 0x1CF020u;
        goto label_1cf020;
    }
    ctx->pc = 0x1CF018u;
    {
        const bool branch_taken_0x1cf018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf018) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF020u;
label_1cf020:
    // 0x1cf020: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cf020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cf024:
    // 0x1cf024: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf028:
    // 0x1cf028: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cf028u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1cf02c:
    // 0x1cf02c: 0x100003da  b           . + 4 + (0x3DA << 2)
label_1cf030:
    if (ctx->pc == 0x1CF030u) {
        ctx->pc = 0x1CF034u;
        goto label_1cf034;
    }
    ctx->pc = 0x1CF02Cu;
    {
        const bool branch_taken_0x1cf02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf02c) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF034u;
label_1cf034:
    // 0x1cf034: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf038:
    // 0x1cf038: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cf038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cf03c:
    // 0x1cf03c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1cf03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1cf040:
    // 0x1cf040: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1cf040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1cf044:
    // 0x1cf044: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1cf048:
    if (ctx->pc == 0x1CF048u) {
        ctx->pc = 0x1CF04Cu;
        goto label_1cf04c;
    }
    ctx->pc = 0x1CF044u;
    {
        const bool branch_taken_0x1cf044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf044) {
            ctx->pc = 0x1CF060u;
            goto label_1cf060;
        }
    }
    ctx->pc = 0x1CF04Cu;
label_1cf04c:
    // 0x1cf04c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1cf04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1cf050:
    // 0x1cf050: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1cf050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf054:
    // 0x1cf054: 0xa0e60002  sb          $a2, 0x2($a3)
    ctx->pc = 0x1cf054u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 6));
label_1cf058:
    // 0x1cf058: 0x100003cf  b           . + 4 + (0x3CF << 2)
label_1cf05c:
    if (ctx->pc == 0x1CF05Cu) {
        ctx->pc = 0x1CF060u;
        goto label_1cf060;
    }
    ctx->pc = 0x1CF058u;
    {
        const bool branch_taken_0x1cf058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf058) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF060u;
label_1cf060:
    // 0x1cf060: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cf060u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf064:
    // 0x1cf064: 0x95040a00  lhu         $a0, 0xA00($t0)
    ctx->pc = 0x1cf064u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2560)));
label_1cf068:
    // 0x1cf068: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1cf068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1cf06c:
    // 0x1cf06c: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x1cf06cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_1cf070:
    // 0x1cf070: 0x146003c9  bnez        $v1, . + 4 + (0x3C9 << 2)
label_1cf074:
    if (ctx->pc == 0x1CF074u) {
        ctx->pc = 0x1CF078u;
        goto label_1cf078;
    }
    ctx->pc = 0x1CF070u;
    {
        const bool branch_taken_0x1cf070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf070) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF078u;
label_1cf078:
    // 0x1cf078: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x1cf078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1cf07c:
    // 0x1cf07c: 0x30c30040  andi        $v1, $a2, 0x40
    ctx->pc = 0x1cf07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
label_1cf080:
    // 0x1cf080: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1cf084:
    if (ctx->pc == 0x1CF084u) {
        ctx->pc = 0x1CF088u;
        goto label_1cf088;
    }
    ctx->pc = 0x1CF080u;
    {
        const bool branch_taken_0x1cf080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf080) {
            ctx->pc = 0x1CF09Cu;
            goto label_1cf09c;
        }
    }
    ctx->pc = 0x1CF088u;
label_1cf088:
    // 0x1cf088: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf08c:
    // 0x1cf08c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cf08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1cf090:
    // 0x1cf090: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cf090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1cf094:
    // 0x1cf094: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cf094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1cf098:
    // 0x1cf098: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1cf098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1cf09c:
    // 0x1cf09c: 0x8e30009c  lw          $s0, 0x9C($s1)
    ctx->pc = 0x1cf09cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1cf0a0:
    // 0x1cf0a0: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x1cf0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_1cf0a4:
    // 0x1cf0a4: 0x106003bc  beqz        $v1, . + 4 + (0x3BC << 2)
label_1cf0a8:
    if (ctx->pc == 0x1CF0A8u) {
        ctx->pc = 0x1CF0ACu;
        goto label_1cf0ac;
    }
    ctx->pc = 0x1CF0A4u;
    {
        const bool branch_taken_0x1cf0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf0a4) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF0ACu;
label_1cf0ac:
    // 0x1cf0ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cf0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cf0b0:
    // 0x1cf0b0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1cf0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1cf0b4:
    // 0x1cf0b4: 0x30640200  andi        $a0, $v1, 0x200
    ctx->pc = 0x1cf0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1cf0b8:
    // 0x1cf0b8: 0x108003b7  beqz        $a0, . + 4 + (0x3B7 << 2)
label_1cf0bc:
    if (ctx->pc == 0x1CF0BCu) {
        ctx->pc = 0x1CF0C0u;
        goto label_1cf0c0;
    }
    ctx->pc = 0x1CF0B8u;
    {
        const bool branch_taken_0x1cf0b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf0b8) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF0C0u;
label_1cf0c0:
    // 0x1cf0c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf0c4:
    // 0x1cf0c4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf0c8:
    // 0x1cf0c8: 0xaca31b60  sw          $v1, 0x1B60($a1)
    ctx->pc = 0x1cf0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 3));
label_1cf0cc:
    // 0x1cf0cc: 0x100003b2  b           . + 4 + (0x3B2 << 2)
label_1cf0d0:
    if (ctx->pc == 0x1CF0D0u) {
        ctx->pc = 0x1CF0D4u;
        goto label_1cf0d4;
    }
    ctx->pc = 0x1CF0CCu;
    {
        const bool branch_taken_0x1cf0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf0cc) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF0D4u;
label_1cf0d4:
    // 0x1cf0d4: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf0d8:
    // 0x1cf0d8: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1cf0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1cf0dc:
    // 0x1cf0dc: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x1cf0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
label_1cf0e0:
    // 0x1cf0e0: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1cf0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1cf0e4:
    // 0x1cf0e4: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x1cf0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1cf0e8:
    // 0x1cf0e8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1cf0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1cf0ec:
    // 0x1cf0ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf0f0:
    // 0x1cf0f0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf0f4:
    // 0x1cf0f4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1cf0f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1cf0f8:
    // 0x1cf0f8: 0x8ca60368  lw          $a2, 0x368($a1)
    ctx->pc = 0x1cf0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
label_1cf0fc:
    // 0x1cf0fc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1cf0fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1cf100:
    // 0x1cf100: 0x24070039  addiu       $a3, $zero, 0x39
    ctx->pc = 0x1cf100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1cf104:
    // 0x1cf104: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1cf104u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1cf108:
    // 0x1cf108: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1cf108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cf10c:
    // 0x1cf10c: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x1cf10cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1cf110:
    // 0x1cf110: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cf110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cf114:
    // 0x1cf114: 0xc0965d0  jal         func_259740
label_1cf118:
    if (ctx->pc == 0x1CF118u) {
        ctx->pc = 0x1CF11Cu;
        goto label_1cf11c;
    }
    ctx->pc = 0x1CF114u;
    SET_GPR_U32(ctx, 31, 0x1CF11Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CF114u, 0x1CF11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF11Cu;
label_1cf11c:
    // 0x1cf11c: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x1cf11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cf120:
    // 0x1cf120: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf124:
    // 0x1cf124: 0xa4701278  sh          $s0, 0x1278($v1)
    ctx->pc = 0x1cf124u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 16));
label_1cf128:
    // 0x1cf128: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cf128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf12c:
    // 0x1cf12c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf130:
    // 0x1cf130: 0xa0641576  sb          $a0, 0x1576($v1)
    ctx->pc = 0x1cf130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5494), (uint8_t)GPR_U32(ctx, 4));
label_1cf134:
    // 0x1cf134: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1cf134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1cf138:
    // 0x1cf138: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf13c:
    // 0x1cf13c: 0xa0a21577  sb          $v0, 0x1577($a1)
    ctx->pc = 0x1cf13cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5495), (uint8_t)GPR_U32(ctx, 2));
label_1cf140:
    // 0x1cf140: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf144:
    // 0x1cf144: 0xac401b6c  sw          $zero, 0x1B6C($v0)
    ctx->pc = 0x1cf144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 0));
label_1cf148:
    // 0x1cf148: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf14c:
    // 0x1cf14c: 0x904413a5  lbu         $a0, 0x13A5($v0)
    ctx->pc = 0x1cf14cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5029)));
label_1cf150:
    // 0x1cf150: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1cf150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1cf154:
    // 0x1cf154: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cf154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf158:
    // 0x1cf158: 0xc0c50a4  jal         func_314290
label_1cf15c:
    if (ctx->pc == 0x1CF15Cu) {
        ctx->pc = 0x1CF160u;
        goto label_1cf160;
    }
    ctx->pc = 0x1CF158u;
    SET_GPR_U32(ctx, 31, 0x1CF160u);
    ctx->pc = 0x314290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314290u, 0x1CF158u, 0x1CF160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF160u;
label_1cf160:
    // 0x1cf160: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf160u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf164:
    // 0x1cf164: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf168:
    // 0x1cf168: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x1cf168u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1cf16c:
    // 0x1cf16c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1cf16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1cf170:
    // 0x1cf170: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cf170u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1cf174:
    // 0x1cf174: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf178:
    // 0x1cf178: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cf178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1cf17c:
    // 0x1cf17c: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1cf17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
label_1cf180:
    // 0x1cf180: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cf180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1cf184:
    // 0x1cf184: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1cf184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1cf188:
    // 0x1cf188: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf18c:
    // 0x1cf18c: 0x84661278  lh          $a2, 0x1278($v1)
    ctx->pc = 0x1cf18cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_1cf190:
    // 0x1cf190: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
label_1cf194:
    if (ctx->pc == 0x1CF194u) {
        ctx->pc = 0x1CF198u;
        goto label_1cf198;
    }
    ctx->pc = 0x1CF190u;
    {
        const bool branch_taken_0x1cf190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf190) {
            ctx->pc = 0x1CF208u;
            goto label_1cf208;
        }
    }
    ctx->pc = 0x1CF198u;
label_1cf198:
    // 0x1cf198: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf19c:
    // 0x1cf19c: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x1cf19cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_1cf1a0:
    // 0x1cf1a0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1cf1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1cf1a4:
    // 0x1cf1a4: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x1cf1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1cf1a8:
    // 0x1cf1a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf1ac:
    // 0x1cf1ac: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1cf1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
label_1cf1b0:
    // 0x1cf1b0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_1cf1b4:
    if (ctx->pc == 0x1CF1B4u) {
        ctx->pc = 0x1CF1B8u;
        goto label_1cf1b8;
    }
    ctx->pc = 0x1CF1B0u;
    {
        const bool branch_taken_0x1cf1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1b0) {
            ctx->pc = 0x1CF208u;
            goto label_1cf208;
        }
    }
    ctx->pc = 0x1CF1B8u;
label_1cf1b8:
    // 0x1cf1b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf1bc:
    // 0x1cf1bc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf1c0:
    // 0x1cf1c0: 0x8cc313e8  lw          $v1, 0x13E8($a2)
    ctx->pc = 0x1cf1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5096)));
label_1cf1c4:
    // 0x1cf1c4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1cf1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1cf1c8:
    // 0x1cf1c8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1cf1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1cf1cc:
    // 0x1cf1cc: 0xc05ccfc  jal         func_1733F0
label_1cf1d0:
    if (ctx->pc == 0x1CF1D0u) {
        ctx->pc = 0x1CF1D4u;
        goto label_1cf1d4;
    }
    ctx->pc = 0x1CF1CCu;
    SET_GPR_U32(ctx, 31, 0x1CF1D4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CF1CCu, 0x1CF1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1D4u;
label_1cf1d4:
    // 0x1cf1d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf1d8:
    // 0x1cf1d8: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1cf1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1cf1dc:
    // 0x1cf1dc: 0x3c053e49  lui         $a1, 0x3E49
    ctx->pc = 0x1cf1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15945 << 16));
label_1cf1e0:
    // 0x1cf1e0: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x1cf1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1cf1e4:
    // 0x1cf1e4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1cf1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1cf1e8:
    // 0x1cf1e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf1ec:
    // 0x1cf1ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf1f0:
    // 0x1cf1f0: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1cf1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cf1f4:
    // 0x1cf1f4: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1cf1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cf1f8:
    // 0x1cf1f8: 0xc058f50  jal         func_163D40
label_1cf1fc:
    if (ctx->pc == 0x1CF1FCu) {
        ctx->pc = 0x1CF200u;
        goto label_1cf200;
    }
    ctx->pc = 0x1CF1F8u;
    SET_GPR_U32(ctx, 31, 0x1CF200u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CF1F8u, 0x1CF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF200u;
label_1cf200:
    // 0x1cf200: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf204:
    // 0x1cf204: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cf204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_1cf208:
    // 0x1cf208: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf20c:
    // 0x1cf20c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1cf20cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1cf210:
    // 0x1cf210: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cf210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1cf214:
    // 0x1cf214: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x1cf214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1cf218:
    // 0x1cf218: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_1cf21c:
    if (ctx->pc == 0x1CF21Cu) {
        ctx->pc = 0x1CF220u;
        goto label_1cf220;
    }
    ctx->pc = 0x1CF218u;
    {
        const bool branch_taken_0x1cf218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf218) {
            ctx->pc = 0x1CF2A0u;
            goto label_1cf2a0;
        }
    }
    ctx->pc = 0x1CF220u;
label_1cf220:
    // 0x1cf220: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cf220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cf224:
    // 0x1cf224: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1cf224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1cf228:
    // 0x1cf228: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1cf228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_1cf22c:
    // 0x1cf22c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1cf22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1cf230:
    // 0x1cf230: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cf230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cf234:
    // 0x1cf234: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1cf234u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 4));
label_1cf238:
    // 0x1cf238: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1cf238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cf23c:
    // 0x1cf23c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf240:
    // 0x1cf240: 0xa0a4157d  sb          $a0, 0x157D($a1)
    ctx->pc = 0x1cf240u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5501), (uint8_t)GPR_U32(ctx, 4));
label_1cf244:
    // 0x1cf244: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf248:
    // 0x1cf248: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1cf248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
label_1cf24c:
    // 0x1cf24c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_1cf250:
    if (ctx->pc == 0x1CF250u) {
        ctx->pc = 0x1CF254u;
        goto label_1cf254;
    }
    ctx->pc = 0x1CF24Cu;
    {
        const bool branch_taken_0x1cf24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf24c) {
            ctx->pc = 0x1CF2A0u;
            goto label_1cf2a0;
        }
    }
    ctx->pc = 0x1CF254u;
label_1cf254:
    // 0x1cf254: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf258:
    // 0x1cf258: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf25c:
    // 0x1cf25c: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1cf25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
label_1cf260:
    // 0x1cf260: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf264:
    // 0x1cf264: 0x848315ec  lh          $v1, 0x15EC($a0)
    ctx->pc = 0x1cf264u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
label_1cf268:
    // 0x1cf268: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1cf26c:
    if (ctx->pc == 0x1CF26Cu) {
        ctx->pc = 0x1CF270u;
        goto label_1cf270;
    }
    ctx->pc = 0x1CF268u;
    {
        const bool branch_taken_0x1cf268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf268) {
            ctx->pc = 0x1CF2A0u;
            goto label_1cf2a0;
        }
    }
    ctx->pc = 0x1CF270u;
label_1cf270:
    // 0x1cf270: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf274:
    // 0x1cf274: 0x84a415ec  lh          $a0, 0x15EC($a1)
    ctx->pc = 0x1cf274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
label_1cf278:
    // 0x1cf278: 0x2483fed4  addiu       $v1, $a0, -0x12C
    ctx->pc = 0x1cf278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966996));
label_1cf27c:
    // 0x1cf27c: 0xa4a315ec  sh          $v1, 0x15EC($a1)
    ctx->pc = 0x1cf27cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 3));
label_1cf280:
    // 0x1cf280: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf284:
    // 0x1cf284: 0x846415ec  lh          $a0, 0x15EC($v1)
    ctx->pc = 0x1cf284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1cf288:
    // 0x1cf288: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1cf288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_1cf28c:
    // 0x1cf28c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1cf28cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1cf290:
    // 0x1cf290: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1cf294:
    if (ctx->pc == 0x1CF294u) {
        ctx->pc = 0x1CF298u;
        goto label_1cf298;
    }
    ctx->pc = 0x1CF290u;
    {
        const bool branch_taken_0x1cf290 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1cf290) {
            ctx->pc = 0x1CF2A0u;
            goto label_1cf2a0;
        }
    }
    ctx->pc = 0x1CF298u;
label_1cf298:
    // 0x1cf298: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf29c:
    // 0x1cf29c: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x1cf29cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1cf2a0:
    // 0x1cf2a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf2a4:
    // 0x1cf2a4: 0x908309da  lbu         $v1, 0x9DA($a0)
    ctx->pc = 0x1cf2a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2522)));
label_1cf2a8:
    // 0x1cf2a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cf2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1cf2ac:
    // 0x1cf2ac: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x1cf2acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_1cf2b0:
    // 0x1cf2b0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1cf2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1cf2b4:
    // 0x1cf2b4: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
label_1cf2b8:
    if (ctx->pc == 0x1CF2B8u) {
        ctx->pc = 0x1CF2BCu;
        goto label_1cf2bc;
    }
    ctx->pc = 0x1CF2B4u;
    {
        const bool branch_taken_0x1cf2b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cf2b4) {
            ctx->pc = 0x1CF310u;
            goto label_1cf310;
        }
    }
    ctx->pc = 0x1CF2BCu;
label_1cf2bc:
    // 0x1cf2bc: 0xc067694  jal         func_19DA50
label_1cf2c0:
    if (ctx->pc == 0x1CF2C0u) {
        ctx->pc = 0x1CF2C4u;
        goto label_1cf2c4;
    }
    ctx->pc = 0x1CF2BCu;
    SET_GPR_U32(ctx, 31, 0x1CF2C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CF2BCu, 0x1CF2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2C4u;
label_1cf2c4:
    // 0x1cf2c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf2c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf2c8:
    // 0x1cf2c8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1cf2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1cf2cc:
    // 0x1cf2cc: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1cf2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1cf2d0:
    // 0x1cf2d0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1cf2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1cf2d4:
    // 0x1cf2d4: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1cf2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1cf2d8:
    // 0x1cf2d8: 0x24a69228  addiu       $a2, $a1, -0x6DD8
    ctx->pc = 0x1cf2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939176));
label_1cf2dc:
    // 0x1cf2dc: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x1cf2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1cf2e0:
    // 0x1cf2e0: 0x94e80000  lhu         $t0, 0x0($a3)
    ctx->pc = 0x1cf2e0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1cf2e4:
    // 0x1cf2e4: 0x3110ffff  andi        $s0, $t0, 0xFFFF
    ctx->pc = 0x1cf2e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_1cf2e8:
    // 0x1cf2e8: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1cf2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_1cf2ec:
    // 0x1cf2ec: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1cf2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_1cf2f0:
    // 0x1cf2f0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cf2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cf2f4:
    // 0x1cf2f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf2f8:
    // 0x1cf2f8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1cf2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1cf2fc:
    // 0x1cf2fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1cf2fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1cf300:
    // 0x1cf300: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1cf300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1cf304:
    // 0x1cf304: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1cf304u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf308:
    // 0x1cf308: 0xc067b18  jal         func_19EC60
label_1cf30c:
    if (ctx->pc == 0x1CF30Cu) {
        ctx->pc = 0x1CF310u;
        goto label_1cf310;
    }
    ctx->pc = 0x1CF308u;
    SET_GPR_U32(ctx, 31, 0x1CF310u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CF308u, 0x1CF310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF310u;
label_1cf310:
    // 0x1cf310: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf314:
    // 0x1cf314: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf314u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf318:
    // 0x1cf318: 0xc096b40  jal         func_25AD00
label_1cf31c:
    if (ctx->pc == 0x1CF31Cu) {
        ctx->pc = 0x1CF320u;
        goto label_1cf320;
    }
    ctx->pc = 0x1CF318u;
    SET_GPR_U32(ctx, 31, 0x1CF320u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CF318u, 0x1CF320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF320u;
label_1cf320:
    // 0x1cf320: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf324:
    // 0x1cf324: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cf324u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1cf328:
    // 0x1cf328: 0xc05cd10  jal         func_173440
label_1cf32c:
    if (ctx->pc == 0x1CF32Cu) {
        ctx->pc = 0x1CF330u;
        goto label_1cf330;
    }
    ctx->pc = 0x1CF328u;
    SET_GPR_U32(ctx, 31, 0x1CF330u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CF328u, 0x1CF330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF330u;
label_1cf330:
    // 0x1cf330: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cf330u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf334:
    // 0x1cf334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cf338:
    // 0x1cf338: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1cf338u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf33c:
    // 0x1cf33c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1cf33cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1cf340:
    // 0x1cf340: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf340u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf344:
    // 0x1cf344: 0xc0573d8  jal         func_15CF60
label_1cf348:
    if (ctx->pc == 0x1CF348u) {
        ctx->pc = 0x1CF34Cu;
        goto label_1cf34c;
    }
    ctx->pc = 0x1CF344u;
    SET_GPR_U32(ctx, 31, 0x1CF34Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CF344u, 0x1CF34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF34Cu;
label_1cf34c:
    // 0x1cf34c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1cf34cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf350:
    // 0x1cf350: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cf350u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf354:
    // 0x1cf354: 0xc097530  jal         func_25D4C0
label_1cf358:
    if (ctx->pc == 0x1CF358u) {
        ctx->pc = 0x1CF35Cu;
        goto label_1cf35c;
    }
    ctx->pc = 0x1CF354u;
    SET_GPR_U32(ctx, 31, 0x1CF35Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CF354u, 0x1CF35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF35Cu;
label_1cf35c:
    // 0x1cf35c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf360:
    // 0x1cf360: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x1cf360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
label_1cf364:
    // 0x1cf364: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1cf368:
    if (ctx->pc == 0x1CF368u) {
        ctx->pc = 0x1CF36Cu;
        goto label_1cf36c;
    }
    ctx->pc = 0x1CF364u;
    {
        const bool branch_taken_0x1cf364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf364) {
            ctx->pc = 0x1CF378u;
            goto label_1cf378;
        }
    }
    ctx->pc = 0x1CF36Cu;
label_1cf36c:
    // 0x1cf36c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1cf36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cf370:
    // 0x1cf370: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf374:
    // 0x1cf374: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cf374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1cf378:
    // 0x1cf378: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf37c:
    // 0x1cf37c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cf37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1cf380:
    // 0x1cf380: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1cf380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1cf384:
    // 0x1cf384: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1cf384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1cf388:
    // 0x1cf388: 0x10a00303  beqz        $a1, . + 4 + (0x303 << 2)
label_1cf38c:
    if (ctx->pc == 0x1CF38Cu) {
        ctx->pc = 0x1CF390u;
        goto label_1cf390;
    }
    ctx->pc = 0x1CF388u;
    {
        const bool branch_taken_0x1cf388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf388) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF390u;
label_1cf390:
    // 0x1cf390: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1cf390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cf394:
    // 0x1cf394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf398:
    // 0x1cf398: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cf398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1cf39c:
    // 0x1cf39c: 0x100002fe  b           . + 4 + (0x2FE << 2)
label_1cf3a0:
    if (ctx->pc == 0x1CF3A0u) {
        ctx->pc = 0x1CF3A4u;
        goto label_1cf3a4;
    }
    ctx->pc = 0x1CF39Cu;
    {
        const bool branch_taken_0x1cf39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf39c) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF3A4u;
label_1cf3a4:
    // 0x1cf3a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf3a8:
    // 0x1cf3a8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf3ac:
    // 0x1cf3ac: 0x8ca20368  lw          $v0, 0x368($a1)
    ctx->pc = 0x1cf3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
label_1cf3b0:
    // 0x1cf3b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cf3b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf3b4:
    // 0x1cf3b4: 0x24061e41  addiu       $a2, $zero, 0x1E41
    ctx->pc = 0x1cf3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7745));
label_1cf3b8:
    // 0x1cf3b8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cf3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cf3bc:
    // 0x1cf3bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cf3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cf3c0:
    // 0x1cf3c0: 0xc0965d0  jal         func_259740
label_1cf3c4:
    if (ctx->pc == 0x1CF3C4u) {
        ctx->pc = 0x1CF3C8u;
        goto label_1cf3c8;
    }
    ctx->pc = 0x1CF3C0u;
    SET_GPR_U32(ctx, 31, 0x1CF3C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CF3C0u, 0x1CF3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF3C8u;
label_1cf3c8:
    // 0x1cf3c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf3cc:
    // 0x1cf3cc: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1cf3ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1cf3d0:
    // 0x1cf3d0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1cf3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1cf3d4:
    // 0x1cf3d4: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cf3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1cf3d8:
    // 0x1cf3d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf3dc:
    // 0x1cf3dc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1cf3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1cf3e0:
    // 0x1cf3e0: 0x3c058040  lui         $a1, 0x8040
    ctx->pc = 0x1cf3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32832 << 16));
label_1cf3e4:
    // 0x1cf3e4: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x1cf3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1cf3e8:
    // 0x1cf3e8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1cf3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1cf3ec:
    // 0x1cf3ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf3f0:
    // 0x1cf3f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf3f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf3f4:
    // 0x1cf3f4: 0xc096b40  jal         func_25AD00
label_1cf3f8:
    if (ctx->pc == 0x1CF3F8u) {
        ctx->pc = 0x1CF3FCu;
        goto label_1cf3fc;
    }
    ctx->pc = 0x1CF3F4u;
    SET_GPR_U32(ctx, 31, 0x1CF3FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CF3F4u, 0x1CF3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF3FCu;
label_1cf3fc:
    // 0x1cf3fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf3fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf400:
    // 0x1cf400: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf404:
    // 0x1cf404: 0xc05cd10  jal         func_173440
label_1cf408:
    if (ctx->pc == 0x1CF408u) {
        ctx->pc = 0x1CF40Cu;
        goto label_1cf40c;
    }
    ctx->pc = 0x1CF404u;
    SET_GPR_U32(ctx, 31, 0x1CF40Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CF404u, 0x1CF40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF40Cu;
label_1cf40c:
    // 0x1cf40c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cf40cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf410:
    // 0x1cf410: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cf414:
    // 0x1cf414: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf418:
    // 0x1cf418: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf41c:
    // 0x1cf41c: 0xc0573d8  jal         func_15CF60
label_1cf420:
    if (ctx->pc == 0x1CF420u) {
        ctx->pc = 0x1CF424u;
        goto label_1cf424;
    }
    ctx->pc = 0x1CF41Cu;
    SET_GPR_U32(ctx, 31, 0x1CF424u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CF41Cu, 0x1CF424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF424u;
label_1cf424:
    // 0x1cf424: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf424u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf428:
    // 0x1cf428: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cf428u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf42c:
    // 0x1cf42c: 0xc097530  jal         func_25D4C0
label_1cf430:
    if (ctx->pc == 0x1CF430u) {
        ctx->pc = 0x1CF434u;
        goto label_1cf434;
    }
    ctx->pc = 0x1CF42Cu;
    SET_GPR_U32(ctx, 31, 0x1CF434u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CF42Cu, 0x1CF434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF434u;
label_1cf434:
    // 0x1cf434: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf434u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf438:
    // 0x1cf438: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf43c:
    // 0x1cf43c: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x1cf43cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
label_1cf440:
    // 0x1cf440: 0x106002d5  beqz        $v1, . + 4 + (0x2D5 << 2)
label_1cf444:
    if (ctx->pc == 0x1CF444u) {
        ctx->pc = 0x1CF448u;
        goto label_1cf448;
    }
    ctx->pc = 0x1CF440u;
    {
        const bool branch_taken_0x1cf440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf440) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF448u;
label_1cf448:
    // 0x1cf448: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf44c:
    // 0x1cf44c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cf44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1cf450:
    // 0x1cf450: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1cf450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1cf454:
    // 0x1cf454: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cf454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1cf458:
    // 0x1cf458: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_1cf45c:
    if (ctx->pc == 0x1CF45Cu) {
        ctx->pc = 0x1CF460u;
        goto label_1cf460;
    }
    ctx->pc = 0x1CF458u;
    {
        const bool branch_taken_0x1cf458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf458) {
            ctx->pc = 0x1CF51Cu;
            goto label_1cf51c;
        }
    }
    ctx->pc = 0x1CF460u;
label_1cf460:
    // 0x1cf460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf464:
    // 0x1cf464: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf468:
    // 0x1cf468: 0xe4801564  swc1        $f0, 0x1564($a0)
    ctx->pc = 0x1cf468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5476), bits); }
label_1cf46c:
    // 0x1cf46c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf470:
    // 0x1cf470: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cf470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf474:
    // 0x1cf474: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf478:
    // 0x1cf478: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1cf478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
label_1cf47c:
    // 0x1cf47c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf480:
    // 0x1cf480: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cf480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf484:
    // 0x1cf484: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf488:
    // 0x1cf488: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1cf488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1cf48c:
    // 0x1cf48c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf490:
    // 0x1cf490: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1cf490u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1cf494:
    // 0x1cf494: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf498:
    // 0x1cf498: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1cf498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1cf49c:
    // 0x1cf49c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1cf4a0:
    if (ctx->pc == 0x1CF4A0u) {
        ctx->pc = 0x1CF4A4u;
        goto label_1cf4a4;
    }
    ctx->pc = 0x1CF49Cu;
    {
        const bool branch_taken_0x1cf49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf49c) {
            ctx->pc = 0x1CF4B4u;
            goto label_1cf4b4;
        }
    }
    ctx->pc = 0x1CF4A4u;
label_1cf4a4:
    // 0x1cf4a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf4a8:
    // 0x1cf4a8: 0xc0571d0  jal         func_15C740
label_1cf4ac:
    if (ctx->pc == 0x1CF4ACu) {
        ctx->pc = 0x1CF4B0u;
        goto label_1cf4b0;
    }
    ctx->pc = 0x1CF4A8u;
    SET_GPR_U32(ctx, 31, 0x1CF4B0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CF4A8u, 0x1CF4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4B0u;
label_1cf4b0:
    // 0x1cf4b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf4b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf4b4:
    // 0x1cf4b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf4b8:
    // 0x1cf4b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf4bc:
    // 0x1cf4bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cf4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1cf4c0:
    // 0x1cf4c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cf4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cf4c4:
    // 0x1cf4c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf4c8:
    // 0x1cf4c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cf4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1cf4cc:
    // 0x1cf4cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf4d0:
    // 0x1cf4d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cf4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cf4d4:
    // 0x1cf4d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf4d8:
    // 0x1cf4d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cf4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cf4dc:
    // 0x1cf4dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf4e0:
    // 0x1cf4e0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1cf4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1cf4e4:
    // 0x1cf4e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf4e8:
    // 0x1cf4e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf4ec:
    // 0x1cf4ec: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cf4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1cf4f0:
    // 0x1cf4f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf4f4:
    // 0x1cf4f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cf4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cf4f8:
    // 0x1cf4f8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cf4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cf4fc:
    // 0x1cf4fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf500:
    // 0x1cf500: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1cf500u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_1cf504:
    // 0x1cf504: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf508:
    // 0x1cf508: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x1cf508u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1cf50c:
    // 0x1cf50c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf510:
    // 0x1cf510: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cf510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1cf514:
    // 0x1cf514: 0x1000000d  b           . + 4 + (0xD << 2)
label_1cf518:
    if (ctx->pc == 0x1CF518u) {
        ctx->pc = 0x1CF51Cu;
        goto label_1cf51c;
    }
    ctx->pc = 0x1CF514u;
    {
        const bool branch_taken_0x1cf514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf514) {
            ctx->pc = 0x1CF54Cu;
            goto label_1cf54c;
        }
    }
    ctx->pc = 0x1CF51Cu;
label_1cf51c:
    // 0x1cf51c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf520:
    // 0x1cf520: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf524:
    // 0x1cf524: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x1cf524u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_1cf528:
    // 0x1cf528: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1cf528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf52c:
    // 0x1cf52c: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x1cf52cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cf530:
    // 0x1cf530: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cf530u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf534:
    // 0x1cf534: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x1cf534u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cf538:
    // 0x1cf538: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf53c:
    // 0x1cf53c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cf53cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cf540:
    // 0x1cf540: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1cf540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1cf544:
    // 0x1cf544: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf548:
    // 0x1cf548: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1cf548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_1cf54c:
    // 0x1cf54c: 0x10000292  b           . + 4 + (0x292 << 2)
label_1cf550:
    if (ctx->pc == 0x1CF550u) {
        ctx->pc = 0x1CF554u;
        goto label_1cf554;
    }
    ctx->pc = 0x1CF54Cu;
    {
        const bool branch_taken_0x1cf54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf54c) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF554u;
label_1cf554:
    // 0x1cf554: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf558:
    // 0x1cf558: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf55c:
    // 0x1cf55c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cf55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1cf560:
    // 0x1cf560: 0x24101e3f  addiu       $s0, $zero, 0x1E3F
    ctx->pc = 0x1cf560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7743));
label_1cf564:
    // 0x1cf564: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1cf564u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1cf568:
    // 0x1cf568: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cf568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cf56c:
    // 0x1cf56c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cf56cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cf570:
    // 0x1cf570: 0xc0965d0  jal         func_259740
label_1cf574:
    if (ctx->pc == 0x1CF574u) {
        ctx->pc = 0x1CF578u;
        goto label_1cf578;
    }
    ctx->pc = 0x1CF570u;
    SET_GPR_U32(ctx, 31, 0x1CF578u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CF570u, 0x1CF578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF578u;
label_1cf578:
    // 0x1cf578: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf578u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf57c:
    // 0x1cf57c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf580:
    // 0x1cf580: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x1cf580u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1cf584:
    // 0x1cf584: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1cf584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cf588:
    // 0x1cf588: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cf588u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1cf58c:
    // 0x1cf58c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf58cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf590:
    // 0x1cf590: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1cf590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1cf594:
    // 0x1cf594: 0x3c048040  lui         $a0, 0x8040
    ctx->pc = 0x1cf594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32832 << 16));
label_1cf598:
    // 0x1cf598: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1cf598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1cf59c:
    // 0x1cf59c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1cf59cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_1cf5a0:
    // 0x1cf5a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf5a4:
    // 0x1cf5a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf5a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf5a8:
    // 0x1cf5a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf5a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf5ac:
    // 0x1cf5ac: 0xc096b40  jal         func_25AD00
label_1cf5b0:
    if (ctx->pc == 0x1CF5B0u) {
        ctx->pc = 0x1CF5B4u;
        goto label_1cf5b4;
    }
    ctx->pc = 0x1CF5ACu;
    SET_GPR_U32(ctx, 31, 0x1CF5B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CF5ACu, 0x1CF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5B4u;
label_1cf5b4:
    // 0x1cf5b4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cf5b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf5b8:
    // 0x1cf5b8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf5bc:
    // 0x1cf5bc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1cf5bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1cf5c0:
    // 0x1cf5c0: 0xc05cd10  jal         func_173440
label_1cf5c4:
    if (ctx->pc == 0x1CF5C4u) {
        ctx->pc = 0x1CF5C8u;
        goto label_1cf5c8;
    }
    ctx->pc = 0x1CF5C0u;
    SET_GPR_U32(ctx, 31, 0x1CF5C8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CF5C0u, 0x1CF5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5C8u;
label_1cf5c8:
    // 0x1cf5c8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1cf5c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf5cc:
    // 0x1cf5cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf5ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cf5d0:
    // 0x1cf5d0: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cf5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf5d4:
    // 0x1cf5d4: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1cf5d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1cf5d8:
    // 0x1cf5d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf5d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf5dc:
    // 0x1cf5dc: 0xc0573d8  jal         func_15CF60
label_1cf5e0:
    if (ctx->pc == 0x1CF5E0u) {
        ctx->pc = 0x1CF5E4u;
        goto label_1cf5e4;
    }
    ctx->pc = 0x1CF5DCu;
    SET_GPR_U32(ctx, 31, 0x1CF5E4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CF5DCu, 0x1CF5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5E4u;
label_1cf5e4:
    // 0x1cf5e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf5e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf5e8:
    // 0x1cf5e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cf5e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf5ec:
    // 0x1cf5ec: 0xc097530  jal         func_25D4C0
label_1cf5f0:
    if (ctx->pc == 0x1CF5F0u) {
        ctx->pc = 0x1CF5F4u;
        goto label_1cf5f4;
    }
    ctx->pc = 0x1CF5ECu;
    SET_GPR_U32(ctx, 31, 0x1CF5F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CF5ECu, 0x1CF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5F4u;
label_1cf5f4:
    // 0x1cf5f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf5f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf5f8:
    // 0x1cf5f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf5fc:
    // 0x1cf5fc: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1cf5fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1cf600:
    // 0x1cf600: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1cf604:
    if (ctx->pc == 0x1CF604u) {
        ctx->pc = 0x1CF608u;
        goto label_1cf608;
    }
    ctx->pc = 0x1CF600u;
    {
        const bool branch_taken_0x1cf600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf600) {
            ctx->pc = 0x1CF628u;
            goto label_1cf628;
        }
    }
    ctx->pc = 0x1CF608u;
label_1cf608:
    // 0x1cf608: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf60c:
    // 0x1cf60c: 0x8ca609f8  lw          $a2, 0x9F8($a1)
    ctx->pc = 0x1cf60cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2552)));
label_1cf610:
    // 0x1cf610: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf614:
    // 0x1cf614: 0x8c8309fc  lw          $v1, 0x9FC($a0)
    ctx->pc = 0x1cf614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2556)));
label_1cf618:
    // 0x1cf618: 0x2463ff00  addiu       $v1, $v1, -0x100
    ctx->pc = 0x1cf618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
label_1cf61c:
    // 0x1cf61c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x1cf61cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1cf620:
    // 0x1cf620: 0x1020025d  beqz        $at, . + 4 + (0x25D << 2)
label_1cf624:
    if (ctx->pc == 0x1CF624u) {
        ctx->pc = 0x1CF628u;
        goto label_1cf628;
    }
    ctx->pc = 0x1CF620u;
    {
        const bool branch_taken_0x1cf620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf620) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF628u;
label_1cf628:
    // 0x1cf628: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf62c:
    // 0x1cf62c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cf62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cf630:
    // 0x1cf630: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1cf630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1cf634:
    // 0x1cf634: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1cf634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1cf638:
    // 0x1cf638: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
label_1cf63c:
    if (ctx->pc == 0x1CF63Cu) {
        ctx->pc = 0x1CF640u;
        goto label_1cf640;
    }
    ctx->pc = 0x1CF638u;
    {
        const bool branch_taken_0x1cf638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf638) {
            ctx->pc = 0x1CF700u;
            goto label_1cf700;
        }
    }
    ctx->pc = 0x1CF640u;
label_1cf640:
    // 0x1cf640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf644:
    // 0x1cf644: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf648:
    // 0x1cf648: 0xe4a01564  swc1        $f0, 0x1564($a1)
    ctx->pc = 0x1cf648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5476), bits); }
label_1cf64c:
    // 0x1cf64c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf650:
    // 0x1cf650: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cf650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf654:
    // 0x1cf654: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf658:
    // 0x1cf658: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cf658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
label_1cf65c:
    // 0x1cf65c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf660:
    // 0x1cf660: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cf660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf664:
    // 0x1cf664: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf668:
    // 0x1cf668: 0xe4a01570  swc1        $f0, 0x1570($a1)
    ctx->pc = 0x1cf668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5488), bits); }
label_1cf66c:
    // 0x1cf66c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf670:
    // 0x1cf670: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1cf670u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1cf674:
    // 0x1cf674: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf678:
    // 0x1cf678: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1cf678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
label_1cf67c:
    // 0x1cf67c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1cf680:
    if (ctx->pc == 0x1CF680u) {
        ctx->pc = 0x1CF684u;
        goto label_1cf684;
    }
    ctx->pc = 0x1CF67Cu;
    {
        const bool branch_taken_0x1cf67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf67c) {
            ctx->pc = 0x1CF698u;
            goto label_1cf698;
        }
    }
    ctx->pc = 0x1CF684u;
label_1cf684:
    // 0x1cf684: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf688:
    // 0x1cf688: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cf688u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1cf68c:
    // 0x1cf68c: 0xc0571d0  jal         func_15C740
label_1cf690:
    if (ctx->pc == 0x1CF690u) {
        ctx->pc = 0x1CF694u;
        goto label_1cf694;
    }
    ctx->pc = 0x1CF68Cu;
    SET_GPR_U32(ctx, 31, 0x1CF694u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CF68Cu, 0x1CF694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF694u;
label_1cf694:
    // 0x1cf694: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cf694u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf698:
    // 0x1cf698: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf69c:
    // 0x1cf69c: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cf69cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf6a0:
    // 0x1cf6a0: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x1cf6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
label_1cf6a4:
    // 0x1cf6a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cf6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cf6a8:
    // 0x1cf6a8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf6ac:
    // 0x1cf6ac: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x1cf6acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
label_1cf6b0:
    // 0x1cf6b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf6b4:
    // 0x1cf6b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cf6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cf6b8:
    // 0x1cf6b8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf6bc:
    // 0x1cf6bc: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x1cf6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cf6c0:
    // 0x1cf6c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf6c4:
    // 0x1cf6c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cf6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1cf6c8:
    // 0x1cf6c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf6cc:
    // 0x1cf6cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf6d0:
    // 0x1cf6d0: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x1cf6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_1cf6d4:
    // 0x1cf6d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf6d8:
    // 0x1cf6d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cf6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cf6dc:
    // 0x1cf6dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cf6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cf6e0:
    // 0x1cf6e0: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x1cf6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf6e4:
    // 0x1cf6e4: 0xa603127a  sh          $v1, 0x127A($s0)
    ctx->pc = 0x1cf6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1cf6e8:
    // 0x1cf6e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf6ec:
    // 0x1cf6ec: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1cf6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1cf6f0:
    // 0x1cf6f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf6f4:
    // 0x1cf6f4: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cf6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1cf6f8:
    // 0x1cf6f8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1cf6fc:
    if (ctx->pc == 0x1CF6FCu) {
        ctx->pc = 0x1CF700u;
        goto label_1cf700;
    }
    ctx->pc = 0x1CF6F8u;
    {
        const bool branch_taken_0x1cf6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf6f8) {
            ctx->pc = 0x1CF730u;
            goto label_1cf730;
        }
    }
    ctx->pc = 0x1CF700u;
label_1cf700:
    // 0x1cf700: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf704:
    // 0x1cf704: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf708:
    // 0x1cf708: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cf708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1cf70c:
    // 0x1cf70c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf710:
    // 0x1cf710: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x1cf710u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cf714:
    // 0x1cf714: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf718:
    // 0x1cf718: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1cf718u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cf71c:
    // 0x1cf71c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf720:
    // 0x1cf720: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1cf720u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cf724:
    // 0x1cf724: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1cf724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1cf728:
    // 0x1cf728: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf72c:
    // 0x1cf72c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1cf72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1cf730:
    // 0x1cf730: 0x10000219  b           . + 4 + (0x219 << 2)
label_1cf734:
    if (ctx->pc == 0x1CF734u) {
        ctx->pc = 0x1CF738u;
        goto label_1cf738;
    }
    ctx->pc = 0x1CF730u;
    {
        const bool branch_taken_0x1cf730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf730) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF738u;
label_1cf738:
    // 0x1cf738: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf73c:
    // 0x1cf73c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf740:
    // 0x1cf740: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf744:
    // 0x1cf744: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cf744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1cf748:
    // 0x1cf748: 0x24061e41  addiu       $a2, $zero, 0x1E41
    ctx->pc = 0x1cf748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7745));
label_1cf74c:
    // 0x1cf74c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cf74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cf750:
    // 0x1cf750: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cf750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cf754:
    // 0x1cf754: 0xc0965d0  jal         func_259740
label_1cf758:
    if (ctx->pc == 0x1CF758u) {
        ctx->pc = 0x1CF75Cu;
        goto label_1cf75c;
    }
    ctx->pc = 0x1CF754u;
    SET_GPR_U32(ctx, 31, 0x1CF75Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CF754u, 0x1CF75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF75Cu;
label_1cf75c:
    // 0x1cf75c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1cf75cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf760:
    // 0x1cf760: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf764:
    // 0x1cf764: 0x90500002  lbu         $s0, 0x2($v0)
    ctx->pc = 0x1cf764u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1cf768:
    // 0x1cf768: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1cf768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cf76c:
    // 0x1cf76c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1cf76cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1cf770:
    // 0x1cf770: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf774:
    // 0x1cf774: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cf774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1cf778:
    // 0x1cf778: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1cf778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
label_1cf77c:
    // 0x1cf77c: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1cf77cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1cf780:
    // 0x1cf780: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1cf780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_1cf784:
    // 0x1cf784: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf788:
    // 0x1cf788: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf78c:
    // 0x1cf78c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf78cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf790:
    // 0x1cf790: 0xc096b40  jal         func_25AD00
label_1cf794:
    if (ctx->pc == 0x1CF794u) {
        ctx->pc = 0x1CF798u;
        goto label_1cf798;
    }
    ctx->pc = 0x1CF790u;
    SET_GPR_U32(ctx, 31, 0x1CF798u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CF790u, 0x1CF798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF798u;
label_1cf798:
    // 0x1cf798: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf79c:
    // 0x1cf79c: 0xc05cd10  jal         func_173440
label_1cf7a0:
    if (ctx->pc == 0x1CF7A0u) {
        ctx->pc = 0x1CF7A4u;
        goto label_1cf7a4;
    }
    ctx->pc = 0x1CF79Cu;
    SET_GPR_U32(ctx, 31, 0x1CF7A4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CF79Cu, 0x1CF7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF7A4u;
label_1cf7a4:
    // 0x1cf7a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf7a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf7a8:
    // 0x1cf7a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cf7ac:
    // 0x1cf7ac: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf7b0:
    // 0x1cf7b0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cf7b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1cf7b4:
    // 0x1cf7b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf7b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf7b8:
    // 0x1cf7b8: 0xc0573d8  jal         func_15CF60
label_1cf7bc:
    if (ctx->pc == 0x1CF7BCu) {
        ctx->pc = 0x1CF7C0u;
        goto label_1cf7c0;
    }
    ctx->pc = 0x1CF7B8u;
    SET_GPR_U32(ctx, 31, 0x1CF7C0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CF7B8u, 0x1CF7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF7C0u;
label_1cf7c0:
    // 0x1cf7c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf7c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf7c4:
    // 0x1cf7c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cf7c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf7c8:
    // 0x1cf7c8: 0xc097530  jal         func_25D4C0
label_1cf7cc:
    if (ctx->pc == 0x1CF7CCu) {
        ctx->pc = 0x1CF7D0u;
        goto label_1cf7d0;
    }
    ctx->pc = 0x1CF7C8u;
    SET_GPR_U32(ctx, 31, 0x1CF7D0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CF7C8u, 0x1CF7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF7D0u;
label_1cf7d0:
    // 0x1cf7d0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cf7d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf7d4:
    // 0x1cf7d4: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf7d8:
    // 0x1cf7d8: 0x94c309ee  lhu         $v1, 0x9EE($a2)
    ctx->pc = 0x1cf7d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2542)));
label_1cf7dc:
    // 0x1cf7dc: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1cf7dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1cf7e0:
    // 0x1cf7e0: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1cf7e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_1cf7e4:
    // 0x1cf7e4: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_1cf7e8:
    if (ctx->pc == 0x1CF7E8u) {
        ctx->pc = 0x1CF7ECu;
        goto label_1cf7ec;
    }
    ctx->pc = 0x1CF7E4u;
    {
        const bool branch_taken_0x1cf7e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf7e4) {
            ctx->pc = 0x1CF818u;
            goto label_1cf818;
        }
    }
    ctx->pc = 0x1CF7ECu;
label_1cf7ec:
    // 0x1cf7ec: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1cf7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1cf7f0:
    // 0x1cf7f0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cf7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1cf7f4:
    // 0x1cf7f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1cf7f8:
    if (ctx->pc == 0x1CF7F8u) {
        ctx->pc = 0x1CF7FCu;
        goto label_1cf7fc;
    }
    ctx->pc = 0x1CF7F4u;
    {
        const bool branch_taken_0x1cf7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf7f4) {
            ctx->pc = 0x1CF818u;
            goto label_1cf818;
        }
    }
    ctx->pc = 0x1CF7FCu;
label_1cf7fc:
    // 0x1cf7fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf800:
    // 0x1cf800: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cf800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cf804:
    // 0x1cf804: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf808:
    // 0x1cf808: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1cf808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1cf80c:
    // 0x1cf80c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1cf80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_1cf810:
    // 0x1cf810: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x1cf810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1cf814:
    // 0x1cf814: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cf814u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1cf818:
    // 0x1cf818: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf81c:
    // 0x1cf81c: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1cf81cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_1cf820:
    // 0x1cf820: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1cf824:
    if (ctx->pc == 0x1CF824u) {
        ctx->pc = 0x1CF828u;
        goto label_1cf828;
    }
    ctx->pc = 0x1CF820u;
    {
        const bool branch_taken_0x1cf820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf820) {
            ctx->pc = 0x1CF848u;
            goto label_1cf848;
        }
    }
    ctx->pc = 0x1CF828u;
label_1cf828:
    // 0x1cf828: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf82c:
    // 0x1cf82c: 0x8c8609f8  lw          $a2, 0x9F8($a0)
    ctx->pc = 0x1cf82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2552)));
label_1cf830:
    // 0x1cf830: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf834:
    // 0x1cf834: 0x8c6409fc  lw          $a0, 0x9FC($v1)
    ctx->pc = 0x1cf834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2556)));
label_1cf838:
    // 0x1cf838: 0x2485ff00  addiu       $a1, $a0, -0x100
    ctx->pc = 0x1cf838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
label_1cf83c:
    // 0x1cf83c: 0xa6082b  sltu        $at, $a1, $a2
    ctx->pc = 0x1cf83cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1cf840:
    // 0x1cf840: 0x102001d5  beqz        $at, . + 4 + (0x1D5 << 2)
label_1cf844:
    if (ctx->pc == 0x1CF844u) {
        ctx->pc = 0x1CF848u;
        goto label_1cf848;
    }
    ctx->pc = 0x1CF840u;
    {
        const bool branch_taken_0x1cf840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf840) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF848u;
label_1cf848:
    // 0x1cf848: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf84c:
    // 0x1cf84c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1cf84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cf850:
    // 0x1cf850: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1cf850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_1cf854:
    // 0x1cf854: 0x652024  and         $a0, $v1, $a1
    ctx->pc = 0x1cf854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1cf858:
    // 0x1cf858: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_1cf85c:
    if (ctx->pc == 0x1CF85Cu) {
        ctx->pc = 0x1CF860u;
        goto label_1cf860;
    }
    ctx->pc = 0x1CF858u;
    {
        const bool branch_taken_0x1cf858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf858) {
            ctx->pc = 0x1CF91Cu;
            goto label_1cf91c;
        }
    }
    ctx->pc = 0x1CF860u;
label_1cf860:
    // 0x1cf860: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf864:
    // 0x1cf864: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf868:
    // 0x1cf868: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1cf868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
label_1cf86c:
    // 0x1cf86c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf870:
    // 0x1cf870: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cf870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf874:
    // 0x1cf874: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf878:
    // 0x1cf878: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cf878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
label_1cf87c:
    // 0x1cf87c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf880:
    // 0x1cf880: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cf880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf884:
    // 0x1cf884: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf888:
    // 0x1cf888: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1cf888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1cf88c:
    // 0x1cf88c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf890:
    // 0x1cf890: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1cf890u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1cf894:
    // 0x1cf894: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf898:
    // 0x1cf898: 0x8c6413e8  lw          $a0, 0x13E8($v1)
    ctx->pc = 0x1cf898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1cf89c:
    // 0x1cf89c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1cf8a0:
    if (ctx->pc == 0x1CF8A0u) {
        ctx->pc = 0x1CF8A4u;
        goto label_1cf8a4;
    }
    ctx->pc = 0x1CF89Cu;
    {
        const bool branch_taken_0x1cf89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf89c) {
            ctx->pc = 0x1CF8B4u;
            goto label_1cf8b4;
        }
    }
    ctx->pc = 0x1CF8A4u;
label_1cf8a4:
    // 0x1cf8a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf8a8:
    // 0x1cf8a8: 0xc0571d0  jal         func_15C740
label_1cf8ac:
    if (ctx->pc == 0x1CF8ACu) {
        ctx->pc = 0x1CF8B0u;
        goto label_1cf8b0;
    }
    ctx->pc = 0x1CF8A8u;
    SET_GPR_U32(ctx, 31, 0x1CF8B0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CF8A8u, 0x1CF8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF8B0u;
label_1cf8b0:
    // 0x1cf8b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf8b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf8b4:
    // 0x1cf8b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf8b8:
    // 0x1cf8b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf8bc:
    // 0x1cf8bc: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1cf8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1cf8c0:
    // 0x1cf8c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cf8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cf8c4:
    // 0x1cf8c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf8c8:
    // 0x1cf8c8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1cf8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1cf8cc:
    // 0x1cf8cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf8d0:
    // 0x1cf8d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cf8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cf8d4:
    // 0x1cf8d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf8d8:
    // 0x1cf8d8: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cf8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cf8dc:
    // 0x1cf8dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf8e0:
    // 0x1cf8e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cf8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1cf8e4:
    // 0x1cf8e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf8e8:
    // 0x1cf8e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf8ec:
    // 0x1cf8ec: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x1cf8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_1cf8f0:
    // 0x1cf8f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf8f4:
    // 0x1cf8f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cf8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cf8f8:
    // 0x1cf8f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cf8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cf8fc:
    // 0x1cf8fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf900:
    // 0x1cf900: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1cf900u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1cf904:
    // 0x1cf904: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf908:
    // 0x1cf908: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1cf908u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1cf90c:
    // 0x1cf90c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf910:
    // 0x1cf910: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cf910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1cf914:
    // 0x1cf914: 0x1000000d  b           . + 4 + (0xD << 2)
label_1cf918:
    if (ctx->pc == 0x1CF918u) {
        ctx->pc = 0x1CF91Cu;
        goto label_1cf91c;
    }
    ctx->pc = 0x1CF914u;
    {
        const bool branch_taken_0x1cf914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf914) {
            ctx->pc = 0x1CF94Cu;
            goto label_1cf94c;
        }
    }
    ctx->pc = 0x1CF91Cu;
label_1cf91c:
    // 0x1cf91c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf920:
    // 0x1cf920: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf924:
    // 0x1cf924: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cf924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1cf928:
    // 0x1cf928: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf92c:
    // 0x1cf92c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1cf92cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cf930:
    // 0x1cf930: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf934:
    // 0x1cf934: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cf934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cf938:
    // 0x1cf938: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf93c:
    // 0x1cf93c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cf93cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cf940:
    // 0x1cf940: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1cf940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1cf944:
    // 0x1cf944: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf948:
    // 0x1cf948: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cf948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1cf94c:
    // 0x1cf94c: 0x10000192  b           . + 4 + (0x192 << 2)
label_1cf950:
    if (ctx->pc == 0x1CF950u) {
        ctx->pc = 0x1CF954u;
        goto label_1cf954;
    }
    ctx->pc = 0x1CF94Cu;
    {
        const bool branch_taken_0x1cf94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf94c) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CF954u;
label_1cf954:
    // 0x1cf954: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf958:
    // 0x1cf958: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf95c:
    // 0x1cf95c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cf95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1cf960:
    // 0x1cf960: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1cf960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1cf964:
    // 0x1cf964: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cf964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cf968:
    // 0x1cf968: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cf968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cf96c:
    // 0x1cf96c: 0xc0965d0  jal         func_259740
label_1cf970:
    if (ctx->pc == 0x1CF970u) {
        ctx->pc = 0x1CF974u;
        goto label_1cf974;
    }
    ctx->pc = 0x1CF96Cu;
    SET_GPR_U32(ctx, 31, 0x1CF974u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CF96Cu, 0x1CF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF974u;
label_1cf974:
    // 0x1cf974: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1cf974u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf978:
    // 0x1cf978: 0xc067694  jal         func_19DA50
label_1cf97c:
    if (ctx->pc == 0x1CF97Cu) {
        ctx->pc = 0x1CF980u;
        goto label_1cf980;
    }
    ctx->pc = 0x1CF978u;
    SET_GPR_U32(ctx, 31, 0x1CF980u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CF978u, 0x1CF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF980u;
label_1cf980:
    // 0x1cf980: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf980u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf984:
    // 0x1cf984: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1cf984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1cf988:
    // 0x1cf988: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x1cf988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_1cf98c:
    // 0x1cf98c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1cf98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1cf990:
    // 0x1cf990: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1cf990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1cf994:
    // 0x1cf994: 0x24a29230  addiu       $v0, $a1, -0x6DD0
    ctx->pc = 0x1cf994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939184));
label_1cf998:
    // 0x1cf998: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1cf998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf99c:
    // 0x1cf99c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1cf99cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf9a0:
    // 0x1cf9a0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1cf9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1cf9a4:
    // 0x1cf9a4: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1cf9a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1cf9a8:
    // 0x1cf9a8: 0x3c07469c  lui         $a3, 0x469C
    ctx->pc = 0x1cf9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18076 << 16));
label_1cf9ac:
    // 0x1cf9ac: 0x34e64000  ori         $a2, $a3, 0x4000
    ctx->pc = 0x1cf9acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
label_1cf9b0:
    // 0x1cf9b0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1cf9b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cf9b4:
    // 0x1cf9b4: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cf9b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf9b8:
    // 0x1cf9b8: 0x8d020130  lw          $v0, 0x130($t0)
    ctx->pc = 0x1cf9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
label_1cf9bc:
    // 0x1cf9bc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1cf9bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1cf9c0:
    // 0x1cf9c0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1cf9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1cf9c4:
    // 0x1cf9c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1cf9c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cf9c8:
    // 0x1cf9c8: 0xc067b18  jal         func_19EC60
label_1cf9cc:
    if (ctx->pc == 0x1CF9CCu) {
        ctx->pc = 0x1CF9D0u;
        goto label_1cf9d0;
    }
    ctx->pc = 0x1CF9C8u;
    SET_GPR_U32(ctx, 31, 0x1CF9D0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CF9C8u, 0x1CF9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF9D0u;
label_1cf9d0:
    // 0x1cf9d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf9d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cf9d4:
    // 0x1cf9d4: 0x3c04c2a0  lui         $a0, 0xC2A0
    ctx->pc = 0x1cf9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49824 << 16));
label_1cf9d8:
    // 0x1cf9d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cf9d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf9dc:
    // 0x1cf9dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf9e0:
    // 0x1cf9e0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1cf9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1cf9e4:
    // 0x1cf9e4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf9e8:
    // 0x1cf9e8: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1cf9e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1cf9ec:
    // 0x1cf9ec: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1cf9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1cf9f0:
    // 0x1cf9f0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cf9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1cf9f4:
    // 0x1cf9f4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cf9f8:
    // 0x1cf9f8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cf9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1cf9fc:
    // 0x1cf9fc: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1cf9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
label_1cfa00:
    // 0x1cfa00: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1cfa00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1cfa04:
    // 0x1cfa04: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1cfa04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_1cfa08:
    // 0x1cfa08: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfa0c:
    // 0x1cfa0c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cfa0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1cfa10:
    // 0x1cfa10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cfa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cfa14:
    // 0x1cfa14: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cfa14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfa18:
    // 0x1cfa18: 0xc096b40  jal         func_25AD00
label_1cfa1c:
    if (ctx->pc == 0x1CFA1Cu) {
        ctx->pc = 0x1CFA20u;
        goto label_1cfa20;
    }
    ctx->pc = 0x1CFA18u;
    SET_GPR_U32(ctx, 31, 0x1CFA20u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CFA18u, 0x1CFA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA20u;
label_1cfa20:
    // 0x1cfa20: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cfa20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfa24:
    // 0x1cfa24: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1cfa24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfa28:
    // 0x1cfa28: 0xc4e10188  lwc1        $f1, 0x188($a3)
    ctx->pc = 0x1cfa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfa2c:
    // 0x1cfa2c: 0x3c0840a0  lui         $t0, 0x40A0
    ctx->pc = 0x1cfa2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16544 << 16));
label_1cfa30:
    // 0x1cfa30: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1cfa30u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfa34:
    // 0x1cfa34: 0x0  nop
    ctx->pc = 0x1cfa34u;
    // NOP
label_1cfa38:
    // 0x1cfa38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfa38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cfa3c:
    // 0x1cfa3c: 0xe4e00188  swc1        $f0, 0x188($a3)
    ctx->pc = 0x1cfa3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 392), bits); }
label_1cfa40:
    // 0x1cfa40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cfa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfa44:
    // 0x1cfa44: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1cfa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfa48:
    // 0x1cfa48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfa48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfa4c:
    // 0x1cfa4c: 0x0  nop
    ctx->pc = 0x1cfa4cu;
    // NOP
label_1cfa50:
    // 0x1cfa50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfa50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfa54:
    // 0x1cfa54: 0x0  nop
    ctx->pc = 0x1cfa54u;
    // NOP
label_1cfa58:
    // 0x1cfa58: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1cfa5c:
    if (ctx->pc == 0x1CFA5Cu) {
        ctx->pc = 0x1CFA60u;
        goto label_1cfa60;
    }
    ctx->pc = 0x1CFA58u;
    {
        const bool branch_taken_0x1cfa58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfa58) {
            ctx->pc = 0x1CFA6Cu;
            goto label_1cfa6c;
        }
    }
    ctx->pc = 0x1CFA60u;
label_1cfa60:
    // 0x1cfa60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfa60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfa64:
    // 0x1cfa64: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfa68:
    // 0x1cfa68: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1cfa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
label_1cfa6c:
    // 0x1cfa6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfa70:
    // 0x1cfa70: 0xc05cd10  jal         func_173440
label_1cfa74:
    if (ctx->pc == 0x1CFA74u) {
        ctx->pc = 0x1CFA78u;
        goto label_1cfa78;
    }
    ctx->pc = 0x1CFA70u;
    SET_GPR_U32(ctx, 31, 0x1CFA78u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CFA70u, 0x1CFA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA78u;
label_1cfa78:
    // 0x1cfa78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cfa78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfa7c:
    // 0x1cfa7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cfa7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cfa80:
    // 0x1cfa80: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfa84:
    // 0x1cfa84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cfa84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cfa88:
    // 0x1cfa88: 0xc0573d8  jal         func_15CF60
label_1cfa8c:
    if (ctx->pc == 0x1CFA8Cu) {
        ctx->pc = 0x1CFA90u;
        goto label_1cfa90;
    }
    ctx->pc = 0x1CFA88u;
    SET_GPR_U32(ctx, 31, 0x1CFA90u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CFA88u, 0x1CFA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA90u;
label_1cfa90:
    // 0x1cfa90: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cfa90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cfa94:
    // 0x1cfa94: 0xc097530  jal         func_25D4C0
label_1cfa98:
    if (ctx->pc == 0x1CFA98u) {
        ctx->pc = 0x1CFA9Cu;
        goto label_1cfa9c;
    }
    ctx->pc = 0x1CFA94u;
    SET_GPR_U32(ctx, 31, 0x1CFA9Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CFA94u, 0x1CFA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA9Cu;
label_1cfa9c:
    // 0x1cfa9c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cfa9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfaa0:
    // 0x1cfaa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfaa4:
    // 0x1cfaa4: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1cfaa4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1cfaa8:
    // 0x1cfaa8: 0x1080013b  beqz        $a0, . + 4 + (0x13B << 2)
label_1cfaac:
    if (ctx->pc == 0x1CFAACu) {
        ctx->pc = 0x1CFAB0u;
        goto label_1cfab0;
    }
    ctx->pc = 0x1CFAA8u;
    {
        const bool branch_taken_0x1cfaa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfaa8) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CFAB0u;
label_1cfab0:
    // 0x1cfab0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfab4:
    // 0x1cfab4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cfab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cfab8:
    // 0x1cfab8: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1cfab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_1cfabc:
    // 0x1cfabc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1cfabcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1cfac0:
    // 0x1cfac0: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_1cfac4:
    if (ctx->pc == 0x1CFAC4u) {
        ctx->pc = 0x1CFAC8u;
        goto label_1cfac8;
    }
    ctx->pc = 0x1CFAC0u;
    {
        const bool branch_taken_0x1cfac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfac0) {
            ctx->pc = 0x1CFB84u;
            goto label_1cfb84;
        }
    }
    ctx->pc = 0x1CFAC8u;
label_1cfac8:
    // 0x1cfac8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfacc:
    // 0x1cfacc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfad0:
    // 0x1cfad0: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1cfad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
label_1cfad4:
    // 0x1cfad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfad8:
    // 0x1cfad8: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cfad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfadc:
    // 0x1cfadc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfae0:
    // 0x1cfae0: 0xe4a01568  swc1        $f0, 0x1568($a1)
    ctx->pc = 0x1cfae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5480), bits); }
label_1cfae4:
    // 0x1cfae4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfae8:
    // 0x1cfae8: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cfae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfaec:
    // 0x1cfaec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfaecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfaf0:
    // 0x1cfaf0: 0xe4a01570  swc1        $f0, 0x1570($a1)
    ctx->pc = 0x1cfaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5488), bits); }
label_1cfaf4:
    // 0x1cfaf4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfaf8:
    // 0x1cfaf8: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1cfaf8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1cfafc:
    // 0x1cfafc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb00:
    // 0x1cfb00: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1cfb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1cfb04:
    // 0x1cfb04: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1cfb08:
    if (ctx->pc == 0x1CFB08u) {
        ctx->pc = 0x1CFB0Cu;
        goto label_1cfb0c;
    }
    ctx->pc = 0x1CFB04u;
    {
        const bool branch_taken_0x1cfb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfb04) {
            ctx->pc = 0x1CFB1Cu;
            goto label_1cfb1c;
        }
    }
    ctx->pc = 0x1CFB0Cu;
label_1cfb0c:
    // 0x1cfb0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb10:
    // 0x1cfb10: 0xc0571d0  jal         func_15C740
label_1cfb14:
    if (ctx->pc == 0x1CFB14u) {
        ctx->pc = 0x1CFB18u;
        goto label_1cfb18;
    }
    ctx->pc = 0x1CFB10u;
    SET_GPR_U32(ctx, 31, 0x1CFB18u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CFB10u, 0x1CFB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB18u;
label_1cfb18:
    // 0x1cfb18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cfb18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfb1c:
    // 0x1cfb1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cfb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfb20:
    // 0x1cfb20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb24:
    // 0x1cfb24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cfb24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1cfb28:
    // 0x1cfb28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cfb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cfb2c:
    // 0x1cfb2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb30:
    // 0x1cfb30: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1cfb30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1cfb34:
    // 0x1cfb34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb38:
    // 0x1cfb38: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cfb38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cfb3c:
    // 0x1cfb3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb40:
    // 0x1cfb40: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cfb40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cfb44:
    // 0x1cfb44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb48:
    // 0x1cfb48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1cfb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1cfb4c:
    // 0x1cfb4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfb50:
    // 0x1cfb50: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb54:
    // 0x1cfb54: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cfb54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1cfb58:
    // 0x1cfb58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb5c:
    // 0x1cfb5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cfb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cfb60:
    // 0x1cfb60: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cfb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cfb64:
    // 0x1cfb64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb68:
    // 0x1cfb68: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1cfb68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_1cfb6c:
    // 0x1cfb6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb70:
    // 0x1cfb70: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1cfb70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1cfb74:
    // 0x1cfb74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb78:
    // 0x1cfb78: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cfb78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1cfb7c:
    // 0x1cfb7c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1cfb80:
    if (ctx->pc == 0x1CFB80u) {
        ctx->pc = 0x1CFB84u;
        goto label_1cfb84;
    }
    ctx->pc = 0x1CFB7Cu;
    {
        const bool branch_taken_0x1cfb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfb7c) {
            ctx->pc = 0x1CFBB4u;
            goto label_1cfbb4;
        }
    }
    ctx->pc = 0x1CFB84u;
label_1cfb84:
    // 0x1cfb84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cfb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfb88:
    // 0x1cfb88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb8c:
    // 0x1cfb8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cfb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1cfb90:
    // 0x1cfb90: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb94:
    // 0x1cfb94: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1cfb94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cfb98:
    // 0x1cfb98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfb9c:
    // 0x1cfb9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cfb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cfba0:
    // 0x1cfba0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfba4:
    // 0x1cfba4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cfba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cfba8:
    // 0x1cfba8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1cfba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1cfbac:
    // 0x1cfbac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfbb0:
    // 0x1cfbb0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cfbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1cfbb4:
    // 0x1cfbb4: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_1cfbb8:
    if (ctx->pc == 0x1CFBB8u) {
        ctx->pc = 0x1CFBBCu;
        goto label_1cfbbc;
    }
    ctx->pc = 0x1CFBB4u;
    {
        const bool branch_taken_0x1cfbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfbb4) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CFBBCu;
label_1cfbbc:
    // 0x1cfbbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfbc0:
    // 0x1cfbc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfbc4:
    // 0x1cfbc4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cfbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1cfbc8:
    // 0x1cfbc8: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1cfbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1cfbcc:
    // 0x1cfbcc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cfbccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cfbd0:
    // 0x1cfbd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cfbd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cfbd4:
    // 0x1cfbd4: 0xc0965d0  jal         func_259740
label_1cfbd8:
    if (ctx->pc == 0x1CFBD8u) {
        ctx->pc = 0x1CFBDCu;
        goto label_1cfbdc;
    }
    ctx->pc = 0x1CFBD4u;
    SET_GPR_U32(ctx, 31, 0x1CFBDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CFBD4u, 0x1CFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBDCu;
label_1cfbdc:
    // 0x1cfbdc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cfbdcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfbe0:
    // 0x1cfbe0: 0xc067694  jal         func_19DA50
label_1cfbe4:
    if (ctx->pc == 0x1CFBE4u) {
        ctx->pc = 0x1CFBE8u;
        goto label_1cfbe8;
    }
    ctx->pc = 0x1CFBE0u;
    SET_GPR_U32(ctx, 31, 0x1CFBE8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CFBE0u, 0x1CFBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBE8u;
label_1cfbe8:
    // 0x1cfbe8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cfbe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfbec:
    // 0x1cfbec: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1cfbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1cfbf0:
    // 0x1cfbf0: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1cfbf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1cfbf4:
    // 0x1cfbf4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1cfbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1cfbf8:
    // 0x1cfbf8: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1cfbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1cfbfc:
    // 0x1cfbfc: 0x24b09230  addiu       $s0, $a1, -0x6DD0
    ctx->pc = 0x1cfbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939184));
label_1cfc00:
    // 0x1cfc00: 0x2033821  addu        $a3, $s0, $v1
    ctx->pc = 0x1cfc00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1cfc04:
    // 0x1cfc04: 0x94e80000  lhu         $t0, 0x0($a3)
    ctx->pc = 0x1cfc04u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1cfc08:
    // 0x1cfc08: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x1cfc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_1cfc0c:
    // 0x1cfc0c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1cfc0cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1cfc10:
    // 0x1cfc10: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x1cfc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
label_1cfc14:
    // 0x1cfc14: 0x34a34000  ori         $v1, $a1, 0x4000
    ctx->pc = 0x1cfc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_1cfc18:
    // 0x1cfc18: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cfc18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cfc1c:
    // 0x1cfc1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cfc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfc20:
    // 0x1cfc20: 0x8c460130  lw          $a2, 0x130($v0)
    ctx->pc = 0x1cfc20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1cfc24:
    // 0x1cfc24: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1cfc24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1cfc28:
    // 0x1cfc28: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x1cfc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_1cfc2c:
    // 0x1cfc2c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1cfc2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1cfc30:
    // 0x1cfc30: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1cfc30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cfc34:
    // 0x1cfc34: 0xc067b18  jal         func_19EC60
label_1cfc38:
    if (ctx->pc == 0x1CFC38u) {
        ctx->pc = 0x1CFC3Cu;
        goto label_1cfc3c;
    }
    ctx->pc = 0x1CFC34u;
    SET_GPR_U32(ctx, 31, 0x1CFC3Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CFC34u, 0x1CFC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC3Cu;
label_1cfc3c:
    // 0x1cfc3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cfc3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfc40:
    // 0x1cfc40: 0x3c04c2a0  lui         $a0, 0xC2A0
    ctx->pc = 0x1cfc40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49824 << 16));
label_1cfc44:
    // 0x1cfc44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cfc44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfc48:
    // 0x1cfc48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cfc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfc4c:
    // 0x1cfc4c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1cfc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1cfc50:
    // 0x1cfc50: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfc54:
    // 0x1cfc54: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x1cfc54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1cfc58:
    // 0x1cfc58: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1cfc58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1cfc5c:
    // 0x1cfc5c: 0xa0a70002  sb          $a3, 0x2($a1)
    ctx->pc = 0x1cfc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 7));
label_1cfc60:
    // 0x1cfc60: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cfc60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfc64:
    // 0x1cfc64: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1cfc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1cfc68:
    // 0x1cfc68: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1cfc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
label_1cfc6c:
    // 0x1cfc6c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cfc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1cfc70:
    // 0x1cfc70: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1cfc70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
label_1cfc74:
    // 0x1cfc74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfc78:
    // 0x1cfc78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cfc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cfc7c:
    // 0x1cfc7c: 0xc096b40  jal         func_25AD00
label_1cfc80:
    if (ctx->pc == 0x1CFC80u) {
        ctx->pc = 0x1CFC84u;
        goto label_1cfc84;
    }
    ctx->pc = 0x1CFC7Cu;
    SET_GPR_U32(ctx, 31, 0x1CFC84u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CFC7Cu, 0x1CFC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC84u;
label_1cfc84:
    // 0x1cfc84: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cfc84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfc88:
    // 0x1cfc88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfc8c:
    // 0x1cfc8c: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1cfc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfc90:
    // 0x1cfc90: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1cfc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_1cfc94:
    // 0x1cfc94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cfc94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfc98:
    // 0x1cfc98: 0x0  nop
    ctx->pc = 0x1cfc98u;
    // NOP
label_1cfc9c:
    // 0x1cfc9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfc9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cfca0:
    // 0x1cfca0: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1cfca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_1cfca4:
    // 0x1cfca4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfca8:
    // 0x1cfca8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1cfca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfcac:
    // 0x1cfcac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfcacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfcb0:
    // 0x1cfcb0: 0x0  nop
    ctx->pc = 0x1cfcb0u;
    // NOP
label_1cfcb4:
    // 0x1cfcb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfcb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfcb8:
    // 0x1cfcb8: 0x0  nop
    ctx->pc = 0x1cfcb8u;
    // NOP
label_1cfcbc:
    // 0x1cfcbc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1cfcc0:
    if (ctx->pc == 0x1CFCC0u) {
        ctx->pc = 0x1CFCC4u;
        goto label_1cfcc4;
    }
    ctx->pc = 0x1CFCBCu;
    {
        const bool branch_taken_0x1cfcbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfcbc) {
            ctx->pc = 0x1CFCD0u;
            goto label_1cfcd0;
        }
    }
    ctx->pc = 0x1CFCC4u;
label_1cfcc4:
    // 0x1cfcc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfcc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfcc8:
    // 0x1cfcc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfccc:
    // 0x1cfccc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1cfcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1cfcd0:
    // 0x1cfcd0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfcd4:
    // 0x1cfcd4: 0xc05cd10  jal         func_173440
label_1cfcd8:
    if (ctx->pc == 0x1CFCD8u) {
        ctx->pc = 0x1CFCDCu;
        goto label_1cfcdc;
    }
    ctx->pc = 0x1CFCD4u;
    SET_GPR_U32(ctx, 31, 0x1CFCDCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CFCD4u, 0x1CFCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCDCu;
label_1cfcdc:
    // 0x1cfcdc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cfcdcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfce0:
    // 0x1cfce0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cfce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cfce4:
    // 0x1cfce4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfce8:
    // 0x1cfce8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cfce8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cfcec:
    // 0x1cfcec: 0xc0573d8  jal         func_15CF60
label_1cfcf0:
    if (ctx->pc == 0x1CFCF0u) {
        ctx->pc = 0x1CFCF4u;
        goto label_1cfcf4;
    }
    ctx->pc = 0x1CFCECu;
    SET_GPR_U32(ctx, 31, 0x1CFCF4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CFCECu, 0x1CFCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCF4u;
label_1cfcf4:
    // 0x1cfcf4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cfcf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfcf8:
    // 0x1cfcf8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cfcf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cfcfc:
    // 0x1cfcfc: 0xc097530  jal         func_25D4C0
label_1cfd00:
    if (ctx->pc == 0x1CFD00u) {
        ctx->pc = 0x1CFD04u;
        goto label_1cfd04;
    }
    ctx->pc = 0x1CFCFCu;
    SET_GPR_U32(ctx, 31, 0x1CFD04u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CFCFCu, 0x1CFD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD04u;
label_1cfd04:
    // 0x1cfd04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cfd04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfd08:
    // 0x1cfd08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfd0c:
    // 0x1cfd0c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1cfd0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1cfd10:
    // 0x1cfd10: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
label_1cfd14:
    if (ctx->pc == 0x1CFD14u) {
        ctx->pc = 0x1CFD18u;
        goto label_1cfd18;
    }
    ctx->pc = 0x1CFD10u;
    {
        const bool branch_taken_0x1cfd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd10) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CFD18u;
label_1cfd18:
    // 0x1cfd18: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1cfd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cfd1c:
    // 0x1cfd1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfd20:
    // 0x1cfd20: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1cfd20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
label_1cfd24:
    // 0x1cfd24: 0x1000009c  b           . + 4 + (0x9C << 2)
label_1cfd28:
    if (ctx->pc == 0x1CFD28u) {
        ctx->pc = 0x1CFD2Cu;
        goto label_1cfd2c;
    }
    ctx->pc = 0x1CFD24u;
    {
        const bool branch_taken_0x1cfd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd24) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CFD2Cu;
label_1cfd2c:
    // 0x1cfd2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfd30:
    // 0x1cfd30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfd34:
    // 0x1cfd34: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cfd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1cfd38:
    // 0x1cfd38: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1cfd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1cfd3c:
    // 0x1cfd3c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cfd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cfd40:
    // 0x1cfd40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cfd40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cfd44:
    // 0x1cfd44: 0xc0965d0  jal         func_259740
label_1cfd48:
    if (ctx->pc == 0x1CFD48u) {
        ctx->pc = 0x1CFD4Cu;
        goto label_1cfd4c;
    }
    ctx->pc = 0x1CFD44u;
    SET_GPR_U32(ctx, 31, 0x1CFD4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CFD44u, 0x1CFD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD4Cu;
label_1cfd4c:
    // 0x1cfd4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cfd4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfd50:
    // 0x1cfd50: 0xc067694  jal         func_19DA50
label_1cfd54:
    if (ctx->pc == 0x1CFD54u) {
        ctx->pc = 0x1CFD58u;
        goto label_1cfd58;
    }
    ctx->pc = 0x1CFD50u;
    SET_GPR_U32(ctx, 31, 0x1CFD58u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CFD50u, 0x1CFD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD58u;
label_1cfd58:
    // 0x1cfd58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cfd58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfd5c:
    // 0x1cfd5c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1cfd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1cfd60:
    // 0x1cfd60: 0x30660003  andi        $a2, $v1, 0x3
    ctx->pc = 0x1cfd60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1cfd64:
    // 0x1cfd64: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1cfd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1cfd68:
    // 0x1cfd68: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1cfd68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1cfd6c:
    // 0x1cfd6c: 0x24a49230  addiu       $a0, $a1, -0x6DD0
    ctx->pc = 0x1cfd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939184));
label_1cfd70:
    // 0x1cfd70: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cfd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cfd74:
    // 0x1cfd74: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1cfd74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cfd78:
    // 0x1cfd78: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x1cfd78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1cfd7c:
    // 0x1cfd7c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1cfd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1cfd80:
    // 0x1cfd80: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1cfd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1cfd84:
    // 0x1cfd84: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cfd84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cfd88:
    // 0x1cfd88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfd8c:
    // 0x1cfd8c: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1cfd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_1cfd90:
    // 0x1cfd90: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1cfd90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1cfd94:
    // 0x1cfd94: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1cfd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1cfd98:
    // 0x1cfd98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1cfd98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cfd9c:
    // 0x1cfd9c: 0xc067b18  jal         func_19EC60
label_1cfda0:
    if (ctx->pc == 0x1CFDA0u) {
        ctx->pc = 0x1CFDA4u;
        goto label_1cfda4;
    }
    ctx->pc = 0x1CFD9Cu;
    SET_GPR_U32(ctx, 31, 0x1CFDA4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CFD9Cu, 0x1CFDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDA4u;
label_1cfda4:
    // 0x1cfda4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cfda4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfda8:
    // 0x1cfda8: 0x3c05c2a0  lui         $a1, 0xC2A0
    ctx->pc = 0x1cfda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49824 << 16));
label_1cfdac:
    // 0x1cfdac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cfdacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfdb0:
    // 0x1cfdb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfdb4:
    // 0x1cfdb4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1cfdb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1cfdb8:
    // 0x1cfdb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfdbc:
    // 0x1cfdbc: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1cfdbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1cfdc0:
    // 0x1cfdc0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1cfdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cfdc4:
    // 0x1cfdc4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cfdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1cfdc8:
    // 0x1cfdc8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfdcc:
    // 0x1cfdcc: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1cfdccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1cfdd0:
    // 0x1cfdd0: 0x3c078040  lui         $a3, 0x8040
    ctx->pc = 0x1cfdd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32832 << 16));
label_1cfdd4:
    // 0x1cfdd4: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x1cfdd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1cfdd8:
    // 0x1cfdd8: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x1cfdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
label_1cfddc:
    // 0x1cfddc: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cfddcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfde0:
    // 0x1cfde0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1cfde0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1cfde4:
    // 0x1cfde4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cfde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cfde8:
    // 0x1cfde8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cfde8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfdec:
    // 0x1cfdec: 0xc096b40  jal         func_25AD00
label_1cfdf0:
    if (ctx->pc == 0x1CFDF0u) {
        ctx->pc = 0x1CFDF4u;
        goto label_1cfdf4;
    }
    ctx->pc = 0x1CFDECu;
    SET_GPR_U32(ctx, 31, 0x1CFDF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CFDECu, 0x1CFDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDF4u;
label_1cfdf4:
    // 0x1cfdf4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1cfdf4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfdf8:
    // 0x1cfdf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfdfc:
    // 0x1cfdfc: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1cfdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfe00:
    // 0x1cfe00: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x1cfe00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_1cfe04:
    // 0x1cfe04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cfe04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfe08:
    // 0x1cfe08: 0x0  nop
    ctx->pc = 0x1cfe08u;
    // NOP
label_1cfe0c:
    // 0x1cfe0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfe0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cfe10:
    // 0x1cfe10: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1cfe10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1cfe14:
    // 0x1cfe14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfe18:
    // 0x1cfe18: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1cfe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfe1c:
    // 0x1cfe1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfe1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfe20:
    // 0x1cfe20: 0x0  nop
    ctx->pc = 0x1cfe20u;
    // NOP
label_1cfe24:
    // 0x1cfe24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfe24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfe28:
    // 0x1cfe28: 0x0  nop
    ctx->pc = 0x1cfe28u;
    // NOP
label_1cfe2c:
    // 0x1cfe2c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1cfe30:
    if (ctx->pc == 0x1CFE30u) {
        ctx->pc = 0x1CFE34u;
        goto label_1cfe34;
    }
    ctx->pc = 0x1CFE2Cu;
    {
        const bool branch_taken_0x1cfe2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfe2c) {
            ctx->pc = 0x1CFE40u;
            goto label_1cfe40;
        }
    }
    ctx->pc = 0x1CFE34u;
label_1cfe34:
    // 0x1cfe34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfe34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfe38:
    // 0x1cfe38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfe3c:
    // 0x1cfe3c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1cfe3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1cfe40:
    // 0x1cfe40: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfe40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfe44:
    // 0x1cfe44: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cfe44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1cfe48:
    // 0x1cfe48: 0xc05cd10  jal         func_173440
label_1cfe4c:
    if (ctx->pc == 0x1CFE4Cu) {
        ctx->pc = 0x1CFE50u;
        goto label_1cfe50;
    }
    ctx->pc = 0x1CFE48u;
    SET_GPR_U32(ctx, 31, 0x1CFE50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CFE48u, 0x1CFE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE50u;
label_1cfe50:
    // 0x1cfe50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cfe50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cfe54:
    // 0x1cfe54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cfe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfe58:
    // 0x1cfe58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cfe58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfe5c:
    // 0x1cfe5c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cfe5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cfe60:
    // 0x1cfe60: 0xc0573d8  jal         func_15CF60
label_1cfe64:
    if (ctx->pc == 0x1CFE64u) {
        ctx->pc = 0x1CFE68u;
        goto label_1cfe68;
    }
    ctx->pc = 0x1CFE60u;
    SET_GPR_U32(ctx, 31, 0x1CFE68u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CFE60u, 0x1CFE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE68u;
label_1cfe68:
    // 0x1cfe68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cfe68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfe6c:
    // 0x1cfe6c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cfe6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cfe70:
    // 0x1cfe70: 0xc097530  jal         func_25D4C0
label_1cfe74:
    if (ctx->pc == 0x1CFE74u) {
        ctx->pc = 0x1CFE78u;
        goto label_1cfe78;
    }
    ctx->pc = 0x1CFE70u;
    SET_GPR_U32(ctx, 31, 0x1CFE78u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CFE70u, 0x1CFE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE78u;
label_1cfe78:
    // 0x1cfe78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cfe78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfe7c:
    // 0x1cfe7c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfe80:
    // 0x1cfe80: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x1cfe80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
label_1cfe84:
    // 0x1cfe84: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_1cfe88:
    if (ctx->pc == 0x1CFE88u) {
        ctx->pc = 0x1CFE8Cu;
        goto label_1cfe8c;
    }
    ctx->pc = 0x1CFE84u;
    {
        const bool branch_taken_0x1cfe84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfe84) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CFE8Cu;
label_1cfe8c:
    // 0x1cfe8c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfe90:
    // 0x1cfe90: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1cfe90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1cfe94:
    // 0x1cfe94: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1cfe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1cfe98:
    // 0x1cfe98: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x1cfe98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1cfe9c:
    // 0x1cfe9c: 0x10a00030  beqz        $a1, . + 4 + (0x30 << 2)
label_1cfea0:
    if (ctx->pc == 0x1CFEA0u) {
        ctx->pc = 0x1CFEA4u;
        goto label_1cfea4;
    }
    ctx->pc = 0x1CFE9Cu;
    {
        const bool branch_taken_0x1cfe9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfe9c) {
            ctx->pc = 0x1CFF60u;
            goto label_1cff60;
        }
    }
    ctx->pc = 0x1CFEA4u;
label_1cfea4:
    // 0x1cfea4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfea8:
    // 0x1cfea8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfeac:
    // 0x1cfeac: 0xe4801564  swc1        $f0, 0x1564($a0)
    ctx->pc = 0x1cfeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5476), bits); }
label_1cfeb0:
    // 0x1cfeb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfeb4:
    // 0x1cfeb4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cfeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfeb8:
    // 0x1cfeb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfebc:
    // 0x1cfebc: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cfebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
label_1cfec0:
    // 0x1cfec0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfec4:
    // 0x1cfec4: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cfec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfec8:
    // 0x1cfec8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cfec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfecc:
    // 0x1cfecc: 0xe4c01570  swc1        $f0, 0x1570($a2)
    ctx->pc = 0x1cfeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 5488), bits); }
label_1cfed0:
    // 0x1cfed0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfed4:
    // 0x1cfed4: 0xa4a01574  sh          $zero, 0x1574($a1)
    ctx->pc = 0x1cfed4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1cfed8:
    // 0x1cfed8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfedc:
    // 0x1cfedc: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1cfedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
label_1cfee0:
    // 0x1cfee0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1cfee4:
    if (ctx->pc == 0x1CFEE4u) {
        ctx->pc = 0x1CFEE8u;
        goto label_1cfee8;
    }
    ctx->pc = 0x1CFEE0u;
    {
        const bool branch_taken_0x1cfee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfee0) {
            ctx->pc = 0x1CFEF8u;
            goto label_1cfef8;
        }
    }
    ctx->pc = 0x1CFEE8u;
label_1cfee8:
    // 0x1cfee8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cfeec:
    // 0x1cfeec: 0xc0571d0  jal         func_15C740
label_1cfef0:
    if (ctx->pc == 0x1CFEF0u) {
        ctx->pc = 0x1CFEF4u;
        goto label_1cfef4;
    }
    ctx->pc = 0x1CFEECu;
    SET_GPR_U32(ctx, 31, 0x1CFEF4u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CFEECu, 0x1CFEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEF4u;
label_1cfef4:
    // 0x1cfef4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cfef4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cfef8:
    // 0x1cfef8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cfef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfefc:
    // 0x1cfefc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cfefcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff00:
    // 0x1cff00: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x1cff00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_1cff04:
    // 0x1cff04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cff08:
    // 0x1cff08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cff08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff0c:
    // 0x1cff0c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1cff0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1cff10:
    // 0x1cff10: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cff10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff14:
    // 0x1cff14: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1cff14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cff18:
    // 0x1cff18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff1c:
    // 0x1cff1c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cff1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cff20:
    // 0x1cff20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff24:
    // 0x1cff24: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cff24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1cff28:
    // 0x1cff28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cff28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cff2c:
    // 0x1cff2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cff2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff30:
    // 0x1cff30: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x1cff30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_1cff34:
    // 0x1cff34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff38:
    // 0x1cff38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cff38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cff3c:
    // 0x1cff3c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cff40:
    // 0x1cff40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff44:
    // 0x1cff44: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1cff44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_1cff48:
    // 0x1cff48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff4c:
    // 0x1cff4c: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1cff4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1cff50:
    // 0x1cff50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff54:
    // 0x1cff54: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cff54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1cff58:
    // 0x1cff58: 0x1000000d  b           . + 4 + (0xD << 2)
label_1cff5c:
    if (ctx->pc == 0x1CFF5Cu) {
        ctx->pc = 0x1CFF60u;
        goto label_1cff60;
    }
    ctx->pc = 0x1CFF58u;
    {
        const bool branch_taken_0x1cff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff58) {
            ctx->pc = 0x1CFF90u;
            goto label_1cff90;
        }
    }
    ctx->pc = 0x1CFF60u;
label_1cff60:
    // 0x1cff60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cff60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cff64:
    // 0x1cff64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff68:
    // 0x1cff68: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cff68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1cff6c:
    // 0x1cff6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff70:
    // 0x1cff70: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1cff70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cff74:
    // 0x1cff74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cff74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff78:
    // 0x1cff78: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cff78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cff7c:
    // 0x1cff7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff80:
    // 0x1cff80: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cff80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cff84:
    // 0x1cff84: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1cff84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1cff88:
    // 0x1cff88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cff8c:
    // 0x1cff8c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1cff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_1cff90:
    // 0x1cff90: 0x10000001  b           . + 4 + (0x1 << 2)
label_1cff94:
    if (ctx->pc == 0x1CFF94u) {
        ctx->pc = 0x1CFF98u;
        goto label_1cff98;
    }
    ctx->pc = 0x1CFF90u;
    {
        const bool branch_taken_0x1cff90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff90) {
            ctx->pc = 0x1CFF98u;
            goto label_1cff98;
        }
    }
    ctx->pc = 0x1CFF98u;
label_1cff98:
    // 0x1cff98: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1cff98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cff9c:
    // 0x1cff9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cff9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cffa0:
    // 0x1cffa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cffa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cffa4:
    // 0x1cffa4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1cffa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1cffa8:
    // 0x1cffa8: 0x3e00008  jr          $ra
label_1cffac:
    if (ctx->pc == 0x1CFFACu) {
        ctx->pc = 0x1CFFB0u;
        goto label_fallthrough_0x1cffa8;
    }
    ctx->pc = 0x1CFFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cffa8:
    ctx->pc = 0x1CFFB0u;
}
