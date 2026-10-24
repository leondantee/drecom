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

// Function: entry_0020b818
// Address: 0x20b818 - 0x20b870
void entry_0020b818_0x20b818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b818_0x20b818");
#endif

    ctx->pc = 0x20b818u;

    // 0x20b818: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b81c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x20b81cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20b820: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20b820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20b824: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20b824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20b828: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x20b828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x20b82c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x20B82Cu;
    {
        const bool branch_taken_0x20b82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b82c) {
            ctx->pc = 0x20B914u;
            return;
        }
    }
    ctx->pc = 0x20B834u;
    // 0x20b834: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b838: 0xc42194c0  lwc1        $f1, -0x6B40($at)
    ctx->pc = 0x20b838u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b83c: 0x3c124316  lui         $s2, 0x4316
    ctx->pc = 0x20b83cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17174 << 16));
    // 0x20b840: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x20b840u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b844: 0x0  nop
    ctx->pc = 0x20b844u;
    // NOP
    // 0x20b848: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b84c: 0x0  nop
    ctx->pc = 0x20b84cu;
    // NOP
    // 0x20b850: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20B850u;
    {
        const bool branch_taken_0x20b850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b850) {
            ctx->pc = 0x20B870u;
            return;
        }
    }
    ctx->pc = 0x20B858u;
    // 0x20b858: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x20b858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x20b85c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b860: 0x0  nop
    ctx->pc = 0x20b860u;
    // NOP
    // 0x20b864: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x20b864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x20b868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20B868u;
    {
        const bool branch_taken_0x20b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b868) {
            ctx->pc = 0x20B87Cu;
            return;
        }
    }
    ctx->pc = 0x20B870u;
}
