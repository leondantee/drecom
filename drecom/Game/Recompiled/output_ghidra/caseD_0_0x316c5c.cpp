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

// Function: caseD_0
// Address: 0x316c5c - 0x316d90
void caseD_0_0x316c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x316c5c");
#endif

    switch (ctx->pc) {
        case 0x316ce8u: goto label_316ce8;
        case 0x316cf4u: goto label_316cf4;
        case 0x316d74u: goto label_316d74;
        case 0x316d80u: goto label_316d80;
        default: break;
    }

    ctx->pc = 0x316c5cu;

    // 0x316c5c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316c60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x316c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x316c64: 0x34470002  ori         $a3, $v0, 0x2
    ctx->pc = 0x316c64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x316c68: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x316c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x316c6c: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x316c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x316c70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316c70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316c74: 0x0  nop
    ctx->pc = 0x316c74u;
    // NOP
    // 0x316c78: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x316c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x316c7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316c80: 0x0  nop
    ctx->pc = 0x316c80u;
    // NOP
    // 0x316c84: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x316c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x316c88: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x316c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x316c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316c90: 0x0  nop
    ctx->pc = 0x316c90u;
    // NOP
    // 0x316c94: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x316c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x316c98: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x316c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x316c9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316c9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316ca0: 0x0  nop
    ctx->pc = 0x316ca0u;
    // NOP
    // 0x316ca4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x316ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x316ca8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x316ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316cac: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x316cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x316cb0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x316cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x316cb4: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x316cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316cb8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x316cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316cbc: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x316cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x316cc0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x316cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x316cc4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x316cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x316cc8: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x316cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x316ccc: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x316cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x316cd0: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x316cd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x316cd4: 0x24044800  addiu       $a0, $zero, 0x4800
    ctx->pc = 0x316cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
    // 0x316cd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x316cd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x316cdc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x316cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x316ce0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x316CE0u;
    SET_GPR_U32(ctx, 31, 0x316CE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x316CE0u, 0x316CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316CE8u;
label_316ce8:
    // 0x316ce8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x316ce8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x316cec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x316CECu;
    SET_GPR_U32(ctx, 31, 0x316CF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x316CECu, 0x316CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316CF4u;
label_316cf4:
    // 0x316cf4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x316cf4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x316cf8: 0x3c04c396  lui         $a0, 0xC396
    ctx->pc = 0x316cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50070 << 16));
    // 0x316cfc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316cfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316d00: 0x0  nop
    ctx->pc = 0x316d00u;
    // NOP
    // 0x316d04: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x316d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x316d08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316d0c: 0x0  nop
    ctx->pc = 0x316d0cu;
    // NOP
    // 0x316d10: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x316d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x316d14: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x316d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x316d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316d1c: 0x0  nop
    ctx->pc = 0x316d1cu;
    // NOP
    // 0x316d20: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x316d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x316d24: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x316d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
    // 0x316d28: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x316d28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316d2c: 0x0  nop
    ctx->pc = 0x316d2cu;
    // NOP
    // 0x316d30: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x316d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x316d34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x316d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316d38: 0x8c641298  lw          $a0, 0x1298($v1)
    ctx->pc = 0x316d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4760)));
    // 0x316d3c: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x316d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x316d40: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x316d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316d44: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x316d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316d48: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x316d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x316d4c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x316d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x316d50: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x316d50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x316d54: 0x81438  dsll        $v0, $t0, 16
    ctx->pc = 0x316d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 16);
    // 0x316d58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x316d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x316d5c: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x316d5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x316d60: 0x24044800  addiu       $a0, $zero, 0x4800
    ctx->pc = 0x316d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
    // 0x316d64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x316d64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x316d68: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x316d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x316d6c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x316D6Cu;
    SET_GPR_U32(ctx, 31, 0x316D74u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x316D6Cu, 0x316D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316D74u;
label_316d74:
    // 0x316d74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x316d74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x316d78: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x316D78u;
    SET_GPR_U32(ctx, 31, 0x316D80u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x316D78u, 0x316D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316D80u;
label_316d80:
    // 0x316d80: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x316d80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316d84: 0x91040002  lbu         $a0, 0x2($t0)
    ctx->pc = 0x316d84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x316d88: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x316d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x316d8c: 0xa1060002  sb          $a2, 0x2($t0)
    ctx->pc = 0x316d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x316d90u;
}
