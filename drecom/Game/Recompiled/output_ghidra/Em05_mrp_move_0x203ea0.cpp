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

// Function: Em05_mrp_move
// Address: 0x203ea0 - 0x205168
void Em05_mrp_move_0x203ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_mrp_move_0x203ea0");
#endif

    switch (ctx->pc) {
        case 0x203f2cu: goto label_203f2c;
        case 0x203f50u: goto label_203f50;
        case 0x203f84u: goto label_203f84;
        case 0x203fb0u: goto label_203fb0;
        case 0x203fe4u: goto label_203fe4;
        case 0x204010u: goto label_204010;
        case 0x204048u: goto label_204048;
        case 0x20407cu: goto label_20407c;
        case 0x2040acu: goto label_2040ac;
        case 0x20413cu: goto label_20413c;
        case 0x204168u: goto label_204168;
        case 0x204194u: goto label_204194;
        case 0x2041c4u: goto label_2041c4;
        case 0x2041f0u: goto label_2041f0;
        case 0x20421cu: goto label_20421c;
        case 0x204248u: goto label_204248;
        case 0x204278u: goto label_204278;
        case 0x2043f8u: goto label_2043f8;
        case 0x20440cu: goto label_20440c;
        case 0x204424u: goto label_204424;
        case 0x204438u: goto label_204438;
        case 0x204450u: goto label_204450;
        case 0x204460u: goto label_204460;
        case 0x204470u: goto label_204470;
        case 0x204484u: goto label_204484;
        case 0x2044e0u: goto label_2044e0;
        case 0x204500u: goto label_204500;
        case 0x20452cu: goto label_20452c;
        case 0x20455cu: goto label_20455c;
        case 0x204590u: goto label_204590;
        case 0x2045c4u: goto label_2045c4;
        case 0x2045f4u: goto label_2045f4;
        case 0x204628u: goto label_204628;
        case 0x20465cu: goto label_20465c;
        case 0x204690u: goto label_204690;
        case 0x2046c4u: goto label_2046c4;
        case 0x2046e8u: goto label_2046e8;
        case 0x2046f8u: goto label_2046f8;
        case 0x204714u: goto label_204714;
        case 0x204728u: goto label_204728;
        case 0x204738u: goto label_204738;
        case 0x20474cu: goto label_20474c;
        case 0x204768u: goto label_204768;
        case 0x204780u: goto label_204780;
        case 0x20479cu: goto label_20479c;
        case 0x204830u: goto label_204830;
        case 0x204860u: goto label_204860;
        case 0x204890u: goto label_204890;
        case 0x2048c0u: goto label_2048c0;
        case 0x2048ecu: goto label_2048ec;
        case 0x20491cu: goto label_20491c;
        case 0x204948u: goto label_204948;
        case 0x204970u: goto label_204970;
        case 0x2049a4u: goto label_2049a4;
        case 0x2049ccu: goto label_2049cc;
        case 0x2049f8u: goto label_2049f8;
        case 0x204a2cu: goto label_204a2c;
        case 0x204a58u: goto label_204a58;
        case 0x204a8cu: goto label_204a8c;
        case 0x204abcu: goto label_204abc;
        case 0x204aecu: goto label_204aec;
        case 0x204b24u: goto label_204b24;
        case 0x204b4cu: goto label_204b4c;
        case 0x204b7cu: goto label_204b7c;
        case 0x204ba8u: goto label_204ba8;
        case 0x204be4u: goto label_204be4;
        case 0x204c18u: goto label_204c18;
        case 0x204c50u: goto label_204c50;
        case 0x204c88u: goto label_204c88;
        case 0x204cbcu: goto label_204cbc;
        case 0x204cf8u: goto label_204cf8;
        case 0x204d24u: goto label_204d24;
        case 0x204d54u: goto label_204d54;
        case 0x204d7cu: goto label_204d7c;
        case 0x204dacu: goto label_204dac;
        case 0x204de0u: goto label_204de0;
        case 0x204e10u: goto label_204e10;
        case 0x204e3cu: goto label_204e3c;
        case 0x204ea4u: goto label_204ea4;
        case 0x204ed0u: goto label_204ed0;
        case 0x204f30u: goto label_204f30;
        case 0x204f74u: goto label_204f74;
        case 0x204f98u: goto label_204f98;
        case 0x204fb4u: goto label_204fb4;
        case 0x205040u: goto label_205040;
        case 0x205084u: goto label_205084;
        case 0x2050b8u: goto label_2050b8;
        case 0x2050e0u: goto label_2050e0;
        case 0x20511cu: goto label_20511c;
        case 0x205150u: goto label_205150;
        default: break;
    }

    ctx->pc = 0x203ea0u;

    // 0x203ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x203ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x203ea4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x203ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x203ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203eac: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x203eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x203eb0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x203eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x203eb4: 0x84239270  lh          $v1, -0x6D90($at)
    ctx->pc = 0x203eb4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x619270u));
    // 0x203eb8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x203eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x203ebc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x203ebcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x203ec0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x203ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x203ec4: 0x10650067  beq         $v1, $a1, . + 4 + (0x67 << 2)
    ctx->pc = 0x203EC4u;
    {
        const bool branch_taken_0x203ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x203ec4) {
            ctx->pc = 0x204064u;
            goto label_204064;
        }
    }
    ctx->pc = 0x203ECCu;
    // 0x203ecc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x203eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203ed0: 0x1065004b  beq         $v1, $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x203ED0u;
    {
        const bool branch_taken_0x203ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x203ed0) {
            ctx->pc = 0x204000u;
            goto label_204000;
        }
    }
    ctx->pc = 0x203ED8u;
    // 0x203ed8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x203ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203edc: 0x10660030  beq         $v1, $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x203EDCu;
    {
        const bool branch_taken_0x203edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x203edc) {
            ctx->pc = 0x203FA0u;
            goto label_203fa0;
        }
    }
    ctx->pc = 0x203EE4u;
    // 0x203ee4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x203ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203ee8: 0x10670015  beq         $v1, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x203EE8u;
    {
        const bool branch_taken_0x203ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x203ee8) {
            ctx->pc = 0x203F40u;
            goto label_203f40;
        }
    }
    ctx->pc = 0x203EF0u;
    // 0x203ef0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203EF0u;
    {
        const bool branch_taken_0x203ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x203ef0) {
            ctx->pc = 0x203F00u;
            goto label_203f00;
        }
    }
    ctx->pc = 0x203EF8u;
    // 0x203ef8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x203EF8u;
    {
        const bool branch_taken_0x203ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203ef8) {
            ctx->pc = 0x2040B8u;
            goto label_2040b8;
        }
    }
    ctx->pc = 0x203F00u;
label_203f00:
    // 0x203f00: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x203f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
    // 0x203f04: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x203f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x203f08: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x203f08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x203f0c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x203f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x203f10: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x203f10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x203f14: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x203f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x203f18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x203f18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x203f1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x203f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203f20: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x203f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x203f24: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x203F24u;
    SET_GPR_U32(ctx, 31, 0x203F2Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x203F24u, 0x203F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F2Cu;
label_203f2c:
    // 0x203f2c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x203f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x203f30: 0x84259270  lh          $a1, -0x6D90($at)
    ctx->pc = 0x203f30u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x619270u));
    // 0x203f34: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x203f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x203f38: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x203f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x203f3c: 0xa4279270  sh          $a3, -0x6D90($at)
    ctx->pc = 0x203f3cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x619270u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619270u, _value); } while (0);
label_203f40:
    // 0x203f40: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x203f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x203f44: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x203f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x203f48: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x203F48u;
    SET_GPR_U32(ctx, 31, 0x203F50u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x203F48u, 0x203F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F50u;
label_203f50:
    // 0x203f50: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x203F50u;
    {
        const bool branch_taken_0x203f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f50) {
            ctx->pc = 0x2040B8u;
            goto label_2040b8;
        }
    }
    ctx->pc = 0x203F58u;
    // 0x203f58: 0x3c073dcc  lui         $a3, 0x3DCC
    ctx->pc = 0x203f58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15820 << 16));
    // 0x203f5c: 0x34e6cccd  ori         $a2, $a3, 0xCCCD
    ctx->pc = 0x203f5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x203f60: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x203f60u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x203f64: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x203f64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x203f68: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x203f68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x203f6c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x203f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x203f70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x203f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203f74: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x203f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203f78: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x203f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x203f7c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x203F7Cu;
    SET_GPR_U32(ctx, 31, 0x203F84u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x203F7Cu, 0x203F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F84u;
label_203f84:
    // 0x203f84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x203f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x203f88: 0x84279270  lh          $a3, -0x6D90($at)
    ctx->pc = 0x203f88u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x619270u));
    // 0x203f8c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x203f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x203f90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x203f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x203f94: 0xa4239270  sh          $v1, -0x6D90($at)
    ctx->pc = 0x203f94u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x619270u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619270u, _value); } while (0);
    // 0x203f98: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x203F98u;
    {
        const bool branch_taken_0x203f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f98) {
            ctx->pc = 0x2040B8u;
            goto label_2040b8;
        }
    }
    ctx->pc = 0x203FA0u;
label_203fa0:
    // 0x203fa0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x203fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x203fa4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x203fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x203fa8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x203FA8u;
    SET_GPR_U32(ctx, 31, 0x203FB0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x203FA8u, 0x203FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FB0u;
label_203fb0:
    // 0x203fb0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x203FB0u;
    {
        const bool branch_taken_0x203fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203fb0) {
            ctx->pc = 0x2040B8u;
            goto label_2040b8;
        }
    }
    ctx->pc = 0x203FB8u;
    // 0x203fb8: 0x3c073dcc  lui         $a3, 0x3DCC
    ctx->pc = 0x203fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15820 << 16));
    // 0x203fbc: 0x34e5cccd  ori         $a1, $a3, 0xCCCD
    ctx->pc = 0x203fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x203fc0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x203fc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x203fc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x203fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x203fc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x203fc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x203fcc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x203fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x203fd0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x203fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203fd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x203fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203fd8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x203fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x203fdc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x203FDCu;
    SET_GPR_U32(ctx, 31, 0x203FE4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x203FDCu, 0x203FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FE4u;
label_203fe4:
    // 0x203fe4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x203fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x203fe8: 0x84269270  lh          $a2, -0x6D90($at)
    ctx->pc = 0x203fe8u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x619270u));
    // 0x203fec: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x203fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x203ff0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x203ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x203ff4: 0xa4279270  sh          $a3, -0x6D90($at)
    ctx->pc = 0x203ff4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x619270u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619270u, _value); } while (0);
    // 0x203ff8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x203FF8u;
    {
        const bool branch_taken_0x203ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203ff8) {
            ctx->pc = 0x2040B8u;
            goto label_2040b8;
        }
    }
    ctx->pc = 0x204000u;
label_204000:
    // 0x204000: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204004: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x204004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x204008: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204008u;
    SET_GPR_U32(ctx, 31, 0x204010u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204008u, 0x204010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204010u;
label_204010:
    // 0x204010: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x204010u;
    {
        const bool branch_taken_0x204010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204010) {
            ctx->pc = 0x2040B8u;
            goto label_2040b8;
        }
    }
    ctx->pc = 0x204018u;
    // 0x204018: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x204018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x20401c: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x20401cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x204020: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204020u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204024: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204028: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204028u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20402c: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x20402cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x204030: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204030u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204034: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x204034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204038: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x204038u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20403c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20403cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204040: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204040u;
    SET_GPR_U32(ctx, 31, 0x204048u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204040u, 0x204048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204048u;
label_204048:
    // 0x204048: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x204048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20404c: 0x84249270  lh          $a0, -0x6D90($at)
    ctx->pc = 0x20404cu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x619270u));
    // 0x204050: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x204050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x204054: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x204054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x204058: 0xa4259270  sh          $a1, -0x6D90($at)
    ctx->pc = 0x204058u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x619270u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619270u, _value); } while (0);
    // 0x20405c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x20405Cu;
    {
        const bool branch_taken_0x20405c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20405c) {
            ctx->pc = 0x2040B8u;
            goto label_2040b8;
        }
    }
    ctx->pc = 0x204064u;
label_204064:
    // 0x204064: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204068: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20406c: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x20406cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x204070: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204070u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204074: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204074u;
    SET_GPR_U32(ctx, 31, 0x20407Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204074u, 0x20407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20407Cu;
label_20407c:
    // 0x20407c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20407Cu;
    {
        const bool branch_taken_0x20407c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20407c) {
            ctx->pc = 0x2040B8u;
            goto label_2040b8;
        }
    }
    ctx->pc = 0x204084u;
    // 0x204084: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x204084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x204088: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x204088u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20408c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x20408cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204090: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204094: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x204094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x204098: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204098u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20409c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20409cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2040a0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2040a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2040a4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2040A4u;
    SET_GPR_U32(ctx, 31, 0x2040ACu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2040A4u, 0x2040ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040ACu;
label_2040ac:
    // 0x2040ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2040acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2040b0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2040b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2040b4: 0xa4249270  sh          $a0, -0x6D90($at)
    ctx->pc = 0x2040b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x619270u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619270u, _value); } while (0);
label_2040b8:
    // 0x2040b8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2040b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2040bc: 0x8ca4008c  lw          $a0, 0x8C($a1)
    ctx->pc = 0x2040bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2040c0: 0x10800424  beqz        $a0, . + 4 + (0x424 << 2)
    ctx->pc = 0x2040C0u;
    {
        const bool branch_taken_0x2040c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040c0) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x2040C8u;
    // 0x2040c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2040c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2040cc: 0x84a60096  lh          $a2, 0x96($a1)
    ctx->pc = 0x2040ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x2040d0: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x2040d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2040d4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2040d4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2040d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2040d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2040dc: 0x10e40360  beq         $a3, $a0, . + 4 + (0x360 << 2)
    ctx->pc = 0x2040DCu;
    {
        const bool branch_taken_0x2040dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x2040dc) {
            ctx->pc = 0x204E60u;
            goto label_204e60;
        }
    }
    ctx->pc = 0x2040E4u;
    // 0x2040e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2040e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2040e8: 0x10e500e8  beq         $a3, $a1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2040E8u;
    {
        const bool branch_taken_0x2040e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x2040e8) {
            ctx->pc = 0x20448Cu;
            goto label_20448c;
        }
    }
    ctx->pc = 0x2040F0u;
    // 0x2040f0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2040F0u;
    {
        const bool branch_taken_0x2040f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040f0) {
            ctx->pc = 0x204100u;
            goto label_204100;
        }
    }
    ctx->pc = 0x2040F8u;
    // 0x2040f8: 0x10000416  b           . + 4 + (0x416 << 2)
    ctx->pc = 0x2040F8u;
    {
        const bool branch_taken_0x2040f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040f8) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x204100u;
label_204100:
    // 0x204100: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204104: 0x94440094  lhu         $a0, 0x94($v0)
    ctx->pc = 0x204104u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x204108: 0x1480005e  bnez        $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x204108u;
    {
        const bool branch_taken_0x204108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x204108) {
            ctx->pc = 0x204284u;
            goto label_204284;
        }
    }
    ctx->pc = 0x204110u;
    // 0x204110: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204114: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x204114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204118: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204118u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20411c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x20411cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204120: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204124: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x204124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x204128: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204128u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20412c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x20412cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204130: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x204130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204134: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204134u;
    SET_GPR_U32(ctx, 31, 0x20413Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204134u, 0x20413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20413Cu;
label_20413c:
    // 0x20413c: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x20413cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x204140: 0x34c2d70a  ori         $v0, $a2, 0xD70A
    ctx->pc = 0x204140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204144: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x204144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204148: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20414c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x20414cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204150: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204154: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204154u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204158: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20415c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20415cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204160: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204160u;
    SET_GPR_U32(ctx, 31, 0x204168u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204160u, 0x204168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204168u;
label_204168:
    // 0x204168: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204168u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x20416c: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x20416cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204170: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204170u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204174: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204178: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204178u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20417c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x20417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204180: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204180u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204184: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204188: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x204188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20418c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x20418Cu;
    SET_GPR_U32(ctx, 31, 0x204194u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x20418Cu, 0x204194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204194u;
label_204194:
    // 0x204194: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204194u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204198: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x20419c: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x20419cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2041a0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2041a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2041a4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2041a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2041a8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2041a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2041ac: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2041acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2041b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2041b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2041b4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2041b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2041b8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2041b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2041bc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2041BCu;
    SET_GPR_U32(ctx, 31, 0x2041C4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2041BCu, 0x2041C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041C4u;
label_2041c4:
    // 0x2041c4: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x2041c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x2041c8: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2041c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2041cc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2041ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2041d0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2041d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2041d4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2041d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2041d8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2041d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2041dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2041dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2041e0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2041e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2041e4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2041e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2041e8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2041E8u;
    SET_GPR_U32(ctx, 31, 0x2041F0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2041E8u, 0x2041F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041F0u;
label_2041f0:
    // 0x2041f0: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x2041f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x2041f4: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2041f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2041f8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2041f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2041fc: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2041fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204200: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204200u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204204: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x204204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x204208: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204208u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20420c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x20420cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204210: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x204210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204214: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204214u;
    SET_GPR_U32(ctx, 31, 0x20421Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204214u, 0x20421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20421Cu;
label_20421c:
    // 0x20421c: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x20421cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x204220: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x204220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204224: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204224u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204228: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20422c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x20422cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204230: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x204230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204234: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204234u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204238: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20423c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20423cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204240: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204240u;
    SET_GPR_U32(ctx, 31, 0x204248u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204240u, 0x204248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204248u;
label_204248:
    // 0x204248: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204248u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x20424c: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x20424cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204250: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204250u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204254: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204254u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204258: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20425c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x20425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204260: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204260u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204264: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204264u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204268: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20426c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20426cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204270: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204270u;
    SET_GPR_U32(ctx, 31, 0x204278u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204270u, 0x204278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204278u;
label_204278:
    // 0x204278: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x204278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20427c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x20427cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204280: 0xa4c50094  sh          $a1, 0x94($a2)
    ctx->pc = 0x204280u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 148), (uint16_t)GPR_U32(ctx, 5));
label_204284:
    // 0x204284: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204288: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x204288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x20428c: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x20428cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x204290: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x204290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x204294: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x204294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204298: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x204298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20429c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20429cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2042a0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2042a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2042a4: 0x8ca70058  lw          $a3, 0x58($a1)
    ctx->pc = 0x2042a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2042a8: 0x8ce60830  lw          $a2, 0x830($a3)
    ctx->pc = 0x2042a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2096)));
    // 0x2042ac: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2042acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2042b0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2042b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2042b4: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x2042b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x2042b8: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x2042b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x2042bc: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x2042bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2042c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2042c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2042c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2042c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2042c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2042c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2042cc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2042ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2042d0: 0x8ca50058  lw          $a1, 0x58($a1)
    ctx->pc = 0x2042d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2042d4: 0x8ca608c0  lw          $a2, 0x8C0($a1)
    ctx->pc = 0x2042d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2240)));
    // 0x2042d8: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2042d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2042dc: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2042dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2042e0: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x2042e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x2042e4: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2042e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2042e8: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x2042e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2042ec: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2042ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2042f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2042f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2042f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2042f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2042f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2042f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2042fc: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x2042fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x204300: 0x8ca60950  lw          $a2, 0x950($a1)
    ctx->pc = 0x204300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2384)));
    // 0x204304: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x204304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x204308: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20430c: 0x24e41350  addiu       $a0, $a3, 0x1350
    ctx->pc = 0x20430cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x204310: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x204310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x204314: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x204314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x204318: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x204318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20431c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x20431cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204320: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x204320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x204324: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204328: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x204328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x20432c: 0x8ca60a70  lw          $a2, 0xA70($a1)
    ctx->pc = 0x20432cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2672)));
    // 0x204330: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x204330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x204334: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204338: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x204338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x20433c: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x20433cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204340: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x204340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x204344: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x204344u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204348: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x204348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20434c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20434cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x204350: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204354: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x204354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x204358: 0x8ca60b00  lw          $a2, 0xB00($a1)
    ctx->pc = 0x204358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2816)));
    // 0x20435c: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x20435cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x204360: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204364: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x204364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x204368: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x204368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x20436c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x20436cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x204370: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x204370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204374: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x204374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204378: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x204378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20437c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20437cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204380: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x204380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x204384: 0x8ca70b90  lw          $a3, 0xB90($a1)
    ctx->pc = 0x204384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2960)));
    // 0x204388: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x204388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x20438c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x20438cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204390: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x204390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x204394: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x204394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x204398: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x204398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x20439c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20439cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2043a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2043a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2043a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2043a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2043a8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2043a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2043ac: 0x8ca60058  lw          $a2, 0x58($a1)
    ctx->pc = 0x2043acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2043b0: 0x8cc70c20  lw          $a3, 0xC20($a2)
    ctx->pc = 0x2043b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3104)));
    // 0x2043b4: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x2043b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x2043b8: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2043b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2043bc: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x2043bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x2043c0: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x2043c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x2043c4: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x2043c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x2043c8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2043c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2043cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2043ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2043d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2043d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2043d4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2043d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2043d8: 0x8ce50058  lw          $a1, 0x58($a3)
    ctx->pc = 0x2043d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x2043dc: 0x8ca60f80  lw          $a2, 0xF80($a1)
    ctx->pc = 0x2043dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3968)));
    // 0x2043e0: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2043e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2043e4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2043e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2043e8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2043e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2043ec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2043ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2043f0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x2043F0u;
    SET_GPR_U32(ctx, 31, 0x2043F8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x2043F0u, 0x2043F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043F8u;
label_2043f8:
    // 0x2043f8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x2043f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2043fc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2043fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204400: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204404: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204404u;
    SET_GPR_U32(ctx, 31, 0x20440Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204404u, 0x20440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20440Cu;
label_20440c:
    // 0x20440c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x20440cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204410: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204414: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x204414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204418: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20441c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x20441Cu;
    SET_GPR_U32(ctx, 31, 0x204424u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x20441Cu, 0x204424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204424u;
label_204424:
    // 0x204424: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204428: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204428u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20442c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x20442cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x204430: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204430u;
    SET_GPR_U32(ctx, 31, 0x204438u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204430u, 0x204438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204438u;
label_204438:
    // 0x204438: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20443c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x20443cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204440: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x204440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x204444: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x204444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204448: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204448u;
    SET_GPR_U32(ctx, 31, 0x204450u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204448u, 0x204450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204450u;
label_204450:
    // 0x204450: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204454: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x204454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x204458: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204458u;
    SET_GPR_U32(ctx, 31, 0x204460u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204458u, 0x204460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204460u;
label_204460:
    // 0x204460: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204464: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x204464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204468: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204468u;
    SET_GPR_U32(ctx, 31, 0x204470u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204468u, 0x204470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204470u;
label_204470:
    // 0x204470: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204474: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204478: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x20447c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x20447Cu;
    SET_GPR_U32(ctx, 31, 0x204484u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x20447Cu, 0x204484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204484u;
label_204484:
    // 0x204484: 0x10000333  b           . + 4 + (0x333 << 2)
    ctx->pc = 0x204484u;
    {
        const bool branch_taken_0x204484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204484) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x20448Cu;
label_20448c:
    // 0x20448c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204490: 0x94440094  lhu         $a0, 0x94($v0)
    ctx->pc = 0x204490u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x204494: 0x1480008e  bnez        $a0, . + 4 + (0x8E << 2)
    ctx->pc = 0x204494u;
    {
        const bool branch_taken_0x204494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x204494) {
            ctx->pc = 0x2046D0u;
            goto label_2046d0;
        }
    }
    ctx->pc = 0x20449Cu;
    // 0x20449c: 0x24050521  addiu       $a1, $zero, 0x521
    ctx->pc = 0x20449cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x2044a0: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x2044a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2044a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2044a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2044a8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2044a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2044ac: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2044acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2044b0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2044b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2044b4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2044b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2044b8: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2044b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2044bc: 0x3c063e80  lui         $a2, 0x3E80
    ctx->pc = 0x2044bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16000 << 16));
    // 0x2044c0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2044c0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2044c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2044c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2044c8: 0x8c27dcf0  lw          $a3, -0x2310($at)
    ctx->pc = 0x2044c8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2044cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2044ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2044d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2044d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2044d4: 0x24e60030  addiu       $a2, $a3, 0x30
    ctx->pc = 0x2044d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x2044d8: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x2044D8u;
    SET_GPR_U32(ctx, 31, 0x2044E0u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x2044E0u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2044E0u) { return; }
    ctx->pc = 0x2044E0u;
label_2044e0:
    // 0x2044e0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x2044e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x2044e4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2044e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2044e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2044e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2044ec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2044ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2044f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2044f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2044f4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2044f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2044f8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2044F8u;
    SET_GPR_U32(ctx, 31, 0x204500u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2044F8u, 0x204500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204500u;
label_204500:
    // 0x204500: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204500u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204504: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x204504u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204508: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x204508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x20450c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x20450cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204510: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204514: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x204514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x204518: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204518u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20451c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20451cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204520: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204520u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204524: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204524u;
    SET_GPR_U32(ctx, 31, 0x20452Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204524u, 0x20452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20452Cu;
label_20452c:
    // 0x20452c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20452cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204530: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204530u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204534: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204534u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x204538: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204538u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20453c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204540: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204544: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204548: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204548u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20454c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20454cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204550: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204550u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204554: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204554u;
    SET_GPR_U32(ctx, 31, 0x20455Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204554u, 0x20455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20455Cu;
label_20455c:
    // 0x20455c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20455cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204560: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204564: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x204564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204568: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204568u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20456c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x20456cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204570: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204570u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204574: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x204574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204578: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204578u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20457c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20457cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204580: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204584: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204584u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204588: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204588u;
    SET_GPR_U32(ctx, 31, 0x204590u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204588u, 0x204590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204590u;
label_204590:
    // 0x204590: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204590u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204594: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x204594u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204598: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x204598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x20459c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x20459cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2045a0: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x2045a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2045a4: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2045a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2045a8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2045a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2045ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2045acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2045b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2045b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2045b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2045b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2045b8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2045b8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2045bc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2045BCu;
    SET_GPR_U32(ctx, 31, 0x2045C4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2045BCu, 0x2045C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2045C4u;
label_2045c4:
    // 0x2045c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2045c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2045c8: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x2045c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x2045cc: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x2045ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x2045d0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2045d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2045d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2045d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2045d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2045d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2045dc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2045dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2045e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2045e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2045e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2045e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2045e8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2045e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2045ec: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2045ECu;
    SET_GPR_U32(ctx, 31, 0x2045F4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2045ECu, 0x2045F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2045F4u;
label_2045f4:
    // 0x2045f4: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x2045f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x2045f8: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2045f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2045fc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2045fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204600: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204604: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204604u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204608: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x204608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20460c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x20460cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204610: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204610u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204618: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204618u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20461c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20461cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204620: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204620u;
    SET_GPR_U32(ctx, 31, 0x204628u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204620u, 0x204628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204628u;
label_204628:
    // 0x204628: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204628u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20462c: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x20462cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x204630: 0x3487d70a  ori         $a3, $a0, 0xD70A
    ctx->pc = 0x204630u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x204634: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204634u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204638: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20463c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x20463cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204640: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x204640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204644: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204644u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204648: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204648u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20464c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20464cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204650: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204650u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204654: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204654u;
    SET_GPR_U32(ctx, 31, 0x20465Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204654u, 0x20465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20465Cu;
label_20465c:
    // 0x20465c: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x20465cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204660: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x204660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x204664: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x204664u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204668: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20466c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x20466cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204670: 0x2408001b  addiu       $t0, $zero, 0x1B
    ctx->pc = 0x204670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204674: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x204674u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204678: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204678u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20467c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204680: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204680u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204684: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204684u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204688: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204688u;
    SET_GPR_U32(ctx, 31, 0x204690u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204688u, 0x204690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204690u;
label_204690:
    // 0x204690: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204694: 0x3c063c23  lui         $a2, 0x3C23
    ctx->pc = 0x204694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15395 << 16));
    // 0x204698: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x204698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x20469c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20469cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2046a0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2046a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2046a4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2046a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2046a8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2046a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2046ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2046acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2046b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2046b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2046b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2046b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2046b8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2046b8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2046bc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2046BCu;
    SET_GPR_U32(ctx, 31, 0x2046C4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2046BCu, 0x2046C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046C4u;
label_2046c4:
    // 0x2046c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2046c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2046c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2046c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2046cc: 0xa4a40094  sh          $a0, 0x94($a1)
    ctx->pc = 0x2046ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 148), (uint16_t)GPR_U32(ctx, 4));
label_2046d0:
    // 0x2046d0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2046d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2046d4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2046d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2046d8: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2046d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2046dc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2046dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2046e0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x2046E0u;
    SET_GPR_U32(ctx, 31, 0x2046E8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x2046E0u, 0x2046E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046E8u;
label_2046e8:
    // 0x2046e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2046e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2046ec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2046ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2046f0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x2046F0u;
    SET_GPR_U32(ctx, 31, 0x2046F8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x2046F0u, 0x2046F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046F8u;
label_2046f8:
    // 0x2046f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2046f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2046fc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2046fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204700: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204700u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204704: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x204704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204708: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x204708u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20470c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x20470Cu;
    SET_GPR_U32(ctx, 31, 0x204714u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x20470Cu, 0x204714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204714u;
label_204714:
    // 0x204714: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204714u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204718: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20471c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x20471cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204720: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204720u;
    SET_GPR_U32(ctx, 31, 0x204728u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204720u, 0x204728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204728u;
label_204728:
    // 0x204728: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20472c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x20472cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x204730: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204730u;
    SET_GPR_U32(ctx, 31, 0x204738u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204730u, 0x204738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204738u;
label_204738:
    // 0x204738: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20473c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x20473cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204740: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x204740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x204744: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204744u;
    SET_GPR_U32(ctx, 31, 0x20474Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204744u, 0x20474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20474Cu;
label_20474c:
    // 0x20474c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x20474cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204750: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x204750u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204754: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x204754u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204758: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x204758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20475c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20475cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204760: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204760u;
    SET_GPR_U32(ctx, 31, 0x204768u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204760u, 0x204768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204768u;
label_204768:
    // 0x204768: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20476c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x20476cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204770: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x204770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204774: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204774u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204778: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204778u;
    SET_GPR_U32(ctx, 31, 0x204780u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204778u, 0x204780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204780u;
label_204780:
    // 0x204780: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204780u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204784: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204788: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20478c: 0x2408001b  addiu       $t0, $zero, 0x1B
    ctx->pc = 0x20478cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204790: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x204790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204794: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204794u;
    SET_GPR_U32(ctx, 31, 0x20479Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204794u, 0x20479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20479Cu;
label_20479c:
    // 0x20479c: 0x1040026d  beqz        $v0, . + 4 + (0x26D << 2)
    ctx->pc = 0x20479Cu;
    {
        const bool branch_taken_0x20479c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20479c) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x2047A4u;
    // 0x2047a4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2047a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2047a8: 0x94a60094  lhu         $a2, 0x94($a1)
    ctx->pc = 0x2047a8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x2047ac: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x2047acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2047b0: 0xa4a70094  sh          $a3, 0x94($a1)
    ctx->pc = 0x2047b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 148), (uint16_t)GPR_U32(ctx, 7));
    // 0x2047b4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2047b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2047b8: 0x94a70094  lhu         $a3, 0x94($a1)
    ctx->pc = 0x2047b8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x2047bc: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x2047bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2047c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2047c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2047c4: 0x110401a0  beq         $t0, $a0, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x2047C4u;
    {
        const bool branch_taken_0x2047c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x2047c4) {
            ctx->pc = 0x204E48u;
            goto label_204e48;
        }
    }
    ctx->pc = 0x2047CCu;
    // 0x2047cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2047ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2047d0: 0x1105013d  beq         $t0, $a1, . + 4 + (0x13D << 2)
    ctx->pc = 0x2047D0u;
    {
        const bool branch_taken_0x2047d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x2047d0) {
            ctx->pc = 0x204CC8u;
            goto label_204cc8;
        }
    }
    ctx->pc = 0x2047D8u;
    // 0x2047d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2047d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2047dc: 0x110600c6  beq         $t0, $a2, . + 4 + (0xC6 << 2)
    ctx->pc = 0x2047DCu;
    {
        const bool branch_taken_0x2047dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x2047dc) {
            ctx->pc = 0x204AF8u;
            goto label_204af8;
        }
    }
    ctx->pc = 0x2047E4u;
    // 0x2047e4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2047e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2047e8: 0x11070064  beq         $t0, $a3, . + 4 + (0x64 << 2)
    ctx->pc = 0x2047E8u;
    {
        const bool branch_taken_0x2047e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x2047e8) {
            ctx->pc = 0x20497Cu;
            goto label_20497c;
        }
    }
    ctx->pc = 0x2047F0u;
    // 0x2047f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2047f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2047f4: 0x11050003  beq         $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2047F4u;
    {
        const bool branch_taken_0x2047f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x2047f4) {
            ctx->pc = 0x204804u;
            goto label_204804;
        }
    }
    ctx->pc = 0x2047FCu;
    // 0x2047fc: 0x10000255  b           . + 4 + (0x255 << 2)
    ctx->pc = 0x2047FCu;
    {
        const bool branch_taken_0x2047fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2047fc) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x204804u;
label_204804:
    // 0x204804: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204804u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204808: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x20480c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x20480cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204810: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204814: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204818: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x204818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20481c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20481cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204820: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204824: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204824u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204828: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204828u;
    SET_GPR_U32(ctx, 31, 0x204830u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204828u, 0x204830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204830u;
label_204830:
    // 0x204830: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204830u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204834: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204834u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204838: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204838u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x20483c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x20483cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204840: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204844: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204844u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204848: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20484c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20484cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204850: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204854: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204854u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204858: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204858u;
    SET_GPR_U32(ctx, 31, 0x204860u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204858u, 0x204860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204860u;
label_204860:
    // 0x204860: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204860u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204864: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204864u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204868: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204868u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x20486c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x20486cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204870: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204874: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204874u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204878: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x204878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20487c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20487cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204880: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204884: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204884u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204888: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204888u;
    SET_GPR_U32(ctx, 31, 0x204890u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204888u, 0x204890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204890u;
label_204890:
    // 0x204890: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204890u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204894: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204894u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204898: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204898u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x20489c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x20489cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2048a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2048a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2048a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2048a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2048a8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2048a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2048ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2048acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2048b0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2048b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2048b4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2048b4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2048b8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2048B8u;
    SET_GPR_U32(ctx, 31, 0x2048C0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2048B8u, 0x2048C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048C0u;
label_2048c0:
    // 0x2048c0: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x2048c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x2048c4: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x2048c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x2048c8: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x2048c8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2048cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2048ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2048d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2048d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2048d4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2048d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2048d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2048d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2048dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2048dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2048e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2048e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2048e4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2048E4u;
    SET_GPR_U32(ctx, 31, 0x2048ECu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2048E4u, 0x2048ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048ECu;
label_2048ec:
    // 0x2048ec: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x2048ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x2048f0: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x2048f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2048f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2048f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2048f8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2048f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2048fc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2048fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204900: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x204900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x204904: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204908: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x204908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20490c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20490cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204910: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204910u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204914: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204914u;
    SET_GPR_U32(ctx, 31, 0x20491Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204914u, 0x20491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20491Cu;
label_20491c:
    // 0x20491c: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x20491cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x204920: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x204920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x204924: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x204924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204928: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20492c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x20492cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204930: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x204930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204934: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x204934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204938: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20493c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20493cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204940: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204940u;
    SET_GPR_U32(ctx, 31, 0x204948u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204940u, 0x204948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204948u;
label_204948:
    // 0x204948: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x204948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x20494c: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x20494cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x204950: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204950u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204954: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204958: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x20495c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20495cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204960: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204964: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204964u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204968: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204968u;
    SET_GPR_U32(ctx, 31, 0x204970u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204968u, 0x204970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204970u;
label_204970:
    // 0x204970: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204970u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204974: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x204974u;
    {
        const bool branch_taken_0x204974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204974) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x20497Cu;
label_20497c:
    // 0x20497c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x20497cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x204980: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x204980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x204984: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x204984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204988: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20498c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x20498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x204990: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204994: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204998: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204998u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20499c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x20499Cu;
    SET_GPR_U32(ctx, 31, 0x2049A4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x20499Cu, 0x2049A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049A4u;
label_2049a4:
    // 0x2049a4: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x2049a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x2049a8: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2049a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x2049ac: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2049acu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2049b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2049b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2049b4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2049b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2049b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2049b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2049bc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2049bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2049c0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2049c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2049c4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2049C4u;
    SET_GPR_U32(ctx, 31, 0x2049CCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2049C4u, 0x2049CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049CCu;
label_2049cc:
    // 0x2049cc: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2049ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2049d0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2049d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2049d4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2049d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2049d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2049d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2049dc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2049dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2049e0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2049e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2049e4: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2049e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2049e8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2049e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2049ec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2049ecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2049f0: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2049F0u;
    SET_GPR_U32(ctx, 31, 0x2049F8u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2049F0u, 0x2049F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049F8u;
label_2049f8:
    // 0x2049f8: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x2049f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x2049fc: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x2049fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x204a00: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x204a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204a04: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204a08: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204a08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204a0c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x204a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x204a10: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x204a10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204a14: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204a18: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x204a18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204a1c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204a20: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204a20u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204a24: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204A24u;
    SET_GPR_U32(ctx, 31, 0x204A2Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204A24u, 0x204A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A2Cu;
label_204a2c:
    // 0x204a2c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x204a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x204a30: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x204a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x204a34: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x204a34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204a38: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204a38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204a3c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204a3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204a40: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x204a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x204a44: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204a48: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204a4c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204a4cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204a50: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204A50u;
    SET_GPR_U32(ctx, 31, 0x204A58u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204A50u, 0x204A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A58u;
label_204a58:
    // 0x204a58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204a58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204a5c: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x204a60: 0x34c2d70a  ori         $v0, $a2, 0xD70A
    ctx->pc = 0x204a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204a64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x204a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204a68: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204a6c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204a6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204a70: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x204a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x204a74: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204a74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204a78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204a7c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204a80: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204a80u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204a84: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204A84u;
    SET_GPR_U32(ctx, 31, 0x204A8Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204A84u, 0x204A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A8Cu;
label_204a8c:
    // 0x204a8c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x204a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x204a90: 0x34a6d70a  ori         $a2, $a1, 0xD70A
    ctx->pc = 0x204a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x204a94: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x204a94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204a98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204a9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204a9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204aa0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x204aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204aa4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204aa8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x204aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204aac: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204aacu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204ab0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204ab0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204ab4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204AB4u;
    SET_GPR_U32(ctx, 31, 0x204ABCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204AB4u, 0x204ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204ABCu;
label_204abc:
    // 0x204abc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204abcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204ac0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204ac4: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x204ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204ac8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204ac8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204acc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204ad0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204ad4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x204ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204ad8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204ad8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204adc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204ae0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204ae0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204ae4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204AE4u;
    SET_GPR_U32(ctx, 31, 0x204AECu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204AE4u, 0x204AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204AECu;
label_204aec:
    // 0x204aec: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204aecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204af0: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x204AF0u;
    {
        const bool branch_taken_0x204af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204af0) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x204AF8u;
label_204af8:
    // 0x204af8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x204af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x204afc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x204afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204b00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x204b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204b04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204b08: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x204b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x204b0c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x204b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204b10: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x204b10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x204b14: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x204b14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204b18: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204b18u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204b1c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204B1Cu;
    SET_GPR_U32(ctx, 31, 0x204B24u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204B1Cu, 0x204B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B24u;
label_204b24:
    // 0x204b24: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204b28: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x204b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204b2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x204b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204b30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204b34: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x204b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x204b38: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x204b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204b3c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204b40: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204b40u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204b44: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204B44u;
    SET_GPR_U32(ctx, 31, 0x204B4Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204B44u, 0x204B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B4Cu;
label_204b4c:
    // 0x204b4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204b4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204b50: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204b50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x204b54: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x204b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204b58: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204b58u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204b60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204b60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204b64: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204b68: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x204b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204b6c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204b70: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204b70u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204b74: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204B74u;
    SET_GPR_U32(ctx, 31, 0x204B7Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204B74u, 0x204B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B7Cu;
label_204b7c:
    // 0x204b7c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x204b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x204b80: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x204b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x204b84: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x204b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204b88: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204b8c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204b8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204b90: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x204b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204b94: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x204b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204b98: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204b9c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204b9cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204ba0: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204BA0u;
    SET_GPR_U32(ctx, 31, 0x204BA8u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204BA0u, 0x204BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BA8u;
label_204ba8:
    // 0x204ba8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204ba8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204bac: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x204bacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204bb0: 0x34e5d70a  ori         $a1, $a3, 0xD70A
    ctx->pc = 0x204bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x204bb4: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204bb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204bb8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204bbc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204bbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204bc0: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x204bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x204bc4: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204bc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204bc8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x204bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204bcc: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x204bccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204bd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x204bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204bd4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204bd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204bd8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204bd8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204bdc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204BDCu;
    SET_GPR_U32(ctx, 31, 0x204BE4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204BDCu, 0x204BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BE4u;
label_204be4:
    // 0x204be4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204be4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204be8: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x204be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x204bec: 0x3487d70a  ori         $a3, $a0, 0xD70A
    ctx->pc = 0x204becu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x204bf0: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204bf0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204bf4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204bf8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204bf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204bfc: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x204bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x204c00: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204c00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c04: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x204c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204c08: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204c0c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204c0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204c10: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204C10u;
    SET_GPR_U32(ctx, 31, 0x204C18u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204C10u, 0x204C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C18u;
label_204c18:
    // 0x204c18: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204c18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c1c: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x204c20: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x204c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204c24: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204c24u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204c28: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204c28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204c2c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204c2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204c30: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x204c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x204c34: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x204c34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204c38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x204c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204c3c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204c3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c40: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204c44: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204c44u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204c48: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204C48u;
    SET_GPR_U32(ctx, 31, 0x204C50u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204C48u, 0x204C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C50u;
label_204c50:
    // 0x204c50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x204c50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c54: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x204c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x204c58: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x204c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x204c5c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x204c5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204c60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204c64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204c64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c68: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x204c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204c6c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204c70: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x204c70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204c74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x204c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204c78: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204c78u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c7c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204c7cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204c80: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204C80u;
    SET_GPR_U32(ctx, 31, 0x204C88u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204C80u, 0x204C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C88u;
label_204c88:
    // 0x204c88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c8c: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x204c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204c90: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x204c90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x204c94: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x204c94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204c98: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x204c98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204c9c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x204c9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204ca0: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x204ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204ca4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204ca4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204ca8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x204ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204cac: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204cb0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204cb0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204cb4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204CB4u;
    SET_GPR_U32(ctx, 31, 0x204CBCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204CB4u, 0x204CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CBCu;
label_204cbc:
    // 0x204cbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204cbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204cc0: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x204CC0u;
    {
        const bool branch_taken_0x204cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204cc0) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x204CC8u;
label_204cc8:
    // 0x204cc8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204ccc: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x204cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204cd0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204cd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204cd4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204cd8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204cdc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x204cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x204ce0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204ce0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204ce4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204ce8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204cec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204cecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204cf0: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204CF0u;
    SET_GPR_U32(ctx, 31, 0x204CF8u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204CF0u, 0x204CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CF8u;
label_204cf8:
    // 0x204cf8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204cf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204cfc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204d00: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x204d00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204d04: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x204d04u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204d08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204d0c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204d10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204d14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204d18: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204d18u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204d1c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204D1Cu;
    SET_GPR_U32(ctx, 31, 0x204D24u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204D1Cu, 0x204D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D24u;
label_204d24:
    // 0x204d24: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204d28: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x204d28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204d2c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204d2cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204d30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204d34: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x204d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204d38: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204d3c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x204d3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204d40: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x204d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204d44: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x204d44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204d48: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204d48u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204d4c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204D4Cu;
    SET_GPR_U32(ctx, 31, 0x204D54u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204D4Cu, 0x204D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D54u;
label_204d54:
    // 0x204d54: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x204d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x204d58: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x204d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x204d5c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x204d5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204d60: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204d64: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x204d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x204d68: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204d6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204d70: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204d70u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204d74: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204D74u;
    SET_GPR_U32(ctx, 31, 0x204D7Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204D74u, 0x204D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D7Cu;
label_204d7c:
    // 0x204d7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204d7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204d80: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204d84: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x204d84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204d88: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204d88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204d8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204d90: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x204d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x204d94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x204d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204d98: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204d98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204d9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204da0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204da0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204da4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204DA4u;
    SET_GPR_U32(ctx, 31, 0x204DACu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204DA4u, 0x204DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DACu;
label_204dac:
    // 0x204dac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204dacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204db0: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204db0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204db4: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204db4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x204db8: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204db8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204dbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204dc0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204dc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204dc4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x204dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x204dc8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204dc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204dcc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204dd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204dd4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204dd4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204dd8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204DD8u;
    SET_GPR_U32(ctx, 31, 0x204DE0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204DD8u, 0x204DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DE0u;
label_204de0:
    // 0x204de0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204de0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204de4: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204de4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204de8: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204de8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x204dec: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204decu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204df0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204df4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204df4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204df8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x204df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204dfc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204e00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204e04: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204e04u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204e08: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204E08u;
    SET_GPR_U32(ctx, 31, 0x204E10u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204E08u, 0x204E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E10u;
label_204e10:
    // 0x204e10: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204e10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204e14: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204e14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204e18: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204e18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x204e1c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204e1cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204e20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204e24: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204e28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204e2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204e30: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204e30u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204e34: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204E34u;
    SET_GPR_U32(ctx, 31, 0x204E3Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204E34u, 0x204E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E3Cu;
label_204e3c:
    // 0x204e3c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204e3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204e40: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x204E40u;
    {
        const bool branch_taken_0x204e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e40) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x204E48u;
label_204e48:
    // 0x204e48: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204e4c: 0xa4e00096  sh          $zero, 0x96($a3)
    ctx->pc = 0x204e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x204e50: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x204e50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204e54: 0xa5000094  sh          $zero, 0x94($t0)
    ctx->pc = 0x204e54u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x204e58: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x204E58u;
    {
        const bool branch_taken_0x204e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e58) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x204E60u;
label_204e60:
    // 0x204e60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204e64: 0x94450094  lhu         $a1, 0x94($v0)
    ctx->pc = 0x204e64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x204e68: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x204E68u;
    {
        const bool branch_taken_0x204e68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x204e68) {
            ctx->pc = 0x204EE4u;
            goto label_204ee4;
        }
    }
    ctx->pc = 0x204E70u;
    // 0x204e70: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x204e70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204e74: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x204e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x204e78: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x204e78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204e7c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204e80: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204e80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204e84: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x204e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204e88: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204e88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204e8c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204e8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204e90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x204e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204e94: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x204e94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204e98: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204e98u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204e9c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204E9Cu;
    SET_GPR_U32(ctx, 31, 0x204EA4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204E9Cu, 0x204EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204EA4u;
label_204ea4:
    // 0x204ea4: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x204ea8: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x204ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204eac: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204eacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204eb0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204eb4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204eb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204eb8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204ebc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204ebcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204ec0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204ec4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204ec4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204ec8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204EC8u;
    SET_GPR_U32(ctx, 31, 0x204ED0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204EC8u, 0x204ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204ED0u;
label_204ed0:
    // 0x204ed0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x204ed0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204ed4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204ed8: 0x94450094  lhu         $a1, 0x94($v0)
    ctx->pc = 0x204ed8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x204edc: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x204edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x204ee0: 0xa4460094  sh          $a2, 0x94($v0)
    ctx->pc = 0x204ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 6));
label_204ee4:
    // 0x204ee4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204ee8: 0x94e50094  lhu         $a1, 0x94($a3)
    ctx->pc = 0x204ee8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x204eec: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x204eecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x204ef0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x204ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204ef4: 0x14e80024  bne         $a3, $t0, . + 4 + (0x24 << 2)
    ctx->pc = 0x204EF4u;
    {
        const bool branch_taken_0x204ef4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x204ef4) {
            ctx->pc = 0x204F88u;
            goto label_204f88;
        }
    }
    ctx->pc = 0x204EFCu;
    // 0x204efc: 0x3c053e19  lui         $a1, 0x3E19
    ctx->pc = 0x204efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15897 << 16));
    // 0x204f00: 0x34a2999a  ori         $v0, $a1, 0x999A
    ctx->pc = 0x204f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x204f04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x204f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204f08: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204f0c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204f0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204f10: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x204f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204f14: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204f14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204f1c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204f1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204f20: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204f24: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204f24u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204f28: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204F28u;
    SET_GPR_U32(ctx, 31, 0x204F30u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204F28u, 0x204F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F30u;
label_204f30:
    // 0x204f30: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x204f30u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204f34: 0x3c053f59  lui         $a1, 0x3F59
    ctx->pc = 0x204f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16217 << 16));
    // 0x204f38: 0x34a2999a  ori         $v0, $a1, 0x999A
    ctx->pc = 0x204f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x204f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x204f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204f40: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204f44: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x204f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x204f48: 0x8ce208c0  lw          $v0, 0x8C0($a3)
    ctx->pc = 0x204f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2240)));
    // 0x204f4c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x204f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x204f50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x204f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x204f54: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x204f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204f58: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204f5c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204f60: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204f60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204f64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204f68: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204f68u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204f6c: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x204F6Cu;
    SET_GPR_U32(ctx, 31, 0x204F74u);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x204F6Cu, 0x204F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F74u;
label_204f74:
    // 0x204f74: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204f74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204f78: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204f78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204f7c: 0x94e20094  lhu         $v0, 0x94($a3)
    ctx->pc = 0x204f7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x204f80: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x204f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204f84: 0xa4e30094  sh          $v1, 0x94($a3)
    ctx->pc = 0x204f84u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 148), (uint16_t)GPR_U32(ctx, 3));
label_204f88:
    // 0x204f88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204f8c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204f90: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204F90u;
    SET_GPR_U32(ctx, 31, 0x204F98u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204F90u, 0x204F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F98u;
label_204f98:
    // 0x204f98: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204f98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204f9c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204fa0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204fa0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204fa4: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x204fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204fa8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204fa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204fac: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204FACu;
    SET_GPR_U32(ctx, 31, 0x204FB4u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204FACu, 0x204FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FB4u;
label_204fb4:
    // 0x204fb4: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x204FB4u;
    {
        const bool branch_taken_0x204fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204fb4) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x204FBCu;
    // 0x204fbc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204fc0: 0x94a30094  lhu         $v1, 0x94($a1)
    ctx->pc = 0x204fc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x204fc4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x204fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204fc8: 0xa4a40094  sh          $a0, 0x94($a1)
    ctx->pc = 0x204fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 148), (uint16_t)GPR_U32(ctx, 4));
    // 0x204fcc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204fd0: 0x94a60094  lhu         $a2, 0x94($a1)
    ctx->pc = 0x204fd0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x204fd4: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x204fd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x204fd8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x204fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x204fdc: 0x10e4005d  beq         $a3, $a0, . + 4 + (0x5D << 2)
    ctx->pc = 0x204FDCu;
    {
        const bool branch_taken_0x204fdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x204fdc) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x204FE4u;
    // 0x204fe4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x204fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x204fe8: 0x10e30040  beq         $a3, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x204FE8u;
    {
        const bool branch_taken_0x204fe8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x204fe8) {
            ctx->pc = 0x2050ECu;
            goto label_2050ec;
        }
    }
    ctx->pc = 0x204FF0u;
    // 0x204ff0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x204ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204ff4: 0x10e30026  beq         $a3, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x204FF4u;
    {
        const bool branch_taken_0x204ff4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x204ff4) {
            ctx->pc = 0x205090u;
            goto label_205090;
        }
    }
    ctx->pc = 0x204FFCu;
    // 0x204ffc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x204ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x205000: 0x10e40003  beq         $a3, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205000u;
    {
        const bool branch_taken_0x205000 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x205000) {
            ctx->pc = 0x205010u;
            goto label_205010;
        }
    }
    ctx->pc = 0x205008u;
    // 0x205008: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x205008u;
    {
        const bool branch_taken_0x205008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205008) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x205010u;
label_205010:
    // 0x205010: 0x3c063b44  lui         $a2, 0x3B44
    ctx->pc = 0x205010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15172 << 16));
    // 0x205014: 0x34c59ba6  ori         $a1, $a2, 0x9BA6
    ctx->pc = 0x205014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39846);
    // 0x205018: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x205018u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20501c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x20501cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x205020: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x205020u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x205024: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x205024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x205028: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x205028u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20502c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20502cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205030: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x205030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x205034: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x205034u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205038: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x205038u;
    SET_GPR_U32(ctx, 31, 0x205040u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x205038u, 0x205040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205040u;
label_205040:
    // 0x205040: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x205040u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x205044: 0x3c063e19  lui         $a2, 0x3E19
    ctx->pc = 0x205044u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15897 << 16));
    // 0x205048: 0x34c5999a  ori         $a1, $a2, 0x999A
    ctx->pc = 0x205048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
    // 0x20504c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20504cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205050: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x205050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x205054: 0x8ce20058  lw          $v0, 0x58($a3)
    ctx->pc = 0x205054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x205058: 0x8c4308c0  lw          $v1, 0x8C0($v0)
    ctx->pc = 0x205058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2240)));
    // 0x20505c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x20505cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x205060: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x205060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x205064: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x205064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205068: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x205068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20506c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x20506cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x205070: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x205070u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205074: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x205074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205078: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x205078u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20507c: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x20507Cu;
    SET_GPR_U32(ctx, 31, 0x205084u);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x20507Cu, 0x205084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205084u;
label_205084:
    // 0x205084: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x205084u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x205088: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x205088u;
    {
        const bool branch_taken_0x205088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205088) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x205090u;
label_205090:
    // 0x205090: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x205090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x205094: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x205094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x205098: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x205098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20509c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20509cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2050a0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2050a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2050a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2050a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2050a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2050a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2050ac: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2050acu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2050b0: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x2050B0u;
    SET_GPR_U32(ctx, 31, 0x2050B8u);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x2050B0u, 0x2050B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050B8u;
label_2050b8:
    // 0x2050b8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2050b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2050bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2050bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2050c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2050c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2050c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2050c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2050c8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2050c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2050cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2050ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2050d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2050d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2050d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2050d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2050d8: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x2050D8u;
    SET_GPR_U32(ctx, 31, 0x2050E0u);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x2050D8u, 0x2050E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050E0u;
label_2050e0:
    // 0x2050e0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2050e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2050e4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2050E4u;
    {
        const bool branch_taken_0x2050e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2050e4) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x2050ECu;
label_2050ec:
    // 0x2050ec: 0x3c073d4c  lui         $a3, 0x3D4C
    ctx->pc = 0x2050ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15692 << 16));
    // 0x2050f0: 0x34e6cccd  ori         $a2, $a3, 0xCCCD
    ctx->pc = 0x2050f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x2050f4: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2050f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2050f8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2050f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2050fc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2050fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x205100: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x205100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x205104: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x205104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x205108: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x205108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20510c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20510cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205110: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x205110u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205114: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x205114u;
    SET_GPR_U32(ctx, 31, 0x20511Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x205114u, 0x20511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20511Cu;
label_20511c:
    // 0x20511c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20511cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x205120: 0x3c063d4c  lui         $a2, 0x3D4C
    ctx->pc = 0x205120u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15692 << 16));
    // 0x205124: 0x34c2cccd  ori         $v0, $a2, 0xCCCD
    ctx->pc = 0x205124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x205128: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x205128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20512c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x20512cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x205130: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x205130u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x205134: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x205134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x205138: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x205138u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20513c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20513cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205140: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x205140u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205144: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x205144u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205148: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x205148u;
    SET_GPR_U32(ctx, 31, 0x205150u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x205148u, 0x205150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205150u;
label_205150:
    // 0x205150: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x205150u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_205154:
    // 0x205154: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x205154u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x205158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20515c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20515cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x205160: 0x3e00008  jr          $ra
    ctx->pc = 0x205160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205168u;
}
