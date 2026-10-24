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

// Function: Em0b_R1_dm03
// Address: 0x1f6990 - 0x1f70ac
void Em0b_R1_dm03_0x1f6990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_dm03_0x1f6990");
#endif

    switch (ctx->pc) {
        case 0x1f6a2cu: goto label_1f6a2c;
        case 0x1f6ac0u: goto label_1f6ac0;
        case 0x1f6ac8u: goto label_1f6ac8;
        case 0x1f6afcu: goto label_1f6afc;
        case 0x1f6b28u: goto label_1f6b28;
        case 0x1f6b9cu: goto label_1f6b9c;
        case 0x1f6d38u: goto label_1f6d38;
        case 0x1f6d84u: goto label_1f6d84;
        case 0x1f6da0u: goto label_1f6da0;
        case 0x1f6db8u: goto label_1f6db8;
        case 0x1f6dc4u: goto label_1f6dc4;
        case 0x1f6e0cu: goto label_1f6e0c;
        case 0x1f6e30u: goto label_1f6e30;
        default: break;
    }

    ctx->pc = 0x1f6990u;

    // 0x1f6990: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f6990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f6994: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1f6994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1f6998: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f6998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f699c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f699cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f69a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f69a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f69a4: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1f69a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x1f69a8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1f69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1f69ac: 0x2472dbc0  addiu       $s2, $v1, -0x2440
    ctx->pc = 0x1f69acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x1f69b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f69b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f69b4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f69b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f69b8: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f69b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f69bc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1f69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1f69c0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1f69c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f69c4: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f69c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f69c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f69cc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f69ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f69d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f69d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f69d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f69d8: 0x10830099  beq         $a0, $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x1F69D8u;
    {
        const bool branch_taken_0x1f69d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f69d8) {
            ctx->pc = 0x1F6C40u;
            goto label_1f6c40;
        }
    }
    ctx->pc = 0x1F69E0u;
    // 0x1f69e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F69E0u;
    {
        const bool branch_taken_0x1f69e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f69e0) {
            ctx->pc = 0x1F69F0u;
            goto label_1f69f0;
        }
    }
    ctx->pc = 0x1F69E8u;
    // 0x1f69e8: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x1F69E8u;
    {
        const bool branch_taken_0x1f69e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f69e8) {
            ctx->pc = 0x1F6E50u;
            goto label_1f6e50;
        }
    }
    ctx->pc = 0x1F69F0u;
label_1f69f0:
    // 0x1f69f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f69f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f69f4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1f69f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f69f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f69fc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1f69fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6a00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6a04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a08: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1f6a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1f6a0c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a10: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1f6a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f6a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f6a18: 0x24060f0c  addiu       $a2, $zero, 0xF0C
    ctx->pc = 0x1f6a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3852));
    // 0x1f6a1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f6a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6a20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f6a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f6a24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F6A24u;
    SET_GPR_U32(ctx, 31, 0x1F6A2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F6A24u, 0x1F6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A2Cu;
label_1f6a2c:
    // 0x1f6a2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6a2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6a30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6a38: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f6a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f6a3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6a40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6a48: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f6a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f6a4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6a50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a54: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6a58: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f6a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f6a5c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f6a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6a64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6a6c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f6a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f6a70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a74: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1f6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f6a78: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x1f6a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f6a7c: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x1f6a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f6a80: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1f6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f6a84: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1f6a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1f6a88: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1f6a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1f6a8c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1f6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1f6a90: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1f6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f6a94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1f6a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1f6a98: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1f6a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1f6a9c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f6a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f6aa0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f6aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f6aa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f6aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6aa8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6aac: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x1f6aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x1f6ab0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f6ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f6ab4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f6ab4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6ab8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F6AB8u;
    SET_GPR_U32(ctx, 31, 0x1F6AC0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F6AB8u, 0x1F6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AC0u;
label_1f6ac0:
    // 0x1f6ac0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F6AC0u;
    SET_GPR_U32(ctx, 31, 0x1F6AC8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F6AC0u, 0x1F6AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AC8u;
label_1f6ac8:
    // 0x1f6ac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f6ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f6acc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f6accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f6ad0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6AD0u;
    {
        const bool branch_taken_0x1f6ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6ad0) {
            ctx->pc = 0x1F6B04u;
            goto label_1f6b04;
        }
    }
    ctx->pc = 0x1F6AD8u;
    // 0x1f6ad8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f6adc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f6adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f6ae0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f6ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6ae4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6ae8: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x1f6ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1f6aec: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f6aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f6af0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f6af0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6af4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F6AF4u;
    SET_GPR_U32(ctx, 31, 0x1F6AFCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F6AF4u, 0x1F6AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AFCu;
label_1f6afc:
    // 0x1f6afc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F6AFCu;
    {
        const bool branch_taken_0x1f6afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6afc) {
            ctx->pc = 0x1F6B28u;
            goto label_1f6b28;
        }
    }
    ctx->pc = 0x1F6B04u;
label_1f6b04:
    // 0x1f6b04: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f6b08: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f6b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f6b0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f6b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6b10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6b14: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x1f6b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x1f6b18: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f6b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f6b1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f6b1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6b20: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F6B20u;
    SET_GPR_U32(ctx, 31, 0x1F6B28u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F6B20u, 0x1F6B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B28u;
label_1f6b28:
    // 0x1f6b28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6b2c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1f6b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6b30: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f6b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f6b34: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x1f6b34u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6b38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6b38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6b3c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1f6b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f6b40: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1f6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1f6b44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6b48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f6b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f6b4c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f6b4cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6b50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f6b50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f6b54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6b58: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1f6b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6b5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f6b5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f6b60: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1f6b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1f6b64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6b68: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1f6b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6b6c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f6b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f6b70: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x1f6b70u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6b74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6b74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6b78: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1f6b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f6b7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f6b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6b84: 0x0  nop
    ctx->pc = 0x1f6b84u;
    // NOP
    // 0x1f6b88: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1f6b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1f6b8c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f6b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f6b90: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f6b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f6b94: 0xc040c24  jal         func_103090
    ctx->pc = 0x1F6B94u;
    SET_GPR_U32(ctx, 31, 0x1F6B9Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1F6B9Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F6B9Cu) { return; }
    ctx->pc = 0x1F6B9Cu;
label_1f6b9c:
    // 0x1f6b9c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1f6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1f6ba0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6ba4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1f6ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6ba8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f6ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6bac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6bb0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6bb4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f6bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f6bb8: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1f6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1f6bbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6bc0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1f6bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6bc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f6bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6bc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6bcc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6bd0: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x1f6bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x1f6bd4: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1f6bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1f6bd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6bdc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1f6bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6be0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f6be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6be4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6be8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6bec: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x1f6becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x1f6bf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6bf4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6bf8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1f6bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f6bfc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1f6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1f6c00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6c04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6C04u;
    {
        const bool branch_taken_0x1f6c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6c04) {
            ctx->pc = 0x1F6C28u;
            goto label_1f6c28;
        }
    }
    ctx->pc = 0x1F6C0Cu;
    // 0x1f6c0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f6c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f6c10: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f6c10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f6c14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f6c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f6c18: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1f6c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1f6c1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6c20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f6c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f6c24: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1f6c24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_1f6c28:
    // 0x1f6c28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c2c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f6c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6c30: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f6c34: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x1f6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x1f6c38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6c3c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f6c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_1f6c40:
    // 0x1f6c40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6c48: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f6c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6c4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c50: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1f6c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6c54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6c58: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1f6c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1f6c5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6c64: 0xc441009c  lwc1        $f1, 0x9C($v0)
    ctx->pc = 0x1f6c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6c68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c6c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1f6c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6c70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6c74: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1f6c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1f6c78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6c80: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x1f6c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6c84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c88: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1f6c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6c8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6c90: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1f6c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1f6c94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c98: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6c9c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1f6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1f6ca0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1f6ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f6ca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6ca8: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f6ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6cac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6cb0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f6cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1f6cb4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6cb8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6cbc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1f6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1f6cc0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1f6cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f6cc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6cc8: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f6cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6ccc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6cd0: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f6cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x1f6cd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6cd8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6cdc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1f6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1f6ce0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1f6ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f6ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6ce8: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f6ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6cec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6cf0: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f6cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x1f6cf4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6cf8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6cfc: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f6cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f6d00: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f6d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f6d04: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F6D04u;
    {
        const bool branch_taken_0x1f6d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6d04) {
            ctx->pc = 0x1F6D44u;
            goto label_1f6d44;
        }
    }
    ctx->pc = 0x1F6D0Cu;
    // 0x1f6d0c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1f6d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6d10: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1f6d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6d14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6d18: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6d1c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f6d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f6d20: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f6d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6d24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f6d28: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f6d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f6d2c: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f6d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f6d30: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F6D30u;
    SET_GPR_U32(ctx, 31, 0x1F6D38u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F6D30u, 0x1F6D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D38u;
label_1f6d38:
    // 0x1f6d38: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1f6d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1f6d3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F6D3Cu;
    {
        const bool branch_taken_0x1f6d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6d3c) {
            ctx->pc = 0x1F6D88u;
            goto label_1f6d88;
        }
    }
    ctx->pc = 0x1F6D44u;
label_1f6d44:
    // 0x1f6d44: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1f6d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6d48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6d4c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f6d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6d50: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1f6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1f6d54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f6d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f6d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6d5c: 0x0  nop
    ctx->pc = 0x1f6d5cu;
    // NOP
    // 0x1f6d60: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f6d60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6d64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6d68: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6d6c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f6d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f6d70: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f6d74: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f6d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f6d78: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f6d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f6d7c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F6D7Cu;
    SET_GPR_U32(ctx, 31, 0x1F6D84u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F6D7Cu, 0x1F6D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D84u;
label_1f6d84:
    // 0x1f6d84: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1f6d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1f6d88:
    // 0x1f6d88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6d8c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f6d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6d90: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1f6d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6d94: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f6d94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f6d98: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F6D98u;
    SET_GPR_U32(ctx, 31, 0x1F6DA0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F6D98u, 0x1F6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DA0u;
label_1f6da0:
    // 0x1f6da0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6da4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f6da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f6da8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1f6da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6dac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f6dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f6db0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F6DB0u;
    SET_GPR_U32(ctx, 31, 0x1F6DB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F6DB0u, 0x1F6DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DB8u;
label_1f6db8:
    // 0x1f6db8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1f6db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6dbc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F6DBCu;
    SET_GPR_U32(ctx, 31, 0x1F6DC4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F6DBCu, 0x1F6DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DC4u;
label_1f6dc4:
    // 0x1f6dc4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6dc8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f6dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f6dcc: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F6DCCu;
    {
        const bool branch_taken_0x1f6dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6dcc) {
            ctx->pc = 0x1F6E50u;
            goto label_1f6e50;
        }
    }
    ctx->pc = 0x1F6DD4u;
    // 0x1f6dd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f6dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6dd8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6ddc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f6ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6de0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6de4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6de8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f6de8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6dec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6df0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f6df0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6df4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6df8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f6df8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6dfc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e00: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f6e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f6e04: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F6E04u;
    SET_GPR_U32(ctx, 31, 0x1F6E0Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F6E04u, 0x1F6E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E0Cu;
label_1f6e0c:
    // 0x1f6e0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f6e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f6e10: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f6e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f6e14: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f6e18: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f6e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f6e1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f6e1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f6e20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e24: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f6e24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f6e28: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F6E28u;
    SET_GPR_U32(ctx, 31, 0x1F6E30u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F6E28u, 0x1F6E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E30u;
label_1f6e30:
    // 0x1f6e30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f6e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f6e34: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1f6e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1f6e38: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f6e3c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f6e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f6e40: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f6e40u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f6e44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6e4c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f6e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_1f6e50:
    // 0x1f6e50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6e58: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1f6e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f6e5c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1f6e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1f6e60: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1F6E60u;
    {
        const bool branch_taken_0x1f6e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e60) {
            ctx->pc = 0x1F7090u;
            goto label_1f7090;
        }
    }
    ctx->pc = 0x1F6E68u;
    // 0x1f6e68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6e70: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f6e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6e74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e78: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6e7c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f6e7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6e80: 0x0  nop
    ctx->pc = 0x1f6e80u;
    // NOP
    // 0x1f6e84: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1F6E84u;
    {
        const bool branch_taken_0x1f6e84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6e84) {
            ctx->pc = 0x1F6F7Cu;
            goto label_1f6f7c;
        }
    }
    ctx->pc = 0x1F6E8Cu;
    // 0x1f6e8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6e94: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f6e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6e98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e9c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6ea0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f6ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6ea4: 0x0  nop
    ctx->pc = 0x1f6ea4u;
    // NOP
    // 0x1f6ea8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F6EA8u;
    {
        const bool branch_taken_0x1f6ea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6ea8) {
            ctx->pc = 0x1F6F04u;
            goto label_1f6f04;
        }
    }
    ctx->pc = 0x1F6EB0u;
    // 0x1f6eb0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6eb4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6eb8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f6eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6ebc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6ec0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6ec4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6ec8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f6ecc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6ed0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6ed4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f6ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6ed8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6edc: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6ee0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f6ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6ee4: 0x0  nop
    ctx->pc = 0x1f6ee4u;
    // NOP
    // 0x1f6ee8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6EE8u;
    {
        const bool branch_taken_0x1f6ee8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6ee8) {
            ctx->pc = 0x1F6F04u;
            goto label_1f6f04;
        }
    }
    ctx->pc = 0x1F6EF0u;
    // 0x1f6ef0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6ef4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6ef8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f6ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6efc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f00: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1f6f04:
    // 0x1f6f04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6f0c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f6f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6f10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f14: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6f1c: 0x0  nop
    ctx->pc = 0x1f6f1cu;
    // NOP
    // 0x1f6f20: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F6F20u;
    {
        const bool branch_taken_0x1f6f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6f20) {
            ctx->pc = 0x1F6F7Cu;
            goto label_1f6f7c;
        }
    }
    ctx->pc = 0x1F6F28u;
    // 0x1f6f28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6f30: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f6f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6f34: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f38: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6f40: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f6f44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6f4c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f6f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6f50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f54: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6f5c: 0x0  nop
    ctx->pc = 0x1f6f5cu;
    // NOP
    // 0x1f6f60: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6F60u;
    {
        const bool branch_taken_0x1f6f60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6f60) {
            ctx->pc = 0x1F6F7Cu;
            goto label_1f6f7c;
        }
    }
    ctx->pc = 0x1F6F68u;
    // 0x1f6f68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6f70: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f6f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f78: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1f6f7c:
    // 0x1f6f7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6f84: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f6f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6f88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f8c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f90: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f6f90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6f94: 0x0  nop
    ctx->pc = 0x1f6f94u;
    // NOP
    // 0x1f6f98: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1F6F98u;
    {
        const bool branch_taken_0x1f6f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6f98) {
            ctx->pc = 0x1F7090u;
            goto label_1f7090;
        }
    }
    ctx->pc = 0x1F6FA0u;
    // 0x1f6fa0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6fa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6fa8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f6fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6fac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6fb0: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6fb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f6fb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6fb8: 0x0  nop
    ctx->pc = 0x1f6fb8u;
    // NOP
    // 0x1f6fbc: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F6FBCu;
    {
        const bool branch_taken_0x1f6fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6fbc) {
            ctx->pc = 0x1F7018u;
            goto label_1f7018;
        }
    }
    ctx->pc = 0x1F6FC4u;
    // 0x1f6fc4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6fc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6fcc: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1f6fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6fd0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6fd4: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6fd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6fdc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f6fe0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6fe4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6fe8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f6fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6fec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6ff0: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6ff4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f6ff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6ff8: 0x0  nop
    ctx->pc = 0x1f6ff8u;
    // NOP
    // 0x1f6ffc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6FFCu;
    {
        const bool branch_taken_0x1f6ffc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6ffc) {
            ctx->pc = 0x1F7018u;
            goto label_1f7018;
        }
    }
    ctx->pc = 0x1F7004u;
    // 0x1f7004: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7008: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f700c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7010: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7014: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f7014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_1f7018:
    // 0x1f7018: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f701c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f701cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7020: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f7020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7024: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7028: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f7028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f702c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f702cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7030: 0x0  nop
    ctx->pc = 0x1f7030u;
    // NOP
    // 0x1f7034: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F7034u;
    {
        const bool branch_taken_0x1f7034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7034) {
            ctx->pc = 0x1F7090u;
            goto label_1f7090;
        }
    }
    ctx->pc = 0x1F703Cu;
    // 0x1f703c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7040: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7044: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f7044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7048: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f704c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7050: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f7050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f7054: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f7054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f7058: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f705c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f705cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7060: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f7060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7064: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7068: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f7068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f706c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f706cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7070: 0x0  nop
    ctx->pc = 0x1f7070u;
    // NOP
    // 0x1f7074: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7074u;
    {
        const bool branch_taken_0x1f7074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7074) {
            ctx->pc = 0x1F7090u;
            goto label_1f7090;
        }
    }
    ctx->pc = 0x1F707Cu;
    // 0x1f707c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7080: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7084: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f7084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7088: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f708c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f708cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_1f7090:
    // 0x1f7090: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1f7090u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f7094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f7098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f709c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f709cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f70a0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1f70a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f70a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F70A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F70A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F70ACu;
}
