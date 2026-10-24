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

// Function: Em0c_R1_mv13
// Address: 0x22cad0 - 0x22d5f8
void Em0c_R1_mv13_0x22cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv13_0x22cad0");
#endif

    switch (ctx->pc) {
        case 0x22cb40u: goto label_22cb40;
        case 0x22cb98u: goto label_22cb98;
        case 0x22cbd0u: goto label_22cbd0;
        case 0x22cbdcu: goto label_22cbdc;
        case 0x22cc14u: goto label_22cc14;
        case 0x22cc44u: goto label_22cc44;
        case 0x22ce50u: goto label_22ce50;
        case 0x22ce88u: goto label_22ce88;
        case 0x22cea8u: goto label_22cea8;
        case 0x22cf18u: goto label_22cf18;
        case 0x22cf24u: goto label_22cf24;
        case 0x22d0c4u: goto label_22d0c4;
        case 0x22d17cu: goto label_22d17c;
        case 0x22d200u: goto label_22d200;
        case 0x22d208u: goto label_22d208;
        case 0x22d290u: goto label_22d290;
        case 0x22d2a0u: goto label_22d2a0;
        case 0x22d2b0u: goto label_22d2b0;
        case 0x22d2d8u: goto label_22d2d8;
        case 0x22d330u: goto label_22d330;
        case 0x22d354u: goto label_22d354;
        default: break;
    }

    ctx->pc = 0x22cad0u;

    // 0x22cad0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22cad4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x22cad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x22cad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22cadc: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x22cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x22cae0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22cae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cae4: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x22cae4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x22cae8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x22cae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x22caec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22caecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22caf0: 0x10650086  beq         $v1, $a1, . + 4 + (0x86 << 2)
    ctx->pc = 0x22CAF0u;
    {
        const bool branch_taken_0x22caf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x22caf0) {
            ctx->pc = 0x22CD0Cu;
            goto label_22cd0c;
        }
    }
    ctx->pc = 0x22CAF8u;
    // 0x22caf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22CAF8u;
    {
        const bool branch_taken_0x22caf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22caf8) {
            ctx->pc = 0x22CB08u;
            goto label_22cb08;
        }
    }
    ctx->pc = 0x22CB00u;
    // 0x22cb00: 0x1000022a  b           . + 4 + (0x22A << 2)
    ctx->pc = 0x22CB00u;
    {
        const bool branch_taken_0x22cb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cb00) {
            ctx->pc = 0x22D3ACu;
            goto label_22d3ac;
        }
    }
    ctx->pc = 0x22CB08u;
label_22cb08:
    // 0x22cb08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cb0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb10: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22cb10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22cb14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22cb14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cb18: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb1c: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x22cb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x22cb20: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22cb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb24: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb28: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x22cb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x22cb2c: 0x24063c1c  addiu       $a2, $zero, 0x3C1C
    ctx->pc = 0x22cb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15388));
    // 0x22cb30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22cb30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cb34: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22cb34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22cb38: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22CB38u;
    SET_GPR_U32(ctx, 31, 0x22CB40u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22CB38u, 0x22CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB40u;
label_22cb40:
    // 0x22cb40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22cb40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cb44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb48: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x22cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cb4c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22cb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22cb50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22cb50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cb54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22cb5c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22cb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22cb60: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x22cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x22cb64: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22cb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x22cb68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cb68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cb6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22cb74: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22cb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22cb78: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x22cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x22cb7c: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x22cb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x22cb80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cb84: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22cb8c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22cb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22cb90: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22CB90u;
    SET_GPR_U32(ctx, 31, 0x22CB98u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22CB90u, 0x22CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB98u;
label_22cb98:
    // 0x22cb98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22cb98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22cb9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22cb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22cba0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22cba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22cba4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22CBA4u;
    {
        const bool branch_taken_0x22cba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cba4) {
            ctx->pc = 0x22CBD4u;
            goto label_22cbd4;
        }
    }
    ctx->pc = 0x22CBACu;
    // 0x22cbac: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22cbb0: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x22cbb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22cbb4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x22cbb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22cbb8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cbbc: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x22cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x22cbc0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22cbc4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22cbc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22cbc8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22CBC8u;
    SET_GPR_U32(ctx, 31, 0x22CBD0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22CBC8u, 0x22CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBD0u;
label_22cbd0:
    // 0x22cbd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22cbd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22cbd4:
    // 0x22cbd4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22CBD4u;
    SET_GPR_U32(ctx, 31, 0x22CBDCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22CBD4u, 0x22CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBDCu;
label_22cbdc:
    // 0x22cbdc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22cbdcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22cbe0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22cbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22cbe4: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x22cbe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22cbe8: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x22CBE8u;
    {
        const bool branch_taken_0x22cbe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cbe8) {
            ctx->pc = 0x22CC20u;
            goto label_22cc20;
        }
    }
    ctx->pc = 0x22CBF0u;
    // 0x22cbf0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22cbf4: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x22cbf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22cbf8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x22cbf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22cbfc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cc00: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x22cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x22cc04: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22cc08: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22cc08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22cc0c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22CC0Cu;
    SET_GPR_U32(ctx, 31, 0x22CC14u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22CC0Cu, 0x22CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC14u;
label_22cc14:
    // 0x22cc14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22cc14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22cc18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22CC18u;
    {
        const bool branch_taken_0x22cc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cc18) {
            ctx->pc = 0x22CC48u;
            goto label_22cc48;
        }
    }
    ctx->pc = 0x22CC20u;
label_22cc20:
    // 0x22cc20: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22cc24: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x22cc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22cc28: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22cc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22cc2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cc30: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x22cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x22cc34: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22cc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22cc38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22cc38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22cc3c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22CC3Cu;
    SET_GPR_U32(ctx, 31, 0x22CC44u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22CC3Cu, 0x22CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC44u;
label_22cc44:
    // 0x22cc44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22cc44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22cc48:
    // 0x22cc48: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cc4c: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x22cc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x22cc50: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x22cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x22cc54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22cc54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cc58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cc5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cc60: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22cc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x22cc64: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22cc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22cc68: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22cc68u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cc6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cc70: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cc74: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x22cc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x22cc78: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x22cc7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22cc7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cc80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cc84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cc88: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22cc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x22cc8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22cc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22cc90: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x22cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22cc94: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x22cc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x22cc98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22cc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22cc9c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22cc9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x22cca0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cca4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22cca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cca8: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22ccac: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x22ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x22ccb0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x22ccb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22ccb4: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x22ccb8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ccbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ccc0: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x22ccc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x22ccc4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x22ccc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22ccc8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x22ccc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x22cccc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x22CCCCu;
    {
        const bool branch_taken_0x22cccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cccc) {
            ctx->pc = 0x22CD0Cu;
            goto label_22cd0c;
        }
    }
    ctx->pc = 0x22CCD4u;
    // 0x22ccd4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ccd8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ccdc: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x22ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x22cce0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22cce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22cce4: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x22cce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cce8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22cce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ccec: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x22ccecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x22ccf0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ccf4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ccf8: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x22ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x22ccfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ccfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22cd00: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x22cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cd04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22cd04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22cd08: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x22cd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_22cd0c:
    // 0x22cd0c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cd10: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x22cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cd14: 0x3c0444fa  lui         $a0, 0x44FA
    ctx->pc = 0x22cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17658 << 16));
    // 0x22cd18: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22cd18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cd1c: 0x0  nop
    ctx->pc = 0x22cd1cu;
    // NOP
    // 0x22cd20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22cd20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cd24: 0x0  nop
    ctx->pc = 0x22cd24u;
    // NOP
    // 0x22cd28: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22CD28u;
    {
        const bool branch_taken_0x22cd28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cd28) {
            ctx->pc = 0x22CD4Cu;
            goto label_22cd4c;
        }
    }
    ctx->pc = 0x22CD30u;
    // 0x22cd30: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x22cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x22cd34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22cd34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cd38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cd3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cd40: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x22cd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x22cd44: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22CD44u;
    {
        const bool branch_taken_0x22cd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cd44) {
            ctx->pc = 0x22CDA0u;
            goto label_22cda0;
        }
    }
    ctx->pc = 0x22CD4Cu;
label_22cd4c:
    // 0x22cd4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cd50: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x22cd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cd54: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x22cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x22cd58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22cd58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cd5c: 0x0  nop
    ctx->pc = 0x22cd5cu;
    // NOP
    // 0x22cd60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22cd60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cd64: 0x0  nop
    ctx->pc = 0x22cd64u;
    // NOP
    // 0x22cd68: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22CD68u;
    {
        const bool branch_taken_0x22cd68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cd68) {
            ctx->pc = 0x22CD8Cu;
            goto label_22cd8c;
        }
    }
    ctx->pc = 0x22CD70u;
    // 0x22cd70: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x22cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x22cd74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22cd74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cd78: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cd7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22cd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cd80: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x22cd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x22cd84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22CD84u;
    {
        const bool branch_taken_0x22cd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cd84) {
            ctx->pc = 0x22CDA0u;
            goto label_22cda0;
        }
    }
    ctx->pc = 0x22CD8Cu;
label_22cd8c:
    // 0x22cd8c: 0x3c03c0a0  lui         $v1, 0xC0A0
    ctx->pc = 0x22cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49312 << 16));
    // 0x22cd90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22cd90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cd94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cd98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cd9c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x22cd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_22cda0:
    // 0x22cda0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cda4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x22cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cda8: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x22cda8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x22cdac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22cdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22cdb0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22cdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22cdb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22CDB4u;
    {
        const bool branch_taken_0x22cdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cdb4) {
            ctx->pc = 0x22CDD8u;
            goto label_22cdd8;
        }
    }
    ctx->pc = 0x22CDBCu;
    // 0x22cdbc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cdc0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22cdc4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22cdc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22cdc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22cdcc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x22cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cdd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22cdd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22cdd4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x22cdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_22cdd8:
    // 0x22cdd8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cddc: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x22cddcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x22cde0: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x22CDE0u;
    {
        const bool branch_taken_0x22cde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cde0) {
            ctx->pc = 0x22CF08u;
            goto label_22cf08;
        }
    }
    ctx->pc = 0x22CDE8u;
    // 0x22cde8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22cde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22cdec: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x22cdecu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cdf0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22cdf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cdf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cdf8: 0x0  nop
    ctx->pc = 0x22cdf8u;
    // NOP
    // 0x22cdfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22cdfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22ce00: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22ce00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22ce04: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x22ce04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x22ce08: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x22ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x22ce0c: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x22ce0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x22ce10: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x22ce10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22ce14: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x22ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x22ce18: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x22ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x22ce1c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x22ce1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x22ce20: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ce24: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ce28: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ce2c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22ce30: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x22ce30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22ce34: 0xc44d00d0  lwc1        $f13, 0xD0($v0)
    ctx->pc = 0x22ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22ce38: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22ce3c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22ce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22ce40: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x22ce40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x22ce44: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x22ce44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x22ce48: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x22CE48u;
    SET_GPR_U32(ctx, 31, 0x22CE50u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x22CE48u, 0x22CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE50u;
label_22ce50:
    // 0x22ce50: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22ce50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22ce54: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x22ce54u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ce58: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22ce5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ce5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ce60: 0x0  nop
    ctx->pc = 0x22ce60u;
    // NOP
    // 0x22ce64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ce64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ce68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22ce68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22ce6c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x22ce6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x22ce70: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ce74: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ce78: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x22ce78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ce7c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22ce7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ce80: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22CE80u;
    SET_GPR_U32(ctx, 31, 0x22CE88u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22CE80u, 0x22CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE88u;
label_22ce88:
    // 0x22ce88: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ce8c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22ce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22ce90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ce94: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x22ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ce98: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x22ce98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ce9c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22ce9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22cea0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22CEA0u;
    SET_GPR_U32(ctx, 31, 0x22CEA8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22CEA0u, 0x22CEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CEA8u;
label_22cea8:
    // 0x22cea8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ceac: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22ceacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22ceb0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ceb4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x22ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ceb8: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x22ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x22cebc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x22cebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x22cec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cec4: 0x0  nop
    ctx->pc = 0x22cec4u;
    // NOP
    // 0x22cec8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22cec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ced0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22CED0u;
    {
        const bool branch_taken_0x22ced0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ced0) {
            ctx->pc = 0x22CEDCu;
            goto label_22cedc;
        }
    }
    ctx->pc = 0x22CED8u;
    // 0x22ced8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x22ced8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22cedc:
    // 0x22cedc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cee0: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x22cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cee4: 0x3c02bf06  lui         $v0, 0xBF06
    ctx->pc = 0x22cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48902 << 16));
    // 0x22cee8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x22cee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x22ceec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ceecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cef0: 0x0  nop
    ctx->pc = 0x22cef0u;
    // NOP
    // 0x22cef4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22cef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cefc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22CEFCu;
    {
        const bool branch_taken_0x22cefc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cefc) {
            ctx->pc = 0x22CF08u;
            goto label_22cf08;
        }
    }
    ctx->pc = 0x22CF04u;
    // 0x22cf04: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x22cf04u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22cf08:
    // 0x22cf08: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22cf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cf0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22cf10: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22CF10u;
    SET_GPR_U32(ctx, 31, 0x22CF18u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22CF10u, 0x22CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF18u;
label_22cf18:
    // 0x22cf18: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cf1c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22CF1Cu;
    SET_GPR_U32(ctx, 31, 0x22CF24u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22CF1Cu, 0x22CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF24u;
label_22cf24:
    // 0x22cf24: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cf28: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x22cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22cf2c: 0x24503520  addiu       $s0, $v0, 0x3520
    ctx->pc = 0x22cf2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
    // 0x22cf30: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cf34: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x22cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x22cf38: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22cf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x22cf3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22cf3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22cf40: 0xc4601288  lwc1        $f0, 0x1288($v1)
    ctx->pc = 0x22cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cf44: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x22cf44u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x22cf48: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x22cf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x22cf4c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x22cf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cf50: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x22cf54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22cf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22cf58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cf5c: 0x0  nop
    ctx->pc = 0x22cf5cu;
    // NOP
    // 0x22cf60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22cf60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cf64: 0x0  nop
    ctx->pc = 0x22cf64u;
    // NOP
    // 0x22cf68: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22CF68u;
    {
        const bool branch_taken_0x22cf68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cf68) {
            ctx->pc = 0x22CF84u;
            goto label_22cf84;
        }
    }
    ctx->pc = 0x22CF70u;
    // 0x22cf70: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x22cf74: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22cf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22cf78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cf7c: 0x0  nop
    ctx->pc = 0x22cf7cu;
    // NOP
    // 0x22cf80: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x22cf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_22cf84:
    // 0x22cf84: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x22cf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cf88: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x22cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x22cf8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cf90: 0x0  nop
    ctx->pc = 0x22cf90u;
    // NOP
    // 0x22cf94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22cf94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cf98: 0x0  nop
    ctx->pc = 0x22cf98u;
    // NOP
    // 0x22cf9c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22CF9Cu;
    {
        const bool branch_taken_0x22cf9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cf9c) {
            ctx->pc = 0x22CFB4u;
            goto label_22cfb4;
        }
    }
    ctx->pc = 0x22CFA4u;
    // 0x22cfa4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x22cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x22cfa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cfac: 0x0  nop
    ctx->pc = 0x22cfacu;
    // NOP
    // 0x22cfb0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x22cfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_22cfb4:
    // 0x22cfb4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cfb8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x22cfb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x22cfbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22cfc0: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x22cfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x22cfc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22CFC4u;
    {
        const bool branch_taken_0x22cfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cfc4) {
            ctx->pc = 0x22CFF4u;
            goto label_22cff4;
        }
    }
    ctx->pc = 0x22CFCCu;
    // 0x22cfcc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cfd0: 0x3c023f6b  lui         $v0, 0x3F6B
    ctx->pc = 0x22cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16235 << 16));
    // 0x22cfd4: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x22cfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x22cfd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22cfd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22cfdc: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x22cfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cfe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22cfe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22cfe4: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x22cfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x22cfe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22cfe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cfec: 0x0  nop
    ctx->pc = 0x22cfecu;
    // NOP
    // 0x22cff0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x22cff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_22cff4:
    // 0x22cff4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cff8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22cffc: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x22cffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d000: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x22d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d004: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22d004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d008: 0x0  nop
    ctx->pc = 0x22d008u;
    // NOP
    // 0x22d00c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x22D00Cu;
    {
        const bool branch_taken_0x22d00c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d00c) {
            ctx->pc = 0x22D038u;
            goto label_22d038;
        }
    }
    ctx->pc = 0x22D014u;
    // 0x22d014: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d018: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22d018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d01c: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22d01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d020: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x22d020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x22d024: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x22d024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x22d028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d02c: 0x0  nop
    ctx->pc = 0x22d02cu;
    // NOP
    // 0x22d030: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22d030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22d034: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22d034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_22d038:
    // 0x22d038: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d03c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d040: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x22d040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d044: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x22d044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d048: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22d048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d04c: 0x0  nop
    ctx->pc = 0x22d04cu;
    // NOP
    // 0x22d050: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x22D050u;
    {
        const bool branch_taken_0x22d050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d050) {
            ctx->pc = 0x22D07Cu;
            goto label_22d07c;
        }
    }
    ctx->pc = 0x22D058u;
    // 0x22d058: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d05c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d060: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22d060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d064: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x22d064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x22d068: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x22d068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x22d06c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d070: 0x0  nop
    ctx->pc = 0x22d070u;
    // NOP
    // 0x22d074: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22d074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d078: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22d078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_22d07c:
    // 0x22d07c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d080: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d084: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x22d084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d088: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d08c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22d08cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22d090: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x22d090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x22d094: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d098: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d09c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x22d09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d0a0: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d0a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22d0a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22d0a8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x22d0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x22d0ac: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x22d0acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x22d0b0: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x22d0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x22d0b4: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x22d0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x22d0b8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d0bc: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x22D0BCu;
    SET_GPR_U32(ctx, 31, 0x22D0C4u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x22D0BCu, 0x22D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D0C4u;
label_22d0c4:
    // 0x22d0c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d0c8: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x22d0c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x22d0cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22d0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22d0d0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x22d0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x22d0d4: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x22D0D4u;
    {
        const bool branch_taken_0x22d0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d0d4) {
            ctx->pc = 0x22D2DCu;
            goto label_22d2dc;
        }
    }
    ctx->pc = 0x22D0DCu;
    // 0x22d0dc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d0e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22d0e4: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x22d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22d0e8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x22d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x22d0ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d0ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d0f0: 0x0  nop
    ctx->pc = 0x22d0f0u;
    // NOP
    // 0x22d0f4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x22d0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22d0f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d0fc: 0x0  nop
    ctx->pc = 0x22d0fcu;
    // NOP
    // 0x22d100: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x22d100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x22d104: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d108: 0x0  nop
    ctx->pc = 0x22d108u;
    // NOP
    // 0x22d10c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x22d10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x22d110: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22d114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d118: 0x0  nop
    ctx->pc = 0x22d118u;
    // NOP
    // 0x22d11c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22d11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x22d120: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x22d120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x22d124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d128: 0x0  nop
    ctx->pc = 0x22d128u;
    // NOP
    // 0x22d12c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22d12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22d130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d134: 0xa7a20044  sh          $v0, 0x44($sp)
    ctx->pc = 0x22d134u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x22d138: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d13c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d140: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x22d140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22d144: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x22d144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x22d148: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D148u;
    {
        const bool branch_taken_0x22d148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d148) {
            ctx->pc = 0x22D158u;
            goto label_22d158;
        }
    }
    ctx->pc = 0x22D150u;
    // 0x22d150: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22d154: 0xa7a20044  sh          $v0, 0x44($sp)
    ctx->pc = 0x22d154u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 2));
label_22d158:
    // 0x22d158: 0xa3a00046  sb          $zero, 0x46($sp)
    ctx->pc = 0x22d158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d15c: 0xa3a00047  sb          $zero, 0x47($sp)
    ctx->pc = 0x22d15cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d164: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d168: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x22d168u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x22d16c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d170: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22d170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22d174: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x22D174u;
    SET_GPR_U32(ctx, 31, 0x22D17Cu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x22D174u, 0x22D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D17Cu;
label_22d17c:
    // 0x22d17c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x22D17Cu;
    {
        const bool branch_taken_0x22d17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d17c) {
            ctx->pc = 0x22D2DCu;
            goto label_22d2dc;
        }
    }
    ctx->pc = 0x22D184u;
    // 0x22d184: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d188: 0x0  nop
    ctx->pc = 0x22d188u;
    // NOP
    // 0x22d18c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x22d18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22d190: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x22d190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x22d194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d198: 0x0  nop
    ctx->pc = 0x22d198u;
    // NOP
    // 0x22d19c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22d19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22d1a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d1a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d1a4: 0x0  nop
    ctx->pc = 0x22d1a4u;
    // NOP
    // 0x22d1a8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x22d1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x22d1ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22d1b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d1b4: 0x0  nop
    ctx->pc = 0x22d1b4u;
    // NOP
    // 0x22d1b8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x22d1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x22d1bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d1c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x22d1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22d1c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22d1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x22d1c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22d1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22d1cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22d1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22d1d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22d1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22d1d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22d1d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22d1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22d1dc: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22d1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22d1e0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d1e4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22d1e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22d1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d1ec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22d1ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d1f0: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22d1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22d1f4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22d1f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d1f8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22D1F8u;
    SET_GPR_U32(ctx, 31, 0x22D200u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22D1F8u, 0x22D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D200u;
label_22d200:
    // 0x22d200: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22D200u;
    SET_GPR_U32(ctx, 31, 0x22D208u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22D200u, 0x22D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D208u;
label_22d208:
    // 0x22d208: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D208u;
    {
        const bool branch_taken_0x22d208 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x22d208) {
            ctx->pc = 0x22D224u;
            goto label_22d224;
        }
    }
    ctx->pc = 0x22D210u;
    // 0x22d210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d214: 0x0  nop
    ctx->pc = 0x22d214u;
    // NOP
    // 0x22d218: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22d218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22d21c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22D21Cu;
    {
        const bool branch_taken_0x22d21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d21c) {
            ctx->pc = 0x22D240u;
            goto label_22d240;
        }
    }
    ctx->pc = 0x22D224u;
label_22d224:
    // 0x22d224: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x22d224u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x22d228: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22d228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22d22c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22d22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22d230: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d234: 0x0  nop
    ctx->pc = 0x22d234u;
    // NOP
    // 0x22d238: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22d238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22d23c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22d23cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22d240:
    // 0x22d240: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x22d240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d244: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22d244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22d248: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22d248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22d24c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d250: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x22d250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22d254: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22d254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x22d258: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22d258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22d25c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22d25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22d260: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22d260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22d264: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22d264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22d268: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22d268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22d26c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22d26cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22d270: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d274: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22d274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22d278: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22d278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d27c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22d27cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d280: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22d280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22d284: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22d284u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d288: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22D288u;
    SET_GPR_U32(ctx, 31, 0x22D290u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22D288u, 0x22D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D290u;
label_22d290:
    // 0x22d290: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x22d290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x22d294: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x22d294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x22d298: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22D298u;
    SET_GPR_U32(ctx, 31, 0x22D2A0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22D298u, 0x22D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2A0u;
label_22d2a0:
    // 0x22d2a0: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x22d2a4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x22d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x22d2a8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22D2A8u;
    SET_GPR_U32(ctx, 31, 0x22D2B0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22D2A8u, 0x22D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2B0u;
label_22d2b0:
    // 0x22d2b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22d2b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22d2b4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22d2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d2b8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22d2bc: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x22d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22d2c0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22d2c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d2c4: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22d2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x22d2c8: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x22d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x22d2cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22d2ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d2d0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22D2D0u;
    SET_GPR_U32(ctx, 31, 0x22D2D8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22D2D0u, 0x22D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2D8u;
label_22d2d8:
    // 0x22d2d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22d2d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22d2dc:
    // 0x22d2dc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22d2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d2e0: 0x90a609e7  lbu         $a2, 0x9E7($a1)
    ctx->pc = 0x22d2e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x22d2e4: 0x10c00031  beqz        $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x22D2E4u;
    {
        const bool branch_taken_0x22d2e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d2e4) {
            ctx->pc = 0x22D3ACu;
            goto label_22d3ac;
        }
    }
    ctx->pc = 0x22D2ECu;
    // 0x22d2ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d2ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d2f0: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x22d2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d2f4: 0xe4e000d0  swc1        $f0, 0xD0($a3)
    ctx->pc = 0x22d2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 208), bits); }
    // 0x22d2f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22d2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d2fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d300: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x22d300u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x22d304: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22d304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22d308: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d30c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22d30cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22d310: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d314: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22d314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d318: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d31c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22d31cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d320: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d324: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22d324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22d328: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22D328u;
    SET_GPR_U32(ctx, 31, 0x22D330u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22D328u, 0x22D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D330u;
label_22d330:
    // 0x22d330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22d330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22d334: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22d334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22d338: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x22d338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x22d33c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22d33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22d340: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22d340u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22d344: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d348: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22d348u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22d34c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22D34Cu;
    SET_GPR_U32(ctx, 31, 0x22D354u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22D34Cu, 0x22D354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D354u;
label_22d354:
    // 0x22d354: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22d354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22d358: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22d358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22d35c: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x22d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22d360: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22d360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22d364: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22d364u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22d368: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d36c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d370: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22d370u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x22d374: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22d374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22d378: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x22d378u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22d37c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x22d380: 0x34657fff  ori         $a1, $v1, 0x7FFF
    ctx->pc = 0x22d380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x22d384: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x22d384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x22d388: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22d388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22d38c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22d38cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x22d390: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d394: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22d394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d398: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22d398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22d39c: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x22d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x22d3a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x22d3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22d3a4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x22d3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22d3a8: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x22d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
label_22d3ac:
    // 0x22d3ac: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d3b0: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x22d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22d3b4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22d3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d3b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d3b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d3bc: 0x0  nop
    ctx->pc = 0x22d3bcu;
    // NOP
    // 0x22d3c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22d3c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d3c4: 0x0  nop
    ctx->pc = 0x22d3c4u;
    // NOP
    // 0x22d3c8: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x22D3C8u;
    {
        const bool branch_taken_0x22d3c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d3c8) {
            ctx->pc = 0x22D4ACu;
            goto label_22d4ac;
        }
    }
    ctx->pc = 0x22D3D0u;
    // 0x22d3d0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d3d4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d3d8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d3dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d3dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d3e0: 0x0  nop
    ctx->pc = 0x22d3e0u;
    // NOP
    // 0x22d3e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d3e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d3e8: 0x0  nop
    ctx->pc = 0x22d3e8u;
    // NOP
    // 0x22d3ec: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x22D3ECu;
    {
        const bool branch_taken_0x22d3ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d3ec) {
            ctx->pc = 0x22D454u;
            goto label_22d454;
        }
    }
    ctx->pc = 0x22D3F4u;
    // 0x22d3f4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d3f8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d3fc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22d3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d400: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22d400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22d404: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x22d404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22d408: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22d408u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d40c: 0x0  nop
    ctx->pc = 0x22d40cu;
    // NOP
    // 0x22d410: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22d410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22d414: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22d414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22d418: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d41c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d420: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22d420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d424: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d428: 0x0  nop
    ctx->pc = 0x22d428u;
    // NOP
    // 0x22d42c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22d42cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d430: 0x0  nop
    ctx->pc = 0x22d430u;
    // NOP
    // 0x22d434: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22D434u;
    {
        const bool branch_taken_0x22d434 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d434) {
            ctx->pc = 0x22D4ACu;
            goto label_22d4ac;
        }
    }
    ctx->pc = 0x22D43Cu;
    // 0x22d43c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d43cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d440: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d444: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d448: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22d448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x22d44c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22D44Cu;
    {
        const bool branch_taken_0x22d44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d44c) {
            ctx->pc = 0x22D4ACu;
            goto label_22d4ac;
        }
    }
    ctx->pc = 0x22D454u;
label_22d454:
    // 0x22d454: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d458: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22d458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d45c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22d45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d460: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22d460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22d464: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22d464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22d468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d46c: 0x0  nop
    ctx->pc = 0x22d46cu;
    // NOP
    // 0x22d470: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22d470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d474: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22d474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22d478: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d47c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d480: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d488: 0x0  nop
    ctx->pc = 0x22d488u;
    // NOP
    // 0x22d48c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d48cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d490: 0x0  nop
    ctx->pc = 0x22d490u;
    // NOP
    // 0x22d494: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22D494u;
    {
        const bool branch_taken_0x22d494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d494) {
            ctx->pc = 0x22D4ACu;
            goto label_22d4ac;
        }
    }
    ctx->pc = 0x22D49Cu;
    // 0x22d49c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d49cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d4a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d4a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d4a8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22d4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_22d4ac:
    // 0x22d4ac: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22d4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d4b0: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x22d4b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x22d4b4: 0x14800025  bnez        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x22D4B4u;
    {
        const bool branch_taken_0x22d4b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d4b4) {
            ctx->pc = 0x22D54Cu;
            goto label_22d54c;
        }
    }
    ctx->pc = 0x22D4BCu;
    // 0x22d4bc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d4c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d4c4: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x22d4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d4c8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x22d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x22d4cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d4ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d4d0: 0x0  nop
    ctx->pc = 0x22d4d0u;
    // NOP
    // 0x22d4d4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x22d4d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22d4d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d4dc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d4e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22d4e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d4e4: 0x0  nop
    ctx->pc = 0x22d4e4u;
    // NOP
    // 0x22d4e8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22D4E8u;
    {
        const bool branch_taken_0x22d4e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d4e8) {
            ctx->pc = 0x22D50Cu;
            goto label_22d50c;
        }
    }
    ctx->pc = 0x22D4F0u;
    // 0x22d4f0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d4f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d4f8: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22d4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d4fc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d500: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22d500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d504: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22d504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22d508: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22d508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_22d50c:
    // 0x22d50c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d510: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22d510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d514: 0xc481009c  lwc1        $f1, 0x9C($a0)
    ctx->pc = 0x22d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d518: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d51c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d520: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22d520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d524: 0x0  nop
    ctx->pc = 0x22d524u;
    // NOP
    // 0x22d528: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22D528u;
    {
        const bool branch_taken_0x22d528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d528) {
            ctx->pc = 0x22D54Cu;
            goto label_22d54c;
        }
    }
    ctx->pc = 0x22D530u;
    // 0x22d530: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d534: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22d534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d538: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22d538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d53c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d540: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22d540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d544: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22d544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22d548: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22d548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_22d54c:
    // 0x22d54c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d550: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22d550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d554: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22d554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d558: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22d558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x22d55c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d55cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d560: 0x0  nop
    ctx->pc = 0x22d560u;
    // NOP
    // 0x22d564: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22d564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d568: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x22d568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x22d56c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d570: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d574: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d578: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x22d578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x22d57c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d57cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d580: 0x0  nop
    ctx->pc = 0x22d580u;
    // NOP
    // 0x22d584: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22d584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d588: 0x0  nop
    ctx->pc = 0x22d588u;
    // NOP
    // 0x22d58c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22D58Cu;
    {
        const bool branch_taken_0x22d58c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d58c) {
            ctx->pc = 0x22D5A8u;
            goto label_22d5a8;
        }
    }
    ctx->pc = 0x22D594u;
    // 0x22d594: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22d594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22d598: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22d598u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d59c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d5a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d5a4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22d5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
label_22d5a8:
    // 0x22d5a8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d5ac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d5b0: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22d5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d5b4: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x22d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x22d5b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d5b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d5bc: 0x0  nop
    ctx->pc = 0x22d5bcu;
    // NOP
    // 0x22d5c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d5c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d5c4: 0x0  nop
    ctx->pc = 0x22d5c4u;
    // NOP
    // 0x22d5c8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22D5C8u;
    {
        const bool branch_taken_0x22d5c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d5c8) {
            ctx->pc = 0x22D5E4u;
            goto label_22d5e4;
        }
    }
    ctx->pc = 0x22D5D0u;
    // 0x22d5d0: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x22d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x22d5d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d5d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d5d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d5dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d5e0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22d5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_22d5e4:
    // 0x22d5e4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x22d5e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d5e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d5ec: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x22d5ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22d5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x22D5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D5F8u;
}
