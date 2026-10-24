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

// Function: R10a_effect_set
// Address: 0x276d90 - 0x277218
void R10a_effect_set_0x276d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_effect_set_0x276d90");
#endif

    switch (ctx->pc) {
        case 0x276da8u: goto label_276da8;
        case 0x276dccu: goto label_276dcc;
        case 0x276dd8u: goto label_276dd8;
        case 0x276e50u: goto label_276e50;
        case 0x276e5cu: goto label_276e5c;
        case 0x276e88u: goto label_276e88;
        case 0x276e94u: goto label_276e94;
        case 0x276eb8u: goto label_276eb8;
        case 0x276efcu: goto label_276efc;
        case 0x276f08u: goto label_276f08;
        case 0x276f2cu: goto label_276f2c;
        case 0x276f50u: goto label_276f50;
        case 0x276f74u: goto label_276f74;
        case 0x276fb8u: goto label_276fb8;
        case 0x276fc4u: goto label_276fc4;
        case 0x277020u: goto label_277020;
        case 0x27702cu: goto label_27702c;
        case 0x277074u: goto label_277074;
        case 0x277080u: goto label_277080;
        case 0x2770a0u: goto label_2770a0;
        case 0x2770acu: goto label_2770ac;
        case 0x2770dcu: goto label_2770dc;
        case 0x2770e8u: goto label_2770e8;
        case 0x277118u: goto label_277118;
        case 0x277124u: goto label_277124;
        case 0x277144u: goto label_277144;
        case 0x277150u: goto label_277150;
        case 0x277180u: goto label_277180;
        case 0x27718cu: goto label_27718c;
        case 0x2771a0u: goto label_2771a0;
        case 0x2771c4u: goto label_2771c4;
        case 0x2771d0u: goto label_2771d0;
        case 0x277204u: goto label_277204;
        default: break;
    }

    ctx->pc = 0x276d90u;

    // 0x276d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276d94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x276d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x276d98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x276d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276d9c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x276d9cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276da0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x276DA0u;
    {
        const bool branch_taken_0x276da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276da0) {
            ctx->pc = 0x276EA0u;
            goto label_276ea0;
        }
    }
    ctx->pc = 0x276DA8u;
label_276da8:
    // 0x276da8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276dac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276db0: 0x2442d1c0  addiu       $v0, $v0, -0x2E40
    ctx->pc = 0x276db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955456));
    // 0x276db4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x276db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276db8: 0x24045706  addiu       $a0, $zero, 0x5706
    ctx->pc = 0x276db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22278));
    // 0x276dbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276dbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276dc0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276dc0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276dc4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276DC4u;
    SET_GPR_U32(ctx, 31, 0x276DCCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276DC4u, 0x276DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DCCu;
label_276dcc:
    // 0x276dcc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x276dccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x276dd0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276DD0u;
    SET_GPR_U32(ctx, 31, 0x276DD8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276DD0u, 0x276DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DD8u;
label_276dd8:
    // 0x276dd8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276ddc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276de0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276de4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276dec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276df0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x276df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x276df4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276df8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276df8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276dfc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276e00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276e04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276e08: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x276e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x276e0c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x276e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x276e10: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x276e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x276e14: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276e18: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x276e18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x276e1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276e20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x276e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x276e24: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x276E24u;
    {
        const bool branch_taken_0x276e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276e24) {
            ctx->pc = 0x276E64u;
            goto label_276e64;
        }
    }
    ctx->pc = 0x276E2Cu;
    // 0x276e2c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276e30: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276e34: 0x2442d1c0  addiu       $v0, $v0, -0x2E40
    ctx->pc = 0x276e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955456));
    // 0x276e38: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x276e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276e3c: 0x24047304  addiu       $a0, $zero, 0x7304
    ctx->pc = 0x276e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29444));
    // 0x276e40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276e40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276e44: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276e44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276e48: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276E48u;
    SET_GPR_U32(ctx, 31, 0x276E50u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276E48u, 0x276E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E50u;
label_276e50:
    // 0x276e50: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x276e50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x276e54: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276E54u;
    SET_GPR_U32(ctx, 31, 0x276E5Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276E54u, 0x276E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E5Cu;
label_276e5c:
    // 0x276e5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x276E5Cu;
    {
        const bool branch_taken_0x276e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276e5c) {
            ctx->pc = 0x276E98u;
            goto label_276e98;
        }
    }
    ctx->pc = 0x276E64u;
label_276e64:
    // 0x276e64: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276e68: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276e6c: 0x2442d1c0  addiu       $v0, $v0, -0x2E40
    ctx->pc = 0x276e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955456));
    // 0x276e70: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x276e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276e74: 0x24047404  addiu       $a0, $zero, 0x7404
    ctx->pc = 0x276e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29700));
    // 0x276e78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276e78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276e7c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276e7cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276e80: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276E80u;
    SET_GPR_U32(ctx, 31, 0x276E88u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276E80u, 0x276E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E88u;
label_276e88:
    // 0x276e88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x276e88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x276e8c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276E8Cu;
    SET_GPR_U32(ctx, 31, 0x276E94u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276E8Cu, 0x276E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E94u;
label_276e94:
    // 0x276e94: 0x0  nop
    ctx->pc = 0x276e94u;
    // NOP
label_276e98:
    // 0x276e98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x276e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x276e9c: 0x0  nop
    ctx->pc = 0x276e9cu;
    // NOP
label_276ea0:
    // 0x276ea0: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x276ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x276ea4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x276EA4u;
    {
        const bool branch_taken_0x276ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276ea4) {
            ctx->pc = 0x276DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276da8;
        }
    }
    ctx->pc = 0x276EACu;
    // 0x276eac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x276eacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276eb0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x276EB0u;
    {
        const bool branch_taken_0x276eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276eb0) {
            ctx->pc = 0x277030u;
            goto label_277030;
        }
    }
    ctx->pc = 0x276EB8u;
label_276eb8:
    // 0x276eb8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276ebc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276ec0: 0x2442d240  addiu       $v0, $v0, -0x2DC0
    ctx->pc = 0x276ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955584));
    // 0x276ec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276ec8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x276ec8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276ecc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x276eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276ed0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x276ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x276ed4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x276ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x276ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276edc: 0x0  nop
    ctx->pc = 0x276edcu;
    // NOP
    // 0x276ee0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x276ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x276ee4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x276ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x276ee8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276ee8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276eec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x276eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276ef0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276ef0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276ef4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276EF4u;
    SET_GPR_U32(ctx, 31, 0x276EFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276EF4u, 0x276EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276EFCu;
label_276efc:
    // 0x276efc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x276efcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x276f00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276F00u;
    SET_GPR_U32(ctx, 31, 0x276F08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276F00u, 0x276F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F08u;
label_276f08:
    // 0x276f08: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276f0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276f10: 0x2442d240  addiu       $v0, $v0, -0x2DC0
    ctx->pc = 0x276f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955584));
    // 0x276f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276f18: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x276f18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276f1c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x276f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276f20: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x276f20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x276f24: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276F24u;
    SET_GPR_U32(ctx, 31, 0x276F2Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276F24u, 0x276F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F2Cu;
label_276f2c:
    // 0x276f2c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x276f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x276f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276f34: 0x0  nop
    ctx->pc = 0x276f34u;
    // NOP
    // 0x276f38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276f3c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x276f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276f40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276f44: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x276f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x276f48: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276F48u;
    SET_GPR_U32(ctx, 31, 0x276F50u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276F48u, 0x276F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F50u;
label_276f50:
    // 0x276f50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x276f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x276f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276f58: 0x0  nop
    ctx->pc = 0x276f58u;
    // NOP
    // 0x276f5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276f5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276f60: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x276f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276f64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276f68: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x276f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x276f6c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276F6Cu;
    SET_GPR_U32(ctx, 31, 0x276F74u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276F6Cu, 0x276F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F74u;
label_276f74:
    // 0x276f74: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x276f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x276f78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276f7c: 0x0  nop
    ctx->pc = 0x276f7cu;
    // NOP
    // 0x276f80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276f84: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x276f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276f88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276f8c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x276f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x276f90: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x276f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x276f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276f98: 0x0  nop
    ctx->pc = 0x276f98u;
    // NOP
    // 0x276f9c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x276f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x276fa0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x276fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x276fa4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276fa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276fa8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x276fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276fac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276facu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276fb0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276FB0u;
    SET_GPR_U32(ctx, 31, 0x276FB8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276FB0u, 0x276FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FB8u;
label_276fb8:
    // 0x276fb8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x276fb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x276fbc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276FBCu;
    SET_GPR_U32(ctx, 31, 0x276FC4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276FBCu, 0x276FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FC4u;
label_276fc4:
    // 0x276fc4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276fc8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276fcc: 0x2442d240  addiu       $v0, $v0, -0x2DC0
    ctx->pc = 0x276fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955584));
    // 0x276fd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276fd4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x276fd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276fd8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x276fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276fdc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x276fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x276fe0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x276fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276fe4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x276fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x276fe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276fec: 0x0  nop
    ctx->pc = 0x276fecu;
    // NOP
    // 0x276ff0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x276ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276ff4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x276ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x276ff8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x276ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x276ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277000: 0x0  nop
    ctx->pc = 0x277000u;
    // NOP
    // 0x277004: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x277004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x277008: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x277008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x27700c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27700cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277010: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x277010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277014: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277014u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277018: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x277018u;
    SET_GPR_U32(ctx, 31, 0x277020u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x277018u, 0x277020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277020u;
label_277020:
    // 0x277020: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x277020u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x277024: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x277024u;
    SET_GPR_U32(ctx, 31, 0x27702Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x277024u, 0x27702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27702Cu;
label_27702c:
    // 0x27702c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27702cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_277030:
    // 0x277030: 0x1200ffa1  beqz        $s0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x277030u;
    {
        const bool branch_taken_0x277030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x277030) {
            ctx->pc = 0x276EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276eb8;
        }
    }
    ctx->pc = 0x277038u;
    // 0x277038: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x277038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27703c: 0x2442d240  addiu       $v0, $v0, -0x2DC0
    ctx->pc = 0x27703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955584));
    // 0x277040: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x277040u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38D240u));
    // 0x277044: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x277044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277048: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x277048u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27704c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x27704cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x277050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277054: 0x0  nop
    ctx->pc = 0x277054u;
    // NOP
    // 0x277058: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x277058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27705c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x27705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x277060: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x277060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277064: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x277064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277068: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277068u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27706c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27706Cu;
    SET_GPR_U32(ctx, 31, 0x277074u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27706Cu, 0x277074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277074u;
label_277074:
    // 0x277074: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x277074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x277078: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x277078u;
    SET_GPR_U32(ctx, 31, 0x277080u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x277078u, 0x277080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277080u;
label_277080:
    // 0x277080: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277084: 0xac2219fc  sw          $v0, 0x19FC($at)
    ctx->pc = 0x277084u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6219FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6219FCu, _value); } while (0);
    // 0x277088: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x277088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27708c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27708cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277090: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x277090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277094: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277094u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277098: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x277098u;
    SET_GPR_U32(ctx, 31, 0x2770A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x277098u, 0x2770A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770A0u;
label_2770a0:
    // 0x2770a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2770a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2770a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2770A4u;
    SET_GPR_U32(ctx, 31, 0x2770ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2770A4u, 0x2770ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770ACu;
label_2770ac:
    // 0x2770ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2770acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2770b0: 0xac221a00  sw          $v0, 0x1A00($at)
    ctx->pc = 0x2770b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A00u, _value); } while (0);
    // 0x2770b4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2770b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2770b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2770b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2770bc: 0x0  nop
    ctx->pc = 0x2770bcu;
    // NOP
    // 0x2770c0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2770c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2770c4: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x2770c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x2770c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2770c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2770cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2770ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2770d0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2770d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2770d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2770D4u;
    SET_GPR_U32(ctx, 31, 0x2770DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2770D4u, 0x2770DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770DCu;
label_2770dc:
    // 0x2770dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2770dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2770e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2770E0u;
    SET_GPR_U32(ctx, 31, 0x2770E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2770E0u, 0x2770E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770E8u;
label_2770e8:
    // 0x2770e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2770e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2770ec: 0xac221a04  sw          $v0, 0x1A04($at)
    ctx->pc = 0x2770ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A04u, _value); } while (0);
    // 0x2770f0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2770f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2770f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2770f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2770f8: 0x0  nop
    ctx->pc = 0x2770f8u;
    // NOP
    // 0x2770fc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2770fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x277100: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x277100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x277104: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x277104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277108: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x277108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27710c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27710cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277110: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x277110u;
    SET_GPR_U32(ctx, 31, 0x277118u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x277110u, 0x277118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277118u;
label_277118:
    // 0x277118: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x277118u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27711c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27711Cu;
    SET_GPR_U32(ctx, 31, 0x277124u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27711Cu, 0x277124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277124u;
label_277124:
    // 0x277124: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277128: 0xac221a08  sw          $v0, 0x1A08($at)
    ctx->pc = 0x277128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A08u, _value); } while (0);
    // 0x27712c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x27712cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x277130: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x277130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277134: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x277134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277138: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277138u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27713c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27713Cu;
    SET_GPR_U32(ctx, 31, 0x277144u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27713Cu, 0x277144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277144u;
label_277144:
    // 0x277144: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x277144u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x277148: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x277148u;
    SET_GPR_U32(ctx, 31, 0x277150u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x277148u, 0x277150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277150u;
label_277150:
    // 0x277150: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277154: 0xac221a0c  sw          $v0, 0x1A0C($at)
    ctx->pc = 0x277154u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A0Cu, _value); } while (0);
    // 0x277158: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x277158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27715c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27715cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277160: 0x0  nop
    ctx->pc = 0x277160u;
    // NOP
    // 0x277164: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x277164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x277168: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x277168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x27716c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27716cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277170: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x277170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277174: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277174u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277178: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x277178u;
    SET_GPR_U32(ctx, 31, 0x277180u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x277178u, 0x277180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277180u;
label_277180:
    // 0x277180: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x277180u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x277184: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x277184u;
    SET_GPR_U32(ctx, 31, 0x27718Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x277184u, 0x27718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27718Cu;
label_27718c:
    // 0x27718c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27718cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277190: 0xac221a10  sw          $v0, 0x1A10($at)
    ctx->pc = 0x277190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A10u, _value); } while (0);
    // 0x277194: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x277194u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277198: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x277198u;
    {
        const bool branch_taken_0x277198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277198) {
            ctx->pc = 0x2771D8u;
            goto label_2771d8;
        }
    }
    ctx->pc = 0x2771A0u;
label_2771a0:
    // 0x2771a0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2771a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2771a4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2771a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2771a8: 0x2442d270  addiu       $v0, $v0, -0x2D90
    ctx->pc = 0x2771a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955632));
    // 0x2771ac: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2771acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2771b0: 0x24042602  addiu       $a0, $zero, 0x2602
    ctx->pc = 0x2771b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9730));
    // 0x2771b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2771b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2771b8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2771b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2771bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2771BCu;
    SET_GPR_U32(ctx, 31, 0x2771C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2771BCu, 0x2771C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771C4u;
label_2771c4:
    // 0x2771c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2771c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2771c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2771C8u;
    SET_GPR_U32(ctx, 31, 0x2771D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2771C8u, 0x2771D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771D0u;
label_2771d0:
    // 0x2771d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2771d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2771d4: 0x0  nop
    ctx->pc = 0x2771d4u;
    // NOP
label_2771d8:
    // 0x2771d8: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x2771d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2771dc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2771DCu;
    {
        const bool branch_taken_0x2771dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2771dc) {
            ctx->pc = 0x2771A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2771a0;
        }
    }
    ctx->pc = 0x2771E4u;
    // 0x2771e4: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x2771e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2771e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2771e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2771ec: 0x2445d2b0  addiu       $a1, $v0, -0x2D50
    ctx->pc = 0x2771ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955696));
    // 0x2771f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2771f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2771f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2771f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2771f8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2771f8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2771fc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2771FCu;
    SET_GPR_U32(ctx, 31, 0x277204u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2771FCu, 0x277204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277204u;
label_277204:
    // 0x277204: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x277204u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27720c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27720cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x277210: 0x3e00008  jr          $ra
    ctx->pc = 0x277210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277218u;
}
