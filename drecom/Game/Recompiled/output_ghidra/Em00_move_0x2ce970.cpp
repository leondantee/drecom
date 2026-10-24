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

// Function: Em00_move
// Address: 0x2ce970 - 0x2cfbd8
void Em00_move_0x2ce970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_move_0x2ce970");
#endif

    switch (ctx->pc) {
        case 0x2ce970u: goto label_2ce970;
        case 0x2ce974u: goto label_2ce974;
        case 0x2ce978u: goto label_2ce978;
        case 0x2ce97cu: goto label_2ce97c;
        case 0x2ce980u: goto label_2ce980;
        case 0x2ce984u: goto label_2ce984;
        case 0x2ce988u: goto label_2ce988;
        case 0x2ce98cu: goto label_2ce98c;
        case 0x2ce990u: goto label_2ce990;
        case 0x2ce994u: goto label_2ce994;
        case 0x2ce998u: goto label_2ce998;
        case 0x2ce99cu: goto label_2ce99c;
        case 0x2ce9a0u: goto label_2ce9a0;
        case 0x2ce9a4u: goto label_2ce9a4;
        case 0x2ce9a8u: goto label_2ce9a8;
        case 0x2ce9acu: goto label_2ce9ac;
        case 0x2ce9b0u: goto label_2ce9b0;
        case 0x2ce9b4u: goto label_2ce9b4;
        case 0x2ce9b8u: goto label_2ce9b8;
        case 0x2ce9bcu: goto label_2ce9bc;
        case 0x2ce9c0u: goto label_2ce9c0;
        case 0x2ce9c4u: goto label_2ce9c4;
        case 0x2ce9c8u: goto label_2ce9c8;
        case 0x2ce9ccu: goto label_2ce9cc;
        case 0x2ce9d0u: goto label_2ce9d0;
        case 0x2ce9d4u: goto label_2ce9d4;
        case 0x2ce9d8u: goto label_2ce9d8;
        case 0x2ce9dcu: goto label_2ce9dc;
        case 0x2ce9e0u: goto label_2ce9e0;
        case 0x2ce9e4u: goto label_2ce9e4;
        case 0x2ce9e8u: goto label_2ce9e8;
        case 0x2ce9ecu: goto label_2ce9ec;
        case 0x2ce9f0u: goto label_2ce9f0;
        case 0x2ce9f4u: goto label_2ce9f4;
        case 0x2ce9f8u: goto label_2ce9f8;
        case 0x2ce9fcu: goto label_2ce9fc;
        case 0x2cea00u: goto label_2cea00;
        case 0x2cea04u: goto label_2cea04;
        case 0x2cea08u: goto label_2cea08;
        case 0x2cea0cu: goto label_2cea0c;
        case 0x2cea10u: goto label_2cea10;
        case 0x2cea14u: goto label_2cea14;
        case 0x2cea18u: goto label_2cea18;
        case 0x2cea1cu: goto label_2cea1c;
        case 0x2cea20u: goto label_2cea20;
        case 0x2cea24u: goto label_2cea24;
        case 0x2cea28u: goto label_2cea28;
        case 0x2cea2cu: goto label_2cea2c;
        case 0x2cea30u: goto label_2cea30;
        case 0x2cea34u: goto label_2cea34;
        case 0x2cea38u: goto label_2cea38;
        case 0x2cea3cu: goto label_2cea3c;
        case 0x2cea40u: goto label_2cea40;
        case 0x2cea44u: goto label_2cea44;
        case 0x2cea48u: goto label_2cea48;
        case 0x2cea4cu: goto label_2cea4c;
        case 0x2cea50u: goto label_2cea50;
        case 0x2cea54u: goto label_2cea54;
        case 0x2cea58u: goto label_2cea58;
        case 0x2cea5cu: goto label_2cea5c;
        case 0x2cea60u: goto label_2cea60;
        case 0x2cea64u: goto label_2cea64;
        case 0x2cea68u: goto label_2cea68;
        case 0x2cea6cu: goto label_2cea6c;
        case 0x2cea70u: goto label_2cea70;
        case 0x2cea74u: goto label_2cea74;
        case 0x2cea78u: goto label_2cea78;
        case 0x2cea7cu: goto label_2cea7c;
        case 0x2cea80u: goto label_2cea80;
        case 0x2cea84u: goto label_2cea84;
        case 0x2cea88u: goto label_2cea88;
        case 0x2cea8cu: goto label_2cea8c;
        case 0x2cea90u: goto label_2cea90;
        case 0x2cea94u: goto label_2cea94;
        case 0x2cea98u: goto label_2cea98;
        case 0x2cea9cu: goto label_2cea9c;
        case 0x2ceaa0u: goto label_2ceaa0;
        case 0x2ceaa4u: goto label_2ceaa4;
        case 0x2ceaa8u: goto label_2ceaa8;
        case 0x2ceaacu: goto label_2ceaac;
        case 0x2ceab0u: goto label_2ceab0;
        case 0x2ceab4u: goto label_2ceab4;
        case 0x2ceab8u: goto label_2ceab8;
        case 0x2ceabcu: goto label_2ceabc;
        case 0x2ceac0u: goto label_2ceac0;
        case 0x2ceac4u: goto label_2ceac4;
        case 0x2ceac8u: goto label_2ceac8;
        case 0x2ceaccu: goto label_2ceacc;
        case 0x2cead0u: goto label_2cead0;
        case 0x2cead4u: goto label_2cead4;
        case 0x2cead8u: goto label_2cead8;
        case 0x2ceadcu: goto label_2ceadc;
        case 0x2ceae0u: goto label_2ceae0;
        case 0x2ceae4u: goto label_2ceae4;
        case 0x2ceae8u: goto label_2ceae8;
        case 0x2ceaecu: goto label_2ceaec;
        case 0x2ceaf0u: goto label_2ceaf0;
        case 0x2ceaf4u: goto label_2ceaf4;
        case 0x2ceaf8u: goto label_2ceaf8;
        case 0x2ceafcu: goto label_2ceafc;
        case 0x2ceb00u: goto label_2ceb00;
        case 0x2ceb04u: goto label_2ceb04;
        case 0x2ceb08u: goto label_2ceb08;
        case 0x2ceb0cu: goto label_2ceb0c;
        case 0x2ceb10u: goto label_2ceb10;
        case 0x2ceb14u: goto label_2ceb14;
        case 0x2ceb18u: goto label_2ceb18;
        case 0x2ceb1cu: goto label_2ceb1c;
        case 0x2ceb20u: goto label_2ceb20;
        case 0x2ceb24u: goto label_2ceb24;
        case 0x2ceb28u: goto label_2ceb28;
        case 0x2ceb2cu: goto label_2ceb2c;
        case 0x2ceb30u: goto label_2ceb30;
        case 0x2ceb34u: goto label_2ceb34;
        case 0x2ceb38u: goto label_2ceb38;
        case 0x2ceb3cu: goto label_2ceb3c;
        case 0x2ceb40u: goto label_2ceb40;
        case 0x2ceb44u: goto label_2ceb44;
        case 0x2ceb48u: goto label_2ceb48;
        case 0x2ceb4cu: goto label_2ceb4c;
        case 0x2ceb50u: goto label_2ceb50;
        case 0x2ceb54u: goto label_2ceb54;
        case 0x2ceb58u: goto label_2ceb58;
        case 0x2ceb5cu: goto label_2ceb5c;
        case 0x2ceb60u: goto label_2ceb60;
        case 0x2ceb64u: goto label_2ceb64;
        case 0x2ceb68u: goto label_2ceb68;
        case 0x2ceb6cu: goto label_2ceb6c;
        case 0x2ceb70u: goto label_2ceb70;
        case 0x2ceb74u: goto label_2ceb74;
        case 0x2ceb78u: goto label_2ceb78;
        case 0x2ceb7cu: goto label_2ceb7c;
        case 0x2ceb80u: goto label_2ceb80;
        case 0x2ceb84u: goto label_2ceb84;
        case 0x2ceb88u: goto label_2ceb88;
        case 0x2ceb8cu: goto label_2ceb8c;
        case 0x2ceb90u: goto label_2ceb90;
        case 0x2ceb94u: goto label_2ceb94;
        case 0x2ceb98u: goto label_2ceb98;
        case 0x2ceb9cu: goto label_2ceb9c;
        case 0x2ceba0u: goto label_2ceba0;
        case 0x2ceba4u: goto label_2ceba4;
        case 0x2ceba8u: goto label_2ceba8;
        case 0x2cebacu: goto label_2cebac;
        case 0x2cebb0u: goto label_2cebb0;
        case 0x2cebb4u: goto label_2cebb4;
        case 0x2cebb8u: goto label_2cebb8;
        case 0x2cebbcu: goto label_2cebbc;
        case 0x2cebc0u: goto label_2cebc0;
        case 0x2cebc4u: goto label_2cebc4;
        case 0x2cebc8u: goto label_2cebc8;
        case 0x2cebccu: goto label_2cebcc;
        case 0x2cebd0u: goto label_2cebd0;
        case 0x2cebd4u: goto label_2cebd4;
        case 0x2cebd8u: goto label_2cebd8;
        case 0x2cebdcu: goto label_2cebdc;
        case 0x2cebe0u: goto label_2cebe0;
        case 0x2cebe4u: goto label_2cebe4;
        case 0x2cebe8u: goto label_2cebe8;
        case 0x2cebecu: goto label_2cebec;
        case 0x2cebf0u: goto label_2cebf0;
        case 0x2cebf4u: goto label_2cebf4;
        case 0x2cebf8u: goto label_2cebf8;
        case 0x2cebfcu: goto label_2cebfc;
        case 0x2cec00u: goto label_2cec00;
        case 0x2cec04u: goto label_2cec04;
        case 0x2cec08u: goto label_2cec08;
        case 0x2cec0cu: goto label_2cec0c;
        case 0x2cec10u: goto label_2cec10;
        case 0x2cec14u: goto label_2cec14;
        case 0x2cec18u: goto label_2cec18;
        case 0x2cec1cu: goto label_2cec1c;
        case 0x2cec20u: goto label_2cec20;
        case 0x2cec24u: goto label_2cec24;
        case 0x2cec28u: goto label_2cec28;
        case 0x2cec2cu: goto label_2cec2c;
        case 0x2cec30u: goto label_2cec30;
        case 0x2cec34u: goto label_2cec34;
        case 0x2cec38u: goto label_2cec38;
        case 0x2cec3cu: goto label_2cec3c;
        case 0x2cec40u: goto label_2cec40;
        case 0x2cec44u: goto label_2cec44;
        case 0x2cec48u: goto label_2cec48;
        case 0x2cec4cu: goto label_2cec4c;
        case 0x2cec50u: goto label_2cec50;
        case 0x2cec54u: goto label_2cec54;
        case 0x2cec58u: goto label_2cec58;
        case 0x2cec5cu: goto label_2cec5c;
        case 0x2cec60u: goto label_2cec60;
        case 0x2cec64u: goto label_2cec64;
        case 0x2cec68u: goto label_2cec68;
        case 0x2cec6cu: goto label_2cec6c;
        case 0x2cec70u: goto label_2cec70;
        case 0x2cec74u: goto label_2cec74;
        case 0x2cec78u: goto label_2cec78;
        case 0x2cec7cu: goto label_2cec7c;
        case 0x2cec80u: goto label_2cec80;
        case 0x2cec84u: goto label_2cec84;
        case 0x2cec88u: goto label_2cec88;
        case 0x2cec8cu: goto label_2cec8c;
        case 0x2cec90u: goto label_2cec90;
        case 0x2cec94u: goto label_2cec94;
        case 0x2cec98u: goto label_2cec98;
        case 0x2cec9cu: goto label_2cec9c;
        case 0x2ceca0u: goto label_2ceca0;
        case 0x2ceca4u: goto label_2ceca4;
        case 0x2ceca8u: goto label_2ceca8;
        case 0x2cecacu: goto label_2cecac;
        case 0x2cecb0u: goto label_2cecb0;
        case 0x2cecb4u: goto label_2cecb4;
        case 0x2cecb8u: goto label_2cecb8;
        case 0x2cecbcu: goto label_2cecbc;
        case 0x2cecc0u: goto label_2cecc0;
        case 0x2cecc4u: goto label_2cecc4;
        case 0x2cecc8u: goto label_2cecc8;
        case 0x2cecccu: goto label_2ceccc;
        case 0x2cecd0u: goto label_2cecd0;
        case 0x2cecd4u: goto label_2cecd4;
        case 0x2cecd8u: goto label_2cecd8;
        case 0x2cecdcu: goto label_2cecdc;
        case 0x2cece0u: goto label_2cece0;
        case 0x2cece4u: goto label_2cece4;
        case 0x2cece8u: goto label_2cece8;
        case 0x2cececu: goto label_2cecec;
        case 0x2cecf0u: goto label_2cecf0;
        case 0x2cecf4u: goto label_2cecf4;
        case 0x2cecf8u: goto label_2cecf8;
        case 0x2cecfcu: goto label_2cecfc;
        case 0x2ced00u: goto label_2ced00;
        case 0x2ced04u: goto label_2ced04;
        case 0x2ced08u: goto label_2ced08;
        case 0x2ced0cu: goto label_2ced0c;
        case 0x2ced10u: goto label_2ced10;
        case 0x2ced14u: goto label_2ced14;
        case 0x2ced18u: goto label_2ced18;
        case 0x2ced1cu: goto label_2ced1c;
        case 0x2ced20u: goto label_2ced20;
        case 0x2ced24u: goto label_2ced24;
        case 0x2ced28u: goto label_2ced28;
        case 0x2ced2cu: goto label_2ced2c;
        case 0x2ced30u: goto label_2ced30;
        case 0x2ced34u: goto label_2ced34;
        case 0x2ced38u: goto label_2ced38;
        case 0x2ced3cu: goto label_2ced3c;
        case 0x2ced40u: goto label_2ced40;
        case 0x2ced44u: goto label_2ced44;
        case 0x2ced48u: goto label_2ced48;
        case 0x2ced4cu: goto label_2ced4c;
        case 0x2ced50u: goto label_2ced50;
        case 0x2ced54u: goto label_2ced54;
        case 0x2ced58u: goto label_2ced58;
        case 0x2ced5cu: goto label_2ced5c;
        case 0x2ced60u: goto label_2ced60;
        case 0x2ced64u: goto label_2ced64;
        case 0x2ced68u: goto label_2ced68;
        case 0x2ced6cu: goto label_2ced6c;
        case 0x2ced70u: goto label_2ced70;
        case 0x2ced74u: goto label_2ced74;
        case 0x2ced78u: goto label_2ced78;
        case 0x2ced7cu: goto label_2ced7c;
        case 0x2ced80u: goto label_2ced80;
        case 0x2ced84u: goto label_2ced84;
        case 0x2ced88u: goto label_2ced88;
        case 0x2ced8cu: goto label_2ced8c;
        case 0x2ced90u: goto label_2ced90;
        case 0x2ced94u: goto label_2ced94;
        case 0x2ced98u: goto label_2ced98;
        case 0x2ced9cu: goto label_2ced9c;
        case 0x2ceda0u: goto label_2ceda0;
        case 0x2ceda4u: goto label_2ceda4;
        case 0x2ceda8u: goto label_2ceda8;
        case 0x2cedacu: goto label_2cedac;
        case 0x2cedb0u: goto label_2cedb0;
        case 0x2cedb4u: goto label_2cedb4;
        case 0x2cedb8u: goto label_2cedb8;
        case 0x2cedbcu: goto label_2cedbc;
        case 0x2cedc0u: goto label_2cedc0;
        case 0x2cedc4u: goto label_2cedc4;
        case 0x2cedc8u: goto label_2cedc8;
        case 0x2cedccu: goto label_2cedcc;
        case 0x2cedd0u: goto label_2cedd0;
        case 0x2cedd4u: goto label_2cedd4;
        case 0x2cedd8u: goto label_2cedd8;
        case 0x2ceddcu: goto label_2ceddc;
        case 0x2cede0u: goto label_2cede0;
        case 0x2cede4u: goto label_2cede4;
        case 0x2cede8u: goto label_2cede8;
        case 0x2cedecu: goto label_2cedec;
        case 0x2cedf0u: goto label_2cedf0;
        case 0x2cedf4u: goto label_2cedf4;
        case 0x2cedf8u: goto label_2cedf8;
        case 0x2cedfcu: goto label_2cedfc;
        case 0x2cee00u: goto label_2cee00;
        case 0x2cee04u: goto label_2cee04;
        case 0x2cee08u: goto label_2cee08;
        case 0x2cee0cu: goto label_2cee0c;
        case 0x2cee10u: goto label_2cee10;
        case 0x2cee14u: goto label_2cee14;
        case 0x2cee18u: goto label_2cee18;
        case 0x2cee1cu: goto label_2cee1c;
        case 0x2cee20u: goto label_2cee20;
        case 0x2cee24u: goto label_2cee24;
        case 0x2cee28u: goto label_2cee28;
        case 0x2cee2cu: goto label_2cee2c;
        case 0x2cee30u: goto label_2cee30;
        case 0x2cee34u: goto label_2cee34;
        case 0x2cee38u: goto label_2cee38;
        case 0x2cee3cu: goto label_2cee3c;
        case 0x2cee40u: goto label_2cee40;
        case 0x2cee44u: goto label_2cee44;
        case 0x2cee48u: goto label_2cee48;
        case 0x2cee4cu: goto label_2cee4c;
        case 0x2cee50u: goto label_2cee50;
        case 0x2cee54u: goto label_2cee54;
        case 0x2cee58u: goto label_2cee58;
        case 0x2cee5cu: goto label_2cee5c;
        case 0x2cee60u: goto label_2cee60;
        case 0x2cee64u: goto label_2cee64;
        case 0x2cee68u: goto label_2cee68;
        case 0x2cee6cu: goto label_2cee6c;
        case 0x2cee70u: goto label_2cee70;
        case 0x2cee74u: goto label_2cee74;
        case 0x2cee78u: goto label_2cee78;
        case 0x2cee7cu: goto label_2cee7c;
        case 0x2cee80u: goto label_2cee80;
        case 0x2cee84u: goto label_2cee84;
        case 0x2cee88u: goto label_2cee88;
        case 0x2cee8cu: goto label_2cee8c;
        case 0x2cee90u: goto label_2cee90;
        case 0x2cee94u: goto label_2cee94;
        case 0x2cee98u: goto label_2cee98;
        case 0x2cee9cu: goto label_2cee9c;
        case 0x2ceea0u: goto label_2ceea0;
        case 0x2ceea4u: goto label_2ceea4;
        case 0x2ceea8u: goto label_2ceea8;
        case 0x2ceeacu: goto label_2ceeac;
        case 0x2ceeb0u: goto label_2ceeb0;
        case 0x2ceeb4u: goto label_2ceeb4;
        case 0x2ceeb8u: goto label_2ceeb8;
        case 0x2ceebcu: goto label_2ceebc;
        case 0x2ceec0u: goto label_2ceec0;
        case 0x2ceec4u: goto label_2ceec4;
        case 0x2ceec8u: goto label_2ceec8;
        case 0x2ceeccu: goto label_2ceecc;
        case 0x2ceed0u: goto label_2ceed0;
        case 0x2ceed4u: goto label_2ceed4;
        case 0x2ceed8u: goto label_2ceed8;
        case 0x2ceedcu: goto label_2ceedc;
        case 0x2ceee0u: goto label_2ceee0;
        case 0x2ceee4u: goto label_2ceee4;
        case 0x2ceee8u: goto label_2ceee8;
        case 0x2ceeecu: goto label_2ceeec;
        case 0x2ceef0u: goto label_2ceef0;
        case 0x2ceef4u: goto label_2ceef4;
        case 0x2ceef8u: goto label_2ceef8;
        case 0x2ceefcu: goto label_2ceefc;
        case 0x2cef00u: goto label_2cef00;
        case 0x2cef04u: goto label_2cef04;
        case 0x2cef08u: goto label_2cef08;
        case 0x2cef0cu: goto label_2cef0c;
        case 0x2cef10u: goto label_2cef10;
        case 0x2cef14u: goto label_2cef14;
        case 0x2cef18u: goto label_2cef18;
        case 0x2cef1cu: goto label_2cef1c;
        case 0x2cef20u: goto label_2cef20;
        case 0x2cef24u: goto label_2cef24;
        case 0x2cef28u: goto label_2cef28;
        case 0x2cef2cu: goto label_2cef2c;
        case 0x2cef30u: goto label_2cef30;
        case 0x2cef34u: goto label_2cef34;
        case 0x2cef38u: goto label_2cef38;
        case 0x2cef3cu: goto label_2cef3c;
        case 0x2cef40u: goto label_2cef40;
        case 0x2cef44u: goto label_2cef44;
        case 0x2cef48u: goto label_2cef48;
        case 0x2cef4cu: goto label_2cef4c;
        case 0x2cef50u: goto label_2cef50;
        case 0x2cef54u: goto label_2cef54;
        case 0x2cef58u: goto label_2cef58;
        case 0x2cef5cu: goto label_2cef5c;
        case 0x2cef60u: goto label_2cef60;
        case 0x2cef64u: goto label_2cef64;
        case 0x2cef68u: goto label_2cef68;
        case 0x2cef6cu: goto label_2cef6c;
        case 0x2cef70u: goto label_2cef70;
        case 0x2cef74u: goto label_2cef74;
        case 0x2cef78u: goto label_2cef78;
        case 0x2cef7cu: goto label_2cef7c;
        case 0x2cef80u: goto label_2cef80;
        case 0x2cef84u: goto label_2cef84;
        case 0x2cef88u: goto label_2cef88;
        case 0x2cef8cu: goto label_2cef8c;
        case 0x2cef90u: goto label_2cef90;
        case 0x2cef94u: goto label_2cef94;
        case 0x2cef98u: goto label_2cef98;
        case 0x2cef9cu: goto label_2cef9c;
        case 0x2cefa0u: goto label_2cefa0;
        case 0x2cefa4u: goto label_2cefa4;
        case 0x2cefa8u: goto label_2cefa8;
        case 0x2cefacu: goto label_2cefac;
        case 0x2cefb0u: goto label_2cefb0;
        case 0x2cefb4u: goto label_2cefb4;
        case 0x2cefb8u: goto label_2cefb8;
        case 0x2cefbcu: goto label_2cefbc;
        case 0x2cefc0u: goto label_2cefc0;
        case 0x2cefc4u: goto label_2cefc4;
        case 0x2cefc8u: goto label_2cefc8;
        case 0x2cefccu: goto label_2cefcc;
        case 0x2cefd0u: goto label_2cefd0;
        case 0x2cefd4u: goto label_2cefd4;
        case 0x2cefd8u: goto label_2cefd8;
        case 0x2cefdcu: goto label_2cefdc;
        case 0x2cefe0u: goto label_2cefe0;
        case 0x2cefe4u: goto label_2cefe4;
        case 0x2cefe8u: goto label_2cefe8;
        case 0x2cefecu: goto label_2cefec;
        case 0x2ceff0u: goto label_2ceff0;
        case 0x2ceff4u: goto label_2ceff4;
        case 0x2ceff8u: goto label_2ceff8;
        case 0x2ceffcu: goto label_2ceffc;
        case 0x2cf000u: goto label_2cf000;
        case 0x2cf004u: goto label_2cf004;
        case 0x2cf008u: goto label_2cf008;
        case 0x2cf00cu: goto label_2cf00c;
        case 0x2cf010u: goto label_2cf010;
        case 0x2cf014u: goto label_2cf014;
        case 0x2cf018u: goto label_2cf018;
        case 0x2cf01cu: goto label_2cf01c;
        case 0x2cf020u: goto label_2cf020;
        case 0x2cf024u: goto label_2cf024;
        case 0x2cf028u: goto label_2cf028;
        case 0x2cf02cu: goto label_2cf02c;
        case 0x2cf030u: goto label_2cf030;
        case 0x2cf034u: goto label_2cf034;
        case 0x2cf038u: goto label_2cf038;
        case 0x2cf03cu: goto label_2cf03c;
        case 0x2cf040u: goto label_2cf040;
        case 0x2cf044u: goto label_2cf044;
        case 0x2cf048u: goto label_2cf048;
        case 0x2cf04cu: goto label_2cf04c;
        case 0x2cf050u: goto label_2cf050;
        case 0x2cf054u: goto label_2cf054;
        case 0x2cf058u: goto label_2cf058;
        case 0x2cf05cu: goto label_2cf05c;
        case 0x2cf060u: goto label_2cf060;
        case 0x2cf064u: goto label_2cf064;
        case 0x2cf068u: goto label_2cf068;
        case 0x2cf06cu: goto label_2cf06c;
        case 0x2cf070u: goto label_2cf070;
        case 0x2cf074u: goto label_2cf074;
        case 0x2cf078u: goto label_2cf078;
        case 0x2cf07cu: goto label_2cf07c;
        case 0x2cf080u: goto label_2cf080;
        case 0x2cf084u: goto label_2cf084;
        case 0x2cf088u: goto label_2cf088;
        case 0x2cf08cu: goto label_2cf08c;
        case 0x2cf090u: goto label_2cf090;
        case 0x2cf094u: goto label_2cf094;
        case 0x2cf098u: goto label_2cf098;
        case 0x2cf09cu: goto label_2cf09c;
        case 0x2cf0a0u: goto label_2cf0a0;
        case 0x2cf0a4u: goto label_2cf0a4;
        case 0x2cf0a8u: goto label_2cf0a8;
        case 0x2cf0acu: goto label_2cf0ac;
        case 0x2cf0b0u: goto label_2cf0b0;
        case 0x2cf0b4u: goto label_2cf0b4;
        case 0x2cf0b8u: goto label_2cf0b8;
        case 0x2cf0bcu: goto label_2cf0bc;
        case 0x2cf0c0u: goto label_2cf0c0;
        case 0x2cf0c4u: goto label_2cf0c4;
        case 0x2cf0c8u: goto label_2cf0c8;
        case 0x2cf0ccu: goto label_2cf0cc;
        case 0x2cf0d0u: goto label_2cf0d0;
        case 0x2cf0d4u: goto label_2cf0d4;
        case 0x2cf0d8u: goto label_2cf0d8;
        case 0x2cf0dcu: goto label_2cf0dc;
        case 0x2cf0e0u: goto label_2cf0e0;
        case 0x2cf0e4u: goto label_2cf0e4;
        case 0x2cf0e8u: goto label_2cf0e8;
        case 0x2cf0ecu: goto label_2cf0ec;
        case 0x2cf0f0u: goto label_2cf0f0;
        case 0x2cf0f4u: goto label_2cf0f4;
        case 0x2cf0f8u: goto label_2cf0f8;
        case 0x2cf0fcu: goto label_2cf0fc;
        case 0x2cf100u: goto label_2cf100;
        case 0x2cf104u: goto label_2cf104;
        case 0x2cf108u: goto label_2cf108;
        case 0x2cf10cu: goto label_2cf10c;
        case 0x2cf110u: goto label_2cf110;
        case 0x2cf114u: goto label_2cf114;
        case 0x2cf118u: goto label_2cf118;
        case 0x2cf11cu: goto label_2cf11c;
        case 0x2cf120u: goto label_2cf120;
        case 0x2cf124u: goto label_2cf124;
        case 0x2cf128u: goto label_2cf128;
        case 0x2cf12cu: goto label_2cf12c;
        case 0x2cf130u: goto label_2cf130;
        case 0x2cf134u: goto label_2cf134;
        case 0x2cf138u: goto label_2cf138;
        case 0x2cf13cu: goto label_2cf13c;
        case 0x2cf140u: goto label_2cf140;
        case 0x2cf144u: goto label_2cf144;
        case 0x2cf148u: goto label_2cf148;
        case 0x2cf14cu: goto label_2cf14c;
        case 0x2cf150u: goto label_2cf150;
        case 0x2cf154u: goto label_2cf154;
        case 0x2cf158u: goto label_2cf158;
        case 0x2cf15cu: goto label_2cf15c;
        case 0x2cf160u: goto label_2cf160;
        case 0x2cf164u: goto label_2cf164;
        case 0x2cf168u: goto label_2cf168;
        case 0x2cf16cu: goto label_2cf16c;
        case 0x2cf170u: goto label_2cf170;
        case 0x2cf174u: goto label_2cf174;
        case 0x2cf178u: goto label_2cf178;
        case 0x2cf17cu: goto label_2cf17c;
        case 0x2cf180u: goto label_2cf180;
        case 0x2cf184u: goto label_2cf184;
        case 0x2cf188u: goto label_2cf188;
        case 0x2cf18cu: goto label_2cf18c;
        case 0x2cf190u: goto label_2cf190;
        case 0x2cf194u: goto label_2cf194;
        case 0x2cf198u: goto label_2cf198;
        case 0x2cf19cu: goto label_2cf19c;
        case 0x2cf1a0u: goto label_2cf1a0;
        case 0x2cf1a4u: goto label_2cf1a4;
        case 0x2cf1a8u: goto label_2cf1a8;
        case 0x2cf1acu: goto label_2cf1ac;
        case 0x2cf1b0u: goto label_2cf1b0;
        case 0x2cf1b4u: goto label_2cf1b4;
        case 0x2cf1b8u: goto label_2cf1b8;
        case 0x2cf1bcu: goto label_2cf1bc;
        case 0x2cf1c0u: goto label_2cf1c0;
        case 0x2cf1c4u: goto label_2cf1c4;
        case 0x2cf1c8u: goto label_2cf1c8;
        case 0x2cf1ccu: goto label_2cf1cc;
        case 0x2cf1d0u: goto label_2cf1d0;
        case 0x2cf1d4u: goto label_2cf1d4;
        case 0x2cf1d8u: goto label_2cf1d8;
        case 0x2cf1dcu: goto label_2cf1dc;
        case 0x2cf1e0u: goto label_2cf1e0;
        case 0x2cf1e4u: goto label_2cf1e4;
        case 0x2cf1e8u: goto label_2cf1e8;
        case 0x2cf1ecu: goto label_2cf1ec;
        case 0x2cf1f0u: goto label_2cf1f0;
        case 0x2cf1f4u: goto label_2cf1f4;
        case 0x2cf1f8u: goto label_2cf1f8;
        case 0x2cf1fcu: goto label_2cf1fc;
        case 0x2cf200u: goto label_2cf200;
        case 0x2cf204u: goto label_2cf204;
        case 0x2cf208u: goto label_2cf208;
        case 0x2cf20cu: goto label_2cf20c;
        case 0x2cf210u: goto label_2cf210;
        case 0x2cf214u: goto label_2cf214;
        case 0x2cf218u: goto label_2cf218;
        case 0x2cf21cu: goto label_2cf21c;
        case 0x2cf220u: goto label_2cf220;
        case 0x2cf224u: goto label_2cf224;
        case 0x2cf228u: goto label_2cf228;
        case 0x2cf22cu: goto label_2cf22c;
        case 0x2cf230u: goto label_2cf230;
        case 0x2cf234u: goto label_2cf234;
        case 0x2cf238u: goto label_2cf238;
        case 0x2cf23cu: goto label_2cf23c;
        case 0x2cf240u: goto label_2cf240;
        case 0x2cf244u: goto label_2cf244;
        case 0x2cf248u: goto label_2cf248;
        case 0x2cf24cu: goto label_2cf24c;
        case 0x2cf250u: goto label_2cf250;
        case 0x2cf254u: goto label_2cf254;
        case 0x2cf258u: goto label_2cf258;
        case 0x2cf25cu: goto label_2cf25c;
        case 0x2cf260u: goto label_2cf260;
        case 0x2cf264u: goto label_2cf264;
        case 0x2cf268u: goto label_2cf268;
        case 0x2cf26cu: goto label_2cf26c;
        case 0x2cf270u: goto label_2cf270;
        case 0x2cf274u: goto label_2cf274;
        case 0x2cf278u: goto label_2cf278;
        case 0x2cf27cu: goto label_2cf27c;
        case 0x2cf280u: goto label_2cf280;
        case 0x2cf284u: goto label_2cf284;
        case 0x2cf288u: goto label_2cf288;
        case 0x2cf28cu: goto label_2cf28c;
        case 0x2cf290u: goto label_2cf290;
        case 0x2cf294u: goto label_2cf294;
        case 0x2cf298u: goto label_2cf298;
        case 0x2cf29cu: goto label_2cf29c;
        case 0x2cf2a0u: goto label_2cf2a0;
        case 0x2cf2a4u: goto label_2cf2a4;
        case 0x2cf2a8u: goto label_2cf2a8;
        case 0x2cf2acu: goto label_2cf2ac;
        case 0x2cf2b0u: goto label_2cf2b0;
        case 0x2cf2b4u: goto label_2cf2b4;
        case 0x2cf2b8u: goto label_2cf2b8;
        case 0x2cf2bcu: goto label_2cf2bc;
        case 0x2cf2c0u: goto label_2cf2c0;
        case 0x2cf2c4u: goto label_2cf2c4;
        case 0x2cf2c8u: goto label_2cf2c8;
        case 0x2cf2ccu: goto label_2cf2cc;
        case 0x2cf2d0u: goto label_2cf2d0;
        case 0x2cf2d4u: goto label_2cf2d4;
        case 0x2cf2d8u: goto label_2cf2d8;
        case 0x2cf2dcu: goto label_2cf2dc;
        case 0x2cf2e0u: goto label_2cf2e0;
        case 0x2cf2e4u: goto label_2cf2e4;
        case 0x2cf2e8u: goto label_2cf2e8;
        case 0x2cf2ecu: goto label_2cf2ec;
        case 0x2cf2f0u: goto label_2cf2f0;
        case 0x2cf2f4u: goto label_2cf2f4;
        case 0x2cf2f8u: goto label_2cf2f8;
        case 0x2cf2fcu: goto label_2cf2fc;
        case 0x2cf300u: goto label_2cf300;
        case 0x2cf304u: goto label_2cf304;
        case 0x2cf308u: goto label_2cf308;
        case 0x2cf30cu: goto label_2cf30c;
        case 0x2cf310u: goto label_2cf310;
        case 0x2cf314u: goto label_2cf314;
        case 0x2cf318u: goto label_2cf318;
        case 0x2cf31cu: goto label_2cf31c;
        case 0x2cf320u: goto label_2cf320;
        case 0x2cf324u: goto label_2cf324;
        case 0x2cf328u: goto label_2cf328;
        case 0x2cf32cu: goto label_2cf32c;
        case 0x2cf330u: goto label_2cf330;
        case 0x2cf334u: goto label_2cf334;
        case 0x2cf338u: goto label_2cf338;
        case 0x2cf33cu: goto label_2cf33c;
        case 0x2cf340u: goto label_2cf340;
        case 0x2cf344u: goto label_2cf344;
        case 0x2cf348u: goto label_2cf348;
        case 0x2cf34cu: goto label_2cf34c;
        case 0x2cf350u: goto label_2cf350;
        case 0x2cf354u: goto label_2cf354;
        case 0x2cf358u: goto label_2cf358;
        case 0x2cf35cu: goto label_2cf35c;
        case 0x2cf360u: goto label_2cf360;
        case 0x2cf364u: goto label_2cf364;
        case 0x2cf368u: goto label_2cf368;
        case 0x2cf36cu: goto label_2cf36c;
        case 0x2cf370u: goto label_2cf370;
        case 0x2cf374u: goto label_2cf374;
        case 0x2cf378u: goto label_2cf378;
        case 0x2cf37cu: goto label_2cf37c;
        case 0x2cf380u: goto label_2cf380;
        case 0x2cf384u: goto label_2cf384;
        case 0x2cf388u: goto label_2cf388;
        case 0x2cf38cu: goto label_2cf38c;
        case 0x2cf390u: goto label_2cf390;
        case 0x2cf394u: goto label_2cf394;
        case 0x2cf398u: goto label_2cf398;
        case 0x2cf39cu: goto label_2cf39c;
        case 0x2cf3a0u: goto label_2cf3a0;
        case 0x2cf3a4u: goto label_2cf3a4;
        case 0x2cf3a8u: goto label_2cf3a8;
        case 0x2cf3acu: goto label_2cf3ac;
        case 0x2cf3b0u: goto label_2cf3b0;
        case 0x2cf3b4u: goto label_2cf3b4;
        case 0x2cf3b8u: goto label_2cf3b8;
        case 0x2cf3bcu: goto label_2cf3bc;
        case 0x2cf3c0u: goto label_2cf3c0;
        case 0x2cf3c4u: goto label_2cf3c4;
        case 0x2cf3c8u: goto label_2cf3c8;
        case 0x2cf3ccu: goto label_2cf3cc;
        case 0x2cf3d0u: goto label_2cf3d0;
        case 0x2cf3d4u: goto label_2cf3d4;
        case 0x2cf3d8u: goto label_2cf3d8;
        case 0x2cf3dcu: goto label_2cf3dc;
        case 0x2cf3e0u: goto label_2cf3e0;
        case 0x2cf3e4u: goto label_2cf3e4;
        case 0x2cf3e8u: goto label_2cf3e8;
        case 0x2cf3ecu: goto label_2cf3ec;
        case 0x2cf3f0u: goto label_2cf3f0;
        case 0x2cf3f4u: goto label_2cf3f4;
        case 0x2cf3f8u: goto label_2cf3f8;
        case 0x2cf3fcu: goto label_2cf3fc;
        case 0x2cf400u: goto label_2cf400;
        case 0x2cf404u: goto label_2cf404;
        case 0x2cf408u: goto label_2cf408;
        case 0x2cf40cu: goto label_2cf40c;
        case 0x2cf410u: goto label_2cf410;
        case 0x2cf414u: goto label_2cf414;
        case 0x2cf418u: goto label_2cf418;
        case 0x2cf41cu: goto label_2cf41c;
        case 0x2cf420u: goto label_2cf420;
        case 0x2cf424u: goto label_2cf424;
        case 0x2cf428u: goto label_2cf428;
        case 0x2cf42cu: goto label_2cf42c;
        case 0x2cf430u: goto label_2cf430;
        case 0x2cf434u: goto label_2cf434;
        case 0x2cf438u: goto label_2cf438;
        case 0x2cf43cu: goto label_2cf43c;
        case 0x2cf440u: goto label_2cf440;
        case 0x2cf444u: goto label_2cf444;
        case 0x2cf448u: goto label_2cf448;
        case 0x2cf44cu: goto label_2cf44c;
        case 0x2cf450u: goto label_2cf450;
        case 0x2cf454u: goto label_2cf454;
        case 0x2cf458u: goto label_2cf458;
        case 0x2cf45cu: goto label_2cf45c;
        case 0x2cf460u: goto label_2cf460;
        case 0x2cf464u: goto label_2cf464;
        case 0x2cf468u: goto label_2cf468;
        case 0x2cf46cu: goto label_2cf46c;
        case 0x2cf470u: goto label_2cf470;
        case 0x2cf474u: goto label_2cf474;
        case 0x2cf478u: goto label_2cf478;
        case 0x2cf47cu: goto label_2cf47c;
        case 0x2cf480u: goto label_2cf480;
        case 0x2cf484u: goto label_2cf484;
        case 0x2cf488u: goto label_2cf488;
        case 0x2cf48cu: goto label_2cf48c;
        case 0x2cf490u: goto label_2cf490;
        case 0x2cf494u: goto label_2cf494;
        case 0x2cf498u: goto label_2cf498;
        case 0x2cf49cu: goto label_2cf49c;
        case 0x2cf4a0u: goto label_2cf4a0;
        case 0x2cf4a4u: goto label_2cf4a4;
        case 0x2cf4a8u: goto label_2cf4a8;
        case 0x2cf4acu: goto label_2cf4ac;
        case 0x2cf4b0u: goto label_2cf4b0;
        case 0x2cf4b4u: goto label_2cf4b4;
        case 0x2cf4b8u: goto label_2cf4b8;
        case 0x2cf4bcu: goto label_2cf4bc;
        case 0x2cf4c0u: goto label_2cf4c0;
        case 0x2cf4c4u: goto label_2cf4c4;
        case 0x2cf4c8u: goto label_2cf4c8;
        case 0x2cf4ccu: goto label_2cf4cc;
        case 0x2cf4d0u: goto label_2cf4d0;
        case 0x2cf4d4u: goto label_2cf4d4;
        case 0x2cf4d8u: goto label_2cf4d8;
        case 0x2cf4dcu: goto label_2cf4dc;
        case 0x2cf4e0u: goto label_2cf4e0;
        case 0x2cf4e4u: goto label_2cf4e4;
        case 0x2cf4e8u: goto label_2cf4e8;
        case 0x2cf4ecu: goto label_2cf4ec;
        case 0x2cf4f0u: goto label_2cf4f0;
        case 0x2cf4f4u: goto label_2cf4f4;
        case 0x2cf4f8u: goto label_2cf4f8;
        case 0x2cf4fcu: goto label_2cf4fc;
        case 0x2cf500u: goto label_2cf500;
        case 0x2cf504u: goto label_2cf504;
        case 0x2cf508u: goto label_2cf508;
        case 0x2cf50cu: goto label_2cf50c;
        case 0x2cf510u: goto label_2cf510;
        case 0x2cf514u: goto label_2cf514;
        case 0x2cf518u: goto label_2cf518;
        case 0x2cf51cu: goto label_2cf51c;
        case 0x2cf520u: goto label_2cf520;
        case 0x2cf524u: goto label_2cf524;
        case 0x2cf528u: goto label_2cf528;
        case 0x2cf52cu: goto label_2cf52c;
        case 0x2cf530u: goto label_2cf530;
        case 0x2cf534u: goto label_2cf534;
        case 0x2cf538u: goto label_2cf538;
        case 0x2cf53cu: goto label_2cf53c;
        case 0x2cf540u: goto label_2cf540;
        case 0x2cf544u: goto label_2cf544;
        case 0x2cf548u: goto label_2cf548;
        case 0x2cf54cu: goto label_2cf54c;
        case 0x2cf550u: goto label_2cf550;
        case 0x2cf554u: goto label_2cf554;
        case 0x2cf558u: goto label_2cf558;
        case 0x2cf55cu: goto label_2cf55c;
        case 0x2cf560u: goto label_2cf560;
        case 0x2cf564u: goto label_2cf564;
        case 0x2cf568u: goto label_2cf568;
        case 0x2cf56cu: goto label_2cf56c;
        case 0x2cf570u: goto label_2cf570;
        case 0x2cf574u: goto label_2cf574;
        case 0x2cf578u: goto label_2cf578;
        case 0x2cf57cu: goto label_2cf57c;
        case 0x2cf580u: goto label_2cf580;
        case 0x2cf584u: goto label_2cf584;
        case 0x2cf588u: goto label_2cf588;
        case 0x2cf58cu: goto label_2cf58c;
        case 0x2cf590u: goto label_2cf590;
        case 0x2cf594u: goto label_2cf594;
        case 0x2cf598u: goto label_2cf598;
        case 0x2cf59cu: goto label_2cf59c;
        case 0x2cf5a0u: goto label_2cf5a0;
        case 0x2cf5a4u: goto label_2cf5a4;
        case 0x2cf5a8u: goto label_2cf5a8;
        case 0x2cf5acu: goto label_2cf5ac;
        case 0x2cf5b0u: goto label_2cf5b0;
        case 0x2cf5b4u: goto label_2cf5b4;
        case 0x2cf5b8u: goto label_2cf5b8;
        case 0x2cf5bcu: goto label_2cf5bc;
        case 0x2cf5c0u: goto label_2cf5c0;
        case 0x2cf5c4u: goto label_2cf5c4;
        case 0x2cf5c8u: goto label_2cf5c8;
        case 0x2cf5ccu: goto label_2cf5cc;
        case 0x2cf5d0u: goto label_2cf5d0;
        case 0x2cf5d4u: goto label_2cf5d4;
        case 0x2cf5d8u: goto label_2cf5d8;
        case 0x2cf5dcu: goto label_2cf5dc;
        case 0x2cf5e0u: goto label_2cf5e0;
        case 0x2cf5e4u: goto label_2cf5e4;
        case 0x2cf5e8u: goto label_2cf5e8;
        case 0x2cf5ecu: goto label_2cf5ec;
        case 0x2cf5f0u: goto label_2cf5f0;
        case 0x2cf5f4u: goto label_2cf5f4;
        case 0x2cf5f8u: goto label_2cf5f8;
        case 0x2cf5fcu: goto label_2cf5fc;
        case 0x2cf600u: goto label_2cf600;
        case 0x2cf604u: goto label_2cf604;
        case 0x2cf608u: goto label_2cf608;
        case 0x2cf60cu: goto label_2cf60c;
        case 0x2cf610u: goto label_2cf610;
        case 0x2cf614u: goto label_2cf614;
        case 0x2cf618u: goto label_2cf618;
        case 0x2cf61cu: goto label_2cf61c;
        case 0x2cf620u: goto label_2cf620;
        case 0x2cf624u: goto label_2cf624;
        case 0x2cf628u: goto label_2cf628;
        case 0x2cf62cu: goto label_2cf62c;
        case 0x2cf630u: goto label_2cf630;
        case 0x2cf634u: goto label_2cf634;
        case 0x2cf638u: goto label_2cf638;
        case 0x2cf63cu: goto label_2cf63c;
        case 0x2cf640u: goto label_2cf640;
        case 0x2cf644u: goto label_2cf644;
        case 0x2cf648u: goto label_2cf648;
        case 0x2cf64cu: goto label_2cf64c;
        case 0x2cf650u: goto label_2cf650;
        case 0x2cf654u: goto label_2cf654;
        case 0x2cf658u: goto label_2cf658;
        case 0x2cf65cu: goto label_2cf65c;
        case 0x2cf660u: goto label_2cf660;
        case 0x2cf664u: goto label_2cf664;
        case 0x2cf668u: goto label_2cf668;
        case 0x2cf66cu: goto label_2cf66c;
        case 0x2cf670u: goto label_2cf670;
        case 0x2cf674u: goto label_2cf674;
        case 0x2cf678u: goto label_2cf678;
        case 0x2cf67cu: goto label_2cf67c;
        case 0x2cf680u: goto label_2cf680;
        case 0x2cf684u: goto label_2cf684;
        case 0x2cf688u: goto label_2cf688;
        case 0x2cf68cu: goto label_2cf68c;
        case 0x2cf690u: goto label_2cf690;
        case 0x2cf694u: goto label_2cf694;
        case 0x2cf698u: goto label_2cf698;
        case 0x2cf69cu: goto label_2cf69c;
        case 0x2cf6a0u: goto label_2cf6a0;
        case 0x2cf6a4u: goto label_2cf6a4;
        case 0x2cf6a8u: goto label_2cf6a8;
        case 0x2cf6acu: goto label_2cf6ac;
        case 0x2cf6b0u: goto label_2cf6b0;
        case 0x2cf6b4u: goto label_2cf6b4;
        case 0x2cf6b8u: goto label_2cf6b8;
        case 0x2cf6bcu: goto label_2cf6bc;
        case 0x2cf6c0u: goto label_2cf6c0;
        case 0x2cf6c4u: goto label_2cf6c4;
        case 0x2cf6c8u: goto label_2cf6c8;
        case 0x2cf6ccu: goto label_2cf6cc;
        case 0x2cf6d0u: goto label_2cf6d0;
        case 0x2cf6d4u: goto label_2cf6d4;
        case 0x2cf6d8u: goto label_2cf6d8;
        case 0x2cf6dcu: goto label_2cf6dc;
        case 0x2cf6e0u: goto label_2cf6e0;
        case 0x2cf6e4u: goto label_2cf6e4;
        case 0x2cf6e8u: goto label_2cf6e8;
        case 0x2cf6ecu: goto label_2cf6ec;
        case 0x2cf6f0u: goto label_2cf6f0;
        case 0x2cf6f4u: goto label_2cf6f4;
        case 0x2cf6f8u: goto label_2cf6f8;
        case 0x2cf6fcu: goto label_2cf6fc;
        case 0x2cf700u: goto label_2cf700;
        case 0x2cf704u: goto label_2cf704;
        case 0x2cf708u: goto label_2cf708;
        case 0x2cf70cu: goto label_2cf70c;
        case 0x2cf710u: goto label_2cf710;
        case 0x2cf714u: goto label_2cf714;
        case 0x2cf718u: goto label_2cf718;
        case 0x2cf71cu: goto label_2cf71c;
        case 0x2cf720u: goto label_2cf720;
        case 0x2cf724u: goto label_2cf724;
        case 0x2cf728u: goto label_2cf728;
        case 0x2cf72cu: goto label_2cf72c;
        case 0x2cf730u: goto label_2cf730;
        case 0x2cf734u: goto label_2cf734;
        case 0x2cf738u: goto label_2cf738;
        case 0x2cf73cu: goto label_2cf73c;
        case 0x2cf740u: goto label_2cf740;
        case 0x2cf744u: goto label_2cf744;
        case 0x2cf748u: goto label_2cf748;
        case 0x2cf74cu: goto label_2cf74c;
        case 0x2cf750u: goto label_2cf750;
        case 0x2cf754u: goto label_2cf754;
        case 0x2cf758u: goto label_2cf758;
        case 0x2cf75cu: goto label_2cf75c;
        case 0x2cf760u: goto label_2cf760;
        case 0x2cf764u: goto label_2cf764;
        case 0x2cf768u: goto label_2cf768;
        case 0x2cf76cu: goto label_2cf76c;
        case 0x2cf770u: goto label_2cf770;
        case 0x2cf774u: goto label_2cf774;
        case 0x2cf778u: goto label_2cf778;
        case 0x2cf77cu: goto label_2cf77c;
        case 0x2cf780u: goto label_2cf780;
        case 0x2cf784u: goto label_2cf784;
        case 0x2cf788u: goto label_2cf788;
        case 0x2cf78cu: goto label_2cf78c;
        case 0x2cf790u: goto label_2cf790;
        case 0x2cf794u: goto label_2cf794;
        case 0x2cf798u: goto label_2cf798;
        case 0x2cf79cu: goto label_2cf79c;
        case 0x2cf7a0u: goto label_2cf7a0;
        case 0x2cf7a4u: goto label_2cf7a4;
        case 0x2cf7a8u: goto label_2cf7a8;
        case 0x2cf7acu: goto label_2cf7ac;
        case 0x2cf7b0u: goto label_2cf7b0;
        case 0x2cf7b4u: goto label_2cf7b4;
        case 0x2cf7b8u: goto label_2cf7b8;
        case 0x2cf7bcu: goto label_2cf7bc;
        case 0x2cf7c0u: goto label_2cf7c0;
        case 0x2cf7c4u: goto label_2cf7c4;
        case 0x2cf7c8u: goto label_2cf7c8;
        case 0x2cf7ccu: goto label_2cf7cc;
        case 0x2cf7d0u: goto label_2cf7d0;
        case 0x2cf7d4u: goto label_2cf7d4;
        case 0x2cf7d8u: goto label_2cf7d8;
        case 0x2cf7dcu: goto label_2cf7dc;
        case 0x2cf7e0u: goto label_2cf7e0;
        case 0x2cf7e4u: goto label_2cf7e4;
        case 0x2cf7e8u: goto label_2cf7e8;
        case 0x2cf7ecu: goto label_2cf7ec;
        case 0x2cf7f0u: goto label_2cf7f0;
        case 0x2cf7f4u: goto label_2cf7f4;
        case 0x2cf7f8u: goto label_2cf7f8;
        case 0x2cf7fcu: goto label_2cf7fc;
        case 0x2cf800u: goto label_2cf800;
        case 0x2cf804u: goto label_2cf804;
        case 0x2cf808u: goto label_2cf808;
        case 0x2cf80cu: goto label_2cf80c;
        case 0x2cf810u: goto label_2cf810;
        case 0x2cf814u: goto label_2cf814;
        case 0x2cf818u: goto label_2cf818;
        case 0x2cf81cu: goto label_2cf81c;
        case 0x2cf820u: goto label_2cf820;
        case 0x2cf824u: goto label_2cf824;
        case 0x2cf828u: goto label_2cf828;
        case 0x2cf82cu: goto label_2cf82c;
        case 0x2cf830u: goto label_2cf830;
        case 0x2cf834u: goto label_2cf834;
        case 0x2cf838u: goto label_2cf838;
        case 0x2cf83cu: goto label_2cf83c;
        case 0x2cf840u: goto label_2cf840;
        case 0x2cf844u: goto label_2cf844;
        case 0x2cf848u: goto label_2cf848;
        case 0x2cf84cu: goto label_2cf84c;
        case 0x2cf850u: goto label_2cf850;
        case 0x2cf854u: goto label_2cf854;
        case 0x2cf858u: goto label_2cf858;
        case 0x2cf85cu: goto label_2cf85c;
        case 0x2cf860u: goto label_2cf860;
        case 0x2cf864u: goto label_2cf864;
        case 0x2cf868u: goto label_2cf868;
        case 0x2cf86cu: goto label_2cf86c;
        case 0x2cf870u: goto label_2cf870;
        case 0x2cf874u: goto label_2cf874;
        case 0x2cf878u: goto label_2cf878;
        case 0x2cf87cu: goto label_2cf87c;
        case 0x2cf880u: goto label_2cf880;
        case 0x2cf884u: goto label_2cf884;
        case 0x2cf888u: goto label_2cf888;
        case 0x2cf88cu: goto label_2cf88c;
        case 0x2cf890u: goto label_2cf890;
        case 0x2cf894u: goto label_2cf894;
        case 0x2cf898u: goto label_2cf898;
        case 0x2cf89cu: goto label_2cf89c;
        case 0x2cf8a0u: goto label_2cf8a0;
        case 0x2cf8a4u: goto label_2cf8a4;
        case 0x2cf8a8u: goto label_2cf8a8;
        case 0x2cf8acu: goto label_2cf8ac;
        case 0x2cf8b0u: goto label_2cf8b0;
        case 0x2cf8b4u: goto label_2cf8b4;
        case 0x2cf8b8u: goto label_2cf8b8;
        case 0x2cf8bcu: goto label_2cf8bc;
        case 0x2cf8c0u: goto label_2cf8c0;
        case 0x2cf8c4u: goto label_2cf8c4;
        case 0x2cf8c8u: goto label_2cf8c8;
        case 0x2cf8ccu: goto label_2cf8cc;
        case 0x2cf8d0u: goto label_2cf8d0;
        case 0x2cf8d4u: goto label_2cf8d4;
        case 0x2cf8d8u: goto label_2cf8d8;
        case 0x2cf8dcu: goto label_2cf8dc;
        case 0x2cf8e0u: goto label_2cf8e0;
        case 0x2cf8e4u: goto label_2cf8e4;
        case 0x2cf8e8u: goto label_2cf8e8;
        case 0x2cf8ecu: goto label_2cf8ec;
        case 0x2cf8f0u: goto label_2cf8f0;
        case 0x2cf8f4u: goto label_2cf8f4;
        case 0x2cf8f8u: goto label_2cf8f8;
        case 0x2cf8fcu: goto label_2cf8fc;
        case 0x2cf900u: goto label_2cf900;
        case 0x2cf904u: goto label_2cf904;
        case 0x2cf908u: goto label_2cf908;
        case 0x2cf90cu: goto label_2cf90c;
        case 0x2cf910u: goto label_2cf910;
        case 0x2cf914u: goto label_2cf914;
        case 0x2cf918u: goto label_2cf918;
        case 0x2cf91cu: goto label_2cf91c;
        case 0x2cf920u: goto label_2cf920;
        case 0x2cf924u: goto label_2cf924;
        case 0x2cf928u: goto label_2cf928;
        case 0x2cf92cu: goto label_2cf92c;
        case 0x2cf930u: goto label_2cf930;
        case 0x2cf934u: goto label_2cf934;
        case 0x2cf938u: goto label_2cf938;
        case 0x2cf93cu: goto label_2cf93c;
        case 0x2cf940u: goto label_2cf940;
        case 0x2cf944u: goto label_2cf944;
        case 0x2cf948u: goto label_2cf948;
        case 0x2cf94cu: goto label_2cf94c;
        case 0x2cf950u: goto label_2cf950;
        case 0x2cf954u: goto label_2cf954;
        case 0x2cf958u: goto label_2cf958;
        case 0x2cf95cu: goto label_2cf95c;
        case 0x2cf960u: goto label_2cf960;
        case 0x2cf964u: goto label_2cf964;
        case 0x2cf968u: goto label_2cf968;
        case 0x2cf96cu: goto label_2cf96c;
        case 0x2cf970u: goto label_2cf970;
        case 0x2cf974u: goto label_2cf974;
        case 0x2cf978u: goto label_2cf978;
        case 0x2cf97cu: goto label_2cf97c;
        case 0x2cf980u: goto label_2cf980;
        case 0x2cf984u: goto label_2cf984;
        case 0x2cf988u: goto label_2cf988;
        case 0x2cf98cu: goto label_2cf98c;
        case 0x2cf990u: goto label_2cf990;
        case 0x2cf994u: goto label_2cf994;
        case 0x2cf998u: goto label_2cf998;
        case 0x2cf99cu: goto label_2cf99c;
        case 0x2cf9a0u: goto label_2cf9a0;
        case 0x2cf9a4u: goto label_2cf9a4;
        case 0x2cf9a8u: goto label_2cf9a8;
        case 0x2cf9acu: goto label_2cf9ac;
        case 0x2cf9b0u: goto label_2cf9b0;
        case 0x2cf9b4u: goto label_2cf9b4;
        case 0x2cf9b8u: goto label_2cf9b8;
        case 0x2cf9bcu: goto label_2cf9bc;
        case 0x2cf9c0u: goto label_2cf9c0;
        case 0x2cf9c4u: goto label_2cf9c4;
        case 0x2cf9c8u: goto label_2cf9c8;
        case 0x2cf9ccu: goto label_2cf9cc;
        case 0x2cf9d0u: goto label_2cf9d0;
        case 0x2cf9d4u: goto label_2cf9d4;
        case 0x2cf9d8u: goto label_2cf9d8;
        case 0x2cf9dcu: goto label_2cf9dc;
        case 0x2cf9e0u: goto label_2cf9e0;
        case 0x2cf9e4u: goto label_2cf9e4;
        case 0x2cf9e8u: goto label_2cf9e8;
        case 0x2cf9ecu: goto label_2cf9ec;
        case 0x2cf9f0u: goto label_2cf9f0;
        case 0x2cf9f4u: goto label_2cf9f4;
        case 0x2cf9f8u: goto label_2cf9f8;
        case 0x2cf9fcu: goto label_2cf9fc;
        case 0x2cfa00u: goto label_2cfa00;
        case 0x2cfa04u: goto label_2cfa04;
        case 0x2cfa08u: goto label_2cfa08;
        case 0x2cfa0cu: goto label_2cfa0c;
        case 0x2cfa10u: goto label_2cfa10;
        case 0x2cfa14u: goto label_2cfa14;
        case 0x2cfa18u: goto label_2cfa18;
        case 0x2cfa1cu: goto label_2cfa1c;
        case 0x2cfa20u: goto label_2cfa20;
        case 0x2cfa24u: goto label_2cfa24;
        case 0x2cfa28u: goto label_2cfa28;
        case 0x2cfa2cu: goto label_2cfa2c;
        case 0x2cfa30u: goto label_2cfa30;
        case 0x2cfa34u: goto label_2cfa34;
        case 0x2cfa38u: goto label_2cfa38;
        case 0x2cfa3cu: goto label_2cfa3c;
        case 0x2cfa40u: goto label_2cfa40;
        case 0x2cfa44u: goto label_2cfa44;
        case 0x2cfa48u: goto label_2cfa48;
        case 0x2cfa4cu: goto label_2cfa4c;
        case 0x2cfa50u: goto label_2cfa50;
        case 0x2cfa54u: goto label_2cfa54;
        case 0x2cfa58u: goto label_2cfa58;
        case 0x2cfa5cu: goto label_2cfa5c;
        case 0x2cfa60u: goto label_2cfa60;
        case 0x2cfa64u: goto label_2cfa64;
        case 0x2cfa68u: goto label_2cfa68;
        case 0x2cfa6cu: goto label_2cfa6c;
        case 0x2cfa70u: goto label_2cfa70;
        case 0x2cfa74u: goto label_2cfa74;
        case 0x2cfa78u: goto label_2cfa78;
        case 0x2cfa7cu: goto label_2cfa7c;
        case 0x2cfa80u: goto label_2cfa80;
        case 0x2cfa84u: goto label_2cfa84;
        case 0x2cfa88u: goto label_2cfa88;
        case 0x2cfa8cu: goto label_2cfa8c;
        case 0x2cfa90u: goto label_2cfa90;
        case 0x2cfa94u: goto label_2cfa94;
        case 0x2cfa98u: goto label_2cfa98;
        case 0x2cfa9cu: goto label_2cfa9c;
        case 0x2cfaa0u: goto label_2cfaa0;
        case 0x2cfaa4u: goto label_2cfaa4;
        case 0x2cfaa8u: goto label_2cfaa8;
        case 0x2cfaacu: goto label_2cfaac;
        case 0x2cfab0u: goto label_2cfab0;
        case 0x2cfab4u: goto label_2cfab4;
        case 0x2cfab8u: goto label_2cfab8;
        case 0x2cfabcu: goto label_2cfabc;
        case 0x2cfac0u: goto label_2cfac0;
        case 0x2cfac4u: goto label_2cfac4;
        case 0x2cfac8u: goto label_2cfac8;
        case 0x2cfaccu: goto label_2cfacc;
        case 0x2cfad0u: goto label_2cfad0;
        case 0x2cfad4u: goto label_2cfad4;
        case 0x2cfad8u: goto label_2cfad8;
        case 0x2cfadcu: goto label_2cfadc;
        case 0x2cfae0u: goto label_2cfae0;
        case 0x2cfae4u: goto label_2cfae4;
        case 0x2cfae8u: goto label_2cfae8;
        case 0x2cfaecu: goto label_2cfaec;
        case 0x2cfaf0u: goto label_2cfaf0;
        case 0x2cfaf4u: goto label_2cfaf4;
        case 0x2cfaf8u: goto label_2cfaf8;
        case 0x2cfafcu: goto label_2cfafc;
        case 0x2cfb00u: goto label_2cfb00;
        case 0x2cfb04u: goto label_2cfb04;
        case 0x2cfb08u: goto label_2cfb08;
        case 0x2cfb0cu: goto label_2cfb0c;
        case 0x2cfb10u: goto label_2cfb10;
        case 0x2cfb14u: goto label_2cfb14;
        case 0x2cfb18u: goto label_2cfb18;
        case 0x2cfb1cu: goto label_2cfb1c;
        case 0x2cfb20u: goto label_2cfb20;
        case 0x2cfb24u: goto label_2cfb24;
        case 0x2cfb28u: goto label_2cfb28;
        case 0x2cfb2cu: goto label_2cfb2c;
        case 0x2cfb30u: goto label_2cfb30;
        case 0x2cfb34u: goto label_2cfb34;
        case 0x2cfb38u: goto label_2cfb38;
        case 0x2cfb3cu: goto label_2cfb3c;
        case 0x2cfb40u: goto label_2cfb40;
        case 0x2cfb44u: goto label_2cfb44;
        case 0x2cfb48u: goto label_2cfb48;
        case 0x2cfb4cu: goto label_2cfb4c;
        case 0x2cfb50u: goto label_2cfb50;
        case 0x2cfb54u: goto label_2cfb54;
        case 0x2cfb58u: goto label_2cfb58;
        case 0x2cfb5cu: goto label_2cfb5c;
        case 0x2cfb60u: goto label_2cfb60;
        case 0x2cfb64u: goto label_2cfb64;
        case 0x2cfb68u: goto label_2cfb68;
        case 0x2cfb6cu: goto label_2cfb6c;
        case 0x2cfb70u: goto label_2cfb70;
        case 0x2cfb74u: goto label_2cfb74;
        case 0x2cfb78u: goto label_2cfb78;
        case 0x2cfb7cu: goto label_2cfb7c;
        case 0x2cfb80u: goto label_2cfb80;
        case 0x2cfb84u: goto label_2cfb84;
        case 0x2cfb88u: goto label_2cfb88;
        case 0x2cfb8cu: goto label_2cfb8c;
        case 0x2cfb90u: goto label_2cfb90;
        case 0x2cfb94u: goto label_2cfb94;
        case 0x2cfb98u: goto label_2cfb98;
        case 0x2cfb9cu: goto label_2cfb9c;
        case 0x2cfba0u: goto label_2cfba0;
        case 0x2cfba4u: goto label_2cfba4;
        case 0x2cfba8u: goto label_2cfba8;
        case 0x2cfbacu: goto label_2cfbac;
        case 0x2cfbb0u: goto label_2cfbb0;
        case 0x2cfbb4u: goto label_2cfbb4;
        case 0x2cfbb8u: goto label_2cfbb8;
        case 0x2cfbbcu: goto label_2cfbbc;
        case 0x2cfbc0u: goto label_2cfbc0;
        case 0x2cfbc4u: goto label_2cfbc4;
        case 0x2cfbc8u: goto label_2cfbc8;
        case 0x2cfbccu: goto label_2cfbcc;
        case 0x2cfbd0u: goto label_2cfbd0;
        case 0x2cfbd4u: goto label_2cfbd4;
        default: break;
    }

    ctx->pc = 0x2ce970u;

label_2ce970:
    // 0x2ce970: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2ce970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2ce974:
    // 0x2ce974: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x2ce974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
label_2ce978:
    // 0x2ce978: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ce978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2ce97c:
    // 0x2ce97c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ce97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2ce980:
    // 0x2ce980: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ce980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2ce984:
    // 0x2ce984: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ce984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ce988:
    // 0x2ce988: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ce988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ce98c:
    // 0x2ce98c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ce98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ce990:
    // 0x2ce990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ce994:
    // 0x2ce994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ce998:
    // 0x2ce998: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x2ce998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_2ce99c:
    // 0x2ce99c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2ce99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2ce9a0:
    // 0x2ce9a0: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x2ce9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2ce9a4:
    // 0x2ce9a4: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2ce9a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2ce9a8:
    // 0x2ce9a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ce9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2ce9ac:
    // 0x2ce9ac: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2ce9acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ce9b0:
    // 0x2ce9b0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2ce9b4:
    // 0x2ce9b4: 0x246385a0  addiu       $v1, $v1, -0x7A60
    ctx->pc = 0x2ce9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935968));
label_2ce9b8:
    // 0x2ce9b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ce9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ce9bc:
    // 0x2ce9bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ce9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ce9c0:
    // 0x2ce9c0: 0x60f809  jalr        $v1
label_2ce9c4:
    if (ctx->pc == 0x2CE9C4u) {
        ctx->pc = 0x2CE9C8u;
        goto label_2ce9c8;
    }
    ctx->pc = 0x2CE9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CE9C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE9C0u, 0x2CE9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE9C8u;
label_2ce9c8:
    // 0x2ce9c8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2ce9c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ce9cc:
    // 0x2ce9cc: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2ce9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2ce9d0:
    // 0x2ce9d0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x2ce9d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_2ce9d4:
    // 0x2ce9d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ce9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2ce9d8:
    // 0x2ce9d8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ce9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ce9dc:
    // 0x2ce9dc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_2ce9e0:
    if (ctx->pc == 0x2CE9E0u) {
        ctx->pc = 0x2CE9E4u;
        goto label_2ce9e4;
    }
    ctx->pc = 0x2CE9DCu;
    {
        const bool branch_taken_0x2ce9dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ce9dc) {
            ctx->pc = 0x2CE9F8u;
            goto label_2ce9f8;
        }
    }
    ctx->pc = 0x2CE9E4u;
label_2ce9e4:
    // 0x2ce9e4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2ce9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2ce9e8:
    // 0x2ce9e8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2ce9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2ce9ec:
    // 0x2ce9ec: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2ce9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2ce9f0:
    // 0x2ce9f0: 0x1060046d  beqz        $v1, . + 4 + (0x46D << 2)
label_2ce9f4:
    if (ctx->pc == 0x2CE9F4u) {
        ctx->pc = 0x2CE9F8u;
        goto label_2ce9f8;
    }
    ctx->pc = 0x2CE9F0u;
    {
        const bool branch_taken_0x2ce9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce9f0) {
            ctx->pc = 0x2CFBA8u;
            goto label_2cfba8;
        }
    }
    ctx->pc = 0x2CE9F8u;
label_2ce9f8:
    // 0x2ce9f8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2ce9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2ce9fc:
    // 0x2ce9fc: 0x8c831350  lw          $v1, 0x1350($a0)
    ctx->pc = 0x2ce9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4944)));
label_2cea00:
    // 0x2cea00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cea00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2cea04:
    // 0x2cea04: 0xac831350  sw          $v1, 0x1350($a0)
    ctx->pc = 0x2cea04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4944), GPR_U32(ctx, 3));
label_2cea08:
    // 0x2cea08: 0x146000a3  bnez        $v1, . + 4 + (0xA3 << 2)
label_2cea0c:
    if (ctx->pc == 0x2CEA0Cu) {
        ctx->pc = 0x2CEA10u;
        goto label_2cea10;
    }
    ctx->pc = 0x2CEA08u;
    {
        const bool branch_taken_0x2cea08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cea08) {
            ctx->pc = 0x2CEC98u;
            goto label_2cec98;
        }
    }
    ctx->pc = 0x2CEA10u;
label_2cea10:
    // 0x2cea10: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cea10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2cea14:
    // 0x2cea14: 0x246586b0  addiu       $a1, $v1, -0x7950
    ctx->pc = 0x2cea14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936240));
label_2cea18:
    // 0x2cea18: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2cea18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2cea1c:
    // 0x2cea1c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2cea1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2cea20:
    // 0x2cea20: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2cea20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2cea24:
    // 0x2cea24: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cea24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2cea28:
    // 0x2cea28: 0x246586c0  addiu       $a1, $v1, -0x7940
    ctx->pc = 0x2cea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936256));
label_2cea2c:
    // 0x2cea2c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2cea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2cea30:
    // 0x2cea30: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x2cea30u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2cea34:
    // 0x2cea34: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2cea34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2cea38:
    // 0x2cea38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cea38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cea3c:
    // 0x2cea3c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2cea40:
    // 0x2cea40: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2cea40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2cea44:
    // 0x2cea44: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2cea44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2cea48:
    // 0x2cea48: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2cea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2cea4c:
    // 0x2cea4c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2cea4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2cea50:
    // 0x2cea50: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2cea50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2cea54:
    // 0x2cea54: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cea54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cea58:
    // 0x2cea58: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x2cea58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2cea5c:
    // 0x2cea5c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2cea5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_2cea60:
    // 0x2cea60: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2cea60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2cea64:
    // 0x2cea64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cea64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2cea68:
    // 0x2cea68: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2cea68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_2cea6c:
    // 0x2cea6c: 0x38202  srl         $s0, $v1, 8
    ctx->pc = 0x2cea6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_2cea70:
    // 0x2cea70: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x2cea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_2cea74:
    // 0x2cea74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cea74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cea78:
    // 0x2cea78: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2cea78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 3));
label_2cea7c:
    // 0x2cea7c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2cea7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2cea80:
    // 0x2cea80: 0x30b4000f  andi        $s4, $a1, 0xF
    ctx->pc = 0x2cea80u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_2cea84:
    // 0x2cea84: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x2cea84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_2cea88:
    // 0x2cea88: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cea88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2cea8c:
    // 0x2cea8c: 0x24658480  addiu       $a1, $v1, -0x7B80
    ctx->pc = 0x2cea8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935680));
label_2cea90:
    // 0x2cea90: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2cea90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2cea94:
    // 0x2cea94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cea94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cea98:
    // 0x2cea98: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2cea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2cea9c:
    // 0x2cea9c: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
label_2ceaa0:
    if (ctx->pc == 0x2CEAA0u) {
        ctx->pc = 0x2CEAA4u;
        goto label_2ceaa4;
    }
    ctx->pc = 0x2CEA9Cu;
    {
        const bool branch_taken_0x2cea9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cea9c) {
            ctx->pc = 0x2CEC40u;
            goto label_2cec40;
        }
    }
    ctx->pc = 0x2CEAA4u;
label_2ceaa4:
    // 0x2ceaa4: 0x1438c0  sll         $a3, $s4, 3
    ctx->pc = 0x2ceaa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_2ceaa8:
    // 0x2ceaa8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ceaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2ceaac:
    // 0x2ceaac: 0x24658480  addiu       $a1, $v1, -0x7B80
    ctx->pc = 0x2ceaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935680));
label_2ceab0:
    // 0x2ceab0: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2ceab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2ceab4:
    // 0x2ceab4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2ceab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ceab8:
    // 0x2ceab8: 0x28c40018  slti        $a0, $a2, 0x18
    ctx->pc = 0x2ceab8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
label_2ceabc:
    // 0x2ceabc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_2ceac0:
    if (ctx->pc == 0x2CEAC0u) {
        ctx->pc = 0x2CEAC4u;
        goto label_2ceac4;
    }
    ctx->pc = 0x2CEABCu;
    {
        const bool branch_taken_0x2ceabc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ceabc) {
            ctx->pc = 0x2CEAE0u;
            goto label_2ceae0;
        }
    }
    ctx->pc = 0x2CEAC4u;
label_2ceac4:
    // 0x2ceac4: 0x3c05bfc9  lui         $a1, 0xBFC9
    ctx->pc = 0x2ceac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49097 << 16));
label_2ceac8:
    // 0x2ceac8: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x2ceac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_2ceacc:
    // 0x2ceacc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ceaccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cead0:
    // 0x2cead0: 0x0  nop
    ctx->pc = 0x2cead0u;
    // NOP
label_2cead4:
    // 0x2cead4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2cead4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2cead8:
    // 0x2cead8: 0x10000018  b           . + 4 + (0x18 << 2)
label_2ceadc:
    if (ctx->pc == 0x2CEADCu) {
        ctx->pc = 0x2CEAE0u;
        goto label_2ceae0;
    }
    ctx->pc = 0x2CEAD8u;
    {
        const bool branch_taken_0x2cead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cead8) {
            ctx->pc = 0x2CEB3Cu;
            goto label_2ceb3c;
        }
    }
    ctx->pc = 0x2CEAE0u;
label_2ceae0:
    // 0x2ceae0: 0x1430c0  sll         $a2, $s4, 3
    ctx->pc = 0x2ceae0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_2ceae4:
    // 0x2ceae4: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x2ceae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_2ceae8:
    // 0x2ceae8: 0x24e88480  addiu       $t0, $a3, -0x7B80
    ctx->pc = 0x2ceae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935680));
label_2ceaec:
    // 0x2ceaec: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x2ceaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2ceaf0:
    // 0x2ceaf0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2ceaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2ceaf4:
    // 0x2ceaf4: 0x28a1000c  slti        $at, $a1, 0xC
    ctx->pc = 0x2ceaf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
label_2ceaf8:
    // 0x2ceaf8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_2ceafc:
    if (ctx->pc == 0x2CEAFCu) {
        ctx->pc = 0x2CEB00u;
        goto label_2ceb00;
    }
    ctx->pc = 0x2CEAF8u;
    {
        const bool branch_taken_0x2ceaf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceaf8) {
            ctx->pc = 0x2CEB28u;
            goto label_2ceb28;
        }
    }
    ctx->pc = 0x2CEB00u;
label_2ceb00:
    // 0x2ceb00: 0x3c09bfef  lui         $t1, 0xBFEF
    ctx->pc = 0x2ceb00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)49135 << 16));
label_2ceb04:
    // 0x2ceb04: 0x35245c29  ori         $a0, $t1, 0x5C29
    ctx->pc = 0x2ceb04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)23593);
label_2ceb08:
    // 0x2ceb08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ceb08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ceb0c:
    // 0x2ceb0c: 0x0  nop
    ctx->pc = 0x2ceb0cu;
    // NOP
label_2ceb10:
    // 0x2ceb10: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2ceb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2ceb14:
    // 0x2ceb14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ceb14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ceb18:
    // 0x2ceb18: 0x0  nop
    ctx->pc = 0x2ceb18u;
    // NOP
label_2ceb1c:
    // 0x2ceb1c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2ceb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2ceb20:
    // 0x2ceb20: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ceb24:
    if (ctx->pc == 0x2CEB24u) {
        ctx->pc = 0x2CEB28u;
        goto label_2ceb28;
    }
    ctx->pc = 0x2CEB20u;
    {
        const bool branch_taken_0x2ceb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb20) {
            ctx->pc = 0x2CEB3Cu;
            goto label_2ceb3c;
        }
    }
    ctx->pc = 0x2CEB28u;
label_2ceb28:
    // 0x2ceb28: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x2ceb28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_2ceb2c:
    // 0x2ceb2c: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x2ceb2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_2ceb30:
    // 0x2ceb30: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ceb30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ceb34:
    // 0x2ceb34: 0x0  nop
    ctx->pc = 0x2ceb34u;
    // NOP
label_2ceb38:
    // 0x2ceb38: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2ceb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2ceb3c:
    // 0x2ceb3c: 0xc06766c  jal         func_19D9B0
label_2ceb40:
    if (ctx->pc == 0x2CEB40u) {
        ctx->pc = 0x2CEB44u;
        goto label_2ceb44;
    }
    ctx->pc = 0x2CEB3Cu;
    SET_GPR_U32(ctx, 31, 0x2CEB44u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2CEB3Cu, 0x2CEB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB44u;
label_2ceb44:
    // 0x2ceb44: 0x1438c0  sll         $a3, $s4, 3
    ctx->pc = 0x2ceb44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_2ceb48:
    // 0x2ceb48: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2ceb48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_2ceb4c:
    // 0x2ceb4c: 0x24a68480  addiu       $a2, $a1, -0x7B80
    ctx->pc = 0x2ceb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935680));
label_2ceb50:
    // 0x2ceb50: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x2ceb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2ceb54:
    // 0x2ceb54: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2ceb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ceb58:
    // 0x2ceb58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ceb58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ceb5c:
    // 0x2ceb5c: 0x3c0742c8  lui         $a3, 0x42C8
    ctx->pc = 0x2ceb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17096 << 16));
label_2ceb60:
    // 0x2ceb60: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ceb60u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ceb64:
    // 0x2ceb64: 0x0  nop
    ctx->pc = 0x2ceb64u;
    // NOP
label_2ceb68:
    // 0x2ceb68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ceb68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ceb6c:
    // 0x2ceb6c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2ceb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_2ceb70:
    // 0x2ceb70: 0x1448c0  sll         $t1, $s4, 3
    ctx->pc = 0x2ceb70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_2ceb74:
    // 0x2ceb74: 0x3c0a003a  lui         $t2, 0x3A
    ctx->pc = 0x2ceb74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
label_2ceb78:
    // 0x2ceb78: 0x25578480  addiu       $s7, $t2, -0x7B80
    ctx->pc = 0x2ceb78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935680));
label_2ceb7c:
    // 0x2ceb7c: 0x2e91821  addu        $v1, $s7, $t1
    ctx->pc = 0x2ceb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
label_2ceb80:
    // 0x2ceb80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ceb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ceb84:
    // 0x2ceb84: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2ceb84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2ceb88:
    // 0x2ceb88: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2ceb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2ceb8c:
    // 0x2ceb8c: 0x8c760130  lw          $s6, 0x130($v1)
    ctx->pc = 0x2ceb8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_2ceb90:
    // 0x2ceb90: 0x2c43821  addu        $a3, $s6, $a0
    ctx->pc = 0x2ceb90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_2ceb94:
    // 0x2ceb94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ceb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ceb98:
    // 0x2ceb98: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2ceb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2ceb9c:
    // 0x2ceb9c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2ceb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2ceba0:
    // 0x2ceba0: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2ceba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2ceba4:
    // 0x2ceba4: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x2ceba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ceba8:
    // 0x2ceba8: 0xc0d5f88  jal         func_357E20
label_2cebac:
    if (ctx->pc == 0x2CEBACu) {
        ctx->pc = 0x2CEBB0u;
        goto label_2cebb0;
    }
    ctx->pc = 0x2CEBA8u;
    SET_GPR_U32(ctx, 31, 0x2CEBB0u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2CEBA8u, 0x2CEBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBB0u;
label_2cebb0:
    // 0x2cebb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cebb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cebb4:
    // 0x2cebb4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cebb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cebb8:
    // 0x2cebb8: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2cebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2cebbc:
    // 0x2cebbc: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2cebbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2cebc0:
    // 0x2cebc0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2cebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2cebc4:
    // 0x2cebc4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2cebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2cebc8:
    // 0x2cebc8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cebc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2cebcc:
    // 0x2cebcc: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x2cebccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2cebd0:
    // 0x2cebd0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cebd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cebd4:
    // 0x2cebd4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2cebd8:
    // 0x2cebd8: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x2cebd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2cebdc:
    // 0x2cebdc: 0x69080  sll         $s2, $a2, 2
    ctx->pc = 0x2cebdcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2cebe0:
    // 0x2cebe0: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x2cebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_2cebe4:
    // 0x2cebe4: 0x3065ff00  andi        $a1, $v1, 0xFF00
    ctx->pc = 0x2cebe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_2cebe8:
    // 0x2cebe8: 0x52202  srl         $a0, $a1, 8
    ctx->pc = 0x2cebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_2cebec:
    // 0x2cebec: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x2cebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_2cebf0:
    // 0x2cebf0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cebf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cebf4:
    // 0x2cebf4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2cebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 3));
label_2cebf8:
    // 0x2cebf8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cebf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2cebfc:
    // 0x2cebfc: 0x30650003  andi        $a1, $v1, 0x3
    ctx->pc = 0x2cebfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_2cec00:
    // 0x2cec00: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
label_2cec04:
    if (ctx->pc == 0x2CEC04u) {
        ctx->pc = 0x2CEC08u;
        goto label_2cec08;
    }
    ctx->pc = 0x2CEC00u;
    {
        const bool branch_taken_0x2cec00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cec00) {
            ctx->pc = 0x2CEC40u;
            goto label_2cec40;
        }
    }
    ctx->pc = 0x2CEC08u;
label_2cec08:
    // 0x2cec08: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x2cec08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_2cec0c:
    // 0x2cec0c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2cec0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_2cec10:
    // 0x2cec10: 0x24c38480  addiu       $v1, $a2, -0x7B80
    ctx->pc = 0x2cec10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935680));
label_2cec14:
    // 0x2cec14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cec14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cec18:
    // 0x2cec18: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2cec18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cec1c:
    // 0x2cec1c: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x2cec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_2cec20:
    // 0x2cec20: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cec20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cec24:
    // 0x2cec24: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x2cec24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_2cec28:
    // 0x2cec28: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2cec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2cec2c:
    // 0x2cec2c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cec30:
    // 0x2cec30: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2cec30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2cec34:
    // 0x2cec34: 0xc0d5fb4  jal         func_357ED0
label_2cec38:
    if (ctx->pc == 0x2CEC38u) {
        ctx->pc = 0x2CEC3Cu;
        goto label_2cec3c;
    }
    ctx->pc = 0x2CEC34u;
    SET_GPR_U32(ctx, 31, 0x2CEC3Cu);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2CEC34u, 0x2CEC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC3Cu;
label_2cec3c:
    // 0x2cec3c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cec3cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cec40:
    // 0x2cec40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cec40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cec44:
    // 0x2cec44: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2cec48:
    // 0x2cec48: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x2cec48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2cec4c:
    // 0x2cec4c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2cec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2cec50:
    // 0x2cec50: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x2cec50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2cec54:
    // 0x2cec54: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2cec54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2cec58:
    // 0x2cec58: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2cec58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2cec5c:
    // 0x2cec5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cec5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cec60:
    // 0x2cec60: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2cec64:
    // 0x2cec64: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2cec64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2cec68:
    // 0x2cec68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cec68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2cec6c:
    // 0x2cec6c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2cec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cec70:
    // 0x2cec70: 0x30a3ff00  andi        $v1, $a1, 0xFF00
    ctx->pc = 0x2cec70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
label_2cec74:
    // 0x2cec74: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x2cec74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_2cec78:
    // 0x2cec78: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2cec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2cec7c:
    // 0x2cec7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cec7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cec80:
    // 0x2cec80: 0xac247508  sw          $a0, 0x7508($at)
    ctx->pc = 0x2cec80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 4));
label_2cec84:
    // 0x2cec84: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2cec84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2cec88:
    // 0x2cec88: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2cec88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_2cec8c:
    // 0x2cec8c: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x2cec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_2cec90:
    // 0x2cec90: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cec90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cec94:
    // 0x2cec94: 0xac851350  sw          $a1, 0x1350($a0)
    ctx->pc = 0x2cec94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4944), GPR_U32(ctx, 5));
label_2cec98:
    // 0x2cec98: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cec9c:
    // 0x2cec9c: 0x9464000e  lhu         $a0, 0xE($v1)
    ctx->pc = 0x2cec9cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_2ceca0:
    // 0x2ceca0: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2ceca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2ceca4:
    // 0x2ceca4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ceca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ceca8:
    // 0x2ceca8: 0x10650097  beq         $v1, $a1, . + 4 + (0x97 << 2)
label_2cecac:
    if (ctx->pc == 0x2CECACu) {
        ctx->pc = 0x2CECB0u;
        goto label_2cecb0;
    }
    ctx->pc = 0x2CECA8u;
    {
        const bool branch_taken_0x2ceca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ceca8) {
            ctx->pc = 0x2CEF08u;
            goto label_2cef08;
        }
    }
    ctx->pc = 0x2CECB0u;
label_2cecb0:
    // 0x2cecb0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cecb4:
    // 0x2cecb4: 0x8c641334  lw          $a0, 0x1334($v1)
    ctx->pc = 0x2cecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
label_2cecb8:
    // 0x2cecb8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2cecb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2cecbc:
    // 0x2cecbc: 0x10600092  beqz        $v1, . + 4 + (0x92 << 2)
label_2cecc0:
    if (ctx->pc == 0x2CECC0u) {
        ctx->pc = 0x2CECC4u;
        goto label_2cecc4;
    }
    ctx->pc = 0x2CECBCu;
    {
        const bool branch_taken_0x2cecbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cecbc) {
            ctx->pc = 0x2CEF08u;
            goto label_2cef08;
        }
    }
    ctx->pc = 0x2CECC4u;
label_2cecc4:
    // 0x2cecc4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cecc8:
    // 0x2cecc8: 0x8c831354  lw          $v1, 0x1354($a0)
    ctx->pc = 0x2cecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4948)));
label_2ceccc:
    // 0x2ceccc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cecccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2cecd0:
    // 0x2cecd0: 0xac831354  sw          $v1, 0x1354($a0)
    ctx->pc = 0x2cecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4948), GPR_U32(ctx, 3));
label_2cecd4:
    // 0x2cecd4: 0x1460008c  bnez        $v1, . + 4 + (0x8C << 2)
label_2cecd8:
    if (ctx->pc == 0x2CECD8u) {
        ctx->pc = 0x2CECDCu;
        goto label_2cecdc;
    }
    ctx->pc = 0x2CECD4u;
    {
        const bool branch_taken_0x2cecd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cecd4) {
            ctx->pc = 0x2CEF08u;
            goto label_2cef08;
        }
    }
    ctx->pc = 0x2CECDCu;
label_2cecdc:
    // 0x2cecdc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2cece0:
    // 0x2cece0: 0x246386d0  addiu       $v1, $v1, -0x7930
    ctx->pc = 0x2cece0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936272));
label_2cece4:
    // 0x2cece4: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2cece4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2cece8:
    // 0x2cece8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2cece8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2cecec:
    // 0x2cecec: 0x7d240000  sq          $a0, 0x0($t1)
    ctx->pc = 0x2cececu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 4));
label_2cecf0:
    // 0x2cecf0: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x2cecf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_2cecf4:
    // 0x2cecf4: 0x24e686e0  addiu       $a2, $a3, -0x7920
    ctx->pc = 0x2cecf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936288));
label_2cecf8:
    // 0x2cecf8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2cecf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2cecfc:
    // 0x2cecfc: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2cecfcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2ced00:
    // 0x2ced00: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2ced00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_2ced04:
    // 0x2ced04: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x2ced04u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ced08:
    // 0x2ced08: 0xc06765c  jal         func_19D970
label_2ced0c:
    if (ctx->pc == 0x2CED0Cu) {
        ctx->pc = 0x2CED10u;
        goto label_2ced10;
    }
    ctx->pc = 0x2CED08u;
    SET_GPR_U32(ctx, 31, 0x2CED10u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2CED08u, 0x2CED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED10u;
label_2ced10:
    // 0x2ced10: 0x3c063fc8  lui         $a2, 0x3FC8
    ctx->pc = 0x2ced10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16328 << 16));
label_2ced14:
    // 0x2ced14: 0x34c8f5c3  ori         $t0, $a2, 0xF5C3
    ctx->pc = 0x2ced14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62915);
label_2ced18:
    // 0x2ced18: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2ced18u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ced1c:
    // 0x2ced1c: 0x0  nop
    ctx->pc = 0x2ced1cu;
    // NOP
label_2ced20:
    // 0x2ced20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ced20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ced24:
    // 0x2ced24: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2ced24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2ced28:
    // 0x2ced28: 0x1528c0  sll         $a1, $s5, 3
    ctx->pc = 0x2ced28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_2ced2c:
    // 0x2ced2c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2ced2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_2ced30:
    // 0x2ced30: 0x24898480  addiu       $t1, $a0, -0x7B80
    ctx->pc = 0x2ced30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935680));
label_2ced34:
    // 0x2ced34: 0x1253021  addu        $a2, $t1, $a1
    ctx->pc = 0x2ced34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_2ced38:
    // 0x2ced38: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2ced38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2ced3c:
    // 0x2ced3c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2ced3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ced40:
    // 0x2ced40: 0x1485001a  bne         $a0, $a1, . + 4 + (0x1A << 2)
label_2ced44:
    if (ctx->pc == 0x2CED44u) {
        ctx->pc = 0x2CED48u;
        goto label_2ced48;
    }
    ctx->pc = 0x2CED40u;
    {
        const bool branch_taken_0x2ced40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ced40) {
            ctx->pc = 0x2CEDACu;
            goto label_2cedac;
        }
    }
    ctx->pc = 0x2CED48u;
label_2ced48:
    // 0x2ced48: 0xc06765c  jal         func_19D970
label_2ced4c:
    if (ctx->pc == 0x2CED4Cu) {
        ctx->pc = 0x2CED50u;
        goto label_2ced50;
    }
    ctx->pc = 0x2CED48u;
    SET_GPR_U32(ctx, 31, 0x2CED50u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2CED48u, 0x2CED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED50u;
label_2ced50:
    // 0x2ced50: 0x3c05437a  lui         $a1, 0x437A
    ctx->pc = 0x2ced50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17274 << 16));
label_2ced54:
    // 0x2ced54: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2ced54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ced58:
    // 0x2ced58: 0x0  nop
    ctx->pc = 0x2ced58u;
    // NOP
label_2ced5c:
    // 0x2ced5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ced5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ced60:
    // 0x2ced60: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2ced60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ced64:
    // 0x2ced64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ced64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ced68:
    // 0x2ced68: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2ced68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2ced6c:
    // 0x2ced6c: 0xc06765c  jal         func_19D970
label_2ced70:
    if (ctx->pc == 0x2CED70u) {
        ctx->pc = 0x2CED74u;
        goto label_2ced74;
    }
    ctx->pc = 0x2CED6Cu;
    SET_GPR_U32(ctx, 31, 0x2CED74u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2CED6Cu, 0x2CED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED74u;
label_2ced74:
    // 0x2ced74: 0x3c06437a  lui         $a2, 0x437A
    ctx->pc = 0x2ced74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17274 << 16));
label_2ced78:
    // 0x2ced78: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2ced78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ced7c:
    // 0x2ced7c: 0x0  nop
    ctx->pc = 0x2ced7cu;
    // NOP
label_2ced80:
    // 0x2ced80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ced80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ced84:
    // 0x2ced84: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2ced84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ced88:
    // 0x2ced88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ced88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ced8c:
    // 0x2ced8c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2ced8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2ced90:
    // 0x2ced90: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2ced90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ced94:
    // 0x2ced94: 0x3c07c409  lui         $a3, 0xC409
    ctx->pc = 0x2ced94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50185 << 16));
label_2ced98:
    // 0x2ced98: 0x34e38000  ori         $v1, $a3, 0x8000
    ctx->pc = 0x2ced98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
label_2ced9c:
    // 0x2ced9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ced9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ceda0:
    // 0x2ceda0: 0x0  nop
    ctx->pc = 0x2ceda0u;
    // NOP
label_2ceda4:
    // 0x2ceda4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ceda4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ceda8:
    // 0x2ceda8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2ceda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2cedac:
    // 0x2cedac: 0xc06766c  jal         func_19D9B0
label_2cedb0:
    if (ctx->pc == 0x2CEDB0u) {
        ctx->pc = 0x2CEDB4u;
        goto label_2cedb4;
    }
    ctx->pc = 0x2CEDACu;
    SET_GPR_U32(ctx, 31, 0x2CEDB4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2CEDACu, 0x2CEDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEDB4u;
label_2cedb4:
    // 0x2cedb4: 0x1548c0  sll         $t1, $s5, 3
    ctx->pc = 0x2cedb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_2cedb8:
    // 0x2cedb8: 0x3c0a003a  lui         $t2, 0x3A
    ctx->pc = 0x2cedb8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
label_2cedbc:
    // 0x2cedbc: 0x25578480  addiu       $s7, $t2, -0x7B80
    ctx->pc = 0x2cedbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935680));
label_2cedc0:
    // 0x2cedc0: 0x2e91821  addu        $v1, $s7, $t1
    ctx->pc = 0x2cedc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
label_2cedc4:
    // 0x2cedc4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2cedc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cedc8:
    // 0x2cedc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cedc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2cedcc:
    // 0x2cedcc: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2cedccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_2cedd0:
    // 0x2cedd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cedd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cedd4:
    // 0x2cedd4: 0x0  nop
    ctx->pc = 0x2cedd4u;
    // NOP
label_2cedd8:
    // 0x2cedd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cedd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ceddc:
    // 0x2ceddc: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x2ceddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_2cede0:
    // 0x2cede0: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x2cede0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_2cede4:
    // 0x2cede4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cede4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2cede8:
    // 0x2cede8: 0x24768480  addiu       $s6, $v1, -0x7B80
    ctx->pc = 0x2cede8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935680));
label_2cedec:
    // 0x2cedec: 0x2c49021  addu        $s2, $s6, $a0
    ctx->pc = 0x2cedecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_2cedf0:
    // 0x2cedf0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cedf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cedf4:
    // 0x2cedf4: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2cedf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2cedf8:
    // 0x2cedf8: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cedf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cedfc:
    // 0x2cedfc: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x2cedfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_2cee00:
    // 0x2cee00: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x2cee00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cee04:
    // 0x2cee04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2cee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cee08:
    // 0x2cee08: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cee08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cee0c:
    // 0x2cee0c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2cee0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2cee10:
    // 0x2cee10: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x2cee10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2cee14:
    // 0x2cee14: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x2cee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2cee18:
    // 0x2cee18: 0xc0d5f88  jal         func_357E20
label_2cee1c:
    if (ctx->pc == 0x2CEE1Cu) {
        ctx->pc = 0x2CEE20u;
        goto label_2cee20;
    }
    ctx->pc = 0x2CEE18u;
    SET_GPR_U32(ctx, 31, 0x2CEE20u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2CEE18u, 0x2CEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE20u;
label_2cee20:
    // 0x2cee20: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cee20u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cee24:
    // 0x2cee24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cee24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cee28:
    // 0x2cee28: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cee28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2cee2c:
    // 0x2cee2c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2cee2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2cee30:
    // 0x2cee30: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2cee30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2cee34:
    // 0x2cee34: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2cee34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2cee38:
    // 0x2cee38: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2cee38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2cee3c:
    // 0x2cee3c: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x2cee3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2cee40:
    // 0x2cee40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cee40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cee44:
    // 0x2cee44: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x2cee44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2cee48:
    // 0x2cee48: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x2cee48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_2cee4c:
    // 0x2cee4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2cee50:
    // 0x2cee50: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2cee50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cee54:
    // 0x2cee54: 0x30a4ff00  andi        $a0, $a1, 0xFF00
    ctx->pc = 0x2cee54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
label_2cee58:
    // 0x2cee58: 0x43202  srl         $a2, $a0, 8
    ctx->pc = 0x2cee58u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_2cee5c:
    // 0x2cee5c: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x2cee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2cee60:
    // 0x2cee60: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cee60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cee64:
    // 0x2cee64: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2cee64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 3));
label_2cee68:
    // 0x2cee68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2cee68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2cee6c:
    // 0x2cee6c: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x2cee6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_2cee70:
    // 0x2cee70: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_2cee74:
    if (ctx->pc == 0x2CEE74u) {
        ctx->pc = 0x2CEE78u;
        goto label_2cee78;
    }
    ctx->pc = 0x2CEE70u;
    {
        const bool branch_taken_0x2cee70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cee70) {
            ctx->pc = 0x2CEEB0u;
            goto label_2ceeb0;
        }
    }
    ctx->pc = 0x2CEE78u;
label_2cee78:
    // 0x2cee78: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x2cee78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_2cee7c:
    // 0x2cee7c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2cee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_2cee80:
    // 0x2cee80: 0x24a38480  addiu       $v1, $a1, -0x7B80
    ctx->pc = 0x2cee80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935680));
label_2cee84:
    // 0x2cee84: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cee84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cee88:
    // 0x2cee88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cee8c:
    // 0x2cee8c: 0x39980  sll         $s3, $v1, 6
    ctx->pc = 0x2cee8cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2cee90:
    // 0x2cee90: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cee94:
    // 0x2cee94: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2cee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_2cee98:
    // 0x2cee98: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x2cee98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2cee9c:
    // 0x2cee9c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2ceea0:
    // 0x2ceea0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2ceea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2ceea4:
    // 0x2ceea4: 0xc0d5fb4  jal         func_357ED0
label_2ceea8:
    if (ctx->pc == 0x2CEEA8u) {
        ctx->pc = 0x2CEEACu;
        goto label_2ceeac;
    }
    ctx->pc = 0x2CEEA4u;
    SET_GPR_U32(ctx, 31, 0x2CEEACu);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2CEEA4u, 0x2CEEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEEACu;
label_2ceeac:
    // 0x2ceeac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2ceeacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ceeb0:
    // 0x2ceeb0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ceeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2ceeb4:
    // 0x2ceeb4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ceeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2ceeb8:
    // 0x2ceeb8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ceeb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2ceebc:
    // 0x2ceebc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ceebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ceec0:
    // 0x2ceec0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ceec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ceec4:
    // 0x2ceec4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2ceec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2ceec8:
    // 0x2ceec8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ceec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2ceecc:
    // 0x2ceecc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ceeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2ceed0:
    // 0x2ceed0: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2ceed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2ceed4:
    // 0x2ceed4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2ceed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2ceed8:
    // 0x2ceed8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ceed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ceedc:
    // 0x2ceedc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ceedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ceee0:
    // 0x2ceee0: 0x3070ff00  andi        $s0, $v1, 0xFF00
    ctx->pc = 0x2ceee0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_2ceee4:
    // 0x2ceee4: 0x101a02  srl         $v1, $s0, 8
    ctx->pc = 0x2ceee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_2ceee8:
    // 0x2ceee8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ceee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2ceeec:
    // 0x2ceeec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ceeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2ceef0:
    // 0x2ceef0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ceef0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 3));
label_2ceef4:
    // 0x2ceef4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ceef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2ceef8:
    // 0x2ceef8: 0x30a3003f  andi        $v1, $a1, 0x3F
    ctx->pc = 0x2ceef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_2ceefc:
    // 0x2ceefc: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x2ceefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_2cef00:
    // 0x2cef00: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cef04:
    // 0x2cef04: 0xac641354  sw          $a0, 0x1354($v1)
    ctx->pc = 0x2cef04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4948), GPR_U32(ctx, 4));
label_2cef08:
    // 0x2cef08: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2cef08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2cef0c:
    // 0x2cef0c: 0x10000042  b           . + 4 + (0x42 << 2)
label_2cef10:
    if (ctx->pc == 0x2CEF10u) {
        ctx->pc = 0x2CEF14u;
        goto label_2cef14;
    }
    ctx->pc = 0x2CEF0Cu;
    {
        const bool branch_taken_0x2cef0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef0c) {
            ctx->pc = 0x2CF018u;
            goto label_2cf018;
        }
    }
    ctx->pc = 0x2CEF14u;
label_2cef14:
    // 0x2cef14: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2cef14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2cef18:
    // 0x2cef18: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2cef18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_2cef1c:
    // 0x2cef1c: 0x24a38550  addiu       $v1, $a1, -0x7AB0
    ctx->pc = 0x2cef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935888));
label_2cef20:
    // 0x2cef20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cef24:
    // 0x2cef24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cef24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cef28:
    // 0x2cef28: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2cef28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2cef2c:
    // 0x2cef2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cef30:
    // 0x2cef30: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2cef30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2cef34:
    // 0x2cef34: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cef38:
    // 0x2cef38: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2cef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2cef3c:
    // 0x2cef3c: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x2cef3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cef40:
    // 0x2cef40: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cef44:
    // 0x2cef44: 0x2486134c  addiu       $a2, $a0, 0x134C
    ctx->pc = 0x2cef44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
label_2cef48:
    // 0x2cef48: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cef48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cef4c:
    // 0x2cef4c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2cef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2cef50:
    // 0x2cef50: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x2cef50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2cef54:
    // 0x2cef54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cef54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2cef58:
    // 0x2cef58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cef58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2cef5c:
    // 0x2cef5c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2cef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2cef60:
    // 0x2cef60: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2cef60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2cef64:
    // 0x2cef64: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2cef68:
    if (ctx->pc == 0x2CEF68u) {
        ctx->pc = 0x2CEF6Cu;
        goto label_2cef6c;
    }
    ctx->pc = 0x2CEF64u;
    {
        const bool branch_taken_0x2cef64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef64) {
            ctx->pc = 0x2CEF98u;
            goto label_2cef98;
        }
    }
    ctx->pc = 0x2CEF6Cu;
label_2cef6c:
    // 0x2cef6c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x2cef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2cef70:
    // 0x2cef70: 0x24a3ffe0  addiu       $v1, $a1, -0x20
    ctx->pc = 0x2cef70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_2cef74:
    // 0x2cef74: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x2cef74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
label_2cef78:
    // 0x2cef78: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x2cef78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_2cef7c:
    // 0x2cef7c: 0x2464ffe8  addiu       $a0, $v1, -0x18
    ctx->pc = 0x2cef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
label_2cef80:
    // 0x2cef80: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x2cef80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
label_2cef84:
    // 0x2cef84: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x2cef84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2cef88:
    // 0x2cef88: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2cef88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_2cef8c:
    // 0x2cef8c: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x2cef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
label_2cef90:
    // 0x2cef90: 0x1000000b  b           . + 4 + (0xB << 2)
label_2cef94:
    if (ctx->pc == 0x2CEF94u) {
        ctx->pc = 0x2CEF98u;
        goto label_2cef98;
    }
    ctx->pc = 0x2CEF90u;
    {
        const bool branch_taken_0x2cef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef90) {
            ctx->pc = 0x2CEFC0u;
            goto label_2cefc0;
        }
    }
    ctx->pc = 0x2CEF98u;
label_2cef98:
    // 0x2cef98: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2cef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2cef9c:
    // 0x2cef9c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2cef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2cefa0:
    // 0x2cefa0: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x2cefa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
label_2cefa4:
    // 0x2cefa4: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x2cefa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_2cefa8:
    // 0x2cefa8: 0x24830018  addiu       $v1, $a0, 0x18
    ctx->pc = 0x2cefa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_2cefac:
    // 0x2cefac: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2cefacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2cefb0:
    // 0x2cefb0: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x2cefb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2cefb4:
    // 0x2cefb4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2cefb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2cefb8:
    // 0x2cefb8: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x2cefb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
label_2cefbc:
    // 0x2cefbc: 0x0  nop
    ctx->pc = 0x2cefbcu;
    // NOP
label_2cefc0:
    // 0x2cefc0: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cefc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cefc4:
    // 0x2cefc4: 0x24a4134c  addiu       $a0, $a1, 0x134C
    ctx->pc = 0x2cefc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4940));
label_2cefc8:
    // 0x2cefc8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cefc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cefcc:
    // 0x2cefcc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2cefccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2cefd0:
    // 0x2cefd0: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x2cefd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2cefd4:
    // 0x2cefd4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cefd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cefd8:
    // 0x2cefd8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2cefd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2cefdc:
    // 0x2cefdc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cefdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2cefe0:
    // 0x2cefe0: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2cefe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2cefe4:
    // 0x2cefe4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2cefe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2cefe8:
    // 0x2cefe8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cefe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cefec:
    // 0x2cefec: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cefecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2ceff0:
    // 0x2ceff0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2ceff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2ceff4:
    // 0x2ceff4: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x2ceff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ceff8:
    // 0x2ceff8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x2ceff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2ceffc:
    // 0x2ceffc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ceffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf000:
    // 0x2cf000: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2cf000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2cf004:
    // 0x2cf004: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cf004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2cf008:
    // 0x2cf008: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2cf008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_2cf00c:
    // 0x2cf00c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2cf00cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_2cf010:
    // 0x2cf010: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cf010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cf014:
    // 0x2cf014: 0x0  nop
    ctx->pc = 0x2cf014u;
    // NOP
label_2cf018:
    // 0x2cf018: 0x2e030012  sltiu       $v1, $s0, 0x12
    ctx->pc = 0x2cf018u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_2cf01c:
    // 0x2cf01c: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
label_2cf020:
    if (ctx->pc == 0x2CF020u) {
        ctx->pc = 0x2CF024u;
        goto label_2cf024;
    }
    ctx->pc = 0x2CF01Cu;
    {
        const bool branch_taken_0x2cf01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf01c) {
            ctx->pc = 0x2CEF14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cef14;
        }
    }
    ctx->pc = 0x2CF024u;
label_2cf024:
    // 0x2cf024: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2cf024u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2cf028:
    // 0x2cf028: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_2cf02c:
    if (ctx->pc == 0x2CF02Cu) {
        ctx->pc = 0x2CF030u;
        goto label_2cf030;
    }
    ctx->pc = 0x2CF028u;
    {
        const bool branch_taken_0x2cf028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf028) {
            ctx->pc = 0x2CF388u;
            goto label_2cf388;
        }
    }
    ctx->pc = 0x2CF030u;
label_2cf030:
    // 0x2cf030: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2cf030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2cf034:
    // 0x2cf034: 0x16050015  bne         $s0, $a1, . + 4 + (0x15 << 2)
label_2cf038:
    if (ctx->pc == 0x2CF038u) {
        ctx->pc = 0x2CF03Cu;
        goto label_2cf03c;
    }
    ctx->pc = 0x2CF034u;
    {
        const bool branch_taken_0x2cf034 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cf034) {
            ctx->pc = 0x2CF08Cu;
            goto label_2cf08c;
        }
    }
    ctx->pc = 0x2CF03Cu;
label_2cf03c:
    // 0x2cf03c: 0x8fb40118  lw          $s4, 0x118($sp)
    ctx->pc = 0x2cf03cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf040:
    // 0x2cf040: 0x2684134c  addiu       $a0, $s4, 0x134C
    ctx->pc = 0x2cf040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4940));
label_2cf044:
    // 0x2cf044: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cf044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf048:
    // 0x2cf048: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x2cf048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2cf04c:
    // 0x2cf04c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2cf04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2cf050:
    // 0x2cf050: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2cf050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf054:
    // 0x2cf054: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cf054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2cf058:
    // 0x2cf058: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x2cf058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2cf05c:
    // 0x2cf05c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf060:
    // 0x2cf060: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x2cf060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf064:
    // 0x2cf064: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cf064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf068:
    // 0x2cf068: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x2cf068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2cf06c:
    // 0x2cf06c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2cf06cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2cf070:
    // 0x2cf070: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2cf070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cf074:
    // 0x2cf074: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2cf074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2cf078:
    // 0x2cf078: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2cf078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cf07c:
    // 0x2cf07c: 0xc73823  subu        $a3, $a2, $a3
    ctx->pc = 0x2cf07cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2cf080:
    // 0x2cf080: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x2cf080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_2cf084:
    // 0x2cf084: 0x10000014  b           . + 4 + (0x14 << 2)
label_2cf088:
    if (ctx->pc == 0x2CF088u) {
        ctx->pc = 0x2CF08Cu;
        goto label_2cf08c;
    }
    ctx->pc = 0x2CF084u;
    {
        const bool branch_taken_0x2cf084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf084) {
            ctx->pc = 0x2CF0D8u;
            goto label_2cf0d8;
        }
    }
    ctx->pc = 0x2CF08Cu;
label_2cf08c:
    // 0x2cf08c: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x2cf08cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf090:
    // 0x2cf090: 0x2506134c  addiu       $a2, $t0, 0x134C
    ctx->pc = 0x2cf090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4940));
label_2cf094:
    // 0x2cf094: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x2cf094u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf098:
    // 0x2cf098: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x2cf098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2cf09c:
    // 0x2cf09c: 0x448c0  sll         $t1, $a0, 3
    ctx->pc = 0x2cf09cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2cf0a0:
    // 0x2cf0a0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2cf0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2cf0a4:
    // 0x2cf0a4: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x2cf0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_2cf0a8:
    // 0x2cf0a8: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x2cf0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf0ac:
    // 0x2cf0ac: 0x24e5134c  addiu       $a1, $a3, 0x134C
    ctx->pc = 0x2cf0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4940));
label_2cf0b0:
    // 0x2cf0b0: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x2cf0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf0b4:
    // 0x2cf0b4: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x2cf0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_2cf0b8:
    // 0x2cf0b8: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x2cf0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2cf0bc:
    // 0x2cf0bc: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x2cf0bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cf0c0:
    // 0x2cf0c0: 0x1275021  addu        $t2, $t1, $a3
    ctx->pc = 0x2cf0c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_2cf0c4:
    // 0x2cf0c4: 0x8d570000  lw          $s7, 0x0($t2)
    ctx->pc = 0x2cf0c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_2cf0c8:
    // 0x2cf0c8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2cf0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2cf0cc:
    // 0x2cf0cc: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x2cf0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_2cf0d0:
    // 0x2cf0d0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x2cf0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_2cf0d4:
    // 0x2cf0d4: 0x0  nop
    ctx->pc = 0x2cf0d4u;
    // NOP
label_2cf0d8:
    // 0x2cf0d8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf0dc:
    // 0x2cf0dc: 0x2483134c  addiu       $v1, $a0, 0x134C
    ctx->pc = 0x2cf0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
label_2cf0e0:
    // 0x2cf0e0: 0x10b040  sll         $s6, $s0, 1
    ctx->pc = 0x2cf0e0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf0e4:
    // 0x2cf0e4: 0x2d03821  addu        $a3, $s6, $s0
    ctx->pc = 0x2cf0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_2cf0e8:
    // 0x2cf0e8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2cf0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2cf0ec:
    // 0x2cf0ec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2cf0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf0f0:
    // 0x2cf0f0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2cf0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2cf0f4:
    // 0x2cf0f4: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x2cf0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2cf0f8:
    // 0x2cf0f8: 0x31031fff  andi        $v1, $t0, 0x1FFF
    ctx->pc = 0x2cf0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8191);
label_2cf0fc:
    // 0x2cf0fc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2cf0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_2cf100:
    // 0x2cf100: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf104:
    // 0x2cf104: 0x2485134c  addiu       $a1, $a0, 0x134C
    ctx->pc = 0x2cf104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
label_2cf108:
    // 0x2cf108: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2cf108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf10c:
    // 0x2cf10c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2cf10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2cf110:
    // 0x2cf110: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2cf110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2cf114:
    // 0x2cf114: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x2cf114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cf118:
    // 0x2cf118: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2cf118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2cf11c:
    // 0x2cf11c: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x2cf11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2cf120:
    // 0x2cf120: 0x30d20003  andi        $s2, $a2, 0x3
    ctx->pc = 0x2cf120u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_2cf124:
    // 0x2cf124: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf128:
    // 0x2cf128: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x2cf128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf12c:
    // 0x2cf12c: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2cf12cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf130:
    // 0x2cf130: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2cf130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2cf134:
    // 0x2cf134: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2cf134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2cf138:
    // 0x2cf138: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2cf138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cf13c:
    // 0x2cf13c: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2cf13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2cf140:
    // 0x2cf140: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x2cf140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2cf144:
    // 0x2cf144: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x2cf144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_2cf148:
    // 0x2cf148: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_2cf14c:
    if (ctx->pc == 0x2CF14Cu) {
        ctx->pc = 0x2CF150u;
        goto label_2cf150;
    }
    ctx->pc = 0x2CF148u;
    {
        const bool branch_taken_0x2cf148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf148) {
            ctx->pc = 0x2CF1D4u;
            goto label_2cf1d4;
        }
    }
    ctx->pc = 0x2CF150u;
label_2cf150:
    // 0x2cf150: 0x16400053  bnez        $s2, . + 4 + (0x53 << 2)
label_2cf154:
    if (ctx->pc == 0x2CF154u) {
        ctx->pc = 0x2CF158u;
        goto label_2cf158;
    }
    ctx->pc = 0x2CF150u;
    {
        const bool branch_taken_0x2cf150 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf150) {
            ctx->pc = 0x2CF2A0u;
            goto label_2cf2a0;
        }
    }
    ctx->pc = 0x2CF158u;
label_2cf158:
    // 0x2cf158: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf15c:
    // 0x2cf15c: 0x2466134c  addiu       $a2, $v1, 0x134C
    ctx->pc = 0x2cf15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf160:
    // 0x2cf160: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x2cf160u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf164:
    // 0x2cf164: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x2cf164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2cf168:
    // 0x2cf168: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2cf168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2cf16c:
    // 0x2cf16c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2cf16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2cf170:
    // 0x2cf170: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2cf170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2cf174:
    // 0x2cf174: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2cf174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2cf178:
    // 0x2cf178: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x2cf178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2cf17c:
    // 0x2cf17c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2cf17cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_2cf180:
    // 0x2cf180: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf184:
    // 0x2cf184: 0x2467134c  addiu       $a3, $v1, 0x134C
    ctx->pc = 0x2cf184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf188:
    // 0x2cf188: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2cf188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf18c:
    // 0x2cf18c: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x2cf18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2cf190:
    // 0x2cf190: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2cf190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2cf194:
    // 0x2cf194: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2cf194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2cf198:
    // 0x2cf198: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2cf198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2cf19c:
    // 0x2cf19c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2cf19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2cf1a0:
    // 0x2cf1a0: 0x2881fffe  slti        $at, $a0, -0x2
    ctx->pc = 0x2cf1a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967294) ? 1 : 0);
label_2cf1a4:
    // 0x2cf1a4: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
label_2cf1a8:
    if (ctx->pc == 0x2CF1A8u) {
        ctx->pc = 0x2CF1ACu;
        goto label_2cf1ac;
    }
    ctx->pc = 0x2CF1A4u;
    {
        const bool branch_taken_0x2cf1a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf1a4) {
            ctx->pc = 0x2CF2A0u;
            goto label_2cf2a0;
        }
    }
    ctx->pc = 0x2CF1ACu;
label_2cf1ac:
    // 0x2cf1ac: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf1b0:
    // 0x2cf1b0: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x2cf1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf1b4:
    // 0x2cf1b4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cf1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf1b8:
    // 0x2cf1b8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2cf1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2cf1bc:
    // 0x2cf1bc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2cf1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2cf1c0:
    // 0x2cf1c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cf1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cf1c4:
    // 0x2cf1c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cf1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cf1c8:
    // 0x2cf1c8: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2cf1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_2cf1cc:
    // 0x2cf1cc: 0x10000034  b           . + 4 + (0x34 << 2)
label_2cf1d0:
    if (ctx->pc == 0x2CF1D0u) {
        ctx->pc = 0x2CF1D4u;
        goto label_2cf1d4;
    }
    ctx->pc = 0x2CF1CCu;
    {
        const bool branch_taken_0x2cf1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf1cc) {
            ctx->pc = 0x2CF2A0u;
            goto label_2cf2a0;
        }
    }
    ctx->pc = 0x2CF1D4u;
label_2cf1d4:
    // 0x2cf1d4: 0x16400032  bnez        $s2, . + 4 + (0x32 << 2)
label_2cf1d8:
    if (ctx->pc == 0x2CF1D8u) {
        ctx->pc = 0x2CF1DCu;
        goto label_2cf1dc;
    }
    ctx->pc = 0x2CF1D4u;
    {
        const bool branch_taken_0x2cf1d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf1d4) {
            ctx->pc = 0x2CF2A0u;
            goto label_2cf2a0;
        }
    }
    ctx->pc = 0x2CF1DCu;
label_2cf1dc:
    // 0x2cf1dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cf1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cf1e0:
    // 0x2cf1e0: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x2cf1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2cf1e4:
    // 0x2cf1e4: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x2cf1e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_2cf1e8:
    // 0x2cf1e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cf1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2cf1ec:
    // 0x2cf1ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cf1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cf1f0:
    // 0x2cf1f0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2cf1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2cf1f4:
    // 0x2cf1f4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2cf1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2cf1f8:
    // 0x2cf1f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cf1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cf1fc:
    // 0x2cf1fc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cf1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2cf200:
    // 0x2cf200: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2cf200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2cf204:
    // 0x2cf204: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cf204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2cf208:
    // 0x2cf208: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cf208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cf20c:
    // 0x2cf20c: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x2cf20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
label_2cf210:
    // 0x2cf210: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2cf210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_2cf214:
    // 0x2cf214: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2cf214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2cf218:
    // 0x2cf218: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cf218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2cf21c:
    // 0x2cf21c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2cf21cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 3));
label_2cf220:
    // 0x2cf220: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cf220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2cf224:
    // 0x2cf224: 0x30690001  andi        $t1, $v1, 0x1
    ctx->pc = 0x2cf224u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2cf228:
    // 0x2cf228: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf22c:
    // 0x2cf22c: 0x2487134c  addiu       $a3, $a0, 0x134C
    ctx->pc = 0x2cf22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
label_2cf230:
    // 0x2cf230: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x2cf230u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf234:
    // 0x2cf234: 0xd02821  addu        $a1, $a2, $s0
    ctx->pc = 0x2cf234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_2cf238:
    // 0x2cf238: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2cf238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2cf23c:
    // 0x2cf23c: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2cf23cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2cf240:
    // 0x2cf240: 0x1043021  addu        $a2, $t0, $a0
    ctx->pc = 0x2cf240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_2cf244:
    // 0x2cf244: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x2cf244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2cf248:
    // 0x2cf248: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x2cf248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_2cf24c:
    // 0x2cf24c: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x2cf24cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
label_2cf250:
    // 0x2cf250: 0x8fa90118  lw          $t1, 0x118($sp)
    ctx->pc = 0x2cf250u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf254:
    // 0x2cf254: 0x2526134c  addiu       $a2, $t1, 0x134C
    ctx->pc = 0x2cf254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4940));
label_2cf258:
    // 0x2cf258: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2cf258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf25c:
    // 0x2cf25c: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x2cf25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2cf260:
    // 0x2cf260: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2cf260u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2cf264:
    // 0x2cf264: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2cf264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2cf268:
    // 0x2cf268: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2cf268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2cf26c:
    // 0x2cf26c: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x2cf26cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2cf270:
    // 0x2cf270: 0x28e1000b  slti        $at, $a3, 0xB
    ctx->pc = 0x2cf270u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)11) ? 1 : 0);
label_2cf274:
    // 0x2cf274: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_2cf278:
    if (ctx->pc == 0x2CF278u) {
        ctx->pc = 0x2CF27Cu;
        goto label_2cf27c;
    }
    ctx->pc = 0x2CF274u;
    {
        const bool branch_taken_0x2cf274 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf274) {
            ctx->pc = 0x2CF2A0u;
            goto label_2cf2a0;
        }
    }
    ctx->pc = 0x2CF27Cu;
label_2cf27c:
    // 0x2cf27c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2cf27cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2cf280:
    // 0x2cf280: 0x8faa0118  lw          $t2, 0x118($sp)
    ctx->pc = 0x2cf280u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf284:
    // 0x2cf284: 0x2557134c  addiu       $s7, $t2, 0x134C
    ctx->pc = 0x2cf284u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), 4940));
label_2cf288:
    // 0x2cf288: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cf288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf28c:
    // 0x2cf28c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2cf28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2cf290:
    // 0x2cf290: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2cf290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2cf294:
    // 0x2cf294: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2cf294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2cf298:
    // 0x2cf298: 0x64b021  addu        $s6, $v1, $a0
    ctx->pc = 0x2cf298u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cf29c:
    // 0x2cf29c: 0xaec90014  sw          $t1, 0x14($s6)
    ctx->pc = 0x2cf29cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 9));
label_2cf2a0:
    // 0x2cf2a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cf2a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2cf2a4:
    // 0x2cf2a4: 0x32430003  andi        $v1, $s2, 0x3
    ctx->pc = 0x2cf2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_2cf2a8:
    // 0x2cf2a8: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x2cf2a8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2cf2ac:
    // 0x2cf2ac: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf2b0:
    // 0x2cf2b0: 0x2485134c  addiu       $a1, $a0, 0x134C
    ctx->pc = 0x2cf2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
label_2cf2b4:
    // 0x2cf2b4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cf2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf2b8:
    // 0x2cf2b8: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x2cf2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2cf2bc:
    // 0x2cf2bc: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2cf2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2cf2c0:
    // 0x2cf2c0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2cf2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cf2c4:
    // 0x2cf2c4: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2cf2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2cf2c8:
    // 0x2cf2c8: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x2cf2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_2cf2cc:
    // 0x2cf2cc: 0x31030004  andi        $v1, $t0, 0x4
    ctx->pc = 0x2cf2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
label_2cf2d0:
    // 0x2cf2d0: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x2cf2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_2cf2d4:
    // 0x2cf2d4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf2d8:
    // 0x2cf2d8: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x2cf2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf2dc:
    // 0x2cf2dc: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x2cf2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf2e0:
    // 0x2cf2e0: 0xd02021  addu        $a0, $a2, $s0
    ctx->pc = 0x2cf2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_2cf2e4:
    // 0x2cf2e4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2cf2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2cf2e8:
    // 0x2cf2e8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x2cf2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cf2ec:
    // 0x2cf2ec: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x2cf2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2cf2f0:
    // 0x2cf2f0: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x2cf2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2cf2f4:
    // 0x2cf2f4: 0x921825  or          $v1, $a0, $s2
    ctx->pc = 0x2cf2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
label_2cf2f8:
    // 0x2cf2f8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2cf2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_2cf2fc:
    // 0x2cf2fc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2cf2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2cf300:
    // 0x2cf300: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2cf300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_2cf304:
    // 0x2cf304: 0x24868550  addiu       $a2, $a0, -0x7AB0
    ctx->pc = 0x2cf304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935888));
label_2cf308:
    // 0x2cf308: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2cf308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2cf30c:
    // 0x2cf30c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf310:
    // 0x2cf310: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2cf310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2cf314:
    // 0x2cf314: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cf314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cf318:
    // 0x2cf318: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x2cf318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2cf31c:
    // 0x2cf31c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf320:
    // 0x2cf320: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x2cf320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2cf324:
    // 0x2cf324: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2cf324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2cf328:
    // 0x2cf328: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2cf328u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2cf32c:
    // 0x2cf32c: 0x8e330034  lw          $s3, 0x34($s1)
    ctx->pc = 0x2cf32cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2cf330:
    // 0x2cf330: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf334:
    // 0x2cf334: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2cf334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf338:
    // 0x2cf338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2cf33c:
    // 0x2cf33c: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x2cf33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_2cf340:
    // 0x2cf340: 0x8ca40058  lw          $a0, 0x58($a1)
    ctx->pc = 0x2cf340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_2cf344:
    // 0x2cf344: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2cf344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2cf348:
    // 0x2cf348: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x2cf348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf34c:
    // 0x2cf34c: 0x24c5134c  addiu       $a1, $a2, 0x134C
    ctx->pc = 0x2cf34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4940));
label_2cf350:
    // 0x2cf350: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cf350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf354:
    // 0x2cf354: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2cf354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2cf358:
    // 0x2cf358: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2cf358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2cf35c:
    // 0x2cf35c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2cf35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cf360:
    // 0x2cf360: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cf360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2cf364:
    // 0x2cf364: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2cf364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf368:
    // 0x2cf368: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf36c:
    // 0x2cf36c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2cf36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf370:
    // 0x2cf370: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2cf370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2cf374:
    // 0x2cf374: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x2cf374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2cf378:
    // 0x2cf378: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2cf378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2cf37c:
    // 0x2cf37c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2cf37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_2cf380:
    // 0x2cf380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cf380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cf384:
    // 0x2cf384: 0x0  nop
    ctx->pc = 0x2cf384u;
    // NOP
label_2cf388:
    // 0x2cf388: 0x2e030012  sltiu       $v1, $s0, 0x12
    ctx->pc = 0x2cf388u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_2cf38c:
    // 0x2cf38c: 0x1460ff28  bnez        $v1, . + 4 + (-0xD8 << 2)
label_2cf390:
    if (ctx->pc == 0x2CF390u) {
        ctx->pc = 0x2CF394u;
        goto label_2cf394;
    }
    ctx->pc = 0x2CF38Cu;
    {
        const bool branch_taken_0x2cf38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf38c) {
            ctx->pc = 0x2CF030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf030;
        }
    }
    ctx->pc = 0x2CF394u;
label_2cf394:
    // 0x2cf394: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf398:
    // 0x2cf398: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x2cf398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2cf39c:
    // 0x2cf39c: 0x24a314d0  addiu       $v1, $a1, 0x14D0
    ctx->pc = 0x2cf39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5328));
label_2cf3a0:
    // 0x2cf3a0: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2cf3a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2cf3a4:
    // 0x2cf3a4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf3a8:
    // 0x2cf3a8: 0x2483134c  addiu       $v1, $a0, 0x134C
    ctx->pc = 0x2cf3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
label_2cf3ac:
    // 0x2cf3ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf3b0:
    // 0x2cf3b0: 0x8c8501c8  lw          $a1, 0x1C8($a0)
    ctx->pc = 0x2cf3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
label_2cf3b4:
    // 0x2cf3b4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf3b8:
    // 0x2cf3b8: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf3bc:
    // 0x2cf3bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf3c0:
    // 0x2cf3c0: 0x8c8301cc  lw          $v1, 0x1CC($a0)
    ctx->pc = 0x2cf3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
label_2cf3c4:
    // 0x2cf3c4: 0x10a3003a  beq         $a1, $v1, . + 4 + (0x3A << 2)
label_2cf3c8:
    if (ctx->pc == 0x2CF3C8u) {
        ctx->pc = 0x2CF3CCu;
        goto label_2cf3cc;
    }
    ctx->pc = 0x2CF3C4u;
    {
        const bool branch_taken_0x2cf3c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cf3c4) {
            ctx->pc = 0x2CF4B0u;
            goto label_2cf4b0;
        }
    }
    ctx->pc = 0x2CF3CCu;
label_2cf3cc:
    // 0x2cf3cc: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf3d0:
    // 0x2cf3d0: 0x2486134c  addiu       $a2, $a0, 0x134C
    ctx->pc = 0x2cf3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
label_2cf3d4:
    // 0x2cf3d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cf3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2cf3d8:
    // 0x2cf3d8: 0x8c6301c8  lw          $v1, 0x1C8($v1)
    ctx->pc = 0x2cf3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_2cf3dc:
    // 0x2cf3dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cf3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf3e0:
    // 0x2cf3e0: 0x1465000c  bne         $v1, $a1, . + 4 + (0xC << 2)
label_2cf3e4:
    if (ctx->pc == 0x2CF3E4u) {
        ctx->pc = 0x2CF3E8u;
        goto label_2cf3e8;
    }
    ctx->pc = 0x2CF3E0u;
    {
        const bool branch_taken_0x2cf3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cf3e0) {
            ctx->pc = 0x2CF414u;
            goto label_2cf414;
        }
    }
    ctx->pc = 0x2CF3E8u;
label_2cf3e8:
    // 0x2cf3e8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf3ec:
    // 0x2cf3ec: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf3f0:
    // 0x2cf3f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cf3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf3f4:
    // 0x2cf3f4: 0x8c6301cc  lw          $v1, 0x1CC($v1)
    ctx->pc = 0x2cf3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_2cf3f8:
    // 0x2cf3f8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2cf3fc:
    if (ctx->pc == 0x2CF3FCu) {
        ctx->pc = 0x2CF400u;
        goto label_2cf400;
    }
    ctx->pc = 0x2CF3F8u;
    {
        const bool branch_taken_0x2cf3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf3f8) {
            ctx->pc = 0x2CF414u;
            goto label_2cf414;
        }
    }
    ctx->pc = 0x2CF400u;
label_2cf400:
    // 0x2cf400: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cf400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cf404:
    // 0x2cf404: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf408:
    // 0x2cf408: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf40c:
    // 0x2cf40c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf410:
    // 0x2cf410: 0xac8501c8  sw          $a1, 0x1C8($a0)
    ctx->pc = 0x2cf410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 5));
label_2cf414:
    // 0x2cf414: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf418:
    // 0x2cf418: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf41c:
    // 0x2cf41c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cf41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf420:
    // 0x2cf420: 0x8c6301c8  lw          $v1, 0x1C8($v1)
    ctx->pc = 0x2cf420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_2cf424:
    // 0x2cf424: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_2cf428:
    if (ctx->pc == 0x2CF428u) {
        ctx->pc = 0x2CF42Cu;
        goto label_2cf42c;
    }
    ctx->pc = 0x2CF424u;
    {
        const bool branch_taken_0x2cf424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf424) {
            ctx->pc = 0x2CF45Cu;
            goto label_2cf45c;
        }
    }
    ctx->pc = 0x2CF42Cu;
label_2cf42c:
    // 0x2cf42c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf430:
    // 0x2cf430: 0x2483134c  addiu       $v1, $a0, 0x134C
    ctx->pc = 0x2cf430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
label_2cf434:
    // 0x2cf434: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cf434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf438:
    // 0x2cf438: 0x8c6301cc  lw          $v1, 0x1CC($v1)
    ctx->pc = 0x2cf438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_2cf43c:
    // 0x2cf43c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cf43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf440:
    // 0x2cf440: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_2cf444:
    if (ctx->pc == 0x2CF444u) {
        ctx->pc = 0x2CF448u;
        goto label_2cf448;
    }
    ctx->pc = 0x2CF440u;
    {
        const bool branch_taken_0x2cf440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cf440) {
            ctx->pc = 0x2CF45Cu;
            goto label_2cf45c;
        }
    }
    ctx->pc = 0x2CF448u;
label_2cf448:
    // 0x2cf448: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2cf448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cf44c:
    // 0x2cf44c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf450:
    // 0x2cf450: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf454:
    // 0x2cf454: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2cf454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf458:
    // 0x2cf458: 0xaca401c8  sw          $a0, 0x1C8($a1)
    ctx->pc = 0x2cf458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 456), GPR_U32(ctx, 4));
label_2cf45c:
    // 0x2cf45c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf460:
    // 0x2cf460: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cf460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf464:
    // 0x2cf464: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf468:
    // 0x2cf468: 0x8c6501c8  lw          $a1, 0x1C8($v1)
    ctx->pc = 0x2cf468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_2cf46c:
    // 0x2cf46c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf470:
    // 0x2cf470: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cf470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf474:
    // 0x2cf474: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf478:
    // 0x2cf478: 0xac6501cc  sw          $a1, 0x1CC($v1)
    ctx->pc = 0x2cf478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 460), GPR_U32(ctx, 5));
label_2cf47c:
    // 0x2cf47c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x2cf47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
label_2cf480:
    // 0x2cf480: 0xa4208318  sh          $zero, -0x7CE8($at)
    ctx->pc = 0x2cf480u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294935320), (uint16_t)GPR_U32(ctx, 0));
label_2cf484:
    // 0x2cf484: 0x343c  dsll32      $a2, $zero, 16
    ctx->pc = 0x2cf484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 16));
label_2cf488:
    // 0x2cf488: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2cf488u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_2cf48c:
    // 0x2cf48c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x2cf48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
label_2cf490:
    // 0x2cf490: 0xa4268314  sh          $a2, -0x7CEC($at)
    ctx->pc = 0x2cf490u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294935316), (uint16_t)GPR_U32(ctx, 6));
label_2cf494:
    // 0x2cf494: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x2cf494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
label_2cf498:
    // 0x2cf498: 0xa4208316  sh          $zero, -0x7CEA($at)
    ctx->pc = 0x2cf498u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294935318), (uint16_t)GPR_U32(ctx, 0));
label_2cf49c:
    // 0x2cf49c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2cf49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2cf4a0:
    // 0x2cf4a0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf4a4:
    // 0x2cf4a4: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cf4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf4a8:
    // 0x2cf4a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf4ac:
    // 0x2cf4ac: 0xac6501c4  sw          $a1, 0x1C4($v1)
    ctx->pc = 0x2cf4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 452), GPR_U32(ctx, 5));
label_2cf4b0:
    // 0x2cf4b0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf4b4:
    // 0x2cf4b4: 0x2470134c  addiu       $s0, $v1, 0x134C
    ctx->pc = 0x2cf4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf4b8:
    // 0x2cf4b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cf4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cf4bc:
    // 0x2cf4bc: 0x8c6501c8  lw          $a1, 0x1C8($v1)
    ctx->pc = 0x2cf4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_2cf4c0:
    // 0x2cf4c0: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2cf4c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cf4c4:
    // 0x2cf4c4: 0x10b4008a  beq         $a1, $s4, . + 4 + (0x8A << 2)
label_2cf4c8:
    if (ctx->pc == 0x2CF4C8u) {
        ctx->pc = 0x2CF4CCu;
        goto label_2cf4cc;
    }
    ctx->pc = 0x2CF4C4u;
    {
        const bool branch_taken_0x2cf4c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cf4c4) {
            ctx->pc = 0x2CF6F0u;
            goto label_2cf6f0;
        }
    }
    ctx->pc = 0x2CF4CCu;
label_2cf4cc:
    // 0x2cf4cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2cf4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cf4d0:
    // 0x2cf4d0: 0x10a4000f  beq         $a1, $a0, . + 4 + (0xF << 2)
label_2cf4d4:
    if (ctx->pc == 0x2CF4D4u) {
        ctx->pc = 0x2CF4D8u;
        goto label_2cf4d8;
    }
    ctx->pc = 0x2CF4D0u;
    {
        const bool branch_taken_0x2cf4d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2cf4d0) {
            ctx->pc = 0x2CF510u;
            goto label_2cf510;
        }
    }
    ctx->pc = 0x2CF4D8u;
label_2cf4d8:
    // 0x2cf4d8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2cf4dc:
    if (ctx->pc == 0x2CF4DCu) {
        ctx->pc = 0x2CF4E0u;
        goto label_2cf4e0;
    }
    ctx->pc = 0x2CF4D8u;
    {
        const bool branch_taken_0x2cf4d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf4d8) {
            ctx->pc = 0x2CF4F4u;
            goto label_2cf4f4;
        }
    }
    ctx->pc = 0x2CF4E0u;
label_2cf4e0:
    // 0x2cf4e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf4e4:
    // 0x2cf4e4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_2cf4e8:
    if (ctx->pc == 0x2CF4E8u) {
        ctx->pc = 0x2CF4ECu;
        goto label_2cf4ec;
    }
    ctx->pc = 0x2CF4E4u;
    {
        const bool branch_taken_0x2cf4e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cf4e4) {
            ctx->pc = 0x2CF4F4u;
            goto label_2cf4f4;
        }
    }
    ctx->pc = 0x2CF4ECu;
label_2cf4ec:
    // 0x2cf4ec: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_2cf4f0:
    if (ctx->pc == 0x2CF4F0u) {
        ctx->pc = 0x2CF4F4u;
        goto label_2cf4f4;
    }
    ctx->pc = 0x2CF4ECu;
    {
        const bool branch_taken_0x2cf4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf4ec) {
            ctx->pc = 0x2CF8C8u;
            goto label_2cf8c8;
        }
    }
    ctx->pc = 0x2CF4F4u;
label_2cf4f4:
    // 0x2cf4f4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2cf4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2cf4f8:
    // 0x2cf4f8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf4fc:
    // 0x2cf4fc: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cf4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf500:
    // 0x2cf500: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf504:
    // 0x2cf504: 0xac6501c4  sw          $a1, 0x1C4($v1)
    ctx->pc = 0x2cf504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 452), GPR_U32(ctx, 5));
label_2cf508:
    // 0x2cf508: 0x100000ef  b           . + 4 + (0xEF << 2)
label_2cf50c:
    if (ctx->pc == 0x2CF50Cu) {
        ctx->pc = 0x2CF510u;
        goto label_2cf510;
    }
    ctx->pc = 0x2CF508u;
    {
        const bool branch_taken_0x2cf508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf508) {
            ctx->pc = 0x2CF8C8u;
            goto label_2cf8c8;
        }
    }
    ctx->pc = 0x2CF510u;
label_2cf510:
    // 0x2cf510: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x2cf510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf514:
    // 0x2cf514: 0x8ce301f8  lw          $v1, 0x1F8($a3)
    ctx->pc = 0x2cf514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 504)));
label_2cf518:
    // 0x2cf518: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_2cf51c:
    if (ctx->pc == 0x2CF51Cu) {
        ctx->pc = 0x2CF520u;
        goto label_2cf520;
    }
    ctx->pc = 0x2CF518u;
    {
        const bool branch_taken_0x2cf518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf518) {
            ctx->pc = 0x2CF6A4u;
            goto label_2cf6a4;
        }
    }
    ctx->pc = 0x2CF520u;
label_2cf520:
    // 0x2cf520: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cf520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf524:
    // 0x2cf524: 0x8ca301f8  lw          $v1, 0x1F8($a1)
    ctx->pc = 0x2cf524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 504)));
label_2cf528:
    // 0x2cf528: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf52c:
    // 0x2cf52c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2cf52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf530:
    // 0x2cf530: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2cf530u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2cf534:
    // 0x2cf534: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x2cf534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2cf538:
    // 0x2cf538: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2cf538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2cf53c:
    // 0x2cf53c: 0x3c060086  lui         $a2, 0x86
    ctx->pc = 0x2cf53cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)134 << 16));
label_2cf540:
    // 0x2cf540: 0x24c7ade0  addiu       $a3, $a2, -0x5220
    ctx->pc = 0x2cf540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946272));
label_2cf544:
    // 0x2cf544: 0xe54021  addu        $t0, $a3, $a1
    ctx->pc = 0x2cf544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2cf548:
    // 0x2cf548: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf54c:
    // 0x2cf54c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2cf54cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf550:
    // 0x2cf550: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2cf550u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2cf554:
    // 0x2cf554: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf558:
    // 0x2cf558: 0x854821  addu        $t1, $a0, $a1
    ctx->pc = 0x2cf558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2cf55c:
    // 0x2cf55c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2cf55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_2cf560:
    // 0x2cf560: 0x24a48310  addiu       $a0, $a1, -0x7CF0
    ctx->pc = 0x2cf560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935312));
label_2cf564:
    // 0x2cf564: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x2cf564u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_2cf568:
    // 0x2cf568: 0x24e582e0  addiu       $a1, $a3, -0x7D20
    ctx->pc = 0x2cf568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935264));
label_2cf56c:
    // 0x2cf56c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x2cf56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2cf570:
    // 0x2cf570: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cf570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2cf574:
    // 0x2cf574: 0x246782f8  addiu       $a3, $v1, -0x7D08
    ctx->pc = 0x2cf574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935288));
label_2cf578:
    // 0x2cf578: 0x8d290244  lw          $t1, 0x244($t1)
    ctx->pc = 0x2cf578u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 580)));
label_2cf57c:
    // 0x2cf57c: 0x27aa0104  addiu       $t2, $sp, 0x104
    ctx->pc = 0x2cf57cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_2cf580:
    // 0x2cf580: 0xc075a78  jal         func_1D69E0
label_2cf584:
    if (ctx->pc == 0x2CF584u) {
        ctx->pc = 0x2CF588u;
        goto label_2cf588;
    }
    ctx->pc = 0x2CF580u;
    SET_GPR_U32(ctx, 31, 0x2CF588u);
    ctx->pc = 0x1D69E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D69E0u, 0x2CF580u, 0x2CF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF588u;
label_2cf588:
    // 0x2cf588: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x2cf588u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cf58c:
    // 0x2cf58c: 0x12e00045  beqz        $s7, . + 4 + (0x45 << 2)
label_2cf590:
    if (ctx->pc == 0x2CF590u) {
        ctx->pc = 0x2CF594u;
        goto label_2cf594;
    }
    ctx->pc = 0x2CF58Cu;
    {
        const bool branch_taken_0x2cf58c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf58c) {
            ctx->pc = 0x2CF6A4u;
            goto label_2cf6a4;
        }
    }
    ctx->pc = 0x2CF594u;
label_2cf594:
    // 0x2cf594: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf598:
    // 0x2cf598: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2cf598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf59c:
    // 0x2cf59c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2cf5a0:
    // 0x2cf5a0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf5a4:
    // 0x2cf5a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cf5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2cf5a8:
    // 0x2cf5a8: 0x8c760234  lw          $s6, 0x234($v1)
    ctx->pc = 0x2cf5a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 564)));
label_2cf5ac:
    // 0x2cf5ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf5b0:
    // 0x2cf5b0: 0x8c270140  lw          $a3, 0x140($at)
    ctx->pc = 0x2cf5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf5b4:
    // 0x2cf5b4: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x2cf5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2cf5b8:
    // 0x2cf5b8: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x2cf5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2cf5bc:
    // 0x2cf5bc: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2cf5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2cf5c0:
    // 0x2cf5c0: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x2cf5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf5c4:
    // 0x2cf5c4: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x2cf5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2cf5c8:
    // 0x2cf5c8: 0x24640204  addiu       $a0, $v1, 0x204
    ctx->pc = 0x2cf5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 516));
label_2cf5cc:
    // 0x2cf5cc: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x2cf5ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_2cf5d0:
    // 0x2cf5d0: 0xc06b06c  jal         func_1AC1B0
label_2cf5d4:
    if (ctx->pc == 0x2CF5D4u) {
        ctx->pc = 0x2CF5D8u;
        goto label_2cf5d8;
    }
    ctx->pc = 0x2CF5D0u;
    SET_GPR_U32(ctx, 31, 0x2CF5D8u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2CF5D0u, 0x2CF5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5D8u;
label_2cf5d8:
    // 0x2cf5d8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2cf5d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cf5dc:
    // 0x2cf5dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf5e0:
    // 0x2cf5e0: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2cf5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf5e4:
    // 0x2cf5e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2cf5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2cf5e8:
    // 0x2cf5e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cf5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cf5ec:
    // 0x2cf5ec: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x2cf5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2cf5f0:
    // 0x2cf5f0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf5f4:
    // 0x2cf5f4: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x2cf5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2cf5f8:
    // 0x2cf5f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf5fc:
    // 0x2cf5fc: 0x8c320140  lw          $s2, 0x140($at)
    ctx->pc = 0x2cf5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf600:
    // 0x2cf600: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2cf600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2cf604:
    // 0x2cf604: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x2cf604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2cf608:
    // 0x2cf608: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2cf608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2cf60c:
    // 0x2cf60c: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x2cf60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
label_2cf610:
    // 0x2cf610: 0x2463ade0  addiu       $v1, $v1, -0x5220
    ctx->pc = 0x2cf610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946272));
label_2cf614:
    // 0x2cf614: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2cf614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cf618:
    // 0x2cf618: 0x24c40204  addiu       $a0, $a2, 0x204
    ctx->pc = 0x2cf618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 516));
label_2cf61c:
    // 0x2cf61c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2cf61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2cf620:
    // 0x2cf620: 0xc06b07c  jal         func_1AC1F0
label_2cf624:
    if (ctx->pc == 0x2CF624u) {
        ctx->pc = 0x2CF628u;
        goto label_2cf628;
    }
    ctx->pc = 0x2CF620u;
    SET_GPR_U32(ctx, 31, 0x2CF628u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2CF620u, 0x2CF628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF628u;
label_2cf628:
    // 0x2cf628: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cf628u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cf62c:
    // 0x2cf62c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf630:
    // 0x2cf630: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2cf630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf634:
    // 0x2cf634: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x2cf634u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2cf638:
    // 0x2cf638: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x2cf638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2cf63c:
    // 0x2cf63c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2cf63cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2cf640:
    // 0x2cf640: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf644:
    // 0x2cf644: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2cf644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cf648:
    // 0x2cf648: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf64c:
    // 0x2cf64c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2cf64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf650:
    // 0x2cf650: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x2cf650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2cf654:
    // 0x2cf654: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf658:
    // 0x2cf658: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2cf658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2cf65c:
    // 0x2cf65c: 0x8c670244  lw          $a3, 0x244($v1)
    ctx->pc = 0x2cf65cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
label_2cf660:
    // 0x2cf660: 0x24a40204  addiu       $a0, $a1, 0x204
    ctx->pc = 0x2cf660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 516));
label_2cf664:
    // 0x2cf664: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2cf664u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2cf668:
    // 0x2cf668: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x2cf668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2cf66c:
    // 0x2cf66c: 0xc06b0a8  jal         func_1AC2A0
label_2cf670:
    if (ctx->pc == 0x2CF670u) {
        ctx->pc = 0x2CF674u;
        goto label_2cf674;
    }
    ctx->pc = 0x2CF66Cu;
    SET_GPR_U32(ctx, 31, 0x2CF674u);
    ctx->pc = 0x1AC2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC2A0u, 0x2CF66Cu, 0x2CF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF674u;
label_2cf674:
    // 0x2cf674: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cf674u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cf678:
    // 0x2cf678: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf67c:
    // 0x2cf67c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2cf67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf680:
    // 0x2cf680: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2cf680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2cf684:
    // 0x2cf684: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2cf684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2cf688:
    // 0x2cf688: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cf688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2cf68c:
    // 0x2cf68c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cf68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf690:
    // 0x2cf690: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2cf690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2cf694:
    // 0x2cf694: 0x24640204  addiu       $a0, $v1, 0x204
    ctx->pc = 0x2cf694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 516));
label_2cf698:
    // 0x2cf698: 0xc06b0d4  jal         func_1AC350
label_2cf69c:
    if (ctx->pc == 0x2CF69Cu) {
        ctx->pc = 0x2CF6A0u;
        goto label_2cf6a0;
    }
    ctx->pc = 0x2CF698u;
    SET_GPR_U32(ctx, 31, 0x2CF6A0u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x2CF698u, 0x2CF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6A0u;
label_2cf6a0:
    // 0x2cf6a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cf6a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cf6a4:
    // 0x2cf6a4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf6a8:
    // 0x2cf6a8: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf6ac:
    // 0x2cf6ac: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2cf6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf6b0:
    // 0x2cf6b0: 0x8ca401c4  lw          $a0, 0x1C4($a1)
    ctx->pc = 0x2cf6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 452)));
label_2cf6b4:
    // 0x2cf6b4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2cf6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2cf6b8:
    // 0x2cf6b8: 0xaca301c4  sw          $v1, 0x1C4($a1)
    ctx->pc = 0x2cf6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 452), GPR_U32(ctx, 3));
label_2cf6bc:
    // 0x2cf6bc: 0x1c600082  bgtz        $v1, . + 4 + (0x82 << 2)
label_2cf6c0:
    if (ctx->pc == 0x2CF6C0u) {
        ctx->pc = 0x2CF6C4u;
        goto label_2cf6c4;
    }
    ctx->pc = 0x2CF6BCu;
    {
        const bool branch_taken_0x2cf6bc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2cf6bc) {
            ctx->pc = 0x2CF8C8u;
            goto label_2cf8c8;
        }
    }
    ctx->pc = 0x2CF6C4u;
label_2cf6c4:
    // 0x2cf6c4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2cf6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2cf6c8:
    // 0x2cf6c8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf6cc:
    // 0x2cf6cc: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x2cf6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf6d0:
    // 0x2cf6d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cf6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cf6d4:
    // 0x2cf6d4: 0xac6401c4  sw          $a0, 0x1C4($v1)
    ctx->pc = 0x2cf6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 452), GPR_U32(ctx, 4));
label_2cf6d8:
    // 0x2cf6d8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf6dc:
    // 0x2cf6dc: 0x2483134c  addiu       $v1, $a0, 0x134C
    ctx->pc = 0x2cf6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
label_2cf6e0:
    // 0x2cf6e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf6e4:
    // 0x2cf6e4: 0xac8001c8  sw          $zero, 0x1C8($a0)
    ctx->pc = 0x2cf6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 0));
label_2cf6e8:
    // 0x2cf6e8: 0x10000077  b           . + 4 + (0x77 << 2)
label_2cf6ec:
    if (ctx->pc == 0x2CF6ECu) {
        ctx->pc = 0x2CF6F0u;
        goto label_2cf6f0;
    }
    ctx->pc = 0x2CF6E8u;
    {
        const bool branch_taken_0x2cf6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf6e8) {
            ctx->pc = 0x2CF8C8u;
            goto label_2cf8c8;
        }
    }
    ctx->pc = 0x2CF6F0u;
label_2cf6f0:
    // 0x2cf6f0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf6f4:
    // 0x2cf6f4: 0x8c6301f8  lw          $v1, 0x1F8($v1)
    ctx->pc = 0x2cf6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 504)));
label_2cf6f8:
    // 0x2cf6f8: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
label_2cf6fc:
    if (ctx->pc == 0x2CF6FCu) {
        ctx->pc = 0x2CF700u;
        goto label_2cf700;
    }
    ctx->pc = 0x2CF6F8u;
    {
        const bool branch_taken_0x2cf6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf6f8) {
            ctx->pc = 0x2CF880u;
            goto label_2cf880;
        }
    }
    ctx->pc = 0x2CF700u;
label_2cf700:
    // 0x2cf700: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf704:
    // 0x2cf704: 0x8c6301f8  lw          $v1, 0x1F8($v1)
    ctx->pc = 0x2cf704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 504)));
label_2cf708:
    // 0x2cf708: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf70c:
    // 0x2cf70c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x2cf70cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf710:
    // 0x2cf710: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x2cf710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_2cf714:
    // 0x2cf714: 0x893821  addu        $a3, $a0, $t1
    ctx->pc = 0x2cf714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_2cf718:
    // 0x2cf718: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x2cf718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_2cf71c:
    // 0x2cf71c: 0x3c050086  lui         $a1, 0x86
    ctx->pc = 0x2cf71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)134 << 16));
label_2cf720:
    // 0x2cf720: 0x24a4ade0  addiu       $a0, $a1, -0x5220
    ctx->pc = 0x2cf720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946272));
label_2cf724:
    // 0x2cf724: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x2cf724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2cf728:
    // 0x2cf728: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf72c:
    // 0x2cf72c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2cf72cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf730:
    // 0x2cf730: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2cf730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2cf734:
    // 0x2cf734: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf738:
    // 0x2cf738: 0x854821  addu        $t1, $a0, $a1
    ctx->pc = 0x2cf738u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2cf73c:
    // 0x2cf73c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2cf73cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_2cf740:
    // 0x2cf740: 0x24c48310  addiu       $a0, $a2, -0x7CF0
    ctx->pc = 0x2cf740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935312));
label_2cf744:
    // 0x2cf744: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2cf744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_2cf748:
    // 0x2cf748: 0x24a582e0  addiu       $a1, $a1, -0x7D20
    ctx->pc = 0x2cf748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935264));
label_2cf74c:
    // 0x2cf74c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x2cf74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2cf750:
    // 0x2cf750: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cf750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2cf754:
    // 0x2cf754: 0x246782f8  addiu       $a3, $v1, -0x7D08
    ctx->pc = 0x2cf754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935288));
label_2cf758:
    // 0x2cf758: 0x8d290244  lw          $t1, 0x244($t1)
    ctx->pc = 0x2cf758u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 580)));
label_2cf75c:
    // 0x2cf75c: 0x27aa0104  addiu       $t2, $sp, 0x104
    ctx->pc = 0x2cf75cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_2cf760:
    // 0x2cf760: 0xc075a78  jal         func_1D69E0
label_2cf764:
    if (ctx->pc == 0x2CF764u) {
        ctx->pc = 0x2CF768u;
        goto label_2cf768;
    }
    ctx->pc = 0x2CF760u;
    SET_GPR_U32(ctx, 31, 0x2CF768u);
    ctx->pc = 0x1D69E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D69E0u, 0x2CF760u, 0x2CF768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF768u;
label_2cf768:
    // 0x2cf768: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x2cf768u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cf76c:
    // 0x2cf76c: 0x12e00044  beqz        $s7, . + 4 + (0x44 << 2)
label_2cf770:
    if (ctx->pc == 0x2CF770u) {
        ctx->pc = 0x2CF774u;
        goto label_2cf774;
    }
    ctx->pc = 0x2CF76Cu;
    {
        const bool branch_taken_0x2cf76c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf76c) {
            ctx->pc = 0x2CF880u;
            goto label_2cf880;
        }
    }
    ctx->pc = 0x2CF774u;
label_2cf774:
    // 0x2cf774: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf778:
    // 0x2cf778: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2cf778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf77c:
    // 0x2cf77c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2cf780:
    // 0x2cf780: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf784:
    // 0x2cf784: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cf784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2cf788:
    // 0x2cf788: 0x8c760234  lw          $s6, 0x234($v1)
    ctx->pc = 0x2cf788u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 564)));
label_2cf78c:
    // 0x2cf78c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf790:
    // 0x2cf790: 0x8c320140  lw          $s2, 0x140($at)
    ctx->pc = 0x2cf790u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf794:
    // 0x2cf794: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x2cf794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2cf798:
    // 0x2cf798: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x2cf798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2cf79c:
    // 0x2cf79c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2cf79cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2cf7a0:
    // 0x2cf7a0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf7a4:
    // 0x2cf7a4: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x2cf7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2cf7a8:
    // 0x2cf7a8: 0x24e40204  addiu       $a0, $a3, 0x204
    ctx->pc = 0x2cf7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 516));
label_2cf7ac:
    // 0x2cf7ac: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x2cf7acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_2cf7b0:
    // 0x2cf7b0: 0xc06b06c  jal         func_1AC1B0
label_2cf7b4:
    if (ctx->pc == 0x2CF7B4u) {
        ctx->pc = 0x2CF7B8u;
        goto label_2cf7b8;
    }
    ctx->pc = 0x2CF7B0u;
    SET_GPR_U32(ctx, 31, 0x2CF7B8u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2CF7B0u, 0x2CF7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7B8u;
label_2cf7b8:
    // 0x2cf7b8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2cf7b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cf7bc:
    // 0x2cf7bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf7c0:
    // 0x2cf7c0: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2cf7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf7c4:
    // 0x2cf7c4: 0x64040  sll         $t0, $a2, 1
    ctx->pc = 0x2cf7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2cf7c8:
    // 0x2cf7c8: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x2cf7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2cf7cc:
    // 0x2cf7cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2cf7d0:
    // 0x2cf7d0: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cf7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf7d4:
    // 0x2cf7d4: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x2cf7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2cf7d8:
    // 0x2cf7d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf7dc:
    // 0x2cf7dc: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2cf7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf7e0:
    // 0x2cf7e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cf7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2cf7e4:
    // 0x2cf7e4: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x2cf7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cf7e8:
    // 0x2cf7e8: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x2cf7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_2cf7ec:
    // 0x2cf7ec: 0x3c040086  lui         $a0, 0x86
    ctx->pc = 0x2cf7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)134 << 16));
label_2cf7f0:
    // 0x2cf7f0: 0x2483ade0  addiu       $v1, $a0, -0x5220
    ctx->pc = 0x2cf7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946272));
label_2cf7f4:
    // 0x2cf7f4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2cf7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2cf7f8:
    // 0x2cf7f8: 0x24c40204  addiu       $a0, $a2, 0x204
    ctx->pc = 0x2cf7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 516));
label_2cf7fc:
    // 0x2cf7fc: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2cf7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2cf800:
    // 0x2cf800: 0xc06b07c  jal         func_1AC1F0
label_2cf804:
    if (ctx->pc == 0x2CF804u) {
        ctx->pc = 0x2CF808u;
        goto label_2cf808;
    }
    ctx->pc = 0x2CF800u;
    SET_GPR_U32(ctx, 31, 0x2CF808u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2CF800u, 0x2CF808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF808u;
label_2cf808:
    // 0x2cf808: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cf808u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cf80c:
    // 0x2cf80c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf810:
    // 0x2cf810: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2cf810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf814:
    // 0x2cf814: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2cf814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2cf818:
    // 0x2cf818: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cf818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cf81c:
    // 0x2cf81c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2cf81cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2cf820:
    // 0x2cf820: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf824:
    // 0x2cf824: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2cf824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2cf828:
    // 0x2cf828: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf82c:
    // 0x2cf82c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2cf82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf830:
    // 0x2cf830: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x2cf830u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2cf834:
    // 0x2cf834: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf838:
    // 0x2cf838: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2cf838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2cf83c:
    // 0x2cf83c: 0x8c650244  lw          $a1, 0x244($v1)
    ctx->pc = 0x2cf83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
label_2cf840:
    // 0x2cf840: 0x24840204  addiu       $a0, $a0, 0x204
    ctx->pc = 0x2cf840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
label_2cf844:
    // 0x2cf844: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x2cf844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2cf848:
    // 0x2cf848: 0xc06b0a8  jal         func_1AC2A0
label_2cf84c:
    if (ctx->pc == 0x2CF84Cu) {
        ctx->pc = 0x2CF850u;
        goto label_2cf850;
    }
    ctx->pc = 0x2CF848u;
    SET_GPR_U32(ctx, 31, 0x2CF850u);
    ctx->pc = 0x1AC2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC2A0u, 0x2CF848u, 0x2CF850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF850u;
label_2cf850:
    // 0x2cf850: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2cf850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cf854:
    // 0x2cf854: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cf858:
    // 0x2cf858: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2cf858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2cf85c:
    // 0x2cf85c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2cf85cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2cf860:
    // 0x2cf860: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cf860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2cf864:
    // 0x2cf864: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2cf864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2cf868:
    // 0x2cf868: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf86c:
    // 0x2cf86c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2cf86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cf870:
    // 0x2cf870: 0x24a40204  addiu       $a0, $a1, 0x204
    ctx->pc = 0x2cf870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 516));
label_2cf874:
    // 0x2cf874: 0xc06b0d4  jal         func_1AC350
label_2cf878:
    if (ctx->pc == 0x2CF878u) {
        ctx->pc = 0x2CF87Cu;
        goto label_2cf87c;
    }
    ctx->pc = 0x2CF874u;
    SET_GPR_U32(ctx, 31, 0x2CF87Cu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x2CF874u, 0x2CF87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF87Cu;
label_2cf87c:
    // 0x2cf87c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cf87cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cf880:
    // 0x2cf880: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf884:
    // 0x2cf884: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf888:
    // 0x2cf888: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2cf888u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf88c:
    // 0x2cf88c: 0x8e0301c4  lw          $v1, 0x1C4($s0)
    ctx->pc = 0x2cf88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_2cf890:
    // 0x2cf890: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cf890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2cf894:
    // 0x2cf894: 0xae0301c4  sw          $v1, 0x1C4($s0)
    ctx->pc = 0x2cf894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 3));
label_2cf898:
    // 0x2cf898: 0x1c60000b  bgtz        $v1, . + 4 + (0xB << 2)
label_2cf89c:
    if (ctx->pc == 0x2CF89Cu) {
        ctx->pc = 0x2CF8A0u;
        goto label_2cf8a0;
    }
    ctx->pc = 0x2CF898u;
    {
        const bool branch_taken_0x2cf898 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2cf898) {
            ctx->pc = 0x2CF8C8u;
            goto label_2cf8c8;
        }
    }
    ctx->pc = 0x2CF8A0u;
label_2cf8a0:
    // 0x2cf8a0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2cf8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2cf8a4:
    // 0x2cf8a4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf8a8:
    // 0x2cf8a8: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cf8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf8ac:
    // 0x2cf8ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf8b0:
    // 0x2cf8b0: 0xac6501c4  sw          $a1, 0x1C4($v1)
    ctx->pc = 0x2cf8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 452), GPR_U32(ctx, 5));
label_2cf8b4:
    // 0x2cf8b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cf8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf8b8:
    // 0x2cf8b8: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cf8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf8bc:
    // 0x2cf8bc: 0x24a3134c  addiu       $v1, $a1, 0x134C
    ctx->pc = 0x2cf8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4940));
label_2cf8c0:
    // 0x2cf8c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cf8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf8c4:
    // 0x2cf8c4: 0xac6401c8  sw          $a0, 0x1C8($v1)
    ctx->pc = 0x2cf8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 456), GPR_U32(ctx, 4));
label_2cf8c8:
    // 0x2cf8c8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf8cc:
    // 0x2cf8cc: 0x2486134c  addiu       $a2, $a0, 0x134C
    ctx->pc = 0x2cf8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
label_2cf8d0:
    // 0x2cf8d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cf8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2cf8d4:
    // 0x2cf8d4: 0x946301c0  lhu         $v1, 0x1C0($v1)
    ctx->pc = 0x2cf8d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 448)));
label_2cf8d8:
    // 0x2cf8d8: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2cf8d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2cf8dc:
    // 0x2cf8dc: 0xae250068  sw          $a1, 0x68($s1)
    ctx->pc = 0x2cf8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 5));
label_2cf8e0:
    // 0x2cf8e0: 0xae250064  sw          $a1, 0x64($s1)
    ctx->pc = 0x2cf8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 5));
label_2cf8e4:
    // 0x2cf8e4: 0xae250060  sw          $a1, 0x60($s1)
    ctx->pc = 0x2cf8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 5));
label_2cf8e8:
    // 0x2cf8e8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf8ec:
    // 0x2cf8ec: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf8f0:
    // 0x2cf8f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cf8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf8f4:
    // 0x2cf8f4: 0x946301c2  lhu         $v1, 0x1C2($v1)
    ctx->pc = 0x2cf8f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 450)));
label_2cf8f8:
    // 0x2cf8f8: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2cf8f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2cf8fc:
    // 0x2cf8fc: 0x14a0001b  bnez        $a1, . + 4 + (0x1B << 2)
label_2cf900:
    if (ctx->pc == 0x2CF900u) {
        ctx->pc = 0x2CF904u;
        goto label_2cf904;
    }
    ctx->pc = 0x2CF8FCu;
    {
        const bool branch_taken_0x2cf8fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf8fc) {
            ctx->pc = 0x2CF96Cu;
            goto label_2cf96c;
        }
    }
    ctx->pc = 0x2CF904u;
label_2cf904:
    // 0x2cf904: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf908:
    // 0x2cf908: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf90c:
    // 0x2cf90c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf910:
    // 0x2cf910: 0x948301c0  lhu         $v1, 0x1C0($a0)
    ctx->pc = 0x2cf910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
label_2cf914:
    // 0x2cf914: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2cf914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2cf918:
    // 0x2cf918: 0xa48301c0  sh          $v1, 0x1C0($a0)
    ctx->pc = 0x2cf918u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 448), (uint16_t)GPR_U32(ctx, 3));
label_2cf91c:
    // 0x2cf91c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf920:
    // 0x2cf920: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf924:
    // 0x2cf924: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf928:
    // 0x2cf928: 0x948301c0  lhu         $v1, 0x1C0($a0)
    ctx->pc = 0x2cf928u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
label_2cf92c:
    // 0x2cf92c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2cf92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2cf930:
    // 0x2cf930: 0x28630180  slti        $v1, $v1, 0x180
    ctx->pc = 0x2cf930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)384) ? 1 : 0);
label_2cf934:
    // 0x2cf934: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_2cf938:
    if (ctx->pc == 0x2CF938u) {
        ctx->pc = 0x2CF93Cu;
        goto label_2cf93c;
    }
    ctx->pc = 0x2CF934u;
    {
        const bool branch_taken_0x2cf934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf934) {
            ctx->pc = 0x2CF9C8u;
            goto label_2cf9c8;
        }
    }
    ctx->pc = 0x2CF93Cu;
label_2cf93c:
    // 0x2cf93c: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x2cf93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_2cf940:
    // 0x2cf940: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf944:
    // 0x2cf944: 0x2483134c  addiu       $v1, $a0, 0x134C
    ctx->pc = 0x2cf944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
label_2cf948:
    // 0x2cf948: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cf948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf94c:
    // 0x2cf94c: 0xa46501c0  sh          $a1, 0x1C0($v1)
    ctx->pc = 0x2cf94cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 448), (uint16_t)GPR_U32(ctx, 5));
label_2cf950:
    // 0x2cf950: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cf950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf954:
    // 0x2cf954: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf958:
    // 0x2cf958: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cf958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf95c:
    // 0x2cf95c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf960:
    // 0x2cf960: 0xa46501c2  sh          $a1, 0x1C2($v1)
    ctx->pc = 0x2cf960u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 450), (uint16_t)GPR_U32(ctx, 5));
label_2cf964:
    // 0x2cf964: 0x10000018  b           . + 4 + (0x18 << 2)
label_2cf968:
    if (ctx->pc == 0x2CF968u) {
        ctx->pc = 0x2CF96Cu;
        goto label_2cf96c;
    }
    ctx->pc = 0x2CF964u;
    {
        const bool branch_taken_0x2cf964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf964) {
            ctx->pc = 0x2CF9C8u;
            goto label_2cf9c8;
        }
    }
    ctx->pc = 0x2CF96Cu;
label_2cf96c:
    // 0x2cf96c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cf96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf970:
    // 0x2cf970: 0x24a3134c  addiu       $v1, $a1, 0x134C
    ctx->pc = 0x2cf970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4940));
label_2cf974:
    // 0x2cf974: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf978:
    // 0x2cf978: 0x948301c0  lhu         $v1, 0x1C0($a0)
    ctx->pc = 0x2cf978u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
label_2cf97c:
    // 0x2cf97c: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x2cf97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_2cf980:
    // 0x2cf980: 0xa48601c0  sh          $a2, 0x1C0($a0)
    ctx->pc = 0x2cf980u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 448), (uint16_t)GPR_U32(ctx, 6));
label_2cf984:
    // 0x2cf984: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cf984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf988:
    // 0x2cf988: 0x24a3134c  addiu       $v1, $a1, 0x134C
    ctx->pc = 0x2cf988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4940));
label_2cf98c:
    // 0x2cf98c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf990:
    // 0x2cf990: 0x948301c0  lhu         $v1, 0x1C0($a0)
    ctx->pc = 0x2cf990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
label_2cf994:
    // 0x2cf994: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2cf994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2cf998:
    // 0x2cf998: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x2cf998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
label_2cf99c:
    // 0x2cf99c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_2cf9a0:
    if (ctx->pc == 0x2CF9A0u) {
        ctx->pc = 0x2CF9A4u;
        goto label_2cf9a4;
    }
    ctx->pc = 0x2CF99Cu;
    {
        const bool branch_taken_0x2cf99c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf99c) {
            ctx->pc = 0x2CF9C8u;
            goto label_2cf9c8;
        }
    }
    ctx->pc = 0x2CF9A4u;
label_2cf9a4:
    // 0x2cf9a4: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x2cf9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2cf9a8:
    // 0x2cf9a8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf9ac:
    // 0x2cf9ac: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x2cf9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2cf9b0:
    // 0x2cf9b0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2cf9b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cf9b4:
    // 0x2cf9b4: 0xa69001c0  sh          $s0, 0x1C0($s4)
    ctx->pc = 0x2cf9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 448), (uint16_t)GPR_U32(ctx, 16));
label_2cf9b8:
    // 0x2cf9b8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf9bc:
    // 0x2cf9bc: 0x2483134c  addiu       $v1, $a0, 0x134C
    ctx->pc = 0x2cf9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
label_2cf9c0:
    // 0x2cf9c0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2cf9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf9c4:
    // 0x2cf9c4: 0xa4a001c2  sh          $zero, 0x1C2($a1)
    ctx->pc = 0x2cf9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 450), (uint16_t)GPR_U32(ctx, 0));
label_2cf9c8:
    // 0x2cf9c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cf9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cf9cc:
    // 0x2cf9cc: 0x90234f11  lbu         $v1, 0x4F11($at)
    ctx->pc = 0x2cf9ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20241)));
label_2cf9d0:
    // 0x2cf9d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2cf9d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2cf9d4:
    // 0x2cf9d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cf9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cf9d8:
    // 0x2cf9d8: 0x14830073  bne         $a0, $v1, . + 4 + (0x73 << 2)
label_2cf9dc:
    if (ctx->pc == 0x2CF9DCu) {
        ctx->pc = 0x2CF9E0u;
        goto label_2cf9e0;
    }
    ctx->pc = 0x2CF9D8u;
    {
        const bool branch_taken_0x2cf9d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cf9d8) {
            ctx->pc = 0x2CFBA8u;
            goto label_2cfba8;
        }
    }
    ctx->pc = 0x2CF9E0u;
label_2cf9e0:
    // 0x2cf9e0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cf9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cf9e4:
    // 0x2cf9e4: 0x90274f12  lbu         $a3, 0x4F12($at)
    ctx->pc = 0x2cf9e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20242)));
label_2cf9e8:
    // 0x2cf9e8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2cf9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2cf9ec:
    // 0x2cf9ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cf9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cf9f0:
    // 0x2cf9f0: 0x1465006d  bne         $v1, $a1, . + 4 + (0x6D << 2)
label_2cf9f4:
    if (ctx->pc == 0x2CF9F4u) {
        ctx->pc = 0x2CF9F8u;
        goto label_2cf9f8;
    }
    ctx->pc = 0x2CF9F0u;
    {
        const bool branch_taken_0x2cf9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cf9f0) {
            ctx->pc = 0x2CFBA8u;
            goto label_2cfba8;
        }
    }
    ctx->pc = 0x2CF9F8u;
label_2cf9f8:
    // 0x2cf9f8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cf9fc:
    // 0x2cf9fc: 0x8c660130  lw          $a2, 0x130($v1)
    ctx->pc = 0x2cf9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_2cfa00:
    // 0x2cfa00: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2cfa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2cfa04:
    // 0x2cfa04: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x2cfa04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_2cfa08:
    // 0x2cfa08: 0x24a5e550  addiu       $a1, $a1, -0x1AB0
    ctx->pc = 0x2cfa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960464));
label_2cfa0c:
    // 0x2cfa0c: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x2cfa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_2cfa10:
    // 0x2cfa10: 0xc040bf4  jal         func_102FD0
label_2cfa14:
    if (ctx->pc == 0x2CFA14u) {
        ctx->pc = 0x2CFA18u;
        goto label_2cfa18;
    }
    ctx->pc = 0x2CFA10u;
    SET_GPR_U32(ctx, 31, 0x2CFA18u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2CFA18u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CFA18u) { return; }
    ctx->pc = 0x2CFA18u;
label_2cfa18:
    // 0x2cfa18: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2cfa18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cfa1c:
    // 0x2cfa1c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2cfa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cfa20:
    // 0x2cfa20: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2cfa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2cfa24:
    // 0x2cfa24: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2cfa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cfa28:
    // 0x2cfa28: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2cfa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cfa2c:
    // 0x2cfa2c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2cfa2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2cfa30:
    // 0x2cfa30: 0x0  nop
    ctx->pc = 0x2cfa30u;
    // NOP
label_2cfa34:
    // 0x2cfa34: 0x0  nop
    ctx->pc = 0x2cfa34u;
    // NOP
label_2cfa38:
    // 0x2cfa38: 0x0  nop
    ctx->pc = 0x2cfa38u;
    // NOP
label_2cfa3c:
    // 0x2cfa3c: 0xc047fa2  jal         func_11FE88
label_2cfa40:
    if (ctx->pc == 0x2CFA40u) {
        ctx->pc = 0x2CFA44u;
        goto label_2cfa44;
    }
    ctx->pc = 0x2CFA3Cu;
    SET_GPR_U32(ctx, 31, 0x2CFA44u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x2CFA3Cu, 0x2CFA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFA44u;
label_2cfa44:
    // 0x2cfa44: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2cfa44u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cfa48:
    // 0x2cfa48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfa4c:
    // 0x2cfa4c: 0xac284f14  sw          $t0, 0x4F14($at)
    ctx->pc = 0x2cfa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20244), GPR_U32(ctx, 8));
label_2cfa50:
    // 0x2cfa50: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfa54:
    // 0x2cfa54: 0x8c264f14  lw          $a2, 0x4F14($at)
    ctx->pc = 0x2cfa54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20244)));
label_2cfa58:
    // 0x2cfa58: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2cfa58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2cfa5c:
    // 0x2cfa5c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfa60:
    // 0x2cfa60: 0xac254f14  sw          $a1, 0x4F14($at)
    ctx->pc = 0x2cfa60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20244), GPR_U32(ctx, 5));
label_2cfa64:
    // 0x2cfa64: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cfa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cfa68:
    // 0x2cfa68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cfa68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cfa6c:
    // 0x2cfa6c: 0x8c290af0  lw          $t1, 0xAF0($at)
    ctx->pc = 0x2cfa6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_2cfa70:
    // 0x2cfa70: 0xc48111e0  lwc1        $f1, 0x11E0($a0)
    ctx->pc = 0x2cfa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cfa74:
    // 0x2cfa74: 0xc52001b4  lwc1        $f0, 0x1B4($t1)
    ctx->pc = 0x2cfa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cfa78:
    // 0x2cfa78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cfa78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2cfa7c:
    // 0x2cfa7c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2cfa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2cfa80:
    // 0x2cfa80: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cfa80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2cfa84:
    // 0x2cfa84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cfa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2cfa88:
    // 0x2cfa88: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x2cfa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_2cfa8c:
    // 0x2cfa8c: 0xc4a111e4  lwc1        $f1, 0x11E4($a1)
    ctx->pc = 0x2cfa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cfa90:
    // 0x2cfa90: 0xc48001b4  lwc1        $f0, 0x1B4($a0)
    ctx->pc = 0x2cfa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cfa94:
    // 0x2cfa94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cfa94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2cfa98:
    // 0x2cfa98: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2cfa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_2cfa9c:
    // 0x2cfa9c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2cfa9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2cfaa0:
    // 0x2cfaa0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2cfaa0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2cfaa4:
    // 0x2cfaa4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2cfaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2cfaa8:
    // 0x2cfaa8: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x2cfaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2cfaac:
    // 0x2cfaac: 0xc040c60  jal         func_103180
label_2cfab0:
    if (ctx->pc == 0x2CFAB0u) {
        ctx->pc = 0x2CFAB4u;
        goto label_2cfab4;
    }
    ctx->pc = 0x2CFAACu;
    SET_GPR_U32(ctx, 31, 0x2CFAB4u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x2CFAB4u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CFAB4u) { return; }
    ctx->pc = 0x2CFAB4u;
label_2cfab4:
    // 0x2cfab4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2cfab4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2cfab8:
    // 0x2cfab8: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2cfab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2cfabc:
    // 0x2cfabc: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x2cfabcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2cfac0:
    // 0x2cfac0: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x2cfac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2cfac4:
    // 0x2cfac4: 0x7d270000  sq          $a3, 0x0($t1)
    ctx->pc = 0x2cfac4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 7));
label_2cfac8:
    // 0x2cfac8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2cfac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2cfacc:
    // 0x2cfacc: 0x79570000  lq          $s7, 0x0($t2)
    ctx->pc = 0x2cfaccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_2cfad0:
    // 0x2cfad0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2cfad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2cfad4:
    // 0x2cfad4: 0x7c770000  sq          $s7, 0x0($v1)
    ctx->pc = 0x2cfad4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 23));
label_2cfad8:
    // 0x2cfad8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2cfad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cfadc:
    // 0x2cfadc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2cfadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cfae0:
    // 0x2cfae0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cfae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cfae4:
    // 0x2cfae4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2cfae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2cfae8:
    // 0x2cfae8: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2cfae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cfaec:
    // 0x2cfaec: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2cfaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cfaf0:
    // 0x2cfaf0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cfaf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cfaf4:
    // 0x2cfaf4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2cfaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2cfaf8:
    // 0x2cfaf8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2cfaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cfafc:
    // 0x2cfafc: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2cfafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cfb00:
    // 0x2cfb00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cfb00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cfb04:
    // 0x2cfb04: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2cfb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2cfb08:
    // 0x2cfb08: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2cfb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cfb0c:
    // 0x2cfb0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfb10:
    // 0x2cfb10: 0xe4204f20  swc1        $f0, 0x4F20($at)
    ctx->pc = 0x2cfb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20256), bits); }
label_2cfb14:
    // 0x2cfb14: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfb18:
    // 0x2cfb18: 0xc4214f20  lwc1        $f1, 0x4F20($at)
    ctx->pc = 0x2cfb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cfb1c:
    // 0x2cfb1c: 0x3c0344f2  lui         $v1, 0x44F2
    ctx->pc = 0x2cfb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17650 << 16));
label_2cfb20:
    // 0x2cfb20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cfb20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cfb24:
    // 0x2cfb24: 0x0  nop
    ctx->pc = 0x2cfb24u;
    // NOP
label_2cfb28:
    // 0x2cfb28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cfb28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cfb2c:
    // 0x2cfb2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfb30:
    // 0x2cfb30: 0xe4204f20  swc1        $f0, 0x4F20($at)
    ctx->pc = 0x2cfb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20256), bits); }
label_2cfb34:
    // 0x2cfb34: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2cfb34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_2cfb38:
    // 0x2cfb38: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cfb38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cfb3c:
    // 0x2cfb3c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfb40:
    // 0x2cfb40: 0xc4204f20  lwc1        $f0, 0x4F20($at)
    ctx->pc = 0x2cfb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cfb44:
    // 0x2cfb44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cfb44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2cfb48:
    // 0x2cfb48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfb4c:
    // 0x2cfb4c: 0xe4204f20  swc1        $f0, 0x4F20($at)
    ctx->pc = 0x2cfb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20256), bits); }
label_2cfb50:
    // 0x2cfb50: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2cfb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cfb54:
    // 0x2cfb54: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfb58:
    // 0x2cfb58: 0xe4204f18  swc1        $f0, 0x4F18($at)
    ctx->pc = 0x2cfb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20248), bits); }
label_2cfb5c:
    // 0x2cfb5c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfb60:
    // 0x2cfb60: 0xc4214f18  lwc1        $f1, 0x4F18($at)
    ctx->pc = 0x2cfb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cfb64:
    // 0x2cfb64: 0x3c0344e0  lui         $v1, 0x44E0
    ctx->pc = 0x2cfb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17632 << 16));
label_2cfb68:
    // 0x2cfb68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cfb68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cfb6c:
    // 0x2cfb6c: 0x0  nop
    ctx->pc = 0x2cfb6cu;
    // NOP
label_2cfb70:
    // 0x2cfb70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cfb70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cfb74:
    // 0x2cfb74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfb78:
    // 0x2cfb78: 0xe4204f18  swc1        $f0, 0x4F18($at)
    ctx->pc = 0x2cfb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20248), bits); }
label_2cfb7c:
    // 0x2cfb7c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2cfb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cfb80:
    // 0x2cfb80: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfb84:
    // 0x2cfb84: 0xe4204f1c  swc1        $f0, 0x4F1C($at)
    ctx->pc = 0x2cfb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20252), bits); }
label_2cfb88:
    // 0x2cfb88: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfb8c:
    // 0x2cfb8c: 0xc4214f1c  lwc1        $f1, 0x4F1C($at)
    ctx->pc = 0x2cfb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cfb90:
    // 0x2cfb90: 0x3c1644e0  lui         $s6, 0x44E0
    ctx->pc = 0x2cfb90u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17632 << 16));
label_2cfb94:
    // 0x2cfb94: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2cfb94u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cfb98:
    // 0x2cfb98: 0x0  nop
    ctx->pc = 0x2cfb98u;
    // NOP
label_2cfb9c:
    // 0x2cfb9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cfb9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cfba0:
    // 0x2cfba0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2cfba4:
    // 0x2cfba4: 0xe4204f1c  swc1        $f0, 0x4F1C($at)
    ctx->pc = 0x2cfba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20252), bits); }
label_2cfba8:
    // 0x2cfba8: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x2cfba8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2cfbac:
    // 0x2cfbac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2cfbacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cfbb0:
    // 0x2cfbb0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2cfbb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cfbb4:
    // 0x2cfbb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2cfbb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cfbb8:
    // 0x2cfbb8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cfbb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cfbbc:
    // 0x2cfbbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cfbbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cfbc0:
    // 0x2cfbc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cfbc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cfbc4:
    // 0x2cfbc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cfbc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfbc8:
    // 0x2cfbc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cfbc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfbcc:
    // 0x2cfbcc: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x2cfbccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2cfbd0:
    // 0x2cfbd0: 0x3e00008  jr          $ra
label_2cfbd4:
    if (ctx->pc == 0x2CFBD4u) {
        ctx->pc = 0x2CFBD8u;
        goto label_fallthrough_0x2cfbd0;
    }
    ctx->pc = 0x2CFBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cfbd0:
    ctx->pc = 0x2CFBD8u;
}
