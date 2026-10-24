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

// Function: entry_0019a584
// Address: 0x19a584 - 0x19a5c0
void entry_0019a584_0x19a584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a584_0x19a584");
#endif

    ctx->pc = 0x19a584u;

    // 0x19a584: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a588: 0xc421d360  lwc1        $f1, -0x2CA0($at)
    ctx->pc = 0x19a588u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a58c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x19a590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a594: 0x0  nop
    ctx->pc = 0x19a594u;
    // NOP
    // 0x19a598: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a59c: 0x0  nop
    ctx->pc = 0x19a59cu;
    // NOP
    // 0x19a5a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19A5A0u;
    {
        const bool branch_taken_0x19a5a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a5a0) {
            ctx->pc = 0x19A5C0u;
            return;
        }
    }
    ctx->pc = 0x19A5A8u;
    // 0x19a5a8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x19a5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a5b0: 0x0  nop
    ctx->pc = 0x19a5b0u;
    // NOP
    // 0x19a5b4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x19a5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x19a5b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A5B8u;
    {
        const bool branch_taken_0x19a5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a5b8) {
            ctx->pc = 0x19A5CCu;
            return;
        }
    }
    ctx->pc = 0x19A5C0u;
}
