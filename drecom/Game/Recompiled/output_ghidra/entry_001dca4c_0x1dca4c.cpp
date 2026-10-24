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

// Function: entry_001dca4c
// Address: 0x1dca4c - 0x1dcb18
void entry_001dca4c_0x1dca4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dca4c_0x1dca4c");
#endif

    switch (ctx->pc) {
        case 0x1dcae0u: goto label_1dcae0;
        default: break;
    }

    ctx->pc = 0x1dca4cu;

    // 0x1dca4c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dca4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dca50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dca50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dca54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dca58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dca58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dca5c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dca60: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dca64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dca68: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dca6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dca6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dca70: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1dca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dca74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dca74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dca78: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dca78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dca7c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dca80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dca80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dca84: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dca84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dca88: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dca88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dca8c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dca90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dca94: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x1dca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dca98: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1dca9c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dca9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dcaa0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dcaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dcaa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dcaa8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dcaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dcaac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dcaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dcab0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dcab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dcab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dcab8: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1dcab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1dcabc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dcabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dcac0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DCAC0u;
    {
        const bool branch_taken_0x1dcac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcac0) {
            ctx->pc = 0x1DCB18u;
            return;
        }
    }
    ctx->pc = 0x1DCAC8u;
    // 0x1dcac8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dcac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dcacc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dcaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dcad0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1dcad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dcad4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1dcad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dcad8: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DCAD8u;
    SET_GPR_U32(ctx, 31, 0x1DCAE0u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DCAD8u, 0x1DCAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCAE0u;
label_1dcae0:
    // 0x1dcae0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1dcae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1dcae4: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1dcae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcae8: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1dcae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcaec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dcaecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcaf0: 0x0  nop
    ctx->pc = 0x1dcaf0u;
    // NOP
    // 0x1dcaf4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCAF4u;
    {
        const bool branch_taken_0x1dcaf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcaf4) {
            ctx->pc = 0x1DCB18u;
            return;
        }
    }
    ctx->pc = 0x1DCAFCu;
    // 0x1dcafc: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1dcafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcb00: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1dcb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1dcb04: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1dcb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1dcb08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1dcb08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1dcb0c: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x1dcb0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1dcb10: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1dcb10u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1dcb14: 0x0  nop
    ctx->pc = 0x1dcb14u;
    // NOP
    ctx->pc = 0x1dcb18u;
}
