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

// Function: entry_00354c00
// Address: 0x354c00 - 0x354d30
void entry_00354c00_0x354c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00354c00_0x354c00");
#endif

    switch (ctx->pc) {
        case 0x354c94u: goto label_354c94;
        case 0x354d08u: goto label_354d08;
        case 0x354d10u: goto label_354d10;
        default: break;
    }

    ctx->pc = 0x354c00u;

    // 0x354c00: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x354c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354c04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x354c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x354c08: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x354c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x354c0c: 0x9063010c  lbu         $v1, 0x10C($v1)
    ctx->pc = 0x354c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x354c10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x354c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x354c14: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x354c14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x354c18: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x354c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354c1c: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x354c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x354c20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x354c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x354c24: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x354c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x354c28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354c2c: 0x0  nop
    ctx->pc = 0x354c2cu;
    // NOP
    // 0x354c30: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x354c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x354c34: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x354c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x354c38: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x354c38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354c3c: 0x0  nop
    ctx->pc = 0x354c3cu;
    // NOP
    // 0x354c40: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x354c40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x354c44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354c48: 0x0  nop
    ctx->pc = 0x354c48u;
    // NOP
    // 0x354c4c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x354c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x354c50: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x354c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x354c54: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x354c54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354c58: 0x0  nop
    ctx->pc = 0x354c58u;
    // NOP
    // 0x354c5c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x354c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x354c60: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x354c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x354c64: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x354c64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x354c68: 0x0  nop
    ctx->pc = 0x354c68u;
    // NOP
    // 0x354c6c: 0xe7ac00e0  swc1        $f12, 0xE0($sp)
    ctx->pc = 0x354c6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x354c70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x354c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354c74: 0xa7a300e4  sh          $v1, 0xE4($sp)
    ctx->pc = 0x354c74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 228), (uint16_t)GPR_U32(ctx, 3));
    // 0x354c78: 0xa3a000e6  sb          $zero, 0xE6($sp)
    ctx->pc = 0x354c78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 230), (uint8_t)GPR_U32(ctx, 0));
    // 0x354c7c: 0xa3a000e7  sb          $zero, 0xE7($sp)
    ctx->pc = 0x354c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 231), (uint8_t)GPR_U32(ctx, 0));
    // 0x354c80: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x354c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354c84: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x354c84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x354c88: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x354c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x354c8c: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x354C8Cu;
    SET_GPR_U32(ctx, 31, 0x354C94u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x354C8Cu, 0x354C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354C94u;
label_354c94:
    // 0x354c94: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x354C94u;
    {
        const bool branch_taken_0x354c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354c94) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x354C9Cu;
    // 0x354c9c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x354c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x354ca0: 0x0  nop
    ctx->pc = 0x354ca0u;
    // NOP
    // 0x354ca4: 0xe7ad00f0  swc1        $f13, 0xF0($sp)
    ctx->pc = 0x354ca4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x354ca8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x354ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354cac: 0x0  nop
    ctx->pc = 0x354cacu;
    // NOP
    // 0x354cb0: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x354cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x354cb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354cb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354cb8: 0x0  nop
    ctx->pc = 0x354cb8u;
    // NOP
    // 0x354cbc: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x354cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x354cc0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x354cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x354cc4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x354cc4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354cc8: 0x0  nop
    ctx->pc = 0x354cc8u;
    // NOP
    // 0x354ccc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x354cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x354cd0: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x354cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x354cd4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x354cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x354cd8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x354cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x354cdc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x354cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x354ce0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x354ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x354ce4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x354ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x354ce8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x354ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x354cec: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x354cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x354cf0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x354cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x354cf4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x354cf4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x354cf8: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x354cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x354cfc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x354cfcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x354d00: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x354D00u;
    SET_GPR_U32(ctx, 31, 0x354D08u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x354D00u, 0x354D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354D08u;
label_354d08:
    // 0x354d08: 0xc067694  jal         func_19DA50
    ctx->pc = 0x354D08u;
    SET_GPR_U32(ctx, 31, 0x354D10u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x354D08u, 0x354D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354D10u;
label_354d10:
    // 0x354d10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x354d10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354d14: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x354D14u;
    {
        const bool branch_taken_0x354d14 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x354d14) {
            ctx->pc = 0x354D30u;
            return;
        }
    }
    ctx->pc = 0x354D1Cu;
    // 0x354d1c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x354d1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x354d20: 0x0  nop
    ctx->pc = 0x354d20u;
    // NOP
    // 0x354d24: 0x46806b20  cvt.s.w     $f12, $f13
    ctx->pc = 0x354d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x354d28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x354D28u;
    {
        const bool branch_taken_0x354d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354d28) {
            ctx->pc = 0x354D4Cu;
            return;
        }
    }
    ctx->pc = 0x354D30u;
}
