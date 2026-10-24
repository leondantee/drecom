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
// Address: 0x2a5c70 - 0x2a5ed8
void caseD_2_0x2a5c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x2a5c70");
#endif

    switch (ctx->pc) {
        case 0x2a5c88u: goto label_2a5c88;
        case 0x2a5cb0u: goto label_2a5cb0;
        case 0x2a5cc0u: goto label_2a5cc0;
        case 0x2a5cccu: goto label_2a5ccc;
        case 0x2a5d20u: goto label_2a5d20;
        case 0x2a5d40u: goto label_2a5d40;
        case 0x2a5d50u: goto label_2a5d50;
        case 0x2a5d60u: goto label_2a5d60;
        case 0x2a5e20u: goto label_2a5e20;
        case 0x2a5e5cu: goto label_2a5e5c;
        case 0x2a5e94u: goto label_2a5e94;
        case 0x2a5ed0u: goto label_2a5ed0;
        default: break;
    }

    ctx->pc = 0x2a5c70u;

    // 0x2a5c70: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5c74: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2a5c74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a5c78: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a5c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a5c7c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2a5c7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a5c80: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A5C80u;
    SET_GPR_U32(ctx, 31, 0x2A5C88u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A5C80u, 0x2A5C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C88u;
label_2a5c88:
    // 0x2a5c88: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5c8c: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a5c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5c90: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a5c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5c94: 0x24480120  addiu       $t0, $v0, 0x120
    ctx->pc = 0x2a5c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a5c98: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a5c98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a5c9c: 0x24c20120  addiu       $v0, $a2, 0x120
    ctx->pc = 0x2a5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x2a5ca0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a5ca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5ca4: 0x24e60180  addiu       $a2, $a3, 0x180
    ctx->pc = 0x2a5ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 384));
    // 0x2a5ca8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A5CA8u;
    SET_GPR_U32(ctx, 31, 0x2A5CB0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A5CA8u, 0x2A5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CB0u;
label_2a5cb0:
    // 0x2a5cb0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5cb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5cb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a5cb8: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A5CB8u;
    SET_GPR_U32(ctx, 31, 0x2A5CC0u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A5CB8u, 0x2A5CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CC0u;
label_2a5cc0:
    // 0x2a5cc0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5cc4: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A5CC4u;
    SET_GPR_U32(ctx, 31, 0x2A5CCCu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A5CC4u, 0x2A5CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CCCu;
label_2a5ccc:
    // 0x2a5ccc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a5cccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5cd0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a5cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5cd4: 0x24a51330  addiu       $a1, $a1, 0x1330
    ctx->pc = 0x2a5cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2a5cd8: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2a5cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5cdc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5ce0: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2a5ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5ce4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a5ce4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5ce8: 0x0  nop
    ctx->pc = 0x2a5ce8u;
    // NOP
    // 0x2a5cec: 0x450001d9  bc1f        . + 4 + (0x1D9 << 2)
    ctx->pc = 0x2A5CECu;
    {
        const bool branch_taken_0x2a5cec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5cec) {
            ctx->pc = 0x2A6454u;
            return;
        }
    }
    ctx->pc = 0x2A5CF4u;
    // 0x2a5cf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2a5cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a5cf8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5cfc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a5cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a5d00: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5d04: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5d08: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2a5d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2a5d0c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2a5d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a5d10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5d14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a5d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a5d18: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A5D18u;
    SET_GPR_U32(ctx, 31, 0x2A5D20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A5D18u, 0x2A5D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D20u;
label_2a5d20:
    // 0x2a5d20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5d20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5d24: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5d28: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x2a5d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2a5d2c: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x2A5D2Cu;
    {
        const bool branch_taken_0x2a5d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5d2c) {
            ctx->pc = 0x2A5ED8u;
            return;
        }
    }
    ctx->pc = 0x2A5D34u;
    // 0x2a5d34: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2a5d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a5d38: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A5D38u;
    SET_GPR_U32(ctx, 31, 0x2A5D40u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A5D38u, 0x2A5D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D40u;
label_2a5d40:
    // 0x2a5d40: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a5d40u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5d44: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a5d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a5d48: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A5D48u;
    SET_GPR_U32(ctx, 31, 0x2A5D50u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A5D48u, 0x2A5D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D50u;
label_2a5d50:
    // 0x2a5d50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a5d50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5d54: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2a5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a5d58: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A5D58u;
    SET_GPR_U32(ctx, 31, 0x2A5D60u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A5D58u, 0x2A5D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D60u;
label_2a5d60:
    // 0x2a5d60: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2a5d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5d68: 0x0  nop
    ctx->pc = 0x2a5d68u;
    // NOP
    // 0x2a5d6c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2a5d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2a5d70: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a5d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5d78: 0x0  nop
    ctx->pc = 0x2a5d78u;
    // NOP
    // 0x2a5d7c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2a5d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2a5d80: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x2a5d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x2a5d84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a5d84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5d88: 0x0  nop
    ctx->pc = 0x2a5d88u;
    // NOP
    // 0x2a5d8c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2a5d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2a5d90: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2a5d90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x2a5d94: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a5d94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5d98: 0x0  nop
    ctx->pc = 0x2a5d98u;
    // NOP
    // 0x2a5d9c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2a5d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2a5da0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5da8: 0x0  nop
    ctx->pc = 0x2a5da8u;
    // NOP
    // 0x2a5dac: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2a5dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a5db0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5db8: 0x0  nop
    ctx->pc = 0x2a5db8u;
    // NOP
    // 0x2a5dbc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a5dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2a5dc0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a5dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5dc4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a5dc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5dc8: 0x0  nop
    ctx->pc = 0x2a5dc8u;
    // NOP
    // 0x2a5dcc: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2a5dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a5dd0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2a5dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5dd4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a5dd4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5dd8: 0x0  nop
    ctx->pc = 0x2a5dd8u;
    // NOP
    // 0x2a5ddc: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2a5ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2a5de0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5de4: 0x3446d70a  ori         $a2, $v0, 0xD70A
    ctx->pc = 0x2a5de4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a5de8: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a5de8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5dec: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x2a5decu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
    // 0x2a5df0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2a5df0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5df4: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a5df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5df8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a5df8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a5dfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5dfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a5e00: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a5e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a5e04: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a5e04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5e08: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a5e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a5e0c: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a5e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a5e10: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a5e10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a5e14: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x2a5e14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a5e18: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A5E18u;
    SET_GPR_U32(ctx, 31, 0x2A5E20u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5E18u, 0x2A5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E20u;
label_2a5e20:
    // 0x2a5e20: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a5e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a5e24: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a5e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5e28: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a5e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5e2c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a5e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a5e30: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a5e30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5e34: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5e38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a5e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5e3c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2a5e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a5e40: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a5e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a5e44: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a5e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a5e48: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a5e48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a5e4c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2a5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a5e50: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a5e50u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5e54: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A5E54u;
    SET_GPR_U32(ctx, 31, 0x2A5E5Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5E54u, 0x2A5E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E5Cu;
label_2a5e5c:
    // 0x2a5e5c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a5e60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a5e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5e64: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5e68: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a5e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a5e6c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a5e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5e70: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5e74: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a5e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a5e78: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2a5e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a5e7c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a5e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a5e80: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a5e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a5e84: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a5e84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a5e88: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x2a5e88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a5e8c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A5E8Cu;
    SET_GPR_U32(ctx, 31, 0x2A5E94u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5E8Cu, 0x2A5E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E94u;
label_2a5e94:
    // 0x2a5e94: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x2a5e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
    // 0x2a5e98: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2a5e98u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5e9c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5ea0: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x2a5ea0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a5ea4: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x2a5ea4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5ea8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5eac: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a5eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a5eb0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2a5eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a5eb4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a5eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a5eb8: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a5eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a5ebc: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2a5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a5ec0: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a5ec0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5ec4: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x2a5ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a5ec8: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A5EC8u;
    SET_GPR_U32(ctx, 31, 0x2A5ED0u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5EC8u, 0x2A5ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5ED0u;
label_2a5ed0:
    // 0x2a5ed0: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x2A5ED0u;
    {
        const bool branch_taken_0x2a5ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ed0) {
            ctx->pc = 0x2A6454u;
            return;
        }
    }
    ctx->pc = 0x2A5ED8u;
}
