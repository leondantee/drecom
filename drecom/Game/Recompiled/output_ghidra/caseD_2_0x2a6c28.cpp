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

// Function: caseD_2
// Address: 0x2a6c28 - 0x2a6eb4
void caseD_2_0x2a6c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x2a6c28");
#endif

    switch (ctx->pc) {
        case 0x2a6c40u: goto label_2a6c40;
        case 0x2a6c68u: goto label_2a6c68;
        case 0x2a6c7cu: goto label_2a6c7c;
        case 0x2a6c90u: goto label_2a6c90;
        case 0x2a6ce8u: goto label_2a6ce8;
        case 0x2a6d08u: goto label_2a6d08;
        case 0x2a6d18u: goto label_2a6d18;
        case 0x2a6d2cu: goto label_2a6d2c;
        case 0x2a6de8u: goto label_2a6de8;
        case 0x2a6e2cu: goto label_2a6e2c;
        case 0x2a6e68u: goto label_2a6e68;
        case 0x2a6eacu: goto label_2a6eac;
        default: break;
    }

    ctx->pc = 0x2a6c28u;

    // 0x2a6c28: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6c2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6c2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6c30: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a6c34: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2a6c34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a6c38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A6C38u;
    SET_GPR_U32(ctx, 31, 0x2A6C40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A6C38u, 0x2A6C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C40u;
label_2a6c40:
    // 0x2a6c40: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6c40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6c44: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6c48: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6c4c: 0x24e20120  addiu       $v0, $a3, 0x120
    ctx->pc = 0x2a6c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x2a6c50: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6c50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6c54: 0x24c20120  addiu       $v0, $a2, 0x120
    ctx->pc = 0x2a6c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x2a6c58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a6c58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6c5c: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a6c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a6c60: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A6C60u;
    SET_GPR_U32(ctx, 31, 0x2A6C68u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A6C60u, 0x2A6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C68u;
label_2a6c68:
    // 0x2a6c68: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6c6c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2a6c6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a6c70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6c70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a6c74: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A6C74u;
    SET_GPR_U32(ctx, 31, 0x2A6C7Cu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A6C74u, 0x2A6C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C7Cu;
label_2a6c7c:
    // 0x2a6c7c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6c7cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6c80: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6c84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6c84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6c88: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A6C88u;
    SET_GPR_U32(ctx, 31, 0x2A6C90u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A6C88u, 0x2A6C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C90u;
label_2a6c90:
    // 0x2a6c90: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6c90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6c94: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6c98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a6c9c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2a6c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6ca0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6ca4: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x2a6ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6ca8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a6ca8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a6cac: 0x0  nop
    ctx->pc = 0x2a6cacu;
    // NOP
    // 0x2a6cb0: 0x450001ed  bc1f        . + 4 + (0x1ED << 2)
    ctx->pc = 0x2A6CB0u;
    {
        const bool branch_taken_0x2a6cb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6cb0) {
            ctx->pc = 0x2A7468u;
            return;
        }
    }
    ctx->pc = 0x2A6CB8u;
    // 0x2a6cb8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a6cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a6cbc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6cc0: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x2a6cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a6cc4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6cc8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6ccc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a6cccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a6cd0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a6cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a6cd4: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2a6cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a6cd8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6cdc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a6cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a6ce0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A6CE0u;
    SET_GPR_U32(ctx, 31, 0x2A6CE8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A6CE0u, 0x2A6CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6CE8u;
label_2a6ce8:
    // 0x2a6ce8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6ce8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6cec: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6cf0: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x2a6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2a6cf4: 0x14a0006f  bnez        $a1, . + 4 + (0x6F << 2)
    ctx->pc = 0x2A6CF4u;
    {
        const bool branch_taken_0x2a6cf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6cf4) {
            ctx->pc = 0x2A6EB4u;
            return;
        }
    }
    ctx->pc = 0x2A6CFCu;
    // 0x2a6cfc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2a6cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a6d00: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A6D00u;
    SET_GPR_U32(ctx, 31, 0x2A6D08u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A6D00u, 0x2A6D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D08u;
label_2a6d08:
    // 0x2a6d08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6d08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6d0c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a6d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a6d10: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A6D10u;
    SET_GPR_U32(ctx, 31, 0x2A6D18u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A6D10u, 0x2A6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D18u;
label_2a6d18:
    // 0x2a6d18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6d18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6d1c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2a6d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a6d20: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a6d20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a6d24: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A6D24u;
    SET_GPR_U32(ctx, 31, 0x2A6D2Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A6D24u, 0x2A6D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D2Cu;
label_2a6d2c:
    // 0x2a6d2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6d2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6d30: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2a6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2a6d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a6d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6d38: 0x0  nop
    ctx->pc = 0x2a6d38u;
    // NOP
    // 0x2a6d3c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2a6d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2a6d40: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2a6d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2a6d44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a6d44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6d48: 0x0  nop
    ctx->pc = 0x2a6d48u;
    // NOP
    // 0x2a6d4c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2a6d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2a6d50: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2a6d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2a6d54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a6d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6d58: 0x0  nop
    ctx->pc = 0x2a6d58u;
    // NOP
    // 0x2a6d5c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2a6d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2a6d60: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x2a6d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x2a6d64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a6d64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6d68: 0x0  nop
    ctx->pc = 0x2a6d68u;
    // NOP
    // 0x2a6d6c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2a6d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2a6d70: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6d74: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a6d74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6d78: 0x0  nop
    ctx->pc = 0x2a6d78u;
    // NOP
    // 0x2a6d7c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2a6d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a6d80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a6d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6d84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6d88: 0x0  nop
    ctx->pc = 0x2a6d88u;
    // NOP
    // 0x2a6d8c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a6d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2a6d90: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a6d90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6d94: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a6d94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6d98: 0x0  nop
    ctx->pc = 0x2a6d98u;
    // NOP
    // 0x2a6d9c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2a6d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a6da0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2a6da0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6da4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a6da4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6da8: 0x0  nop
    ctx->pc = 0x2a6da8u;
    // NOP
    // 0x2a6dac: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2a6dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2a6db0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a6db4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a6db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6db8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a6dbc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a6dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a6dc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a6dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a6dc4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6dc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6dc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a6dcc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2a6dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a6dd0: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a6dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a6dd4: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a6dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a6dd8: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a6dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a6ddc: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x2a6ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a6de0: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A6DE0u;
    SET_GPR_U32(ctx, 31, 0x2A6DE8u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6DE0u, 0x2A6DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6DE8u;
label_2a6de8:
    // 0x2a6de8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a6dec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a6decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6df0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a6df4: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a6df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a6df8: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a6df8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a6dfc: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6e00: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a6e00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a6e04: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a6e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6e08: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a6e08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a6e0c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a6e10: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6e10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6e14: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a6e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a6e18: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a6e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a6e1c: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a6e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a6e20: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x2a6e20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a6e24: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A6E24u;
    SET_GPR_U32(ctx, 31, 0x2A6E2Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6E24u, 0x2A6E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E2Cu;
label_2a6e2c:
    // 0x2a6e2c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a6e30: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a6e30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6e34: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a6e38: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a6e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a6e3c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a6e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a6e40: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6e44: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a6e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a6e48: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2a6e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a6e4c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a6e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a6e50: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a6e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a6e54: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a6e54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a6e58: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2a6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a6e5c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a6e5cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6e60: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A6E60u;
    SET_GPR_U32(ctx, 31, 0x2A6E68u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6E60u, 0x2A6E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E68u;
label_2a6e68:
    // 0x2a6e68: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a6e6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a6e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6e70: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a6e74: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a6e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a6e78: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a6e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a6e7c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6e80: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a6e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a6e84: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a6e88: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6e88u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6e8c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a6e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a6e90: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2a6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a6e94: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2a6e94u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6e98: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a6e98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a6e9c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2a6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a6ea0: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a6ea0u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6ea4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A6EA4u;
    SET_GPR_U32(ctx, 31, 0x2A6EACu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6EA4u, 0x2A6EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EACu;
label_2a6eac:
    // 0x2a6eac: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x2A6EACu;
    {
        const bool branch_taken_0x2a6eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6eac) {
            ctx->pc = 0x2A7468u;
            return;
        }
    }
    ctx->pc = 0x2A6EB4u;
}
