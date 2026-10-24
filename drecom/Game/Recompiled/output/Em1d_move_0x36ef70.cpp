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

// Function: Em1d_move
// Address: 0x36ef70 - 0x36f430
void Em1d_move_0x36ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_move_0x36ef70");
#endif

    switch (ctx->pc) {
        case 0x36ef70u: goto label_36ef70;
        case 0x36ef74u: goto label_36ef74;
        case 0x36ef78u: goto label_36ef78;
        case 0x36ef7cu: goto label_36ef7c;
        case 0x36ef80u: goto label_36ef80;
        case 0x36ef84u: goto label_36ef84;
        case 0x36ef88u: goto label_36ef88;
        case 0x36ef8cu: goto label_36ef8c;
        case 0x36ef90u: goto label_36ef90;
        case 0x36ef94u: goto label_36ef94;
        case 0x36ef98u: goto label_36ef98;
        case 0x36ef9cu: goto label_36ef9c;
        case 0x36efa0u: goto label_36efa0;
        case 0x36efa4u: goto label_36efa4;
        case 0x36efa8u: goto label_36efa8;
        case 0x36efacu: goto label_36efac;
        case 0x36efb0u: goto label_36efb0;
        case 0x36efb4u: goto label_36efb4;
        case 0x36efb8u: goto label_36efb8;
        case 0x36efbcu: goto label_36efbc;
        case 0x36efc0u: goto label_36efc0;
        case 0x36efc4u: goto label_36efc4;
        case 0x36efc8u: goto label_36efc8;
        case 0x36efccu: goto label_36efcc;
        case 0x36efd0u: goto label_36efd0;
        case 0x36efd4u: goto label_36efd4;
        case 0x36efd8u: goto label_36efd8;
        case 0x36efdcu: goto label_36efdc;
        case 0x36efe0u: goto label_36efe0;
        case 0x36efe4u: goto label_36efe4;
        case 0x36efe8u: goto label_36efe8;
        case 0x36efecu: goto label_36efec;
        case 0x36eff0u: goto label_36eff0;
        case 0x36eff4u: goto label_36eff4;
        case 0x36eff8u: goto label_36eff8;
        case 0x36effcu: goto label_36effc;
        case 0x36f000u: goto label_36f000;
        case 0x36f004u: goto label_36f004;
        case 0x36f008u: goto label_36f008;
        case 0x36f00cu: goto label_36f00c;
        case 0x36f010u: goto label_36f010;
        case 0x36f014u: goto label_36f014;
        case 0x36f018u: goto label_36f018;
        case 0x36f01cu: goto label_36f01c;
        case 0x36f020u: goto label_36f020;
        case 0x36f024u: goto label_36f024;
        case 0x36f028u: goto label_36f028;
        case 0x36f02cu: goto label_36f02c;
        case 0x36f030u: goto label_36f030;
        case 0x36f034u: goto label_36f034;
        case 0x36f038u: goto label_36f038;
        case 0x36f03cu: goto label_36f03c;
        case 0x36f040u: goto label_36f040;
        case 0x36f044u: goto label_36f044;
        case 0x36f048u: goto label_36f048;
        case 0x36f04cu: goto label_36f04c;
        case 0x36f050u: goto label_36f050;
        case 0x36f054u: goto label_36f054;
        case 0x36f058u: goto label_36f058;
        case 0x36f05cu: goto label_36f05c;
        case 0x36f060u: goto label_36f060;
        case 0x36f064u: goto label_36f064;
        case 0x36f068u: goto label_36f068;
        case 0x36f06cu: goto label_36f06c;
        case 0x36f070u: goto label_36f070;
        case 0x36f074u: goto label_36f074;
        case 0x36f078u: goto label_36f078;
        case 0x36f07cu: goto label_36f07c;
        case 0x36f080u: goto label_36f080;
        case 0x36f084u: goto label_36f084;
        case 0x36f088u: goto label_36f088;
        case 0x36f08cu: goto label_36f08c;
        case 0x36f090u: goto label_36f090;
        case 0x36f094u: goto label_36f094;
        case 0x36f098u: goto label_36f098;
        case 0x36f09cu: goto label_36f09c;
        case 0x36f0a0u: goto label_36f0a0;
        case 0x36f0a4u: goto label_36f0a4;
        case 0x36f0a8u: goto label_36f0a8;
        case 0x36f0acu: goto label_36f0ac;
        case 0x36f0b0u: goto label_36f0b0;
        case 0x36f0b4u: goto label_36f0b4;
        case 0x36f0b8u: goto label_36f0b8;
        case 0x36f0bcu: goto label_36f0bc;
        case 0x36f0c0u: goto label_36f0c0;
        case 0x36f0c4u: goto label_36f0c4;
        case 0x36f0c8u: goto label_36f0c8;
        case 0x36f0ccu: goto label_36f0cc;
        case 0x36f0d0u: goto label_36f0d0;
        case 0x36f0d4u: goto label_36f0d4;
        case 0x36f0d8u: goto label_36f0d8;
        case 0x36f0dcu: goto label_36f0dc;
        case 0x36f0e0u: goto label_36f0e0;
        case 0x36f0e4u: goto label_36f0e4;
        case 0x36f0e8u: goto label_36f0e8;
        case 0x36f0ecu: goto label_36f0ec;
        case 0x36f0f0u: goto label_36f0f0;
        case 0x36f0f4u: goto label_36f0f4;
        case 0x36f0f8u: goto label_36f0f8;
        case 0x36f0fcu: goto label_36f0fc;
        case 0x36f100u: goto label_36f100;
        case 0x36f104u: goto label_36f104;
        case 0x36f108u: goto label_36f108;
        case 0x36f10cu: goto label_36f10c;
        case 0x36f110u: goto label_36f110;
        case 0x36f114u: goto label_36f114;
        case 0x36f118u: goto label_36f118;
        case 0x36f11cu: goto label_36f11c;
        case 0x36f120u: goto label_36f120;
        case 0x36f124u: goto label_36f124;
        case 0x36f128u: goto label_36f128;
        case 0x36f12cu: goto label_36f12c;
        case 0x36f130u: goto label_36f130;
        case 0x36f134u: goto label_36f134;
        case 0x36f138u: goto label_36f138;
        case 0x36f13cu: goto label_36f13c;
        case 0x36f140u: goto label_36f140;
        case 0x36f144u: goto label_36f144;
        case 0x36f148u: goto label_36f148;
        case 0x36f14cu: goto label_36f14c;
        case 0x36f150u: goto label_36f150;
        case 0x36f154u: goto label_36f154;
        case 0x36f158u: goto label_36f158;
        case 0x36f15cu: goto label_36f15c;
        case 0x36f160u: goto label_36f160;
        case 0x36f164u: goto label_36f164;
        case 0x36f168u: goto label_36f168;
        case 0x36f16cu: goto label_36f16c;
        case 0x36f170u: goto label_36f170;
        case 0x36f174u: goto label_36f174;
        case 0x36f178u: goto label_36f178;
        case 0x36f17cu: goto label_36f17c;
        case 0x36f180u: goto label_36f180;
        case 0x36f184u: goto label_36f184;
        case 0x36f188u: goto label_36f188;
        case 0x36f18cu: goto label_36f18c;
        case 0x36f190u: goto label_36f190;
        case 0x36f194u: goto label_36f194;
        case 0x36f198u: goto label_36f198;
        case 0x36f19cu: goto label_36f19c;
        case 0x36f1a0u: goto label_36f1a0;
        case 0x36f1a4u: goto label_36f1a4;
        case 0x36f1a8u: goto label_36f1a8;
        case 0x36f1acu: goto label_36f1ac;
        case 0x36f1b0u: goto label_36f1b0;
        case 0x36f1b4u: goto label_36f1b4;
        case 0x36f1b8u: goto label_36f1b8;
        case 0x36f1bcu: goto label_36f1bc;
        case 0x36f1c0u: goto label_36f1c0;
        case 0x36f1c4u: goto label_36f1c4;
        case 0x36f1c8u: goto label_36f1c8;
        case 0x36f1ccu: goto label_36f1cc;
        case 0x36f1d0u: goto label_36f1d0;
        case 0x36f1d4u: goto label_36f1d4;
        case 0x36f1d8u: goto label_36f1d8;
        case 0x36f1dcu: goto label_36f1dc;
        case 0x36f1e0u: goto label_36f1e0;
        case 0x36f1e4u: goto label_36f1e4;
        case 0x36f1e8u: goto label_36f1e8;
        case 0x36f1ecu: goto label_36f1ec;
        case 0x36f1f0u: goto label_36f1f0;
        case 0x36f1f4u: goto label_36f1f4;
        case 0x36f1f8u: goto label_36f1f8;
        case 0x36f1fcu: goto label_36f1fc;
        case 0x36f200u: goto label_36f200;
        case 0x36f204u: goto label_36f204;
        case 0x36f208u: goto label_36f208;
        case 0x36f20cu: goto label_36f20c;
        case 0x36f210u: goto label_36f210;
        case 0x36f214u: goto label_36f214;
        case 0x36f218u: goto label_36f218;
        case 0x36f21cu: goto label_36f21c;
        case 0x36f220u: goto label_36f220;
        case 0x36f224u: goto label_36f224;
        case 0x36f228u: goto label_36f228;
        case 0x36f22cu: goto label_36f22c;
        case 0x36f230u: goto label_36f230;
        case 0x36f234u: goto label_36f234;
        case 0x36f238u: goto label_36f238;
        case 0x36f23cu: goto label_36f23c;
        case 0x36f240u: goto label_36f240;
        case 0x36f244u: goto label_36f244;
        case 0x36f248u: goto label_36f248;
        case 0x36f24cu: goto label_36f24c;
        case 0x36f250u: goto label_36f250;
        case 0x36f254u: goto label_36f254;
        case 0x36f258u: goto label_36f258;
        case 0x36f25cu: goto label_36f25c;
        case 0x36f260u: goto label_36f260;
        case 0x36f264u: goto label_36f264;
        case 0x36f268u: goto label_36f268;
        case 0x36f26cu: goto label_36f26c;
        case 0x36f270u: goto label_36f270;
        case 0x36f274u: goto label_36f274;
        case 0x36f278u: goto label_36f278;
        case 0x36f27cu: goto label_36f27c;
        case 0x36f280u: goto label_36f280;
        case 0x36f284u: goto label_36f284;
        case 0x36f288u: goto label_36f288;
        case 0x36f28cu: goto label_36f28c;
        case 0x36f290u: goto label_36f290;
        case 0x36f294u: goto label_36f294;
        case 0x36f298u: goto label_36f298;
        case 0x36f29cu: goto label_36f29c;
        case 0x36f2a0u: goto label_36f2a0;
        case 0x36f2a4u: goto label_36f2a4;
        case 0x36f2a8u: goto label_36f2a8;
        case 0x36f2acu: goto label_36f2ac;
        case 0x36f2b0u: goto label_36f2b0;
        case 0x36f2b4u: goto label_36f2b4;
        case 0x36f2b8u: goto label_36f2b8;
        case 0x36f2bcu: goto label_36f2bc;
        case 0x36f2c0u: goto label_36f2c0;
        case 0x36f2c4u: goto label_36f2c4;
        case 0x36f2c8u: goto label_36f2c8;
        case 0x36f2ccu: goto label_36f2cc;
        case 0x36f2d0u: goto label_36f2d0;
        case 0x36f2d4u: goto label_36f2d4;
        case 0x36f2d8u: goto label_36f2d8;
        case 0x36f2dcu: goto label_36f2dc;
        case 0x36f2e0u: goto label_36f2e0;
        case 0x36f2e4u: goto label_36f2e4;
        case 0x36f2e8u: goto label_36f2e8;
        case 0x36f2ecu: goto label_36f2ec;
        case 0x36f2f0u: goto label_36f2f0;
        case 0x36f2f4u: goto label_36f2f4;
        case 0x36f2f8u: goto label_36f2f8;
        case 0x36f2fcu: goto label_36f2fc;
        case 0x36f300u: goto label_36f300;
        case 0x36f304u: goto label_36f304;
        case 0x36f308u: goto label_36f308;
        case 0x36f30cu: goto label_36f30c;
        case 0x36f310u: goto label_36f310;
        case 0x36f314u: goto label_36f314;
        case 0x36f318u: goto label_36f318;
        case 0x36f31cu: goto label_36f31c;
        case 0x36f320u: goto label_36f320;
        case 0x36f324u: goto label_36f324;
        case 0x36f328u: goto label_36f328;
        case 0x36f32cu: goto label_36f32c;
        case 0x36f330u: goto label_36f330;
        case 0x36f334u: goto label_36f334;
        case 0x36f338u: goto label_36f338;
        case 0x36f33cu: goto label_36f33c;
        case 0x36f340u: goto label_36f340;
        case 0x36f344u: goto label_36f344;
        case 0x36f348u: goto label_36f348;
        case 0x36f34cu: goto label_36f34c;
        case 0x36f350u: goto label_36f350;
        case 0x36f354u: goto label_36f354;
        case 0x36f358u: goto label_36f358;
        case 0x36f35cu: goto label_36f35c;
        case 0x36f360u: goto label_36f360;
        case 0x36f364u: goto label_36f364;
        case 0x36f368u: goto label_36f368;
        case 0x36f36cu: goto label_36f36c;
        case 0x36f370u: goto label_36f370;
        case 0x36f374u: goto label_36f374;
        case 0x36f378u: goto label_36f378;
        case 0x36f37cu: goto label_36f37c;
        case 0x36f380u: goto label_36f380;
        case 0x36f384u: goto label_36f384;
        case 0x36f388u: goto label_36f388;
        case 0x36f38cu: goto label_36f38c;
        case 0x36f390u: goto label_36f390;
        case 0x36f394u: goto label_36f394;
        case 0x36f398u: goto label_36f398;
        case 0x36f39cu: goto label_36f39c;
        case 0x36f3a0u: goto label_36f3a0;
        case 0x36f3a4u: goto label_36f3a4;
        case 0x36f3a8u: goto label_36f3a8;
        case 0x36f3acu: goto label_36f3ac;
        case 0x36f3b0u: goto label_36f3b0;
        case 0x36f3b4u: goto label_36f3b4;
        case 0x36f3b8u: goto label_36f3b8;
        case 0x36f3bcu: goto label_36f3bc;
        case 0x36f3c0u: goto label_36f3c0;
        case 0x36f3c4u: goto label_36f3c4;
        case 0x36f3c8u: goto label_36f3c8;
        case 0x36f3ccu: goto label_36f3cc;
        case 0x36f3d0u: goto label_36f3d0;
        case 0x36f3d4u: goto label_36f3d4;
        case 0x36f3d8u: goto label_36f3d8;
        case 0x36f3dcu: goto label_36f3dc;
        case 0x36f3e0u: goto label_36f3e0;
        case 0x36f3e4u: goto label_36f3e4;
        case 0x36f3e8u: goto label_36f3e8;
        case 0x36f3ecu: goto label_36f3ec;
        case 0x36f3f0u: goto label_36f3f0;
        case 0x36f3f4u: goto label_36f3f4;
        case 0x36f3f8u: goto label_36f3f8;
        case 0x36f3fcu: goto label_36f3fc;
        case 0x36f400u: goto label_36f400;
        case 0x36f404u: goto label_36f404;
        case 0x36f408u: goto label_36f408;
        case 0x36f40cu: goto label_36f40c;
        case 0x36f410u: goto label_36f410;
        case 0x36f414u: goto label_36f414;
        case 0x36f418u: goto label_36f418;
        case 0x36f41cu: goto label_36f41c;
        case 0x36f420u: goto label_36f420;
        case 0x36f424u: goto label_36f424;
        case 0x36f428u: goto label_36f428;
        case 0x36f42cu: goto label_36f42c;
        default: break;
    }

    ctx->pc = 0x36ef70u;

label_36ef70:
    // 0x36ef70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36ef70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_36ef74:
    // 0x36ef74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x36ef74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_36ef78:
    // 0x36ef78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36ef78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36ef7c:
    // 0x36ef7c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x36ef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_36ef80:
    // 0x36ef80: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x36ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_36ef84:
    // 0x36ef84: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x36ef84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_36ef88:
    // 0x36ef88: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36ef8c:
    // 0x36ef8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36ef90:
    // 0x36ef90: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x36ef90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_36ef94:
    // 0x36ef94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36ef94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36ef98:
    // 0x36ef98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36ef9c:
    // 0x36ef9c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36efa0:
    // 0x36efa0: 0x2442b4b0  addiu       $v0, $v0, -0x4B50
    ctx->pc = 0x36efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948016));
label_36efa4:
    // 0x36efa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36efa8:
    // 0x36efa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36efac:
    // 0x36efac: 0x40f809  jalr        $v0
label_36efb0:
    if (ctx->pc == 0x36EFB0u) {
        ctx->pc = 0x36EFB4u;
        goto label_36efb4;
    }
    ctx->pc = 0x36EFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36EFB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EFACu, 0x36EFB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36EFB4u;
label_36efb4:
    // 0x36efb4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36efb8:
    // 0x36efb8: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x36efb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_36efbc:
    // 0x36efbc: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x36efbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_36efc0:
    // 0x36efc0: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x36efc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_36efc4:
    // 0x36efc4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x36efc4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36efc8:
    // 0x36efc8: 0xc05d328  jal         func_174CA0
label_36efcc:
    if (ctx->pc == 0x36EFCCu) {
        ctx->pc = 0x36EFD0u;
        goto label_36efd0;
    }
    ctx->pc = 0x36EFC8u;
    SET_GPR_U32(ctx, 31, 0x36EFD0u);
    ctx->pc = 0x174CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174CA0u, 0x36EFC8u, 0x36EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EFD0u;
label_36efd0:
    // 0x36efd0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x36efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_36efd4:
    // 0x36efd4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36efd8:
    // 0x36efd8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_36efdc:
    // 0x36efdc: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x36efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_36efe0:
    // 0x36efe0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36efe4:
    // 0x36efe4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_36efe8:
    // 0x36efe8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x36efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_36efec:
    // 0x36efec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36eff0:
    // 0x36eff0: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_36eff4:
    if (ctx->pc == 0x36EFF4u) {
        ctx->pc = 0x36EFF8u;
        goto label_36eff8;
    }
    ctx->pc = 0x36EFF0u;
    {
        const bool branch_taken_0x36eff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36eff0) {
            ctx->pc = 0x36F088u;
            goto label_36f088;
        }
    }
    ctx->pc = 0x36EFF8u;
label_36eff8:
    // 0x36eff8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36effc:
    // 0x36effc: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x36effcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36f000:
    // 0x36f000: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f004:
    // 0x36f004: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_36f008:
    // 0x36f008: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x36f008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_36f00c:
    // 0x36f00c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x36f00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_36f010:
    // 0x36f010: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f014:
    // 0x36f014: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x36f014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36f018:
    // 0x36f018: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f01c:
    // 0x36f01c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_36f020:
    // 0x36f020: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x36f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_36f024:
    // 0x36f024: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x36f024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_36f028:
    // 0x36f028: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f02c:
    // 0x36f02c: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x36f02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36f030:
    // 0x36f030: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f034:
    // 0x36f034: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_36f038:
    // 0x36f038: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x36f038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_36f03c:
    // 0x36f03c: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x36f03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_36f040:
    // 0x36f040: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f044:
    // 0x36f044: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x36f044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36f048:
    // 0x36f048: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f04c:
    // 0x36f04c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_36f050:
    // 0x36f050: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x36f050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_36f054:
    // 0x36f054: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x36f054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_36f058:
    // 0x36f058: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f05c:
    // 0x36f05c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x36f05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36f060:
    // 0x36f060: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f064:
    // 0x36f064: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_36f068:
    // 0x36f068: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x36f068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_36f06c:
    // 0x36f06c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36f06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_36f070:
    // 0x36f070: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f074:
    // 0x36f074: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x36f074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36f078:
    // 0x36f078: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f07c:
    // 0x36f07c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_36f080:
    // 0x36f080: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x36f080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_36f084:
    // 0x36f084: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x36f084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_36f088:
    // 0x36f088: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f08c:
    // 0x36f08c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x36f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_36f090:
    // 0x36f090: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x36f090u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_36f094:
    // 0x36f094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36f094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_36f098:
    // 0x36f098: 0xa4620014  sh          $v0, 0x14($v1)
    ctx->pc = 0x36f098u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 2));
label_36f09c:
    // 0x36f09c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f0a0:
    // 0x36f0a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_36f0a4:
    // 0x36f0a4: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x36f0a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_36f0a8:
    // 0x36f0a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x36f0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_36f0ac:
    // 0x36f0ac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x36f0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_36f0b0:
    // 0x36f0b0: 0x144000ab  bnez        $v0, . + 4 + (0xAB << 2)
label_36f0b4:
    if (ctx->pc == 0x36F0B4u) {
        ctx->pc = 0x36F0B8u;
        goto label_36f0b8;
    }
    ctx->pc = 0x36F0B0u;
    {
        const bool branch_taken_0x36f0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36f0b0) {
            ctx->pc = 0x36F360u;
            goto label_36f360;
        }
    }
    ctx->pc = 0x36F0B8u;
label_36f0b8:
    // 0x36f0b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f0b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f0bc:
    // 0x36f0bc: 0x0  nop
    ctx->pc = 0x36f0bcu;
    // NOP
label_36f0c0:
    // 0x36f0c0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x36f0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_36f0c4:
    // 0x36f0c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f0c8:
    // 0x36f0c8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x36f0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36f0cc:
    // 0x36f0cc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x36f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_36f0d0:
    // 0x36f0d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36f0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_36f0d4:
    // 0x36f0d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f0d8:
    // 0x36f0d8: 0x0  nop
    ctx->pc = 0x36f0d8u;
    // NOP
label_36f0dc:
    // 0x36f0dc: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x36f0dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_36f0e0:
    // 0x36f0e0: 0xc058fec  jal         func_163FB0
label_36f0e4:
    if (ctx->pc == 0x36F0E4u) {
        ctx->pc = 0x36F0E8u;
        goto label_36f0e8;
    }
    ctx->pc = 0x36F0E0u;
    SET_GPR_U32(ctx, 31, 0x36F0E8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36F0E0u, 0x36F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F0E8u;
label_36f0e8:
    // 0x36f0e8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x36f0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_36f0ec:
    // 0x36f0ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f0ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f0f0:
    // 0x36f0f0: 0x0  nop
    ctx->pc = 0x36f0f0u;
    // NOP
label_36f0f4:
    // 0x36f0f4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x36f0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_36f0f8:
    // 0x36f0f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36f0fc:
    // 0x36f0fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f100:
    // 0x36f100: 0x0  nop
    ctx->pc = 0x36f100u;
    // NOP
label_36f104:
    // 0x36f104: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x36f104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_36f108:
    // 0x36f108: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x36f108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
label_36f10c:
    // 0x36f10c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f110:
    // 0x36f110: 0x0  nop
    ctx->pc = 0x36f110u;
    // NOP
label_36f114:
    // 0x36f114: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36f114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_36f118:
    // 0x36f118: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x36f118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_36f11c:
    // 0x36f11c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f120:
    // 0x36f120: 0x0  nop
    ctx->pc = 0x36f120u;
    // NOP
label_36f124:
    // 0x36f124: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36f124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_36f128:
    // 0x36f128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f12c:
    // 0x36f12c: 0x0  nop
    ctx->pc = 0x36f12cu;
    // NOP
label_36f130:
    // 0x36f130: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36f130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_36f134:
    // 0x36f134: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36f138:
    // 0x36f138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f13c:
    // 0x36f13c: 0x0  nop
    ctx->pc = 0x36f13cu;
    // NOP
label_36f140:
    // 0x36f140: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x36f140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_36f144:
    // 0x36f144: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f148:
    // 0x36f148: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_36f14c:
    // 0x36f14c: 0x244204c0  addiu       $v0, $v0, 0x4C0
    ctx->pc = 0x36f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1216));
label_36f150:
    // 0x36f150: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x36f150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_36f154:
    // 0x36f154: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x36f154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_36f158:
    // 0x36f158: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36f158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_36f15c:
    // 0x36f15c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36f15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_36f160:
    // 0x36f160: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36f160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_36f164:
    // 0x36f164: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x36f164u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36f168:
    // 0x36f168: 0x24041d03  addiu       $a0, $zero, 0x1D03
    ctx->pc = 0x36f168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7427));
label_36f16c:
    // 0x36f16c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x36f16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_36f170:
    // 0x36f170: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x36f170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36f174:
    // 0x36f174: 0xc062f5c  jal         func_18BD70
label_36f178:
    if (ctx->pc == 0x36F178u) {
        ctx->pc = 0x36F17Cu;
        goto label_36f17c;
    }
    ctx->pc = 0x36F174u;
    SET_GPR_U32(ctx, 31, 0x36F17Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36F174u, 0x36F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F17Cu;
label_36f17c:
    // 0x36f17c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36f17cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_36f180:
    // 0x36f180: 0xc0630a8  jal         func_18C2A0
label_36f184:
    if (ctx->pc == 0x36F184u) {
        ctx->pc = 0x36F188u;
        goto label_36f188;
    }
    ctx->pc = 0x36F180u;
    SET_GPR_U32(ctx, 31, 0x36F188u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36F180u, 0x36F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F188u;
label_36f188:
    // 0x36f188: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x36f188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_36f18c:
    // 0x36f18c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f190:
    // 0x36f190: 0x0  nop
    ctx->pc = 0x36f190u;
    // NOP
label_36f194:
    // 0x36f194: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36f194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_36f198:
    // 0x36f198: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x36f198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_36f19c:
    // 0x36f19c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f1a0:
    // 0x36f1a0: 0x0  nop
    ctx->pc = 0x36f1a0u;
    // NOP
label_36f1a4:
    // 0x36f1a4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36f1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_36f1a8:
    // 0x36f1a8: 0x3c02c2dc  lui         $v0, 0xC2DC
    ctx->pc = 0x36f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49884 << 16));
label_36f1ac:
    // 0x36f1ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f1b0:
    // 0x36f1b0: 0x0  nop
    ctx->pc = 0x36f1b0u;
    // NOP
label_36f1b4:
    // 0x36f1b4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36f1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_36f1b8:
    // 0x36f1b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36f1bc:
    // 0x36f1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f1c0:
    // 0x36f1c0: 0x0  nop
    ctx->pc = 0x36f1c0u;
    // NOP
label_36f1c4:
    // 0x36f1c4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x36f1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_36f1c8:
    // 0x36f1c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f1cc:
    // 0x36f1cc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_36f1d0:
    // 0x36f1d0: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x36f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
label_36f1d4:
    // 0x36f1d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x36f1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_36f1d8:
    // 0x36f1d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x36f1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_36f1dc:
    // 0x36f1dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36f1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_36f1e0:
    // 0x36f1e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36f1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_36f1e4:
    // 0x36f1e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36f1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_36f1e8:
    // 0x36f1e8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x36f1e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36f1ec:
    // 0x36f1ec: 0x24041d03  addiu       $a0, $zero, 0x1D03
    ctx->pc = 0x36f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7427));
label_36f1f0:
    // 0x36f1f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x36f1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_36f1f4:
    // 0x36f1f4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x36f1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36f1f8:
    // 0x36f1f8: 0xc062f5c  jal         func_18BD70
label_36f1fc:
    if (ctx->pc == 0x36F1FCu) {
        ctx->pc = 0x36F200u;
        goto label_36f200;
    }
    ctx->pc = 0x36F1F8u;
    SET_GPR_U32(ctx, 31, 0x36F200u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36F1F8u, 0x36F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F200u;
label_36f200:
    // 0x36f200: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36f200u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_36f204:
    // 0x36f204: 0xc0630a8  jal         func_18C2A0
label_36f208:
    if (ctx->pc == 0x36F208u) {
        ctx->pc = 0x36F20Cu;
        goto label_36f20c;
    }
    ctx->pc = 0x36F204u;
    SET_GPR_U32(ctx, 31, 0x36F20Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36F204u, 0x36F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F20Cu;
label_36f20c:
    // 0x36f20c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f210:
    // 0x36f210: 0x0  nop
    ctx->pc = 0x36f210u;
    // NOP
label_36f214:
    // 0x36f214: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x36f214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_36f218:
    // 0x36f218: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f21c:
    // 0x36f21c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x36f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36f220:
    // 0x36f220: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x36f220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_36f224:
    // 0x36f224: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36f224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_36f228:
    // 0x36f228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f22c:
    // 0x36f22c: 0x0  nop
    ctx->pc = 0x36f22cu;
    // NOP
label_36f230:
    // 0x36f230: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x36f230u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_36f234:
    // 0x36f234: 0xc058fec  jal         func_163FB0
label_36f238:
    if (ctx->pc == 0x36F238u) {
        ctx->pc = 0x36F23Cu;
        goto label_36f23c;
    }
    ctx->pc = 0x36F234u;
    SET_GPR_U32(ctx, 31, 0x36F23Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36F234u, 0x36F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F23Cu;
label_36f23c:
    // 0x36f23c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x36f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_36f240:
    // 0x36f240: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f244:
    // 0x36f244: 0x0  nop
    ctx->pc = 0x36f244u;
    // NOP
label_36f248:
    // 0x36f248: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x36f248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_36f24c:
    // 0x36f24c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36f250:
    // 0x36f250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f254:
    // 0x36f254: 0x0  nop
    ctx->pc = 0x36f254u;
    // NOP
label_36f258:
    // 0x36f258: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x36f258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_36f25c:
    // 0x36f25c: 0x3c02c3af  lui         $v0, 0xC3AF
    ctx->pc = 0x36f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50095 << 16));
label_36f260:
    // 0x36f260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f264:
    // 0x36f264: 0x0  nop
    ctx->pc = 0x36f264u;
    // NOP
label_36f268:
    // 0x36f268: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36f268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_36f26c:
    // 0x36f26c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x36f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_36f270:
    // 0x36f270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f274:
    // 0x36f274: 0x0  nop
    ctx->pc = 0x36f274u;
    // NOP
label_36f278:
    // 0x36f278: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36f278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_36f27c:
    // 0x36f27c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f27cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f280:
    // 0x36f280: 0x0  nop
    ctx->pc = 0x36f280u;
    // NOP
label_36f284:
    // 0x36f284: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36f284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_36f288:
    // 0x36f288: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36f28c:
    // 0x36f28c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f290:
    // 0x36f290: 0x0  nop
    ctx->pc = 0x36f290u;
    // NOP
label_36f294:
    // 0x36f294: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x36f294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_36f298:
    // 0x36f298: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f29c:
    // 0x36f29c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_36f2a0:
    // 0x36f2a0: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x36f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
label_36f2a4:
    // 0x36f2a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x36f2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_36f2a8:
    // 0x36f2a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x36f2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_36f2ac:
    // 0x36f2ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36f2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_36f2b0:
    // 0x36f2b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36f2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_36f2b4:
    // 0x36f2b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36f2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_36f2b8:
    // 0x36f2b8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x36f2b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36f2bc:
    // 0x36f2bc: 0x24041d03  addiu       $a0, $zero, 0x1D03
    ctx->pc = 0x36f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7427));
label_36f2c0:
    // 0x36f2c0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x36f2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_36f2c4:
    // 0x36f2c4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x36f2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36f2c8:
    // 0x36f2c8: 0xc062f5c  jal         func_18BD70
label_36f2cc:
    if (ctx->pc == 0x36F2CCu) {
        ctx->pc = 0x36F2D0u;
        goto label_36f2d0;
    }
    ctx->pc = 0x36F2C8u;
    SET_GPR_U32(ctx, 31, 0x36F2D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36F2C8u, 0x36F2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2D0u;
label_36f2d0:
    // 0x36f2d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36f2d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_36f2d4:
    // 0x36f2d4: 0xc0630a8  jal         func_18C2A0
label_36f2d8:
    if (ctx->pc == 0x36F2D8u) {
        ctx->pc = 0x36F2DCu;
        goto label_36f2dc;
    }
    ctx->pc = 0x36F2D4u;
    SET_GPR_U32(ctx, 31, 0x36F2DCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36F2D4u, 0x36F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2DCu;
label_36f2dc:
    // 0x36f2dc: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x36f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
label_36f2e0:
    // 0x36f2e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f2e4:
    // 0x36f2e4: 0x0  nop
    ctx->pc = 0x36f2e4u;
    // NOP
label_36f2e8:
    // 0x36f2e8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36f2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_36f2ec:
    // 0x36f2ec: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x36f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_36f2f0:
    // 0x36f2f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f2f4:
    // 0x36f2f4: 0x0  nop
    ctx->pc = 0x36f2f4u;
    // NOP
label_36f2f8:
    // 0x36f2f8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36f2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_36f2fc:
    // 0x36f2fc: 0x3c02c2dc  lui         $v0, 0xC2DC
    ctx->pc = 0x36f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49884 << 16));
label_36f300:
    // 0x36f300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f304:
    // 0x36f304: 0x0  nop
    ctx->pc = 0x36f304u;
    // NOP
label_36f308:
    // 0x36f308: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36f308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_36f30c:
    // 0x36f30c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36f310:
    // 0x36f310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f314:
    // 0x36f314: 0x0  nop
    ctx->pc = 0x36f314u;
    // NOP
label_36f318:
    // 0x36f318: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x36f318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_36f31c:
    // 0x36f31c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f320:
    // 0x36f320: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36f320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_36f324:
    // 0x36f324: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x36f324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_36f328:
    // 0x36f328: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x36f328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_36f32c:
    // 0x36f32c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x36f32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_36f330:
    // 0x36f330: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36f330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_36f334:
    // 0x36f334: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36f334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_36f338:
    // 0x36f338: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36f338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_36f33c:
    // 0x36f33c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x36f33cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36f340:
    // 0x36f340: 0x24041d03  addiu       $a0, $zero, 0x1D03
    ctx->pc = 0x36f340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7427));
label_36f344:
    // 0x36f344: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x36f344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_36f348:
    // 0x36f348: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x36f348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36f34c:
    // 0x36f34c: 0xc062f5c  jal         func_18BD70
label_36f350:
    if (ctx->pc == 0x36F350u) {
        ctx->pc = 0x36F354u;
        goto label_36f354;
    }
    ctx->pc = 0x36F34Cu;
    SET_GPR_U32(ctx, 31, 0x36F354u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36F34Cu, 0x36F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F354u;
label_36f354:
    // 0x36f354: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36f354u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_36f358:
    // 0x36f358: 0xc0630a8  jal         func_18C2A0
label_36f35c:
    if (ctx->pc == 0x36F35Cu) {
        ctx->pc = 0x36F360u;
        goto label_36f360;
    }
    ctx->pc = 0x36F358u;
    SET_GPR_U32(ctx, 31, 0x36F360u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36F358u, 0x36F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F360u;
label_36f360:
    // 0x36f360: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f364:
    // 0x36f364: 0x0  nop
    ctx->pc = 0x36f364u;
    // NOP
label_36f368:
    // 0x36f368: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36f368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_36f36c:
    // 0x36f36c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f36cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f370:
    // 0x36f370: 0x0  nop
    ctx->pc = 0x36f370u;
    // NOP
label_36f374:
    // 0x36f374: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36f374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_36f378:
    // 0x36f378: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x36f378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_36f37c:
    // 0x36f37c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f380:
    // 0x36f380: 0x0  nop
    ctx->pc = 0x36f380u;
    // NOP
label_36f384:
    // 0x36f384: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36f384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_36f388:
    // 0x36f388: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36f38c:
    // 0x36f38c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f390:
    // 0x36f390: 0x0  nop
    ctx->pc = 0x36f390u;
    // NOP
label_36f394:
    // 0x36f394: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x36f394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_36f398:
    // 0x36f398: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f39c:
    // 0x36f39c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_36f3a0:
    // 0x36f3a0: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f3a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_36f3a4:
    // 0x36f3a4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36f3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36f3a8:
    // 0x36f3a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36f3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_36f3ac:
    // 0x36f3ac: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x36f3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958320)));
label_36f3b0:
    // 0x36f3b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x36f3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36f3b4:
    // 0x36f3b4: 0xc05db20  jal         func_176C80
label_36f3b8:
    if (ctx->pc == 0x36F3B8u) {
        ctx->pc = 0x36F3BCu;
        goto label_36f3bc;
    }
    ctx->pc = 0x36F3B4u;
    SET_GPR_U32(ctx, 31, 0x36F3BCu);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x36F3B4u, 0x36F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F3BCu;
label_36f3bc:
    // 0x36f3bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f3bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f3c0:
    // 0x36f3c0: 0x0  nop
    ctx->pc = 0x36f3c0u;
    // NOP
label_36f3c4:
    // 0x36f3c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36f3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_36f3c8:
    // 0x36f3c8: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x36f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
label_36f3cc:
    // 0x36f3cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f3d0:
    // 0x36f3d0: 0x0  nop
    ctx->pc = 0x36f3d0u;
    // NOP
label_36f3d4:
    // 0x36f3d4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36f3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_36f3d8:
    // 0x36f3d8: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x36f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
label_36f3dc:
    // 0x36f3dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f3e0:
    // 0x36f3e0: 0x0  nop
    ctx->pc = 0x36f3e0u;
    // NOP
label_36f3e4:
    // 0x36f3e4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36f3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_36f3e8:
    // 0x36f3e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36f3ec:
    // 0x36f3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f3f0:
    // 0x36f3f0: 0x0  nop
    ctx->pc = 0x36f3f0u;
    // NOP
label_36f3f4:
    // 0x36f3f4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x36f3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_36f3f8:
    // 0x36f3f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36f3fc:
    // 0x36f3fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_36f400:
    // 0x36f400: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36f400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
label_36f404:
    // 0x36f404: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36f404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36f408:
    // 0x36f408: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36f408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_36f40c:
    // 0x36f40c: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x36f40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958320)));
label_36f410:
    // 0x36f410: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x36f410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36f414:
    // 0x36f414: 0xc05db20  jal         func_176C80
label_36f418:
    if (ctx->pc == 0x36F418u) {
        ctx->pc = 0x36F41Cu;
        goto label_36f41c;
    }
    ctx->pc = 0x36F414u;
    SET_GPR_U32(ctx, 31, 0x36F41Cu);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x36F414u, 0x36F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F41Cu;
label_36f41c:
    // 0x36f41c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x36f41cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36f420:
    // 0x36f420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36f424:
    // 0x36f424: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x36f424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_36f428:
    // 0x36f428: 0x3e00008  jr          $ra
label_36f42c:
    if (ctx->pc == 0x36F42Cu) {
        ctx->pc = 0x36F430u;
        goto label_fallthrough_0x36f428;
    }
    ctx->pc = 0x36F428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36f428:
    ctx->pc = 0x36F430u;
}
