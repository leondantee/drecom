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

// Function: Em09_morph_move
// Address: 0x352f00 - 0x353338
void Em09_morph_move_0x352f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_morph_move_0x352f00");
#endif

    switch (ctx->pc) {
        case 0x352f00u: goto label_352f00;
        case 0x352f04u: goto label_352f04;
        case 0x352f08u: goto label_352f08;
        case 0x352f0cu: goto label_352f0c;
        case 0x352f10u: goto label_352f10;
        case 0x352f14u: goto label_352f14;
        case 0x352f18u: goto label_352f18;
        case 0x352f1cu: goto label_352f1c;
        case 0x352f20u: goto label_352f20;
        case 0x352f24u: goto label_352f24;
        case 0x352f28u: goto label_352f28;
        case 0x352f2cu: goto label_352f2c;
        case 0x352f30u: goto label_352f30;
        case 0x352f34u: goto label_352f34;
        case 0x352f38u: goto label_352f38;
        case 0x352f3cu: goto label_352f3c;
        case 0x352f40u: goto label_352f40;
        case 0x352f44u: goto label_352f44;
        case 0x352f48u: goto label_352f48;
        case 0x352f4cu: goto label_352f4c;
        case 0x352f50u: goto label_352f50;
        case 0x352f54u: goto label_352f54;
        case 0x352f58u: goto label_352f58;
        case 0x352f5cu: goto label_352f5c;
        case 0x352f60u: goto label_352f60;
        case 0x352f64u: goto label_352f64;
        case 0x352f68u: goto label_352f68;
        case 0x352f6cu: goto label_352f6c;
        case 0x352f70u: goto label_352f70;
        case 0x352f74u: goto label_352f74;
        case 0x352f78u: goto label_352f78;
        case 0x352f7cu: goto label_352f7c;
        case 0x352f80u: goto label_352f80;
        case 0x352f84u: goto label_352f84;
        case 0x352f88u: goto label_352f88;
        case 0x352f8cu: goto label_352f8c;
        case 0x352f90u: goto label_352f90;
        case 0x352f94u: goto label_352f94;
        case 0x352f98u: goto label_352f98;
        case 0x352f9cu: goto label_352f9c;
        case 0x352fa0u: goto label_352fa0;
        case 0x352fa4u: goto label_352fa4;
        case 0x352fa8u: goto label_352fa8;
        case 0x352facu: goto label_352fac;
        case 0x352fb0u: goto label_352fb0;
        case 0x352fb4u: goto label_352fb4;
        case 0x352fb8u: goto label_352fb8;
        case 0x352fbcu: goto label_352fbc;
        case 0x352fc0u: goto label_352fc0;
        case 0x352fc4u: goto label_352fc4;
        case 0x352fc8u: goto label_352fc8;
        case 0x352fccu: goto label_352fcc;
        case 0x352fd0u: goto label_352fd0;
        case 0x352fd4u: goto label_352fd4;
        case 0x352fd8u: goto label_352fd8;
        case 0x352fdcu: goto label_352fdc;
        case 0x352fe0u: goto label_352fe0;
        case 0x352fe4u: goto label_352fe4;
        case 0x352fe8u: goto label_352fe8;
        case 0x352fecu: goto label_352fec;
        case 0x352ff0u: goto label_352ff0;
        case 0x352ff4u: goto label_352ff4;
        case 0x352ff8u: goto label_352ff8;
        case 0x352ffcu: goto label_352ffc;
        case 0x353000u: goto label_353000;
        case 0x353004u: goto label_353004;
        case 0x353008u: goto label_353008;
        case 0x35300cu: goto label_35300c;
        case 0x353010u: goto label_353010;
        case 0x353014u: goto label_353014;
        case 0x353018u: goto label_353018;
        case 0x35301cu: goto label_35301c;
        case 0x353020u: goto label_353020;
        case 0x353024u: goto label_353024;
        case 0x353028u: goto label_353028;
        case 0x35302cu: goto label_35302c;
        case 0x353030u: goto label_353030;
        case 0x353034u: goto label_353034;
        case 0x353038u: goto label_353038;
        case 0x35303cu: goto label_35303c;
        case 0x353040u: goto label_353040;
        case 0x353044u: goto label_353044;
        case 0x353048u: goto label_353048;
        case 0x35304cu: goto label_35304c;
        case 0x353050u: goto label_353050;
        case 0x353054u: goto label_353054;
        case 0x353058u: goto label_353058;
        case 0x35305cu: goto label_35305c;
        case 0x353060u: goto label_353060;
        case 0x353064u: goto label_353064;
        case 0x353068u: goto label_353068;
        case 0x35306cu: goto label_35306c;
        case 0x353070u: goto label_353070;
        case 0x353074u: goto label_353074;
        case 0x353078u: goto label_353078;
        case 0x35307cu: goto label_35307c;
        case 0x353080u: goto label_353080;
        case 0x353084u: goto label_353084;
        case 0x353088u: goto label_353088;
        case 0x35308cu: goto label_35308c;
        case 0x353090u: goto label_353090;
        case 0x353094u: goto label_353094;
        case 0x353098u: goto label_353098;
        case 0x35309cu: goto label_35309c;
        case 0x3530a0u: goto label_3530a0;
        case 0x3530a4u: goto label_3530a4;
        case 0x3530a8u: goto label_3530a8;
        case 0x3530acu: goto label_3530ac;
        case 0x3530b0u: goto label_3530b0;
        case 0x3530b4u: goto label_3530b4;
        case 0x3530b8u: goto label_3530b8;
        case 0x3530bcu: goto label_3530bc;
        case 0x3530c0u: goto label_3530c0;
        case 0x3530c4u: goto label_3530c4;
        case 0x3530c8u: goto label_3530c8;
        case 0x3530ccu: goto label_3530cc;
        case 0x3530d0u: goto label_3530d0;
        case 0x3530d4u: goto label_3530d4;
        case 0x3530d8u: goto label_3530d8;
        case 0x3530dcu: goto label_3530dc;
        case 0x3530e0u: goto label_3530e0;
        case 0x3530e4u: goto label_3530e4;
        case 0x3530e8u: goto label_3530e8;
        case 0x3530ecu: goto label_3530ec;
        case 0x3530f0u: goto label_3530f0;
        case 0x3530f4u: goto label_3530f4;
        case 0x3530f8u: goto label_3530f8;
        case 0x3530fcu: goto label_3530fc;
        case 0x353100u: goto label_353100;
        case 0x353104u: goto label_353104;
        case 0x353108u: goto label_353108;
        case 0x35310cu: goto label_35310c;
        case 0x353110u: goto label_353110;
        case 0x353114u: goto label_353114;
        case 0x353118u: goto label_353118;
        case 0x35311cu: goto label_35311c;
        case 0x353120u: goto label_353120;
        case 0x353124u: goto label_353124;
        case 0x353128u: goto label_353128;
        case 0x35312cu: goto label_35312c;
        case 0x353130u: goto label_353130;
        case 0x353134u: goto label_353134;
        case 0x353138u: goto label_353138;
        case 0x35313cu: goto label_35313c;
        case 0x353140u: goto label_353140;
        case 0x353144u: goto label_353144;
        case 0x353148u: goto label_353148;
        case 0x35314cu: goto label_35314c;
        case 0x353150u: goto label_353150;
        case 0x353154u: goto label_353154;
        case 0x353158u: goto label_353158;
        case 0x35315cu: goto label_35315c;
        case 0x353160u: goto label_353160;
        case 0x353164u: goto label_353164;
        case 0x353168u: goto label_353168;
        case 0x35316cu: goto label_35316c;
        case 0x353170u: goto label_353170;
        case 0x353174u: goto label_353174;
        case 0x353178u: goto label_353178;
        case 0x35317cu: goto label_35317c;
        case 0x353180u: goto label_353180;
        case 0x353184u: goto label_353184;
        case 0x353188u: goto label_353188;
        case 0x35318cu: goto label_35318c;
        case 0x353190u: goto label_353190;
        case 0x353194u: goto label_353194;
        case 0x353198u: goto label_353198;
        case 0x35319cu: goto label_35319c;
        case 0x3531a0u: goto label_3531a0;
        case 0x3531a4u: goto label_3531a4;
        case 0x3531a8u: goto label_3531a8;
        case 0x3531acu: goto label_3531ac;
        case 0x3531b0u: goto label_3531b0;
        case 0x3531b4u: goto label_3531b4;
        case 0x3531b8u: goto label_3531b8;
        case 0x3531bcu: goto label_3531bc;
        case 0x3531c0u: goto label_3531c0;
        case 0x3531c4u: goto label_3531c4;
        case 0x3531c8u: goto label_3531c8;
        case 0x3531ccu: goto label_3531cc;
        case 0x3531d0u: goto label_3531d0;
        case 0x3531d4u: goto label_3531d4;
        case 0x3531d8u: goto label_3531d8;
        case 0x3531dcu: goto label_3531dc;
        case 0x3531e0u: goto label_3531e0;
        case 0x3531e4u: goto label_3531e4;
        case 0x3531e8u: goto label_3531e8;
        case 0x3531ecu: goto label_3531ec;
        case 0x3531f0u: goto label_3531f0;
        case 0x3531f4u: goto label_3531f4;
        case 0x3531f8u: goto label_3531f8;
        case 0x3531fcu: goto label_3531fc;
        case 0x353200u: goto label_353200;
        case 0x353204u: goto label_353204;
        case 0x353208u: goto label_353208;
        case 0x35320cu: goto label_35320c;
        case 0x353210u: goto label_353210;
        case 0x353214u: goto label_353214;
        case 0x353218u: goto label_353218;
        case 0x35321cu: goto label_35321c;
        case 0x353220u: goto label_353220;
        case 0x353224u: goto label_353224;
        case 0x353228u: goto label_353228;
        case 0x35322cu: goto label_35322c;
        case 0x353230u: goto label_353230;
        case 0x353234u: goto label_353234;
        case 0x353238u: goto label_353238;
        case 0x35323cu: goto label_35323c;
        case 0x353240u: goto label_353240;
        case 0x353244u: goto label_353244;
        case 0x353248u: goto label_353248;
        case 0x35324cu: goto label_35324c;
        case 0x353250u: goto label_353250;
        case 0x353254u: goto label_353254;
        case 0x353258u: goto label_353258;
        case 0x35325cu: goto label_35325c;
        case 0x353260u: goto label_353260;
        case 0x353264u: goto label_353264;
        case 0x353268u: goto label_353268;
        case 0x35326cu: goto label_35326c;
        case 0x353270u: goto label_353270;
        case 0x353274u: goto label_353274;
        case 0x353278u: goto label_353278;
        case 0x35327cu: goto label_35327c;
        case 0x353280u: goto label_353280;
        case 0x353284u: goto label_353284;
        case 0x353288u: goto label_353288;
        case 0x35328cu: goto label_35328c;
        case 0x353290u: goto label_353290;
        case 0x353294u: goto label_353294;
        case 0x353298u: goto label_353298;
        case 0x35329cu: goto label_35329c;
        case 0x3532a0u: goto label_3532a0;
        case 0x3532a4u: goto label_3532a4;
        case 0x3532a8u: goto label_3532a8;
        case 0x3532acu: goto label_3532ac;
        case 0x3532b0u: goto label_3532b0;
        case 0x3532b4u: goto label_3532b4;
        case 0x3532b8u: goto label_3532b8;
        case 0x3532bcu: goto label_3532bc;
        case 0x3532c0u: goto label_3532c0;
        case 0x3532c4u: goto label_3532c4;
        case 0x3532c8u: goto label_3532c8;
        case 0x3532ccu: goto label_3532cc;
        case 0x3532d0u: goto label_3532d0;
        case 0x3532d4u: goto label_3532d4;
        case 0x3532d8u: goto label_3532d8;
        case 0x3532dcu: goto label_3532dc;
        case 0x3532e0u: goto label_3532e0;
        case 0x3532e4u: goto label_3532e4;
        case 0x3532e8u: goto label_3532e8;
        case 0x3532ecu: goto label_3532ec;
        case 0x3532f0u: goto label_3532f0;
        case 0x3532f4u: goto label_3532f4;
        case 0x3532f8u: goto label_3532f8;
        case 0x3532fcu: goto label_3532fc;
        case 0x353300u: goto label_353300;
        case 0x353304u: goto label_353304;
        case 0x353308u: goto label_353308;
        case 0x35330cu: goto label_35330c;
        case 0x353310u: goto label_353310;
        case 0x353314u: goto label_353314;
        case 0x353318u: goto label_353318;
        case 0x35331cu: goto label_35331c;
        case 0x353320u: goto label_353320;
        case 0x353324u: goto label_353324;
        case 0x353328u: goto label_353328;
        case 0x35332cu: goto label_35332c;
        case 0x353330u: goto label_353330;
        case 0x353334u: goto label_353334;
        default: break;
    }

    ctx->pc = 0x352f00u;

label_352f00:
    // 0x352f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352f04:
    // 0x352f04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x352f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_352f08:
    // 0x352f08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x352f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_352f0c:
    // 0x352f0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_352f10:
    // 0x352f10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x352f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_352f14:
    // 0x352f14: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x352f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
label_352f18:
    // 0x352f18: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x352f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_352f1c:
    // 0x352f1c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x352f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_352f20:
    // 0x352f20: 0x10830101  beq         $a0, $v1, . + 4 + (0x101 << 2)
label_352f24:
    if (ctx->pc == 0x352F24u) {
        ctx->pc = 0x352F28u;
        goto label_352f28;
    }
    ctx->pc = 0x352F20u;
    {
        const bool branch_taken_0x352f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x352f20) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x352F28u;
label_352f28:
    // 0x352f28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_352f2c:
    // 0x352f2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x352f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_352f30:
    // 0x352f30: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x352f30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
label_352f34:
    // 0x352f34: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x352f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_352f38:
    // 0x352f38: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x352f38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_352f3c:
    // 0x352f3c: 0x102000fa  beqz        $at, . + 4 + (0xFA << 2)
label_352f40:
    if (ctx->pc == 0x352F40u) {
        ctx->pc = 0x352F44u;
        goto label_352f44;
    }
    ctx->pc = 0x352F3Cu;
    {
        const bool branch_taken_0x352f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x352f3c) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x352F44u;
label_352f44:
    // 0x352f44: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x352f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_352f48:
    // 0x352f48: 0x24642a00  addiu       $a0, $v1, 0x2A00
    ctx->pc = 0x352f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
label_352f4c:
    // 0x352f4c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x352f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_352f50:
    // 0x352f50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x352f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_352f54:
    // 0x352f54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x352f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352f58:
    // 0x352f58: 0x600008  jr          $v1
label_352f5c:
    if (ctx->pc == 0x352F5Cu) {
        ctx->pc = 0x352F60u;
        goto label_352f60;
    }
    ctx->pc = 0x352F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352F58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x352F60u;
label_352f60:
    // 0x352f60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_352f64:
    // 0x352f64: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_352f68:
    // 0x352f68: 0x9043002a  lbu         $v1, 0x2A($v0)
    ctx->pc = 0x352f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
label_352f6c:
    // 0x352f6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_352f70:
    // 0x352f70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_352f74:
    // 0x352f74: 0xa043002b  sb          $v1, 0x2B($v0)
    ctx->pc = 0x352f74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 3));
label_352f78:
    // 0x352f78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_352f7c:
    // 0x352f7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_352f80:
    // 0x352f80: 0x90430029  lbu         $v1, 0x29($v0)
    ctx->pc = 0x352f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_352f84:
    // 0x352f84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_352f88:
    // 0x352f88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_352f8c:
    // 0x352f8c: 0xa043002a  sb          $v1, 0x2A($v0)
    ctx->pc = 0x352f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 42), (uint8_t)GPR_U32(ctx, 3));
label_352f90:
    // 0x352f90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_352f94:
    // 0x352f94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_352f98:
    // 0x352f98: 0x9042002b  lbu         $v0, 0x2B($v0)
    ctx->pc = 0x352f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
label_352f9c:
    // 0x352f9c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x352f9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_352fa0:
    // 0x352fa0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_352fa4:
    // 0x352fa4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_352fa8:
    // 0x352fa8: 0x9042002a  lbu         $v0, 0x2A($v0)
    ctx->pc = 0x352fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
label_352fac:
    // 0x352fac: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x352facu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_352fb0:
    // 0x352fb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_352fb4:
    // 0x352fb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_352fb8:
    // 0x352fb8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x352fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_352fbc:
    // 0x352fbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x352fbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_352fc0:
    // 0x352fc0: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x352fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_352fc4:
    // 0x352fc4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x352fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352fc8:
    // 0x352fc8: 0xc06c0ec  jal         func_1B03B0
label_352fcc:
    if (ctx->pc == 0x352FCCu) {
        ctx->pc = 0x352FD0u;
        goto label_352fd0;
    }
    ctx->pc = 0x352FC8u;
    SET_GPR_U32(ctx, 31, 0x352FD0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x352FC8u, 0x352FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352FD0u;
label_352fd0:
    // 0x352fd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352fd4:
    // 0x352fd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_352fd8:
    // 0x352fd8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_352fdc:
    // 0x352fdc: 0xa0430028  sb          $v1, 0x28($v0)
    ctx->pc = 0x352fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 3));
label_352fe0:
    // 0x352fe0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x352fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_352fe4:
    // 0x352fe4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x352fe4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_352fe8:
    // 0x352fe8: 0xc06c168  jal         func_1B05A0
label_352fec:
    if (ctx->pc == 0x352FECu) {
        ctx->pc = 0x352FF0u;
        goto label_352ff0;
    }
    ctx->pc = 0x352FE8u;
    SET_GPR_U32(ctx, 31, 0x352FF0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x352FE8u, 0x352FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352FF0u;
label_352ff0:
    // 0x352ff0: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
label_352ff4:
    if (ctx->pc == 0x352FF4u) {
        ctx->pc = 0x352FF8u;
        goto label_352ff8;
    }
    ctx->pc = 0x352FF0u;
    {
        const bool branch_taken_0x352ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352ff0) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x352FF8u;
label_352ff8:
    // 0x352ff8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x352ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_352ffc:
    // 0x352ffc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353000:
    // 0x353000: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_353004:
    // 0x353004: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x353004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
label_353008:
    // 0x353008: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_35300c:
    if (ctx->pc == 0x35300Cu) {
        ctx->pc = 0x353010u;
        goto label_353010;
    }
    ctx->pc = 0x353008u;
    {
        const bool branch_taken_0x353008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353008) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x353010u;
label_353010:
    // 0x353010: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x353010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353014:
    // 0x353014: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x353014u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_353018:
    // 0x353018: 0xc06c168  jal         func_1B05A0
label_35301c:
    if (ctx->pc == 0x35301Cu) {
        ctx->pc = 0x353020u;
        goto label_353020;
    }
    ctx->pc = 0x353018u;
    SET_GPR_U32(ctx, 31, 0x353020u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x353018u, 0x353020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353020u;
label_353020:
    // 0x353020: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x353020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353024:
    // 0x353024: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_353028:
    // 0x353028: 0x9063002a  lbu         $v1, 0x2A($v1)
    ctx->pc = 0x353028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 42)));
label_35302c:
    // 0x35302c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35302cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_353030:
    // 0x353030: 0x146000bd  bnez        $v1, . + 4 + (0xBD << 2)
label_353034:
    if (ctx->pc == 0x353034u) {
        ctx->pc = 0x353038u;
        goto label_353038;
    }
    ctx->pc = 0x353030u;
    {
        const bool branch_taken_0x353030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353030) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x353038u;
label_353038:
    // 0x353038: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x353038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_35303c:
    // 0x35303c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35303cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353040:
    // 0x353040: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_353044:
    // 0x353044: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x353044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
label_353048:
    // 0x353048: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_35304c:
    if (ctx->pc == 0x35304Cu) {
        ctx->pc = 0x353050u;
        goto label_353050;
    }
    ctx->pc = 0x353048u;
    {
        const bool branch_taken_0x353048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353048) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x353050u;
label_353050:
    // 0x353050: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353054:
    // 0x353054: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353058:
    // 0x353058: 0x9043002a  lbu         $v1, 0x2A($v0)
    ctx->pc = 0x353058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
label_35305c:
    // 0x35305c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353060:
    // 0x353060: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353064:
    // 0x353064: 0xa043002b  sb          $v1, 0x2B($v0)
    ctx->pc = 0x353064u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 3));
label_353068:
    // 0x353068: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35306c:
    // 0x35306c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353070:
    // 0x353070: 0x90430029  lbu         $v1, 0x29($v0)
    ctx->pc = 0x353070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_353074:
    // 0x353074: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353078:
    // 0x353078: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_35307c:
    // 0x35307c: 0xa043002a  sb          $v1, 0x2A($v0)
    ctx->pc = 0x35307cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 42), (uint8_t)GPR_U32(ctx, 3));
label_353080:
    // 0x353080: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353084:
    // 0x353084: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353088:
    // 0x353088: 0x9042002b  lbu         $v0, 0x2B($v0)
    ctx->pc = 0x353088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
label_35308c:
    // 0x35308c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x35308cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_353090:
    // 0x353090: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353094:
    // 0x353094: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353098:
    // 0x353098: 0x9042002a  lbu         $v0, 0x2A($v0)
    ctx->pc = 0x353098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
label_35309c:
    // 0x35309c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x35309cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3530a0:
    // 0x3530a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3530a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3530a4:
    // 0x3530a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3530a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3530a8:
    // 0x3530a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3530a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3530ac:
    // 0x3530ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3530acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3530b0:
    // 0x3530b0: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x3530b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3530b4:
    // 0x3530b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3530b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3530b8:
    // 0x3530b8: 0xc06c0ec  jal         func_1B03B0
label_3530bc:
    if (ctx->pc == 0x3530BCu) {
        ctx->pc = 0x3530C0u;
        goto label_3530c0;
    }
    ctx->pc = 0x3530B8u;
    SET_GPR_U32(ctx, 31, 0x3530C0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x3530B8u, 0x3530C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3530C0u;
label_3530c0:
    // 0x3530c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3530c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3530c4:
    // 0x3530c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3530c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3530c8:
    // 0x3530c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3530c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3530cc:
    // 0x3530cc: 0xa0430028  sb          $v1, 0x28($v0)
    ctx->pc = 0x3530ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 3));
label_3530d0:
    // 0x3530d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3530d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3530d4:
    // 0x3530d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3530d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3530d8:
    // 0x3530d8: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x3530d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_3530dc:
    // 0x3530dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3530dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3530e0:
    // 0x3530e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3530e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3530e4:
    // 0x3530e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3530e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3530e8:
    // 0x3530e8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3530e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_3530ec:
    // 0x3530ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3530ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3530f0:
    // 0x3530f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3530f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3530f4:
    // 0x3530f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3530f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3530f8:
    // 0x3530f8: 0xa443002e  sh          $v1, 0x2E($v0)
    ctx->pc = 0x3530f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 3));
label_3530fc:
    // 0x3530fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3530fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353100:
    // 0x353100: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x353100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353104:
    // 0x353104: 0x8483002c  lh          $v1, 0x2C($a0)
    ctx->pc = 0x353104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
label_353108:
    // 0x353108: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x353108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_35310c:
    // 0x35310c: 0xa482002c  sh          $v0, 0x2C($a0)
    ctx->pc = 0x35310cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
label_353110:
    // 0x353110: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_353114:
    if (ctx->pc == 0x353114u) {
        ctx->pc = 0x353118u;
        goto label_353118;
    }
    ctx->pc = 0x353110u;
    {
        const bool branch_taken_0x353110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353110) {
            ctx->pc = 0x35318Cu;
            goto label_35318c;
        }
    }
    ctx->pc = 0x353118u;
label_353118:
    // 0x353118: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x353118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35311c:
    // 0x35311c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35311cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353120:
    // 0x353120: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353124:
    // 0x353124: 0xa0430028  sb          $v1, 0x28($v0)
    ctx->pc = 0x353124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 3));
label_353128:
    // 0x353128: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35312c:
    // 0x35312c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x35312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353130:
    // 0x353130: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x353130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_353134:
    // 0x353134: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x353134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_353138:
    // 0x353138: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x353138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35313c:
    // 0x35313c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x35313cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_353140:
    // 0x353140: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353144:
    // 0x353144: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353148:
    // 0x353148: 0x9042002a  lbu         $v0, 0x2A($v0)
    ctx->pc = 0x353148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
label_35314c:
    // 0x35314c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x35314cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_353150:
    // 0x353150: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353154:
    // 0x353154: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353158:
    // 0x353158: 0x9042002b  lbu         $v0, 0x2B($v0)
    ctx->pc = 0x353158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
label_35315c:
    // 0x35315c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x35315cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_353160:
    // 0x353160: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x353160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353164:
    // 0x353164: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x353164u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_353168:
    // 0x353168: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x353168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35316c:
    // 0x35316c: 0xc06c0ec  jal         func_1B03B0
label_353170:
    if (ctx->pc == 0x353170u) {
        ctx->pc = 0x353174u;
        goto label_353174;
    }
    ctx->pc = 0x35316Cu;
    SET_GPR_U32(ctx, 31, 0x353174u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x35316Cu, 0x353174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353174u;
label_353174:
    // 0x353174: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353178:
    // 0x353178: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_35317c:
    // 0x35317c: 0x8443002e  lh          $v1, 0x2E($v0)
    ctx->pc = 0x35317cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
label_353180:
    // 0x353180: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353184:
    // 0x353184: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353188:
    // 0x353188: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x353188u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
label_35318c:
    // 0x35318c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35318cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353190:
    // 0x353190: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x353190u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_353194:
    // 0x353194: 0xc06c168  jal         func_1B05A0
label_353198:
    if (ctx->pc == 0x353198u) {
        ctx->pc = 0x35319Cu;
        goto label_35319c;
    }
    ctx->pc = 0x353194u;
    SET_GPR_U32(ctx, 31, 0x35319Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x353194u, 0x35319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35319Cu;
label_35319c:
    // 0x35319c: 0x10000062  b           . + 4 + (0x62 << 2)
label_3531a0:
    if (ctx->pc == 0x3531A0u) {
        ctx->pc = 0x3531A4u;
        goto label_3531a4;
    }
    ctx->pc = 0x35319Cu;
    {
        const bool branch_taken_0x35319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35319c) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x3531A4u;
label_3531a4:
    // 0x3531a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3531a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3531a8:
    // 0x3531a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3531a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3531ac:
    // 0x3531ac: 0xc06c168  jal         func_1B05A0
label_3531b0:
    if (ctx->pc == 0x3531B0u) {
        ctx->pc = 0x3531B4u;
        goto label_3531b4;
    }
    ctx->pc = 0x3531ACu;
    SET_GPR_U32(ctx, 31, 0x3531B4u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x3531ACu, 0x3531B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3531B4u;
label_3531b4:
    // 0x3531b4: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_3531b8:
    if (ctx->pc == 0x3531B8u) {
        ctx->pc = 0x3531BCu;
        goto label_3531bc;
    }
    ctx->pc = 0x3531B4u;
    {
        const bool branch_taken_0x3531b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3531b4) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x3531BCu;
label_3531bc:
    // 0x3531bc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3531bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3531c0:
    // 0x3531c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3531c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3531c4:
    // 0x3531c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3531c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3531c8:
    // 0x3531c8: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x3531c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
label_3531cc:
    // 0x3531cc: 0x10000056  b           . + 4 + (0x56 << 2)
label_3531d0:
    if (ctx->pc == 0x3531D0u) {
        ctx->pc = 0x3531D4u;
        goto label_3531d4;
    }
    ctx->pc = 0x3531CCu;
    {
        const bool branch_taken_0x3531cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3531cc) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x3531D4u;
label_3531d4:
    // 0x3531d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3531d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3531d8:
    // 0x3531d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3531d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3531dc:
    // 0x3531dc: 0xc06c168  jal         func_1B05A0
label_3531e0:
    if (ctx->pc == 0x3531E0u) {
        ctx->pc = 0x3531E4u;
        goto label_3531e4;
    }
    ctx->pc = 0x3531DCu;
    SET_GPR_U32(ctx, 31, 0x3531E4u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x3531DCu, 0x3531E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3531E4u;
label_3531e4:
    // 0x3531e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3531e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3531e8:
    // 0x3531e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3531e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3531ec:
    // 0x3531ec: 0x9063002a  lbu         $v1, 0x2A($v1)
    ctx->pc = 0x3531ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 42)));
label_3531f0:
    // 0x3531f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3531f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3531f4:
    // 0x3531f4: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
label_3531f8:
    if (ctx->pc == 0x3531F8u) {
        ctx->pc = 0x3531FCu;
        goto label_3531fc;
    }
    ctx->pc = 0x3531F4u;
    {
        const bool branch_taken_0x3531f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3531f4) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x3531FCu;
label_3531fc:
    // 0x3531fc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3531fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_353200:
    // 0x353200: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x353200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353204:
    // 0x353204: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_353208:
    // 0x353208: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x353208u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
label_35320c:
    // 0x35320c: 0x10000046  b           . + 4 + (0x46 << 2)
label_353210:
    if (ctx->pc == 0x353210u) {
        ctx->pc = 0x353214u;
        goto label_353214;
    }
    ctx->pc = 0x35320Cu;
    {
        const bool branch_taken_0x35320c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35320c) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x353214u;
label_353214:
    // 0x353214: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353218:
    // 0x353218: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_35321c:
    // 0x35321c: 0x9043002a  lbu         $v1, 0x2A($v0)
    ctx->pc = 0x35321cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
label_353220:
    // 0x353220: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353224:
    // 0x353224: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353228:
    // 0x353228: 0xa043002b  sb          $v1, 0x2B($v0)
    ctx->pc = 0x353228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 3));
label_35322c:
    // 0x35322c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353230:
    // 0x353230: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353234:
    // 0x353234: 0x90430029  lbu         $v1, 0x29($v0)
    ctx->pc = 0x353234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_353238:
    // 0x353238: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35323c:
    // 0x35323c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353240:
    // 0x353240: 0xa043002a  sb          $v1, 0x2A($v0)
    ctx->pc = 0x353240u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 42), (uint8_t)GPR_U32(ctx, 3));
label_353244:
    // 0x353244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353248:
    // 0x353248: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_35324c:
    // 0x35324c: 0x9042002b  lbu         $v0, 0x2B($v0)
    ctx->pc = 0x35324cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
label_353250:
    // 0x353250: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x353250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_353254:
    // 0x353254: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353258:
    // 0x353258: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_35325c:
    // 0x35325c: 0x9042002a  lbu         $v0, 0x2A($v0)
    ctx->pc = 0x35325cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
label_353260:
    // 0x353260: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x353260u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_353264:
    // 0x353264: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353268:
    // 0x353268: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_35326c:
    // 0x35326c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35326cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353270:
    // 0x353270: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x353270u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_353274:
    // 0x353274: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x353274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_353278:
    // 0x353278: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x353278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35327c:
    // 0x35327c: 0xc06c0ec  jal         func_1B03B0
label_353280:
    if (ctx->pc == 0x353280u) {
        ctx->pc = 0x353284u;
        goto label_353284;
    }
    ctx->pc = 0x35327Cu;
    SET_GPR_U32(ctx, 31, 0x353284u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x35327Cu, 0x353284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353284u;
label_353284:
    // 0x353284: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x353284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_353288:
    // 0x353288: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35328c:
    // 0x35328c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_353290:
    // 0x353290: 0xa0430028  sb          $v1, 0x28($v0)
    ctx->pc = 0x353290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 3));
label_353294:
    // 0x353294: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353298:
    // 0x353298: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_35329c:
    // 0x35329c: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x35329cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_3532a0:
    // 0x3532a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3532a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3532a4:
    // 0x3532a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3532a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3532a8:
    // 0x3532a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3532a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3532ac:
    // 0x3532ac: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3532acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_3532b0:
    // 0x3532b0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3532b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3532b4:
    // 0x3532b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3532b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3532b8:
    // 0x3532b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3532b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3532bc:
    // 0x3532bc: 0xa443002e  sh          $v1, 0x2E($v0)
    ctx->pc = 0x3532bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 3));
label_3532c0:
    // 0x3532c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3532c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3532c4:
    // 0x3532c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3532c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3532c8:
    // 0x3532c8: 0xc06c168  jal         func_1B05A0
label_3532cc:
    if (ctx->pc == 0x3532CCu) {
        ctx->pc = 0x3532D0u;
        goto label_3532d0;
    }
    ctx->pc = 0x3532C8u;
    SET_GPR_U32(ctx, 31, 0x3532D0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x3532C8u, 0x3532D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3532D0u;
label_3532d0:
    // 0x3532d0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3532d4:
    if (ctx->pc == 0x3532D4u) {
        ctx->pc = 0x3532D8u;
        goto label_3532d8;
    }
    ctx->pc = 0x3532D0u;
    {
        const bool branch_taken_0x3532d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3532d0) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x3532D8u;
label_3532d8:
    // 0x3532d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3532d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3532dc:
    // 0x3532dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3532dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3532e0:
    // 0x3532e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3532e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3532e4:
    // 0x3532e4: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x3532e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
label_3532e8:
    // 0x3532e8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3532ec:
    if (ctx->pc == 0x3532ECu) {
        ctx->pc = 0x3532F0u;
        goto label_3532f0;
    }
    ctx->pc = 0x3532E8u;
    {
        const bool branch_taken_0x3532e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3532e8) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x3532F0u;
label_3532f0:
    // 0x3532f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3532f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3532f4:
    // 0x3532f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3532f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3532f8:
    // 0x3532f8: 0xc06c168  jal         func_1B05A0
label_3532fc:
    if (ctx->pc == 0x3532FCu) {
        ctx->pc = 0x353300u;
        goto label_353300;
    }
    ctx->pc = 0x3532F8u;
    SET_GPR_U32(ctx, 31, 0x353300u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x3532F8u, 0x353300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353300u;
label_353300:
    // 0x353300: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x353300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353304:
    // 0x353304: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_353308:
    // 0x353308: 0x9063002a  lbu         $v1, 0x2A($v1)
    ctx->pc = 0x353308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 42)));
label_35330c:
    // 0x35330c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35330cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_353310:
    // 0x353310: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_353314:
    if (ctx->pc == 0x353314u) {
        ctx->pc = 0x353318u;
        goto label_353318;
    }
    ctx->pc = 0x353310u;
    {
        const bool branch_taken_0x353310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353310) {
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x353318u;
label_353318:
    // 0x353318: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x353318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_35331c:
    // 0x35331c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35331cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_353320:
    // 0x353320: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_353324:
    // 0x353324: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x353324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
label_353328:
    // 0x353328: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x353328u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35332c:
    // 0x35332c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35332cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_353330:
    // 0x353330: 0x3e00008  jr          $ra
label_353334:
    if (ctx->pc == 0x353334u) {
        ctx->pc = 0x353338u;
        goto label_fallthrough_0x353330;
    }
    ctx->pc = 0x353330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x353330:
    ctx->pc = 0x353338u;
}
