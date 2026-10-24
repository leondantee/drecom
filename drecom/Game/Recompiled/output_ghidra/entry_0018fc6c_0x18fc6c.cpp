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

// Function: entry_0018fc6c
// Address: 0x18fc6c - 0x18fcbc
void entry_0018fc6c_0x18fc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fc6c_0x18fc6c");
#endif

    ctx->pc = 0x18fc6cu;

    // 0x18fc6c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fc70: 0x94500118  lhu         $s0, 0x118($v0)
    ctx->pc = 0x18fc70u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18fc74: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x18fc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18fc78: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18fc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18fc7c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18FC7Cu;
    {
        const bool branch_taken_0x18fc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fc7c) {
            ctx->pc = 0x18FCC8u;
            return;
        }
    }
    ctx->pc = 0x18FC84u;
    // 0x18fc84: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x18fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x18fc88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18fc88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18fc8c: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x18fc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fc90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18fc90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18fc94: 0x0  nop
    ctx->pc = 0x18fc94u;
    // NOP
    // 0x18fc98: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18FC98u;
    {
        const bool branch_taken_0x18fc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18fc98) {
            ctx->pc = 0x18FCBCu;
            return;
        }
    }
    ctx->pc = 0x18FCA0u;
    // 0x18fca0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18fca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18fca4: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x18fca4u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fca8: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x18fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fcac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18fcacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18fcb0: 0x0  nop
    ctx->pc = 0x18fcb0u;
    // NOP
    // 0x18fcb4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x18FCB4u;
    {
        const bool branch_taken_0x18fcb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18fcb4) {
            ctx->pc = 0x18FCC8u;
            return;
        }
    }
    ctx->pc = 0x18FCBCu;
}
