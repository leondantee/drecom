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

// Function: Pl_r1_punch
// Address: 0x1cc730 - 0x1cdb84
void Pl_r1_punch_0x1cc730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_punch_0x1cc730");
#endif

    switch (ctx->pc) {
        case 0x1cc804u: goto label_1cc804;
        case 0x1cc81cu: goto label_1cc81c;
        case 0x1cc8a0u: goto label_1cc8a0;
        case 0x1cc8ccu: goto label_1cc8cc;
        case 0x1cc8dcu: goto label_1cc8dc;
        case 0x1cc900u: goto label_1cc900;
        case 0x1cc908u: goto label_1cc908;
        case 0x1cc918u: goto label_1cc918;
        case 0x1cc924u: goto label_1cc924;
        case 0x1cc93cu: goto label_1cc93c;
        case 0x1cc948u: goto label_1cc948;
        case 0x1cc974u: goto label_1cc974;
        case 0x1cc9c4u: goto label_1cc9c4;
        case 0x1cc9dcu: goto label_1cc9dc;
        case 0x1cca00u: goto label_1cca00;
        case 0x1cca54u: goto label_1cca54;
        case 0x1cca98u: goto label_1cca98;
        case 0x1ccae8u: goto label_1ccae8;
        case 0x1ccc14u: goto label_1ccc14;
        case 0x1cccd4u: goto label_1cccd4;
        case 0x1ccd58u: goto label_1ccd58;
        case 0x1cce2cu: goto label_1cce2c;
        case 0x1cce78u: goto label_1cce78;
        case 0x1ccee0u: goto label_1ccee0;
        case 0x1ccf0cu: goto label_1ccf0c;
        case 0x1ccf1cu: goto label_1ccf1c;
        case 0x1ccf40u: goto label_1ccf40;
        case 0x1ccf48u: goto label_1ccf48;
        case 0x1ccf74u: goto label_1ccf74;
        case 0x1ccfd0u: goto label_1ccfd0;
        case 0x1ccfdcu: goto label_1ccfdc;
        case 0x1cd008u: goto label_1cd008;
        case 0x1cd05cu: goto label_1cd05c;
        case 0x1cd0a4u: goto label_1cd0a4;
        case 0x1cd0fcu: goto label_1cd0fc;
        case 0x1cd17cu: goto label_1cd17c;
        case 0x1cd188u: goto label_1cd188;
        case 0x1cd1a0u: goto label_1cd1a0;
        case 0x1cd1acu: goto label_1cd1ac;
        case 0x1cd268u: goto label_1cd268;
        case 0x1cd3a0u: goto label_1cd3a0;
        case 0x1cd424u: goto label_1cd424;
        case 0x1cd4e8u: goto label_1cd4e8;
        case 0x1cd530u: goto label_1cd530;
        case 0x1cd598u: goto label_1cd598;
        case 0x1cd5c4u: goto label_1cd5c4;
        case 0x1cd5d4u: goto label_1cd5d4;
        case 0x1cd5f8u: goto label_1cd5f8;
        case 0x1cd600u: goto label_1cd600;
        case 0x1cd62cu: goto label_1cd62c;
        case 0x1cd688u: goto label_1cd688;
        case 0x1cd694u: goto label_1cd694;
        case 0x1cd6c0u: goto label_1cd6c0;
        case 0x1cd714u: goto label_1cd714;
        case 0x1cd75cu: goto label_1cd75c;
        case 0x1cd7b4u: goto label_1cd7b4;
        case 0x1cd834u: goto label_1cd834;
        case 0x1cd840u: goto label_1cd840;
        case 0x1cd858u: goto label_1cd858;
        case 0x1cd864u: goto label_1cd864;
        case 0x1cd920u: goto label_1cd920;
        case 0x1cda48u: goto label_1cda48;
        case 0x1cdaccu: goto label_1cdacc;
        default: break;
    }

    ctx->pc = 0x1cc730u;

    // 0x1cc730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cc730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cc734: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1cc734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1cc738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc73c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1cc73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1cc740: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1cc740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1cc744: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1cc744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1cc748: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cc74c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1cc74cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cc750: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x1cc750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x1cc754: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC754u;
    {
        const bool branch_taken_0x1cc754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc754) {
            ctx->pc = 0x1CC768u;
            goto label_1cc768;
        }
    }
    ctx->pc = 0x1CC75Cu;
    // 0x1cc75c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cc75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cc760: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cc760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc764: 0xa06413a7  sb          $a0, 0x13A7($v1)
    ctx->pc = 0x1cc764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5031), (uint8_t)GPR_U32(ctx, 4));
label_1cc768:
    // 0x1cc768: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cc768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc76c: 0x8ca613e8  lw          $a2, 0x13E8($a1)
    ctx->pc = 0x1cc76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
    // 0x1cc770: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC770u;
    {
        const bool branch_taken_0x1cc770 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc770) {
            ctx->pc = 0x1CC798u;
            goto label_1cc798;
        }
    }
    ctx->pc = 0x1CC778u;
    // 0x1cc778: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cc77c: 0x8c271a98  lw          $a3, 0x1A98($at)
    ctx->pc = 0x1cc77cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cc780: 0x3c080080  lui         $t0, 0x80
    ctx->pc = 0x1cc780u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    // 0x1cc784: 0xe84025  or          $t0, $a3, $t0
    ctx->pc = 0x1cc784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1cc788: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cc78c: 0xac281a98  sw          $t0, 0x1A98($at)
    ctx->pc = 0x1cc78cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1cc790: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1cc790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc794: 0xa0e01921  sb          $zero, 0x1921($a3)
    ctx->pc = 0x1cc794u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6433), (uint8_t)GPR_U32(ctx, 0));
label_1cc798:
    // 0x1cc798: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cc798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc79c: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x1cc79cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1cc7a0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1cc7a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1cc7a4: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x1cc7a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cc7a8: 0x102004f1  beqz        $at, . + 4 + (0x4F1 << 2)
    ctx->pc = 0x1CC7A8u;
    {
        const bool branch_taken_0x1cc7a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc7a8) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CC7B0u;
    // 0x1cc7b0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1cc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1cc7b4: 0x2463f510  addiu       $v1, $v1, -0xAF0
    ctx->pc = 0x1cc7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964496));
    // 0x1cc7b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cc7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cc7bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cc7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cc7c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cc7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc7c4: 0x600008  jr          $v1
    ctx->pc = 0x1CC7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC7CCu: goto label_1cc7cc;
            case 0x1CC848u: goto label_1cc848;
            case 0x1CCDFCu: goto label_1ccdfc;
            case 0x1CCE88u: goto label_1cce88;
            case 0x1CD4C8u: goto label_1cd4c8;
            case 0x1CD540u: goto label_1cd540;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC7C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CC7CCu;
label_1cc7cc:
    // 0x1cc7cc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cc7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc7d0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1cc7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1cc7d4: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x1cc7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x1cc7d8: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x1cc7d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1cc7dc: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1cc7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1cc7e0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cc7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cc7e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc7e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc7ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cc7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1cc7f0: 0x24061e84  addiu       $a2, $zero, 0x1E84
    ctx->pc = 0x1cc7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7812));
    // 0x1cc7f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc7f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cc7f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cc7fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CC7FCu;
    SET_GPR_U32(ctx, 31, 0x1CC804u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CC7FCu, 0x1CC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC804u;
label_1cc804:
    // 0x1cc804: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc808: 0x904213a5  lbu         $v0, 0x13A5($v0)
    ctx->pc = 0x1cc808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5029)));
    // 0x1cc80c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1cc80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cc810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc814: 0xc0c5064  jal         func_314190
    ctx->pc = 0x1CC814u;
    SET_GPR_U32(ctx, 31, 0x1CC81Cu);
    ctx->pc = 0x314190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314190u, 0x1CC814u, 0x1CC81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC81Cu;
label_1cc81c:
    // 0x1cc81c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc820: 0xa4801278  sh          $zero, 0x1278($a0)
    ctx->pc = 0x1cc820u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cc824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc828: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc82c: 0xac431b68  sw          $v1, 0x1B68($v0)
    ctx->pc = 0x1cc82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 3));
    // 0x1cc830: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc834: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1cc834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
    // 0x1cc838: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cc838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc83c: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x1cc83cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1cc840: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1cc840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cc844: 0xa0a60002  sb          $a2, 0x2($a1)
    ctx->pc = 0x1cc844u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 6));
label_1cc848:
    // 0x1cc848: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc84c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cc84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cc850: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc854: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1cc854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cc858: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1cc858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1cc85c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc860: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x1cc860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x1cc864: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1cc864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cc868: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1cc868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1cc86c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CC86Cu;
    {
        const bool branch_taken_0x1cc86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc86c) {
            ctx->pc = 0x1CC908u;
            goto label_1cc908;
        }
    }
    ctx->pc = 0x1CC874u;
    // 0x1cc874: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc878: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1cc878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1cc87c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CC87Cu;
    {
        const bool branch_taken_0x1cc87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc87c) {
            ctx->pc = 0x1CC8DCu;
            goto label_1cc8dc;
        }
    }
    ctx->pc = 0x1CC884u;
    // 0x1cc884: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cc884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc888: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc88c: 0x8c4613e8  lw          $a2, 0x13E8($v0)
    ctx->pc = 0x1cc88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1cc890: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1cc890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1cc894: 0x24c50120  addiu       $a1, $a2, 0x120
    ctx->pc = 0x1cc894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x1cc898: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CC898u;
    SET_GPR_U32(ctx, 31, 0x1CC8A0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CC898u, 0x1CC8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8A0u;
label_1cc8a0:
    // 0x1cc8a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8a4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cc8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1cc8a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cc8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8b0: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1cc8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1cc8b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cc8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cc8b8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cc8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cc8bc: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1cc8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cc8c0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1cc8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cc8c4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CC8C4u;
    SET_GPR_U32(ctx, 31, 0x1CC8CCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CC8C4u, 0x1CC8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8CCu;
label_1cc8cc:
    // 0x1cc8cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8d0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cc8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1cc8d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CC8D4u;
    {
        const bool branch_taken_0x1cc8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc8d4) {
            ctx->pc = 0x1CC908u;
            goto label_1cc908;
        }
    }
    ctx->pc = 0x1CC8DCu;
label_1cc8dc:
    // 0x1cc8dc: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1cc8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1cc8e0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1cc8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cc8e4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1cc8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cc8e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8ec: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cc8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8f0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1cc8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cc8f4: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x1cc8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cc8f8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CC8F8u;
    SET_GPR_U32(ctx, 31, 0x1CC900u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CC8F8u, 0x1CC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC900u;
label_1cc900:
    // 0x1cc900: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc904: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cc904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1cc908:
    // 0x1cc908: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc90c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cc90cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc910: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CC910u;
    SET_GPR_U32(ctx, 31, 0x1CC918u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CC910u, 0x1CC918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC918u;
label_1cc918:
    // 0x1cc918: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc91c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CC91Cu;
    SET_GPR_U32(ctx, 31, 0x1CC924u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CC91Cu, 0x1CC924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC924u;
label_1cc924:
    // 0x1cc924: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc928: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc92c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cc92cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cc930: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cc930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc934: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CC934u;
    SET_GPR_U32(ctx, 31, 0x1CC93Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CC934u, 0x1CC93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC93Cu;
label_1cc93c:
    // 0x1cc93c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc93cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc940: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CC940u;
    SET_GPR_U32(ctx, 31, 0x1CC948u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CC940u, 0x1CC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC948u;
label_1cc948:
    // 0x1cc948: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cc948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc94c: 0x84671278  lh          $a3, 0x1278($v1)
    ctx->pc = 0x1cc94cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1cc950: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x1CC950u;
    {
        const bool branch_taken_0x1cc950 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc950) {
            ctx->pc = 0x1CC98Cu;
            goto label_1cc98c;
        }
    }
    ctx->pc = 0x1CC958u;
    // 0x1cc958: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cc958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cc95c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cc95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc960: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc960u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc964: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cc964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc968: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc96c: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CC96Cu;
    SET_GPR_U32(ctx, 31, 0x1CC974u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CC96Cu, 0x1CC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC974u;
label_1cc974:
    // 0x1cc974: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cc974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc978: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x1cc978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1cc97c: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1cc97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cc980: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x1cc980u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cc984: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1CC984u;
    {
        const bool branch_taken_0x1cc984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc984) {
            ctx->pc = 0x1CCB5Cu;
            goto label_1ccb5c;
        }
    }
    ctx->pc = 0x1CC98Cu;
label_1cc98c:
    // 0x1cc98c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cc98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc990: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1cc990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1cc994: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1cc994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cc998: 0x30a60080  andi        $a2, $a1, 0x80
    ctx->pc = 0x1cc998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1cc99c: 0x10c0006f  beqz        $a2, . + 4 + (0x6F << 2)
    ctx->pc = 0x1CC99Cu;
    {
        const bool branch_taken_0x1cc99c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc99c) {
            ctx->pc = 0x1CCB5Cu;
            goto label_1ccb5c;
        }
    }
    ctx->pc = 0x1CC9A4u;
    // 0x1cc9a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cc9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cc9a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cc9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc9ac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc9acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc9b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cc9b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc9b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc9b8: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1cc9b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1cc9bc: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CC9BCu;
    SET_GPR_U32(ctx, 31, 0x1CC9C4u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CC9BCu, 0x1CC9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9C4u;
label_1cc9c4:
    // 0x1cc9c4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cc9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cc9c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc9cc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cc9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cc9d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1cc9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cc9d4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CC9D4u;
    SET_GPR_U32(ctx, 31, 0x1CC9DCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CC9D4u, 0x1CC9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9DCu;
label_1cc9dc:
    // 0x1cc9dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc9e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cc9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc9e4: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x1cc9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cc9e8: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x1cc9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cc9ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cc9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cc9f0: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x1cc9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x1cc9f4: 0x25079208  addiu       $a3, $t0, -0x6DF8
    ctx->pc = 0x1cc9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939144));
    // 0x1cc9f8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CC9F8u;
    SET_GPR_U32(ctx, 31, 0x1CCA00u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CC9F8u, 0x1CCA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA00u;
label_1cca00:
    // 0x1cca00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCA00u;
    {
        const bool branch_taken_0x1cca00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca00) {
            ctx->pc = 0x1CCA20u;
            goto label_1cca20;
        }
    }
    ctx->pc = 0x1CCA08u;
    // 0x1cca08: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cca0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca10: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cca10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cca14: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cca18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cca18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cca1c: 0xac221a68  sw          $v0, 0x1A68($at)
    ctx->pc = 0x1cca1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
label_1cca20:
    // 0x1cca20: 0x3c05c396  lui         $a1, 0xC396
    ctx->pc = 0x1cca20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50070 << 16));
    // 0x1cca24: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cca24u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cca28: 0x0  nop
    ctx->pc = 0x1cca28u;
    // NOP
    // 0x1cca2c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1cca2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1cca30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cca30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca38: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x1cca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cca3c: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x1cca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cca40: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cca40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cca44: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cca48: 0x24479208  addiu       $a3, $v0, -0x6DF8
    ctx->pc = 0x1cca48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939144));
    // 0x1cca4c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CCA4Cu;
    SET_GPR_U32(ctx, 31, 0x1CCA54u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CCA4Cu, 0x1CCA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA54u;
label_1cca54:
    // 0x1cca54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCA54u;
    {
        const bool branch_taken_0x1cca54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca54) {
            ctx->pc = 0x1CCA74u;
            goto label_1cca74;
        }
    }
    ctx->pc = 0x1CCA5Cu;
    // 0x1cca5c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1cca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cca60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca64: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1cca64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cca68: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cca6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cca6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cca70: 0xac241a68  sw          $a0, 0x1A68($at)
    ctx->pc = 0x1cca70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
label_1cca74:
    // 0x1cca74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca78: 0x8c631b68  lw          $v1, 0x1B68($v1)
    ctx->pc = 0x1cca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
    // 0x1cca7c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1CCA7Cu;
    {
        const bool branch_taken_0x1cca7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca7c) {
            ctx->pc = 0x1CCB00u;
            goto label_1ccb00;
        }
    }
    ctx->pc = 0x1CCA84u;
    // 0x1cca84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca88: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cca88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca8c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1cca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cca90: 0xc058c14  jal         func_163050
    ctx->pc = 0x1CCA90u;
    SET_GPR_U32(ctx, 31, 0x1CCA98u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1CCA90u, 0x1CCA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA98u;
label_1cca98:
    // 0x1cca98: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CCA98u;
    {
        const bool branch_taken_0x1cca98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cca98) {
            ctx->pc = 0x1CCB00u;
            goto label_1ccb00;
        }
    }
    ctx->pc = 0x1CCAA0u;
    // 0x1ccaa0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccaa4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ccaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ccaa8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ccaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ccaac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ccaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ccab0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ccab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ccab4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ccab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ccab8: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x1ccab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ccabc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1ccabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ccac0: 0x34440016  ori         $a0, $v0, 0x16
    ctx->pc = 0x1ccac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
    // 0x1ccac4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccac8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1ccac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ccacc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccad0: 0x24650230  addiu       $a1, $v1, 0x230
    ctx->pc = 0x1ccad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 560));
    // 0x1ccad4: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x1ccad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1ccad8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1ccad8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ccadc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1ccadcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ccae0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1CCAE0u;
    SET_GPR_U32(ctx, 31, 0x1CCAE8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1CCAE0u, 0x1CCAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCAE8u;
label_1ccae8:
    // 0x1ccae8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ccae8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ccaec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccaf0: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x1ccaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
    // 0x1ccaf4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ccaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ccaf8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ccaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ccafc: 0xac231a68  sw          $v1, 0x1A68($at)
    ctx->pc = 0x1ccafcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
label_1ccb00:
    // 0x1ccb00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb04: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1ccb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1ccb08: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CCB08u;
    {
        const bool branch_taken_0x1ccb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb08) {
            ctx->pc = 0x1CCB5Cu;
            goto label_1ccb5c;
        }
    }
    ctx->pc = 0x1CCB10u;
    // 0x1ccb10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ccb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccb14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb18: 0xac851b6c  sw          $a1, 0x1B6C($a0)
    ctx->pc = 0x1ccb18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 5));
    // 0x1ccb1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb20: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1ccb20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1ccb24: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CCB24u;
    {
        const bool branch_taken_0x1ccb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb24) {
            ctx->pc = 0x1CCB5Cu;
            goto label_1ccb5c;
        }
    }
    ctx->pc = 0x1CCB2Cu;
    // 0x1ccb2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb30: 0x848315ec  lh          $v1, 0x15EC($a0)
    ctx->pc = 0x1ccb30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x1ccb34: 0x2463ff6a  addiu       $v1, $v1, -0x96
    ctx->pc = 0x1ccb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967146));
    // 0x1ccb38: 0xa48315ec  sh          $v1, 0x15EC($a0)
    ctx->pc = 0x1ccb38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ccb3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb40: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1ccb40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1ccb44: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ccb44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ccb48: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ccb48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ccb4c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCB4Cu;
    {
        const bool branch_taken_0x1ccb4c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1ccb4c) {
            ctx->pc = 0x1CCB5Cu;
            goto label_1ccb5c;
        }
    }
    ctx->pc = 0x1CCB54u;
    // 0x1ccb54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb58: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x1ccb58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1ccb5c:
    // 0x1ccb5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb60: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ccb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ccb64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ccb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ccb68: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1ccb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ccb6c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CCB6Cu;
    {
        const bool branch_taken_0x1ccb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb6c) {
            ctx->pc = 0x1CCB98u;
            goto label_1ccb98;
        }
    }
    ctx->pc = 0x1CCB74u;
    // 0x1ccb74: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1ccb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1ccb78: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1ccb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ccb7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCB7Cu;
    {
        const bool branch_taken_0x1ccb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb7c) {
            ctx->pc = 0x1CCB98u;
            goto label_1ccb98;
        }
    }
    ctx->pc = 0x1CCB84u;
    // 0x1ccb84: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ccb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb88: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ccb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ccb8c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ccb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ccb90: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ccb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ccb94: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1ccb94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1ccb98:
    // 0x1ccb98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb9c: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x1ccb9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x1ccba0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ccba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ccba4: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x1ccba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1ccba8: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1CCBA8u;
    {
        const bool branch_taken_0x1ccba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccba8) {
            ctx->pc = 0x1CCCE0u;
            goto label_1ccce0;
        }
    }
    ctx->pc = 0x1CCBB0u;
    // 0x1ccbb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccbb4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ccbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ccbb8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ccbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ccbbc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1ccbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ccbc0: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1CCBC0u;
    {
        const bool branch_taken_0x1ccbc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccbc0) {
            ctx->pc = 0x1CCCCCu;
            goto label_1ccccc;
        }
    }
    ctx->pc = 0x1CCBC8u;
    // 0x1ccbc8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1ccbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1ccbcc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ccbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ccbd0: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1CCBD0u;
    {
        const bool branch_taken_0x1ccbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccbd0) {
            ctx->pc = 0x1CCCB4u;
            goto label_1cccb4;
        }
    }
    ctx->pc = 0x1CCBD8u;
    // 0x1ccbd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccbdc: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1ccbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccbe0: 0x3c044240  lui         $a0, 0x4240
    ctx->pc = 0x1ccbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16960 << 16));
    // 0x1ccbe4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ccbe4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccbe8: 0x0  nop
    ctx->pc = 0x1ccbe8u;
    // NOP
    // 0x1ccbec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ccbecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccbf0: 0x0  nop
    ctx->pc = 0x1ccbf0u;
    // NOP
    // 0x1ccbf4: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x1CCBF4u;
    {
        const bool branch_taken_0x1ccbf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ccbf4) {
            ctx->pc = 0x1CCCB4u;
            goto label_1cccb4;
        }
    }
    ctx->pc = 0x1CCBFCu;
    // 0x1ccbfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc00: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ccc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc04: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1ccc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ccc08: 0xc4ad1380  lwc1        $f13, 0x1380($a1)
    ctx->pc = 0x1ccc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ccc0c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1CCC0Cu;
    SET_GPR_U32(ctx, 31, 0x1CCC14u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1CCC0Cu, 0x1CCC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC14u;
label_1ccc14:
    // 0x1ccc14: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ccc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1ccc18: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ccc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccc1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ccc1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccc20: 0x0  nop
    ctx->pc = 0x1ccc20u;
    // NOP
    // 0x1ccc24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ccc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccc28: 0x0  nop
    ctx->pc = 0x1ccc28u;
    // NOP
    // 0x1ccc2c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCC2Cu;
    {
        const bool branch_taken_0x1ccc2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ccc2c) {
            ctx->pc = 0x1CCC48u;
            goto label_1ccc48;
        }
    }
    ctx->pc = 0x1CCC34u;
    // 0x1ccc34: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x1ccc34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x1ccc38: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ccc38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccc3c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ccc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccc40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccc40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccc44: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ccc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1ccc48:
    // 0x1ccc48: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ccc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccc4c: 0x3c034016  lui         $v1, 0x4016
    ctx->pc = 0x1ccc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16406 << 16));
    // 0x1ccc50: 0x3463cbe4  ori         $v1, $v1, 0xCBE4
    ctx->pc = 0x1ccc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52196);
    // 0x1ccc54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ccc54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccc58: 0x0  nop
    ctx->pc = 0x1ccc58u;
    // NOP
    // 0x1ccc5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ccc5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccc60: 0x0  nop
    ctx->pc = 0x1ccc60u;
    // NOP
    // 0x1ccc64: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1CCC64u;
    {
        const bool branch_taken_0x1ccc64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ccc64) {
            ctx->pc = 0x1CCCB4u;
            goto label_1cccb4;
        }
    }
    ctx->pc = 0x1CCC6Cu;
    // 0x1ccc6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ccc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccc70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ccc74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ccc78: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ccc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ccc7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ccc80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ccc84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc88: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1ccc88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccc8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ccc90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccc94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ccc98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ccc9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccca0: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1ccca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccca4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccca8: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1ccca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1cccac: 0x100003b0  b           . + 4 + (0x3B0 << 2)
    ctx->pc = 0x1CCCACu;
    {
        const bool branch_taken_0x1cccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cccac) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CCCB4u;
label_1cccb4:
    // 0x1cccb4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cccb8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1cccb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1cccbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cccc0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cccc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cccc4: 0x100003aa  b           . + 4 + (0x3AA << 2)
    ctx->pc = 0x1CCCC4u;
    {
        const bool branch_taken_0x1cccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cccc4) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CCCCCu;
label_1ccccc:
    // 0x1ccccc: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1CCCCCu;
    SET_GPR_U32(ctx, 31, 0x1CCCD4u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1CCCCCu, 0x1CCCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCD4u;
label_1cccd4:
    // 0x1cccd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cccd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cccd8: 0x148003a5  bnez        $a0, . + 4 + (0x3A5 << 2)
    ctx->pc = 0x1CCCD8u;
    {
        const bool branch_taken_0x1cccd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cccd8) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CCCE0u;
label_1ccce0:
    // 0x1ccce0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccce4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ccce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ccce8: 0x106003a1  beqz        $v1, . + 4 + (0x3A1 << 2)
    ctx->pc = 0x1CCCE8u;
    {
        const bool branch_taken_0x1ccce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccce8) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CCCF0u;
    // 0x1cccf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cccf4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cccf8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1cccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1cccfc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cccfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ccd00: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CCD00u;
    {
        const bool branch_taken_0x1ccd00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd00) {
            ctx->pc = 0x1CCDC4u;
            goto label_1ccdc4;
        }
    }
    ctx->pc = 0x1CCD08u;
    // 0x1ccd08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ccd08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccd0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd10: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1ccd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1ccd14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd18: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1ccd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd20: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1ccd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1ccd24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd28: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1ccd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd30: 0xe4801570  swc1        $f0, 0x1570($a0)
    ctx->pc = 0x1ccd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5488), bits); }
    // 0x1ccd34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd38: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1ccd38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ccd3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd40: 0x8c6413e8  lw          $a0, 0x13E8($v1)
    ctx->pc = 0x1ccd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1ccd44: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCD44u;
    {
        const bool branch_taken_0x1ccd44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd44) {
            ctx->pc = 0x1CCD5Cu;
            goto label_1ccd5c;
        }
    }
    ctx->pc = 0x1CCD4Cu;
    // 0x1ccd4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd50: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CCD50u;
    SET_GPR_U32(ctx, 31, 0x1CCD58u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CCD50u, 0x1CCD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD58u;
label_1ccd58:
    // 0x1ccd58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ccd58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ccd5c:
    // 0x1ccd5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ccd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccd60: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd64: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ccd64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ccd68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ccd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ccd6c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd70: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ccd70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ccd74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ccd78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccd7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd80: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ccd80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccd84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd88: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ccd88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ccd8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ccd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccd90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd94: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ccd94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ccd98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ccd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccda0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ccda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ccda4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccda8: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1ccda8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ccdac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccdb0: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1ccdb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ccdb4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccdb8: 0xa080156c  sb          $zero, 0x156C($a0)
    ctx->pc = 0x1ccdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccdbc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CCDBCu;
    {
        const bool branch_taken_0x1ccdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccdbc) {
            ctx->pc = 0x1CCDF4u;
            goto label_1ccdf4;
        }
    }
    ctx->pc = 0x1CCDC4u;
label_1ccdc4:
    // 0x1ccdc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ccdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccdc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccdcc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ccdccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ccdd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccdd4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1ccdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccdd8: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1ccdd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccddc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1ccddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccde0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccde4: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1ccde4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccde8: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1ccde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ccdec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccdf0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ccdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1ccdf4:
    // 0x1ccdf4: 0x1000035e  b           . + 4 + (0x35E << 2)
    ctx->pc = 0x1CCDF4u;
    {
        const bool branch_taken_0x1ccdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccdf4) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CCDFCu;
label_1ccdfc:
    // 0x1ccdfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce00: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cce00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce04: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1cce04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1cce08: 0x8ca60368  lw          $a2, 0x368($a1)
    ctx->pc = 0x1cce08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x1cce0c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1cce0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1cce10: 0x24070587  addiu       $a3, $zero, 0x587
    ctx->pc = 0x1cce10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1415));
    // 0x1cce14: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1cce14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1cce18: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1cce18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce1c: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x1cce1cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1cce20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cce20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cce24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CCE24u;
    SET_GPR_U32(ctx, 31, 0x1CCE2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CCE24u, 0x1CCE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE2Cu;
label_1cce2c:
    // 0x1cce2c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1cce2cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cce30: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cce30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce34: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1cce34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1cce38: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1cce38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1cce3c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1cce3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1cce40: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1cce40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1cce44: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cce44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cce48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cce48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce50: 0xac641b68  sw          $a0, 0x1B68($v1)
    ctx->pc = 0x1cce50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 4));
    // 0x1cce54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cce54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce58: 0xac601b6c  sw          $zero, 0x1B6C($v1)
    ctx->pc = 0x1cce58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 0));
    // 0x1cce5c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cce5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce60: 0x90c413a5  lbu         $a0, 0x13A5($a2)
    ctx->pc = 0x1cce60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5029)));
    // 0x1cce64: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1cce64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cce68: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cce68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cce6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cce6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cce70: 0xc0c5064  jal         func_314190
    ctx->pc = 0x1CCE70u;
    SET_GPR_U32(ctx, 31, 0x1CCE78u);
    ctx->pc = 0x314190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314190u, 0x1CCE70u, 0x1CCE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE78u;
label_1cce78:
    // 0x1cce78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cce78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce7c: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x1cce7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cce80: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1cce80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cce84: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cce84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1cce88:
    // 0x1cce88: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cce88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce8c: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1cce8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cce90: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1cce90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1cce94: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x1cce94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1cce98: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x1cce98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x1cce9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccea0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1ccea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1ccea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ccea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ccea8: 0x30440020  andi        $a0, $v0, 0x20
    ctx->pc = 0x1ccea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1cceac: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CCEACu;
    {
        const bool branch_taken_0x1cceac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cceac) {
            ctx->pc = 0x1CCF48u;
            goto label_1ccf48;
        }
    }
    ctx->pc = 0x1CCEB4u;
    // 0x1cceb4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cceb8: 0x8ca213e8  lw          $v0, 0x13E8($a1)
    ctx->pc = 0x1cceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
    // 0x1ccebc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CCEBCu;
    {
        const bool branch_taken_0x1ccebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccebc) {
            ctx->pc = 0x1CCF1Cu;
            goto label_1ccf1c;
        }
    }
    ctx->pc = 0x1CCEC4u;
    // 0x1ccec4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccec8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccecc: 0x8c6213e8  lw          $v0, 0x13E8($v1)
    ctx->pc = 0x1cceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cced0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1cced0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1cced4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1cced4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1cced8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CCED8u;
    SET_GPR_U32(ctx, 31, 0x1CCEE0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CCED8u, 0x1CCEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEE0u;
label_1ccee0:
    // 0x1ccee0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccee4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1ccee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1ccee8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ccee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cceec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cceecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccef0: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1ccef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1ccef4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ccef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ccef8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1ccef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ccefc: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1ccefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ccf00: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1ccf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ccf04: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CCF04u;
    SET_GPR_U32(ctx, 31, 0x1CCF0Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CCF04u, 0x1CCF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF0Cu;
label_1ccf0c:
    // 0x1ccf0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf10: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ccf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ccf14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CCF14u;
    {
        const bool branch_taken_0x1ccf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf14) {
            ctx->pc = 0x1CCF48u;
            goto label_1ccf48;
        }
    }
    ctx->pc = 0x1CCF1Cu;
label_1ccf1c:
    // 0x1ccf1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf24: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1ccf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1ccf28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ccf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ccf2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ccf2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ccf30: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1ccf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ccf34: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1ccf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ccf38: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CCF38u;
    SET_GPR_U32(ctx, 31, 0x1CCF40u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CCF38u, 0x1CCF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF40u;
label_1ccf40:
    // 0x1ccf40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ccf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1ccf48:
    // 0x1ccf48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf4c: 0x84431278  lh          $v1, 0x1278($v0)
    ctx->pc = 0x1ccf4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1ccf50: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CCF50u;
    {
        const bool branch_taken_0x1ccf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf50) {
            ctx->pc = 0x1CCF90u;
            goto label_1ccf90;
        }
    }
    ctx->pc = 0x1CCF58u;
    // 0x1ccf58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ccf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ccf5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccf5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ccf60: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ccf60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ccf64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ccf64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ccf68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ccf68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf6c: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CCF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF74u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CCF6Cu, 0x1CCF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF74u;
label_1ccf74:
    // 0x1ccf74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ccf74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ccf78: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ccf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf7c: 0x84a21278  lh          $v0, 0x1278($a1)
    ctx->pc = 0x1ccf7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1ccf80: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1ccf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ccf84: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x1ccf84u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ccf88: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1CCF88u;
    {
        const bool branch_taken_0x1ccf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf88) {
            ctx->pc = 0x1CD16Cu;
            goto label_1cd16c;
        }
    }
    ctx->pc = 0x1CCF90u;
label_1ccf90:
    // 0x1ccf90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf94: 0x906209db  lbu         $v0, 0x9DB($v1)
    ctx->pc = 0x1ccf94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1ccf98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ccf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ccf9c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1ccf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1ccfa0: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1CCFA0u;
    {
        const bool branch_taken_0x1ccfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccfa0) {
            ctx->pc = 0x1CD16Cu;
            goto label_1cd16c;
        }
    }
    ctx->pc = 0x1CCFA8u;
    // 0x1ccfa8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1ccfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ccfac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccfb0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1ccfb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ccfb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ccfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ccfb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ccfbc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ccfbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ccfc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ccfc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ccfc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ccfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccfc8: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CCFC8u;
    SET_GPR_U32(ctx, 31, 0x1CCFD0u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CCFC8u, 0x1CCFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFD0u;
label_1ccfd0:
    // 0x1ccfd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ccfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ccfd4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CCFD4u;
    SET_GPR_U32(ctx, 31, 0x1CCFDCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CCFD4u, 0x1CCFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFDCu;
label_1ccfdc:
    // 0x1ccfdc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccfe0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccfe4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ccfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ccfe8: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x1ccfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x1ccfec: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ccfecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ccff0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1ccff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ccff4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1ccff4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ccff8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ccff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ccffc: 0x24679208  addiu       $a3, $v1, -0x6DF8
    ctx->pc = 0x1ccffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939144));
    // 0x1cd000: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CD000u;
    SET_GPR_U32(ctx, 31, 0x1CD008u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CD000u, 0x1CD008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD008u;
label_1cd008:
    // 0x1cd008: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD008u;
    {
        const bool branch_taken_0x1cd008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd008) {
            ctx->pc = 0x1CD028u;
            goto label_1cd028;
        }
    }
    ctx->pc = 0x1CD010u;
    // 0x1cd010: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1cd010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd014: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd018: 0xa4461278  sh          $a2, 0x1278($v0)
    ctx->pc = 0x1cd018u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 6));
    // 0x1cd01c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cd01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd020: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cd020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cd024: 0xac251a68  sw          $a1, 0x1A68($at)
    ctx->pc = 0x1cd024u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
label_1cd028:
    // 0x1cd028: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x1cd028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
    // 0x1cd02c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd030: 0x0  nop
    ctx->pc = 0x1cd030u;
    // NOP
    // 0x1cd034: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1cd034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1cd038: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd03c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd040: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1cd040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cd044: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x1cd044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1cd048: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cd048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cd04c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cd04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cd050: 0x24479208  addiu       $a3, $v0, -0x6DF8
    ctx->pc = 0x1cd050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939144));
    // 0x1cd054: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CD054u;
    SET_GPR_U32(ctx, 31, 0x1CD05Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CD054u, 0x1CD05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD05Cu;
label_1cd05c:
    // 0x1cd05c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD05Cu;
    {
        const bool branch_taken_0x1cd05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd05c) {
            ctx->pc = 0x1CD07Cu;
            goto label_1cd07c;
        }
    }
    ctx->pc = 0x1CD064u;
    // 0x1cd064: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cd064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd068: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd06c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cd06cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd070: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cd070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cd074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cd078: 0xac241a68  sw          $a0, 0x1A68($at)
    ctx->pc = 0x1cd078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
label_1cd07c:
    // 0x1cd07c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd080: 0x8c441b68  lw          $a0, 0x1B68($v0)
    ctx->pc = 0x1cd080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x1cd084: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CD084u;
    {
        const bool branch_taken_0x1cd084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd084) {
            ctx->pc = 0x1CD110u;
            goto label_1cd110;
        }
    }
    ctx->pc = 0x1CD08Cu;
    // 0x1cd08c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd090: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd094: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cd094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd098: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1cd098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd09c: 0xc058c14  jal         func_163050
    ctx->pc = 0x1CD09Cu;
    SET_GPR_U32(ctx, 31, 0x1CD0A4u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1CD09Cu, 0x1CD0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0A4u;
label_1cd0a4:
    // 0x1cd0a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cd0a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd0a8: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD0A8u;
    {
        const bool branch_taken_0x1cd0a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd0a8) {
            ctx->pc = 0x1CD110u;
            goto label_1cd110;
        }
    }
    ctx->pc = 0x1CD0B0u;
    // 0x1cd0b0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cd0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd0b4: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x1cd0b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1cd0b8: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x1cd0b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x1cd0bc: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1cd0bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd0c0: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x1cd0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x1cd0c4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1cd0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1cd0c8: 0x1031024  and         $v0, $t0, $v1
    ctx->pc = 0x1cd0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1cd0cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cd0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cd0d0: 0x34450016  ori         $a1, $v0, 0x16
    ctx->pc = 0x1cd0d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
    // 0x1cd0d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd0d8: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1cd0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1cd0dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd0e0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cd0e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cd0e4: 0x246503f0  addiu       $a1, $v1, 0x3F0
    ctx->pc = 0x1cd0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1008));
    // 0x1cd0e8: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x1cd0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1cd0ec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1cd0ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd0f0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1cd0f0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd0f4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1CD0F4u;
    SET_GPR_U32(ctx, 31, 0x1CD0FCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1CD0F4u, 0x1CD0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0FCu;
label_1cd0fc:
    // 0x1cd0fc: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1cd0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd100: 0xace01b68  sw          $zero, 0x1B68($a3)
    ctx->pc = 0x1cd100u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7016), GPR_U32(ctx, 0));
    // 0x1cd104: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cd104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd108: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cd108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cd10c: 0xac221a68  sw          $v0, 0x1A68($at)
    ctx->pc = 0x1cd10cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
label_1cd110:
    // 0x1cd110: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd114: 0x8c831b6c  lw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1cd114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
    // 0x1cd118: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CD118u;
    {
        const bool branch_taken_0x1cd118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd118) {
            ctx->pc = 0x1CD16Cu;
            goto label_1cd16c;
        }
    }
    ctx->pc = 0x1CD120u;
    // 0x1cd120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd124: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd128: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1cd128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
    // 0x1cd12c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd130: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1cd130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cd134: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CD134u;
    {
        const bool branch_taken_0x1cd134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd134) {
            ctx->pc = 0x1CD16Cu;
            goto label_1cd16c;
        }
    }
    ctx->pc = 0x1CD13Cu;
    // 0x1cd13c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd140: 0x848215ec  lh          $v0, 0x15EC($a0)
    ctx->pc = 0x1cd140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x1cd144: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x1cd144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
    // 0x1cd148: 0xa48215ec  sh          $v0, 0x15EC($a0)
    ctx->pc = 0x1cd148u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cd14c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd150: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1cd150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cd154: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1cd154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1cd158: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1cd158u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1cd15c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD15Cu;
    {
        const bool branch_taken_0x1cd15c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cd15c) {
            ctx->pc = 0x1CD16Cu;
            goto label_1cd16c;
        }
    }
    ctx->pc = 0x1CD164u;
    // 0x1cd164: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd168: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x1cd168u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1cd16c:
    // 0x1cd16c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd170: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cd170u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd174: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CD174u;
    SET_GPR_U32(ctx, 31, 0x1CD17Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CD174u, 0x1CD17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD17Cu;
label_1cd17c:
    // 0x1cd17c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd180: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CD180u;
    SET_GPR_U32(ctx, 31, 0x1CD188u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CD180u, 0x1CD188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD188u;
label_1cd188:
    // 0x1cd188: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cd188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd18c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd190: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1cd190u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1cd194: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cd194u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd198: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CD198u;
    SET_GPR_U32(ctx, 31, 0x1CD1A0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CD198u, 0x1CD1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1A0u;
label_1cd1a0:
    // 0x1cd1a0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cd1a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd1a4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CD1A4u;
    SET_GPR_U32(ctx, 31, 0x1CD1ACu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CD1A4u, 0x1CD1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1ACu;
label_1cd1ac:
    // 0x1cd1ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cd1acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd1b0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cd1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd1b4: 0x90c309df  lbu         $v1, 0x9DF($a2)
    ctx->pc = 0x1cd1b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x1cd1b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cd1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cd1bc: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cd1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cd1c0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CD1C0u;
    {
        const bool branch_taken_0x1cd1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd1c0) {
            ctx->pc = 0x1CD1ECu;
            goto label_1cd1ec;
        }
    }
    ctx->pc = 0x1CD1C8u;
    // 0x1cd1c8: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1cd1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1cd1cc: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cd1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cd1d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD1D0u;
    {
        const bool branch_taken_0x1cd1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd1d0) {
            ctx->pc = 0x1CD1ECu;
            goto label_1cd1ec;
        }
    }
    ctx->pc = 0x1CD1D8u;
    // 0x1cd1d8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd1dc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cd1e0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cd1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1cd1e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cd1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cd1e8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1cd1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1cd1ec:
    // 0x1cd1ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd1f0: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x1cd1f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x1cd1f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cd1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cd1f8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1cd1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1cd1fc: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x1CD1FCu;
    {
        const bool branch_taken_0x1cd1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd1fc) {
            ctx->pc = 0x1CD3ACu;
            goto label_1cd3ac;
        }
    }
    ctx->pc = 0x1CD204u;
    // 0x1cd204: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd208: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cd208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cd20c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cd20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1cd210: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cd210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cd214: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1CD214u;
    {
        const bool branch_taken_0x1cd214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd214) {
            ctx->pc = 0x1CD398u;
            goto label_1cd398;
        }
    }
    ctx->pc = 0x1CD21Cu;
    // 0x1cd21c: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1cd21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1cd220: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cd220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cd224: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1CD224u;
    {
        const bool branch_taken_0x1cd224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd224) {
            ctx->pc = 0x1CD314u;
            goto label_1cd314;
        }
    }
    ctx->pc = 0x1CD22Cu;
    // 0x1cd22c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd230: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1cd230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd234: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1cd234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1cd238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd23c: 0x0  nop
    ctx->pc = 0x1cd23cu;
    // NOP
    // 0x1cd240: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cd240u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd244: 0x0  nop
    ctx->pc = 0x1cd244u;
    // NOP
    // 0x1cd248: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x1CD248u;
    {
        const bool branch_taken_0x1cd248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd248) {
            ctx->pc = 0x1CD314u;
            goto label_1cd314;
        }
    }
    ctx->pc = 0x1CD250u;
    // 0x1cd250: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd254: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd258: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1cd258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd25c: 0xc4ad1380  lwc1        $f13, 0x1380($a1)
    ctx->pc = 0x1cd25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd260: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1CD260u;
    SET_GPR_U32(ctx, 31, 0x1CD268u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1CD260u, 0x1CD268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD268u;
label_1cd268:
    // 0x1cd268: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cd268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1cd26c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1cd26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd270: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd274: 0x0  nop
    ctx->pc = 0x1cd274u;
    // NOP
    // 0x1cd278: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cd278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd27c: 0x0  nop
    ctx->pc = 0x1cd27cu;
    // NOP
    // 0x1cd280: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD280u;
    {
        const bool branch_taken_0x1cd280 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd280) {
            ctx->pc = 0x1CD29Cu;
            goto label_1cd29c;
        }
    }
    ctx->pc = 0x1CD288u;
    // 0x1cd288: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x1cd288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x1cd28c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1cd28cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd290: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cd290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd294: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd298: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cd298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1cd29c:
    // 0x1cd29c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1cd29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd2a0: 0x3c034016  lui         $v1, 0x4016
    ctx->pc = 0x1cd2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16406 << 16));
    // 0x1cd2a4: 0x3463cbe4  ori         $v1, $v1, 0xCBE4
    ctx->pc = 0x1cd2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52196);
    // 0x1cd2a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd2ac: 0x0  nop
    ctx->pc = 0x1cd2acu;
    // NOP
    // 0x1cd2b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cd2b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd2b4: 0x0  nop
    ctx->pc = 0x1cd2b4u;
    // NOP
    // 0x1cd2b8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1CD2B8u;
    {
        const bool branch_taken_0x1cd2b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd2b8) {
            ctx->pc = 0x1CD314u;
            goto label_1cd314;
        }
    }
    ctx->pc = 0x1CD2C0u;
    // 0x1cd2c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd2c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd2c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cd2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd2cc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cd2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cd2d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd2d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cd2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd2d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd2dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cd2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd2e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd2e4: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cd2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd2e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd2ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cd2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cd2f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cd2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd2f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd2f8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cd2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd2fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd300: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cd300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd304: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd308: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1cd308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1cd30c: 0x10000218  b           . + 4 + (0x218 << 2)
    ctx->pc = 0x1CD30Cu;
    {
        const bool branch_taken_0x1cd30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd30c) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CD314u;
label_1cd314:
    // 0x1cd314: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd318: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1cd318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cd31c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD31Cu;
    {
        const bool branch_taken_0x1cd31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd31c) {
            ctx->pc = 0x1CD344u;
            goto label_1cd344;
        }
    }
    ctx->pc = 0x1CD324u;
    // 0x1cd324: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd328: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1cd328u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1cd32c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1cd32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cd330: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cd330u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd334: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd338: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cd338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cd33c: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x1CD33Cu;
    {
        const bool branch_taken_0x1cd33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd33c) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CD344u;
label_1cd344:
    // 0x1cd344: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd348: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd34c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cd34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd350: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cd350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cd354: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd358: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cd358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd35c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd360: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cd360u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd364: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd368: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cd368u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd36c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd370: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cd370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cd374: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cd374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd378: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd37c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cd37cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd380: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd384: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cd384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd388: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd38c: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1cd38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1cd390: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x1CD390u;
    {
        const bool branch_taken_0x1cd390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd390) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CD398u;
label_1cd398:
    // 0x1cd398: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1CD398u;
    SET_GPR_U32(ctx, 31, 0x1CD3A0u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1CD398u, 0x1CD3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3A0u;
label_1cd3a0:
    // 0x1cd3a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cd3a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd3a4: 0x146001f2  bnez        $v1, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x1CD3A4u;
    {
        const bool branch_taken_0x1cd3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3a4) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CD3ACu;
label_1cd3ac:
    // 0x1cd3ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3b0: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1cd3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1cd3b4: 0x106001ee  beqz        $v1, . + 4 + (0x1EE << 2)
    ctx->pc = 0x1CD3B4u;
    {
        const bool branch_taken_0x1cd3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3b4) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CD3BCu;
    // 0x1cd3bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3c0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1cd3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cd3c4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1cd3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1cd3c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1cd3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1cd3cc: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CD3CCu;
    {
        const bool branch_taken_0x1cd3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3cc) {
            ctx->pc = 0x1CD490u;
            goto label_1cd490;
        }
    }
    ctx->pc = 0x1CD3D4u;
    // 0x1cd3d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd3d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd3d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3dc: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1cd3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1cd3e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3e4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cd3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd3e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3ec: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cd3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1cd3f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3f4: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cd3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd3f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3fc: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1cd3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1cd400: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd404: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1cd404u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cd408: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd40c: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1cd40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cd410: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD410u;
    {
        const bool branch_taken_0x1cd410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd410) {
            ctx->pc = 0x1CD428u;
            goto label_1cd428;
        }
    }
    ctx->pc = 0x1CD418u;
    // 0x1cd418: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd41c: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CD41Cu;
    SET_GPR_U32(ctx, 31, 0x1CD424u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CD41Cu, 0x1CD424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD424u;
label_1cd424:
    // 0x1cd424: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cd424u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cd428:
    // 0x1cd428: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd42c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd430: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1cd430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cd434: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd438: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd43c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cd43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd440: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd444: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cd444u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd448: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd44c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cd44cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd450: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd454: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cd454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cd458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd45c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd460: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cd460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd464: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd468: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cd468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd46c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cd46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd470: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd474: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1cd474u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd478: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd47c: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1cd47cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cd480: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd484: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cd484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd488: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CD488u;
    {
        const bool branch_taken_0x1cd488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd488) {
            ctx->pc = 0x1CD4C0u;
            goto label_1cd4c0;
        }
    }
    ctx->pc = 0x1CD490u;
label_1cd490:
    // 0x1cd490: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd494: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd498: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cd498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd49c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4a0: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1cd4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd4a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cd4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd4ac: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1cd4acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4b0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cd4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd4b4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1cd4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1cd4b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4bc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cd4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1cd4c0:
    // 0x1cd4c0: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x1CD4C0u;
    {
        const bool branch_taken_0x1cd4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd4c0) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CD4C8u;
label_1cd4c8:
    // 0x1cd4c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4d0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cd4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1cd4d4: 0x24060587  addiu       $a2, $zero, 0x587
    ctx->pc = 0x1cd4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1415));
    // 0x1cd4d8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cd4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd4dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cd4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cd4e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CD4E0u;
    SET_GPR_U32(ctx, 31, 0x1CD4E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CD4E0u, 0x1CD4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD4E8u;
label_1cd4e8:
    // 0x1cd4e8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1cd4e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd4ec: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1cd4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4f0: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1cd4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cd4f4: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x1cd4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
    // 0x1cd4f8: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x1cd4f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1cd4fc: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x1cd4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1cd500: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1cd500u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1cd504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd508: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd50c: 0xac831b68  sw          $v1, 0x1B68($a0)
    ctx->pc = 0x1cd50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7016), GPR_U32(ctx, 3));
    // 0x1cd510: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd514: 0xac601b6c  sw          $zero, 0x1B6C($v1)
    ctx->pc = 0x1cd514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 0));
    // 0x1cd518: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd51c: 0x906613a5  lbu         $a2, 0x13A5($v1)
    ctx->pc = 0x1cd51cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5029)));
    // 0x1cd520: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1cd520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1cd524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd528: 0xc0c5064  jal         func_314190
    ctx->pc = 0x1CD528u;
    SET_GPR_U32(ctx, 31, 0x1CD530u);
    ctx->pc = 0x314190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314190u, 0x1CD528u, 0x1CD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD530u;
label_1cd530:
    // 0x1cd530: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd534: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x1cd534u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cd538: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1cd538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cd53c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cd53cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1cd540:
    // 0x1cd540: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd544: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1cd544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cd548: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1cd548u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1cd54c: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x1cd54cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1cd550: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x1cd550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x1cd554: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd558: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1cd558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1cd55c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cd55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cd560: 0x30440020  andi        $a0, $v0, 0x20
    ctx->pc = 0x1cd560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1cd564: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CD564u;
    {
        const bool branch_taken_0x1cd564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd564) {
            ctx->pc = 0x1CD600u;
            goto label_1cd600;
        }
    }
    ctx->pc = 0x1CD56Cu;
    // 0x1cd56c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd570: 0x8ca213e8  lw          $v0, 0x13E8($a1)
    ctx->pc = 0x1cd570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
    // 0x1cd574: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CD574u;
    {
        const bool branch_taken_0x1cd574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd574) {
            ctx->pc = 0x1CD5D4u;
            goto label_1cd5d4;
        }
    }
    ctx->pc = 0x1CD57Cu;
    // 0x1cd57c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd580: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd584: 0x8c6213e8  lw          $v0, 0x13E8($v1)
    ctx->pc = 0x1cd584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cd588: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1cd588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1cd58c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1cd58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1cd590: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CD590u;
    SET_GPR_U32(ctx, 31, 0x1CD598u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CD590u, 0x1CD598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD598u;
label_1cd598:
    // 0x1cd598: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd59c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cd59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1cd5a0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cd5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd5a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd5a8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1cd5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1cd5ac: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1cd5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cd5b0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1cd5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cd5b4: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1cd5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd5b8: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1cd5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd5bc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CD5BCu;
    SET_GPR_U32(ctx, 31, 0x1CD5C4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CD5BCu, 0x1CD5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD5C4u;
label_1cd5c4:
    // 0x1cd5c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd5c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cd5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1cd5cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CD5CCu;
    {
        const bool branch_taken_0x1cd5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5cc) {
            ctx->pc = 0x1CD600u;
            goto label_1cd600;
        }
    }
    ctx->pc = 0x1CD5D4u;
label_1cd5d4:
    // 0x1cd5d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd5d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd5dc: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1cd5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1cd5e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cd5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cd5e4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cd5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cd5e8: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1cd5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd5ec: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1cd5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd5f0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CD5F0u;
    SET_GPR_U32(ctx, 31, 0x1CD5F8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CD5F0u, 0x1CD5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD5F8u;
label_1cd5f8:
    // 0x1cd5f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd5fc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cd5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1cd600:
    // 0x1cd600: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd604: 0x84431278  lh          $v1, 0x1278($v0)
    ctx->pc = 0x1cd604u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1cd608: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CD608u;
    {
        const bool branch_taken_0x1cd608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd608) {
            ctx->pc = 0x1CD648u;
            goto label_1cd648;
        }
    }
    ctx->pc = 0x1CD610u;
    // 0x1cd610: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd614: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd618: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cd618u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd61c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cd61cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd620: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd624: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CD624u;
    SET_GPR_U32(ctx, 31, 0x1CD62Cu);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CD624u, 0x1CD62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD62Cu;
label_1cd62c:
    // 0x1cd62c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cd62cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd630: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd634: 0x84a21278  lh          $v0, 0x1278($a1)
    ctx->pc = 0x1cd634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1cd638: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1cd638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cd63c: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x1cd63cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cd640: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1CD640u;
    {
        const bool branch_taken_0x1cd640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd640) {
            ctx->pc = 0x1CD824u;
            goto label_1cd824;
        }
    }
    ctx->pc = 0x1CD648u;
label_1cd648:
    // 0x1cd648: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd64c: 0x906209db  lbu         $v0, 0x9DB($v1)
    ctx->pc = 0x1cd64cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1cd650: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cd650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cd654: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1cd654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1cd658: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1CD658u;
    {
        const bool branch_taken_0x1cd658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd658) {
            ctx->pc = 0x1CD824u;
            goto label_1cd824;
        }
    }
    ctx->pc = 0x1CD660u;
    // 0x1cd660: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cd660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd664: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd668: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cd668u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd66c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd670: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd674: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cd674u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd678: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cd678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd67c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd680: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CD680u;
    SET_GPR_U32(ctx, 31, 0x1CD688u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CD680u, 0x1CD688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD688u;
label_1cd688:
    // 0x1cd688: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1cd688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cd68c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CD68Cu;
    SET_GPR_U32(ctx, 31, 0x1CD694u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CD68Cu, 0x1CD694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD694u;
label_1cd694:
    // 0x1cd694: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd698: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd69c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1cd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1cd6a0: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1cd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cd6a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cd6a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd6a8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1cd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cd6ac: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cd6acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd6b0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1cd6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1cd6b4: 0x24679208  addiu       $a3, $v1, -0x6DF8
    ctx->pc = 0x1cd6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939144));
    // 0x1cd6b8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CD6B8u;
    SET_GPR_U32(ctx, 31, 0x1CD6C0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CD6B8u, 0x1CD6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6C0u;
label_1cd6c0:
    // 0x1cd6c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD6C0u;
    {
        const bool branch_taken_0x1cd6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd6c0) {
            ctx->pc = 0x1CD6E0u;
            goto label_1cd6e0;
        }
    }
    ctx->pc = 0x1CD6C8u;
    // 0x1cd6c8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1cd6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd6cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd6d0: 0xa4461278  sh          $a2, 0x1278($v0)
    ctx->pc = 0x1cd6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 6));
    // 0x1cd6d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cd6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd6d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cd6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cd6dc: 0xac251a68  sw          $a1, 0x1A68($at)
    ctx->pc = 0x1cd6dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
label_1cd6e0:
    // 0x1cd6e0: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x1cd6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
    // 0x1cd6e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd6e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd6e8: 0x0  nop
    ctx->pc = 0x1cd6e8u;
    // NOP
    // 0x1cd6ec: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1cd6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1cd6f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd6f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd6f8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1cd6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cd6fc: 0x24650200  addiu       $a1, $v1, 0x200
    ctx->pc = 0x1cd6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x1cd700: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cd700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cd704: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cd704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cd708: 0x24479208  addiu       $a3, $v0, -0x6DF8
    ctx->pc = 0x1cd708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939144));
    // 0x1cd70c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CD70Cu;
    SET_GPR_U32(ctx, 31, 0x1CD714u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CD70Cu, 0x1CD714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD714u;
label_1cd714:
    // 0x1cd714: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD714u;
    {
        const bool branch_taken_0x1cd714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd714) {
            ctx->pc = 0x1CD734u;
            goto label_1cd734;
        }
    }
    ctx->pc = 0x1CD71Cu;
    // 0x1cd71c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cd71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd720: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd724: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cd724u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd728: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cd728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd72c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cd72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cd730: 0xac241a68  sw          $a0, 0x1A68($at)
    ctx->pc = 0x1cd730u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
label_1cd734:
    // 0x1cd734: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd738: 0x8c441b68  lw          $a0, 0x1B68($v0)
    ctx->pc = 0x1cd738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x1cd73c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CD73Cu;
    {
        const bool branch_taken_0x1cd73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd73c) {
            ctx->pc = 0x1CD7C8u;
            goto label_1cd7c8;
        }
    }
    ctx->pc = 0x1CD744u;
    // 0x1cd744: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd748: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd74c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cd74cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd750: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1cd750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd754: 0xc058c14  jal         func_163050
    ctx->pc = 0x1CD754u;
    SET_GPR_U32(ctx, 31, 0x1CD75Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1CD754u, 0x1CD75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD75Cu;
label_1cd75c:
    // 0x1cd75c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cd75cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd760: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD760u;
    {
        const bool branch_taken_0x1cd760 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd760) {
            ctx->pc = 0x1CD7C8u;
            goto label_1cd7c8;
        }
    }
    ctx->pc = 0x1CD768u;
    // 0x1cd768: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cd768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd76c: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x1cd76cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1cd770: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x1cd770u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x1cd774: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1cd774u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd778: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x1cd778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x1cd77c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1cd77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1cd780: 0x1031024  and         $v0, $t0, $v1
    ctx->pc = 0x1cd780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1cd784: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cd784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cd788: 0x34450016  ori         $a1, $v0, 0x16
    ctx->pc = 0x1cd788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
    // 0x1cd78c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd790: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1cd790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1cd794: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd798: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cd798u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cd79c: 0x24650230  addiu       $a1, $v1, 0x230
    ctx->pc = 0x1cd79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 560));
    // 0x1cd7a0: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x1cd7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1cd7a4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1cd7a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd7a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1cd7a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd7ac: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1CD7ACu;
    SET_GPR_U32(ctx, 31, 0x1CD7B4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1CD7ACu, 0x1CD7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7B4u;
label_1cd7b4:
    // 0x1cd7b4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1cd7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd7b8: 0xace01b68  sw          $zero, 0x1B68($a3)
    ctx->pc = 0x1cd7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7016), GPR_U32(ctx, 0));
    // 0x1cd7bc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd7c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cd7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cd7c4: 0xac221a68  sw          $v0, 0x1A68($at)
    ctx->pc = 0x1cd7c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
label_1cd7c8:
    // 0x1cd7c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd7cc: 0x8c831b6c  lw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1cd7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
    // 0x1cd7d0: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CD7D0u;
    {
        const bool branch_taken_0x1cd7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd7d0) {
            ctx->pc = 0x1CD824u;
            goto label_1cd824;
        }
    }
    ctx->pc = 0x1CD7D8u;
    // 0x1cd7d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd7dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd7e0: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1cd7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
    // 0x1cd7e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd7e8: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1cd7e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cd7ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CD7ECu;
    {
        const bool branch_taken_0x1cd7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd7ec) {
            ctx->pc = 0x1CD824u;
            goto label_1cd824;
        }
    }
    ctx->pc = 0x1CD7F4u;
    // 0x1cd7f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd7f8: 0x848215ec  lh          $v0, 0x15EC($a0)
    ctx->pc = 0x1cd7f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x1cd7fc: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x1cd7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
    // 0x1cd800: 0xa48215ec  sh          $v0, 0x15EC($a0)
    ctx->pc = 0x1cd800u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cd804: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd808: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1cd808u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cd80c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1cd80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1cd810: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1cd810u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1cd814: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD814u;
    {
        const bool branch_taken_0x1cd814 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cd814) {
            ctx->pc = 0x1CD824u;
            goto label_1cd824;
        }
    }
    ctx->pc = 0x1CD81Cu;
    // 0x1cd81c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd820: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x1cd820u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1cd824:
    // 0x1cd824: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd828: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cd828u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd82c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CD82Cu;
    SET_GPR_U32(ctx, 31, 0x1CD834u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CD82Cu, 0x1CD834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD834u;
label_1cd834:
    // 0x1cd834: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd838: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CD838u;
    SET_GPR_U32(ctx, 31, 0x1CD840u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CD838u, 0x1CD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD840u;
label_1cd840:
    // 0x1cd840: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cd840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd844: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd848: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1cd848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1cd84c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cd84cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd850: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CD850u;
    SET_GPR_U32(ctx, 31, 0x1CD858u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CD850u, 0x1CD858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD858u;
label_1cd858:
    // 0x1cd858: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cd858u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd85c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CD85Cu;
    SET_GPR_U32(ctx, 31, 0x1CD864u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CD85Cu, 0x1CD864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD864u;
label_1cd864:
    // 0x1cd864: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cd864u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd868: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cd868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd86c: 0x90c309df  lbu         $v1, 0x9DF($a2)
    ctx->pc = 0x1cd86cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x1cd870: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cd870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cd874: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cd874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cd878: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CD878u;
    {
        const bool branch_taken_0x1cd878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd878) {
            ctx->pc = 0x1CD8A4u;
            goto label_1cd8a4;
        }
    }
    ctx->pc = 0x1CD880u;
    // 0x1cd880: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1cd880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1cd884: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cd884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cd888: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD888u;
    {
        const bool branch_taken_0x1cd888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd888) {
            ctx->pc = 0x1CD8A4u;
            goto label_1cd8a4;
        }
    }
    ctx->pc = 0x1CD890u;
    // 0x1cd890: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd894: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cd894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cd898: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cd898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1cd89c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cd89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cd8a0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1cd8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1cd8a4:
    // 0x1cd8a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd8a8: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x1cd8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x1cd8ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cd8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cd8b0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1cd8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1cd8b4: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x1CD8B4u;
    {
        const bool branch_taken_0x1cd8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8b4) {
            ctx->pc = 0x1CDA54u;
            goto label_1cda54;
        }
    }
    ctx->pc = 0x1CD8BCu;
    // 0x1cd8bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd8c0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cd8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cd8c4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cd8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1cd8c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cd8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cd8cc: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1CD8CCu;
    {
        const bool branch_taken_0x1cd8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8cc) {
            ctx->pc = 0x1CDA40u;
            goto label_1cda40;
        }
    }
    ctx->pc = 0x1CD8D4u;
    // 0x1cd8d4: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1cd8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1cd8d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cd8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cd8dc: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1CD8DCu;
    {
        const bool branch_taken_0x1cd8dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8dc) {
            ctx->pc = 0x1CD9C0u;
            goto label_1cd9c0;
        }
    }
    ctx->pc = 0x1CD8E4u;
    // 0x1cd8e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd8e8: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1cd8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd8ec: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1cd8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1cd8f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd8f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd8f4: 0x0  nop
    ctx->pc = 0x1cd8f4u;
    // NOP
    // 0x1cd8f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cd8f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd8fc: 0x0  nop
    ctx->pc = 0x1cd8fcu;
    // NOP
    // 0x1cd900: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x1CD900u;
    {
        const bool branch_taken_0x1cd900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd900) {
            ctx->pc = 0x1CD9C0u;
            goto label_1cd9c0;
        }
    }
    ctx->pc = 0x1CD908u;
    // 0x1cd908: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd90c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd910: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1cd910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd914: 0xc4ad1380  lwc1        $f13, 0x1380($a1)
    ctx->pc = 0x1cd914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd918: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1CD918u;
    SET_GPR_U32(ctx, 31, 0x1CD920u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1CD918u, 0x1CD920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD920u;
label_1cd920:
    // 0x1cd920: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cd920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1cd924: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1cd924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd92c: 0x0  nop
    ctx->pc = 0x1cd92cu;
    // NOP
    // 0x1cd930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cd930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd934: 0x0  nop
    ctx->pc = 0x1cd934u;
    // NOP
    // 0x1cd938: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD938u;
    {
        const bool branch_taken_0x1cd938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd938) {
            ctx->pc = 0x1CD954u;
            goto label_1cd954;
        }
    }
    ctx->pc = 0x1CD940u;
    // 0x1cd940: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x1cd940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x1cd944: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1cd944u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd948: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cd948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd94c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd94cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd950: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cd950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1cd954:
    // 0x1cd954: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1cd954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd958: 0x3c034016  lui         $v1, 0x4016
    ctx->pc = 0x1cd958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16406 << 16));
    // 0x1cd95c: 0x3463cbe4  ori         $v1, $v1, 0xCBE4
    ctx->pc = 0x1cd95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52196);
    // 0x1cd960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd964: 0x0  nop
    ctx->pc = 0x1cd964u;
    // NOP
    // 0x1cd968: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cd968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd96c: 0x0  nop
    ctx->pc = 0x1cd96cu;
    // NOP
    // 0x1cd970: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1CD970u;
    {
        const bool branch_taken_0x1cd970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd970) {
            ctx->pc = 0x1CD9C0u;
            goto label_1cd9c0;
        }
    }
    ctx->pc = 0x1CD978u;
    // 0x1cd978: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd97c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd980: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cd980u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd984: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cd984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cd988: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd98c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cd98cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd990: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd994: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cd994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd998: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd99c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cd99cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd9a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cd9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cd9a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9ac: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cd9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd9b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9b4: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1cd9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1cd9b8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1CD9B8u;
    {
        const bool branch_taken_0x1cd9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd9b8) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CD9C0u;
label_1cd9c0:
    // 0x1cd9c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9c4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1cd9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cd9c8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD9C8u;
    {
        const bool branch_taken_0x1cd9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd9c8) {
            ctx->pc = 0x1CD9ECu;
            goto label_1cd9ec;
        }
    }
    ctx->pc = 0x1CD9D0u;
    // 0x1cd9d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cd9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd9d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9d8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cd9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd9dc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9e0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1cd9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1cd9e4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1CD9E4u;
    {
        const bool branch_taken_0x1cd9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd9e4) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CD9ECu;
label_1cd9ec:
    // 0x1cd9ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd9f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cd9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd9f8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1cd9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cd9fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda00: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1cda00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cda04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda08: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cda08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cda0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cda0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda10: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cda10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cda14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cda18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cda1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cda1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cda20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda24: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cda24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cda28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda2c: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cda2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cda30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cda30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda34: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x1cda34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
    // 0x1cda38: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1CDA38u;
    {
        const bool branch_taken_0x1cda38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cda38) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CDA40u;
label_1cda40:
    // 0x1cda40: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1CDA40u;
    SET_GPR_U32(ctx, 31, 0x1CDA48u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1CDA40u, 0x1CDA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA48u;
label_1cda48:
    // 0x1cda48: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cda48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cda4c: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1CDA4Cu;
    {
        const bool branch_taken_0x1cda4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cda4c) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CDA54u;
label_1cda54:
    // 0x1cda54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cda54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda58: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1cda58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1cda5c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1CDA5Cu;
    {
        const bool branch_taken_0x1cda5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cda5c) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CDA64u;
    // 0x1cda64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda68: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cda68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cda6c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1cda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1cda70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cda70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cda74: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CDA74u;
    {
        const bool branch_taken_0x1cda74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cda74) {
            ctx->pc = 0x1CDB38u;
            goto label_1cdb38;
        }
    }
    ctx->pc = 0x1CDA7Cu;
    // 0x1cda7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cda7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cda80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda84: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1cda84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1cda88: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cda88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda8c: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cda8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cda90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda94: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cda94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1cda98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda9c: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cda9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdaa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdaa4: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1cdaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1cdaa8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdaac: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1cdaacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cdab0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdab4: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1cdab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cdab8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDAB8u;
    {
        const bool branch_taken_0x1cdab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdab8) {
            ctx->pc = 0x1CDAD0u;
            goto label_1cdad0;
        }
    }
    ctx->pc = 0x1CDAC0u;
    // 0x1cdac0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdac4: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CDAC4u;
    SET_GPR_U32(ctx, 31, 0x1CDACCu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CDAC4u, 0x1CDACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDACCu;
label_1cdacc:
    // 0x1cdacc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cdaccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cdad0:
    // 0x1cdad0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cdad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdad4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdad8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1cdad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cdadc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cdadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cdae0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cdae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdae4: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x1cdae4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cdae8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdaec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cdaecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdaf0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdaf4: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cdaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdaf8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdafc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cdafcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cdb00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cdb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdb04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb08: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cdb08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cdb0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb10: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cdb10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdb14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cdb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cdb18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb1c: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1cdb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cdb20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb24: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1cdb24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cdb28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb2c: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cdb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdb30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CDB30u;
    {
        const bool branch_taken_0x1cdb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdb30) {
            ctx->pc = 0x1CDB68u;
            goto label_1cdb68;
        }
    }
    ctx->pc = 0x1CDB38u;
label_1cdb38:
    // 0x1cdb38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cdb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdb3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cdb40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cdb44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb48: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1cdb48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdb4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb50: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cdb50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdb54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cdb58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdb5c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1cdb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1cdb60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb64: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cdb64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1cdb68:
    // 0x1cdb68: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1CDB68u;
    {
        const bool branch_taken_0x1cdb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdb68) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CDB70u;
label_1cdb70:
    // 0x1cdb70: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1cdb70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdb74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cdb74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdb78: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1cdb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cdb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDB84u;
}
