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

// Function: entry_001b2858
// Address: 0x1b2858 - 0x1b28a0
void entry_001b2858_0x1b2858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2858_0x1b2858");
#endif

    ctx->pc = 0x1b2858u;

    // 0x1b2858: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x1b2858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x1b285c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b285cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b2860: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2864: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2868: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1b2868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b286c: 0x2aa10005  slti        $at, $s5, 0x5
    ctx->pc = 0x1b286cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b2870: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2870u;
    {
        const bool branch_taken_0x1b2870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2870) {
            ctx->pc = 0x1B28A0u;
            return;
        }
    }
    ctx->pc = 0x1B2878u;
    // 0x1b2878: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1b2878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b287c: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x1b287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2880: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b2880u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2884: 0x0  nop
    ctx->pc = 0x1b2884u;
    // NOP
    // 0x1b2888: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2888u;
    {
        const bool branch_taken_0x1b2888 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2888) {
            ctx->pc = 0x1B28A0u;
            return;
        }
    }
    ctx->pc = 0x1B2890u;
    // 0x1b2890: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x1b2890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2894: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b2894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b2898: 0xae1e0004  sw          $fp, 0x4($s0)
    ctx->pc = 0x1b2898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 30));
    // 0x1b289c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1b289cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    ctx->pc = 0x1b28a0u;
}
