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

// Function: entry_0015f29c
// Address: 0x15f29c - 0x15f2d4
void entry_0015f29c_0x15f29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f29c_0x15f29c");
#endif

    ctx->pc = 0x15f29cu;

    // 0x15f29c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15f29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f2a0: 0x3c0244da  lui         $v0, 0x44DA
    ctx->pc = 0x15f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17626 << 16));
    // 0x15f2a4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x15f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x15f2a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f2ac: 0x0  nop
    ctx->pc = 0x15f2acu;
    // NOP
    // 0x15f2b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f2b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f2b4: 0x0  nop
    ctx->pc = 0x15f2b4u;
    // NOP
    // 0x15f2b8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15F2B8u;
    {
        const bool branch_taken_0x15f2b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f2b8) {
            ctx->pc = 0x15F2D4u;
            return;
        }
    }
    ctx->pc = 0x15F2C0u;
    // 0x15f2c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f2c4: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x15f2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f2cc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15F2CCu;
    {
        const bool branch_taken_0x15f2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f2cc) {
            ctx->pc = 0x15F348u;
            return;
        }
    }
    ctx->pc = 0x15F2D4u;
}
