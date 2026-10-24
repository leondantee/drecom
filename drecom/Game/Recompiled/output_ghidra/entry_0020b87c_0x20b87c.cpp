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

// Function: entry_0020b87c
// Address: 0x20b87c - 0x20b8b8
void entry_0020b87c_0x20b87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b87c_0x20b87c");
#endif

    ctx->pc = 0x20b87cu;

    // 0x20b87c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b880: 0xc42194c0  lwc1        $f1, -0x6B40($at)
    ctx->pc = 0x20b880u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b884: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x20b884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x20b888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b88c: 0x0  nop
    ctx->pc = 0x20b88cu;
    // NOP
    // 0x20b890: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b894: 0x0  nop
    ctx->pc = 0x20b894u;
    // NOP
    // 0x20b898: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20B898u;
    {
        const bool branch_taken_0x20b898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b898) {
            ctx->pc = 0x20B8B8u;
            return;
        }
    }
    ctx->pc = 0x20B8A0u;
    // 0x20b8a0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x20b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x20b8a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b8a8: 0x0  nop
    ctx->pc = 0x20b8a8u;
    // NOP
    // 0x20b8ac: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x20b8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x20b8b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20B8B0u;
    {
        const bool branch_taken_0x20b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b8b0) {
            ctx->pc = 0x20B8C4u;
            return;
        }
    }
    ctx->pc = 0x20B8B8u;
}
